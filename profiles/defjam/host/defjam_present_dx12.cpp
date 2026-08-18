#include "defjam_present_dx12.hpp"

#ifndef _WIN32

namespace defjam {
bool dx12_initialize(void *, std::uint32_t, std::uint32_t, std::string &error) noexcept {
    error = "Direct3D 12 is only available on Windows";
    return false;
}
bool dx12_present_rgba(std::span<const std::byte>, std::uint32_t, std::uint32_t,
                       std::string &error) noexcept {
    error = "Direct3D 12 is only available on Windows";
    return false;
}
bool dx12_resize(std::uint32_t, std::uint32_t, std::string &) noexcept { return false; }
void dx12_shutdown() noexcept {}
bool dx12_active() noexcept { return false; }
std::string dx12_adapter_name() { return {}; }
} // namespace defjam

#else

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>

#include <d3d12.h>
#include <d3dcompiler.h>
#include <dxgi1_6.h>
#include <wrl/client.h>

#include <algorithm>
#include <cstdio>
#include <cstring>

namespace defjam {
namespace {

using Microsoft::WRL::ComPtr;

constexpr std::uint32_t kFramesInFlight = 2u;

// A fullscreen triangle carrying the frame, with the letterbox applied as a
// scale on the clip-space position. Doing the fit here rather than by choosing
// a viewport keeps the arithmetic in one place and costs nothing.
constexpr char kShaderSource[] = R"(
cbuffer Params : register(b0) { float2 scale; float2 unused; };
struct VSOut { float4 position : SV_Position; float2 uv : TEXCOORD0; };

VSOut vs_main(uint id : SV_VertexID) {
    float2 uv = float2((id << 1) & 2, id & 2);
    VSOut output;
    output.position = float4((uv * float2(2.0f, -2.0f) + float2(-1.0f, 1.0f)) * scale, 0.0f, 1.0f);
    output.uv = uv;
    return output;
}

Texture2D source : register(t0);
SamplerState point_sampler : register(s0);

float4 ps_main(VSOut input) : SV_Target {
    return float4(source.Sample(point_sampler, input.uv).rgb, 1.0f);
}
)";

struct FrameResources {
    ComPtr<ID3D12CommandAllocator> allocator;
    ComPtr<ID3D12Resource> upload;
    ComPtr<ID3D12Resource> texture;
    std::uint32_t texture_width{};
    std::uint32_t texture_height{};
    std::uint64_t fence_value{};
};

struct Presenter {
    bool active{};
    std::string adapter;

    ComPtr<ID3D12Device> device;
    ComPtr<ID3D12CommandQueue> queue;
    ComPtr<IDXGISwapChain3> swapchain;
    ComPtr<ID3D12DescriptorHeap> rtv_heap;
    ComPtr<ID3D12DescriptorHeap> srv_heap;
    ComPtr<ID3D12Resource> backbuffer[kFramesInFlight];
    ComPtr<ID3D12RootSignature> root_signature;
    ComPtr<ID3D12PipelineState> pipeline;
    ComPtr<ID3D12GraphicsCommandList> command_list;
    ComPtr<ID3D12Fence> fence;
    HANDLE fence_event{nullptr};
    std::uint64_t fence_value{};

    FrameResources frames[kFramesInFlight];
    std::uint32_t rtv_size{};
    std::uint32_t srv_size{};
    std::uint32_t width{};
    std::uint32_t height{};
    bool tearing{};
};

Presenter g_presenter;

std::string describe(HRESULT hr, const char *what) {
    char buffer[160];
    std::snprintf(buffer, sizeof(buffer), "%s failed (0x%08lX)", what,
                  static_cast<unsigned long>(hr));
    return buffer;
}

// The first adapter that actually creates a device. Enumerating by preference
// puts the discrete part first on a laptop that has two of them.
bool pick_device(IDXGIFactory4 *factory, std::string &error) {
    ComPtr<IDXGIFactory6> by_preference;
    if (SUCCEEDED(factory->QueryInterface(IID_PPV_ARGS(&by_preference)))) {
        for (UINT index = 0;; ++index) {
            ComPtr<IDXGIAdapter1> adapter;
            if (by_preference->EnumAdapterByGpuPreference(
                    index, DXGI_GPU_PREFERENCE_HIGH_PERFORMANCE,
                    IID_PPV_ARGS(&adapter)) == DXGI_ERROR_NOT_FOUND) {
                break;
            }
            DXGI_ADAPTER_DESC1 description{};
            adapter->GetDesc1(&description);
            if ((description.Flags & DXGI_ADAPTER_FLAG_SOFTWARE) != 0) continue;
            if (SUCCEEDED(D3D12CreateDevice(adapter.Get(), D3D_FEATURE_LEVEL_11_0,
                                            IID_PPV_ARGS(&g_presenter.device)))) {
                const int length = WideCharToMultiByte(CP_UTF8, 0, description.Description, -1,
                                                       nullptr, 0, nullptr, nullptr);
                if (length > 1) {
                    std::string name(static_cast<std::size_t>(length - 1), '\0');
                    WideCharToMultiByte(CP_UTF8, 0, description.Description, -1, name.data(),
                                        length, nullptr, nullptr);
                    g_presenter.adapter = name;
                }
                return true;
            }
        }
    }
    const HRESULT hr =
        D3D12CreateDevice(nullptr, D3D_FEATURE_LEVEL_11_0, IID_PPV_ARGS(&g_presenter.device));
    if (FAILED(hr)) {
        error = describe(hr, "D3D12CreateDevice");
        return false;
    }
    g_presenter.adapter = "default adapter";
    return true;
}

bool create_backbuffer_views(std::string &error) {
    D3D12_CPU_DESCRIPTOR_HANDLE handle =
        g_presenter.rtv_heap->GetCPUDescriptorHandleForHeapStart();
    for (std::uint32_t i = 0; i < kFramesInFlight; ++i) {
        const HRESULT hr =
            g_presenter.swapchain->GetBuffer(i, IID_PPV_ARGS(&g_presenter.backbuffer[i]));
        if (FAILED(hr)) {
            error = describe(hr, "IDXGISwapChain::GetBuffer");
            return false;
        }
        g_presenter.device->CreateRenderTargetView(g_presenter.backbuffer[i].Get(), nullptr, handle);
        handle.ptr += g_presenter.rtv_size;
    }
    return true;
}

void wait_for_gpu() {
    if (!g_presenter.queue || !g_presenter.fence) return;
    const std::uint64_t value = ++g_presenter.fence_value;
    if (FAILED(g_presenter.queue->Signal(g_presenter.fence.Get(), value))) return;
    if (g_presenter.fence->GetCompletedValue() < value) {
        g_presenter.fence->SetEventOnCompletion(value, g_presenter.fence_event);
        WaitForSingleObject(g_presenter.fence_event, 2000);
    }
}

// One texture and one staging buffer per frame in flight, sized to the source.
// The source is 480x272 today and will be larger once the GE backend renders at
// an internal resolution, so this reallocates rather than assuming.
bool ensure_frame_texture(FrameResources &frame, std::uint32_t width, std::uint32_t height,
                          std::uint32_t slot, std::string &error) {
    if (frame.texture && frame.texture_width == width && frame.texture_height == height) return true;

    D3D12_HEAP_PROPERTIES texture_heap{};
    texture_heap.Type = D3D12_HEAP_TYPE_DEFAULT;
    D3D12_RESOURCE_DESC texture_desc{};
    texture_desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    texture_desc.Width = width;
    texture_desc.Height = height;
    texture_desc.DepthOrArraySize = 1;
    texture_desc.MipLevels = 1;
    texture_desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    texture_desc.SampleDesc.Count = 1;
    texture_desc.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
    HRESULT hr = g_presenter.device->CreateCommittedResource(
        &texture_heap, D3D12_HEAP_FLAG_NONE, &texture_desc,
        D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, nullptr, IID_PPV_ARGS(&frame.texture));
    if (FAILED(hr)) {
        error = describe(hr, "CreateCommittedResource for the source texture");
        return false;
    }

    // Upload rows are padded to the copy alignment, which is why the upload is
    // a row loop rather than one memcpy of the whole image.
    const std::uint32_t row_pitch = (width * 4u + D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u) &
                                    ~(D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u);
    D3D12_HEAP_PROPERTIES upload_heap{};
    upload_heap.Type = D3D12_HEAP_TYPE_UPLOAD;
    D3D12_RESOURCE_DESC upload_desc{};
    upload_desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    upload_desc.Width = static_cast<UINT64>(row_pitch) * height;
    upload_desc.Height = 1;
    upload_desc.DepthOrArraySize = 1;
    upload_desc.MipLevels = 1;
    upload_desc.Format = DXGI_FORMAT_UNKNOWN;
    upload_desc.SampleDesc.Count = 1;
    upload_desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    hr = g_presenter.device->CreateCommittedResource(&upload_heap, D3D12_HEAP_FLAG_NONE,
                                                     &upload_desc,
                                                     D3D12_RESOURCE_STATE_GENERIC_READ, nullptr,
                                                     IID_PPV_ARGS(&frame.upload));
    if (FAILED(hr)) {
        error = describe(hr, "CreateCommittedResource for the upload buffer");
        return false;
    }

    D3D12_SHADER_RESOURCE_VIEW_DESC view{};
    view.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    view.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    view.Shader4ComponentMapping = D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING;
    view.Texture2D.MipLevels = 1;
    D3D12_CPU_DESCRIPTOR_HANDLE handle =
        g_presenter.srv_heap->GetCPUDescriptorHandleForHeapStart();
    handle.ptr += static_cast<SIZE_T>(slot) * g_presenter.srv_size;
    g_presenter.device->CreateShaderResourceView(frame.texture.Get(), &view, handle);

    frame.texture_width = width;
    frame.texture_height = height;
    return true;
}

} // namespace

bool dx12_initialize(void *native_window, std::uint32_t width, std::uint32_t height,
                     std::string &error) noexcept {
    if (g_presenter.active) return true;
    if (native_window == nullptr) {
        error = "no window to present into";
        return false;
    }

    UINT factory_flags = 0;
#if defined(_DEBUG)
    // The debug layer is a development aid; its absence is not an error.
    ComPtr<ID3D12Debug> debug;
    if (SUCCEEDED(D3D12GetDebugInterface(IID_PPV_ARGS(&debug)))) {
        debug->EnableDebugLayer();
        factory_flags |= DXGI_CREATE_FACTORY_DEBUG;
    }
#endif

    ComPtr<IDXGIFactory4> factory;
    HRESULT hr = CreateDXGIFactory2(factory_flags, IID_PPV_ARGS(&factory));
    if (FAILED(hr)) {
        error = describe(hr, "CreateDXGIFactory2");
        return false;
    }
    if (!pick_device(factory.Get(), error)) return false;

    D3D12_COMMAND_QUEUE_DESC queue_desc{};
    queue_desc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
    hr = g_presenter.device->CreateCommandQueue(&queue_desc, IID_PPV_ARGS(&g_presenter.queue));
    if (FAILED(hr)) {
        error = describe(hr, "CreateCommandQueue");
        return false;
    }

    BOOL tearing = FALSE;
    ComPtr<IDXGIFactory5> factory5;
    if (SUCCEEDED(factory.As(&factory5))) {
        factory5->CheckFeatureSupport(DXGI_FEATURE_PRESENT_ALLOW_TEARING, &tearing,
                                      sizeof(tearing));
    }
    g_presenter.tearing = tearing != FALSE;

    DXGI_SWAP_CHAIN_DESC1 swap_desc{};
    swap_desc.Width = width;
    swap_desc.Height = height;
    swap_desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    swap_desc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    swap_desc.BufferCount = kFramesInFlight;
    swap_desc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
    swap_desc.SampleDesc.Count = 1;
    swap_desc.Flags = g_presenter.tearing ? DXGI_SWAP_CHAIN_FLAG_ALLOW_TEARING : 0u;

    ComPtr<IDXGISwapChain1> swapchain;
    hr = factory->CreateSwapChainForHwnd(g_presenter.queue.Get(), static_cast<HWND>(native_window),
                                         &swap_desc, nullptr, nullptr, &swapchain);
    if (FAILED(hr)) {
        error = describe(hr, "CreateSwapChainForHwnd");
        return false;
    }
    factory->MakeWindowAssociation(static_cast<HWND>(native_window), DXGI_MWA_NO_ALT_ENTER);
    if (FAILED(swapchain.As(&g_presenter.swapchain))) {
        error = "the swapchain does not implement IDXGISwapChain3";
        return false;
    }
    g_presenter.width = width;
    g_presenter.height = height;

    D3D12_DESCRIPTOR_HEAP_DESC rtv_desc{};
    rtv_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
    rtv_desc.NumDescriptors = kFramesInFlight;
    hr = g_presenter.device->CreateDescriptorHeap(&rtv_desc, IID_PPV_ARGS(&g_presenter.rtv_heap));
    if (FAILED(hr)) {
        error = describe(hr, "CreateDescriptorHeap for render targets");
        return false;
    }
    g_presenter.rtv_size =
        g_presenter.device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);

    D3D12_DESCRIPTOR_HEAP_DESC srv_desc{};
    srv_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
    srv_desc.NumDescriptors = kFramesInFlight;
    srv_desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
    hr = g_presenter.device->CreateDescriptorHeap(&srv_desc, IID_PPV_ARGS(&g_presenter.srv_heap));
    if (FAILED(hr)) {
        error = describe(hr, "CreateDescriptorHeap for shader resources");
        return false;
    }
    g_presenter.srv_size = g_presenter.device->GetDescriptorHandleIncrementSize(
        D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV);

    if (!create_backbuffer_views(error)) return false;

    D3D12_DESCRIPTOR_RANGE range{};
    range.RangeType = D3D12_DESCRIPTOR_RANGE_TYPE_SRV;
    range.NumDescriptors = 1;
    D3D12_ROOT_PARAMETER parameters[2]{};
    parameters[0].ParameterType = D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS;
    parameters[0].Constants.Num32BitValues = 4;
    parameters[0].ShaderVisibility = D3D12_SHADER_VISIBILITY_VERTEX;
    parameters[1].ParameterType = D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE;
    parameters[1].DescriptorTable.NumDescriptorRanges = 1;
    parameters[1].DescriptorTable.pDescriptorRanges = &range;
    parameters[1].ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL;

    // Point sampling: the source is a 480x272 image of a 480x272 display, and
    // smoothing it on the way to the window would blur text the title drew
    // pixel-exact.
    D3D12_STATIC_SAMPLER_DESC sampler{};
    sampler.Filter = D3D12_FILTER_MIN_MAG_MIP_POINT;
    sampler.AddressU = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
    sampler.AddressV = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
    sampler.AddressW = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
    sampler.ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL;

    D3D12_ROOT_SIGNATURE_DESC signature_desc{};
    signature_desc.NumParameters = 2;
    signature_desc.pParameters = parameters;
    signature_desc.NumStaticSamplers = 1;
    signature_desc.pStaticSamplers = &sampler;
    signature_desc.Flags = D3D12_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT;

    ComPtr<ID3DBlob> signature;
    ComPtr<ID3DBlob> signature_error;
    hr = D3D12SerializeRootSignature(&signature_desc, D3D_ROOT_SIGNATURE_VERSION_1, &signature,
                                     &signature_error);
    if (FAILED(hr)) {
        error = describe(hr, "D3D12SerializeRootSignature");
        return false;
    }
    hr = g_presenter.device->CreateRootSignature(0, signature->GetBufferPointer(),
                                                 signature->GetBufferSize(),
                                                 IID_PPV_ARGS(&g_presenter.root_signature));
    if (FAILED(hr)) {
        error = describe(hr, "CreateRootSignature");
        return false;
    }

    ComPtr<ID3DBlob> vertex_shader;
    ComPtr<ID3DBlob> pixel_shader;
    ComPtr<ID3DBlob> compile_error;
    hr = D3DCompile(kShaderSource, sizeof(kShaderSource) - 1, "present", nullptr, nullptr, "vs_main",
                    "vs_5_0", 0, 0, &vertex_shader, &compile_error);
    if (FAILED(hr)) {
        error = "the presentation vertex shader did not compile";
        if (compile_error) {
            error += std::string(": ") + static_cast<const char *>(compile_error->GetBufferPointer());
        }
        return false;
    }
    hr = D3DCompile(kShaderSource, sizeof(kShaderSource) - 1, "present", nullptr, nullptr, "ps_main",
                    "ps_5_0", 0, 0, &pixel_shader, &compile_error);
    if (FAILED(hr)) {
        error = "the presentation pixel shader did not compile";
        if (compile_error) {
            error += std::string(": ") + static_cast<const char *>(compile_error->GetBufferPointer());
        }
        return false;
    }

    D3D12_GRAPHICS_PIPELINE_STATE_DESC pipeline_desc{};
    pipeline_desc.pRootSignature = g_presenter.root_signature.Get();
    pipeline_desc.VS = {vertex_shader->GetBufferPointer(), vertex_shader->GetBufferSize()};
    pipeline_desc.PS = {pixel_shader->GetBufferPointer(), pixel_shader->GetBufferSize()};
    pipeline_desc.RasterizerState.FillMode = D3D12_FILL_MODE_SOLID;
    pipeline_desc.RasterizerState.CullMode = D3D12_CULL_MODE_NONE;
    pipeline_desc.RasterizerState.DepthClipEnable = TRUE;
    pipeline_desc.BlendState.RenderTarget[0].RenderTargetWriteMask = D3D12_COLOR_WRITE_ENABLE_ALL;
    pipeline_desc.SampleMask = UINT_MAX;
    pipeline_desc.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
    pipeline_desc.NumRenderTargets = 1;
    pipeline_desc.RTVFormats[0] = DXGI_FORMAT_R8G8B8A8_UNORM;
    pipeline_desc.SampleDesc.Count = 1;
    hr = g_presenter.device->CreateGraphicsPipelineState(&pipeline_desc,
                                                         IID_PPV_ARGS(&g_presenter.pipeline));
    if (FAILED(hr)) {
        error = describe(hr, "CreateGraphicsPipelineState");
        return false;
    }

    for (std::uint32_t i = 0; i < kFramesInFlight; ++i) {
        hr = g_presenter.device->CreateCommandAllocator(
            D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&g_presenter.frames[i].allocator));
        if (FAILED(hr)) {
            error = describe(hr, "CreateCommandAllocator");
            return false;
        }
    }
    hr = g_presenter.device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT,
                                               g_presenter.frames[0].allocator.Get(), nullptr,
                                               IID_PPV_ARGS(&g_presenter.command_list));
    if (FAILED(hr)) {
        error = describe(hr, "CreateCommandList");
        return false;
    }
    g_presenter.command_list->Close();

    hr = g_presenter.device->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&g_presenter.fence));
    if (FAILED(hr)) {
        error = describe(hr, "CreateFence");
        return false;
    }
    g_presenter.fence_event = CreateEventW(nullptr, FALSE, FALSE, nullptr);
    if (g_presenter.fence_event == nullptr) {
        error = "CreateEvent for the presentation fence failed";
        return false;
    }

    g_presenter.active = true;
    return true;
}

bool dx12_present_rgba(std::span<const std::byte> rgba, std::uint32_t width, std::uint32_t height,
                       std::string &error) noexcept {
    if (!g_presenter.active) {
        error = "the presenter is not initialized";
        return false;
    }
    if (width == 0u || height == 0u) {
        error = "an empty frame was handed to the presenter";
        return false;
    }
    if (rgba.size() < static_cast<std::size_t>(width) * height * 4u) {
        error = "the frame is smaller than its declared size";
        return false;
    }

    const std::uint32_t index = g_presenter.swapchain->GetCurrentBackBufferIndex();
    FrameResources &frame = g_presenter.frames[index];

    // Wait for the frame that last used these resources before overwriting them.
    if (frame.fence_value != 0u && g_presenter.fence->GetCompletedValue() < frame.fence_value) {
        g_presenter.fence->SetEventOnCompletion(frame.fence_value, g_presenter.fence_event);
        WaitForSingleObject(g_presenter.fence_event, 2000);
    }
    if (!ensure_frame_texture(frame, width, height, index, error)) return false;

    const std::uint32_t row_pitch = (width * 4u + D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u) &
                                    ~(D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u);
    void *mapped = nullptr;
    D3D12_RANGE nothing_read{0, 0};
    HRESULT hr = frame.upload->Map(0, &nothing_read, &mapped);
    if (FAILED(hr)) {
        error = describe(hr, "Map of the upload buffer");
        return false;
    }
    for (std::uint32_t y = 0; y < height; ++y) {
        std::memcpy(static_cast<std::byte *>(mapped) + static_cast<std::size_t>(y) * row_pitch,
                    rgba.data() + static_cast<std::size_t>(y) * width * 4u, width * 4u);
    }
    frame.upload->Unmap(0, nullptr);

    frame.allocator->Reset();
    g_presenter.command_list->Reset(frame.allocator.Get(), g_presenter.pipeline.Get());

    D3D12_RESOURCE_BARRIER to_copy{};
    to_copy.Transition.pResource = frame.texture.Get();
    to_copy.Transition.StateBefore = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;
    to_copy.Transition.StateAfter = D3D12_RESOURCE_STATE_COPY_DEST;
    to_copy.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    g_presenter.command_list->ResourceBarrier(1, &to_copy);

    D3D12_TEXTURE_COPY_LOCATION destination{};
    destination.pResource = frame.texture.Get();
    destination.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    destination.SubresourceIndex = 0;
    D3D12_TEXTURE_COPY_LOCATION source{};
    source.pResource = frame.upload.Get();
    source.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
    source.PlacedFootprint.Footprint.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    source.PlacedFootprint.Footprint.Width = width;
    source.PlacedFootprint.Footprint.Height = height;
    source.PlacedFootprint.Footprint.Depth = 1;
    source.PlacedFootprint.Footprint.RowPitch = row_pitch;
    g_presenter.command_list->CopyTextureRegion(&destination, 0, 0, 0, &source, nullptr);

    D3D12_RESOURCE_BARRIER to_shader = to_copy;
    to_shader.Transition.StateBefore = D3D12_RESOURCE_STATE_COPY_DEST;
    to_shader.Transition.StateAfter = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;
    D3D12_RESOURCE_BARRIER to_target{};
    to_target.Transition.pResource = g_presenter.backbuffer[index].Get();
    to_target.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
    to_target.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;
    to_target.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    const D3D12_RESOURCE_BARRIER before_draw[2] = {to_shader, to_target};
    g_presenter.command_list->ResourceBarrier(2, before_draw);

    D3D12_CPU_DESCRIPTOR_HANDLE rtv = g_presenter.rtv_heap->GetCPUDescriptorHandleForHeapStart();
    rtv.ptr += static_cast<SIZE_T>(index) * g_presenter.rtv_size;
    const float black[4] = {0.0f, 0.0f, 0.0f, 1.0f};
    g_presenter.command_list->OMSetRenderTargets(1, &rtv, FALSE, nullptr);
    g_presenter.command_list->ClearRenderTargetView(rtv, black, 0, nullptr);

    D3D12_VIEWPORT viewport{0.0f, 0.0f, static_cast<float>(g_presenter.width),
                            static_cast<float>(g_presenter.height), 0.0f, 1.0f};
    D3D12_RECT scissor{0, 0, static_cast<LONG>(g_presenter.width),
                       static_cast<LONG>(g_presenter.height)};
    g_presenter.command_list->RSSetViewports(1, &viewport);
    g_presenter.command_list->RSSetScissorRects(1, &scissor);

    // Letterbox: fit the source inside the window without changing its shape.
    // The PSP display is not the same aspect as most windows, and stretching it
    // is the one thing that would make a faithful frame look wrong for a reason
    // that has nothing to do with the game.
    const float window_aspect =
        static_cast<float>(g_presenter.width) / static_cast<float>(g_presenter.height);
    const float source_aspect = static_cast<float>(width) / static_cast<float>(height);
    float scale[4] = {1.0f, 1.0f, 0.0f, 0.0f};
    if (window_aspect > source_aspect) {
        scale[0] = source_aspect / window_aspect;
    } else {
        scale[1] = window_aspect / source_aspect;
    }

    ID3D12DescriptorHeap *heaps[] = {g_presenter.srv_heap.Get()};
    g_presenter.command_list->SetDescriptorHeaps(1, heaps);
    g_presenter.command_list->SetGraphicsRootSignature(g_presenter.root_signature.Get());
    g_presenter.command_list->SetGraphicsRoot32BitConstants(0, 4, scale, 0);
    D3D12_GPU_DESCRIPTOR_HANDLE srv = g_presenter.srv_heap->GetGPUDescriptorHandleForHeapStart();
    srv.ptr += static_cast<UINT64>(index) * g_presenter.srv_size;
    g_presenter.command_list->SetGraphicsRootDescriptorTable(1, srv);
    g_presenter.command_list->IASetPrimitiveTopology(D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    g_presenter.command_list->DrawInstanced(3, 1, 0, 0);

    D3D12_RESOURCE_BARRIER to_present = to_target;
    to_present.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
    to_present.Transition.StateAfter = D3D12_RESOURCE_STATE_PRESENT;
    g_presenter.command_list->ResourceBarrier(1, &to_present);
    g_presenter.command_list->Close();

    ID3D12CommandList *lists[] = {g_presenter.command_list.Get()};
    g_presenter.queue->ExecuteCommandLists(1, lists);

    const UINT flags = g_presenter.tearing ? DXGI_PRESENT_ALLOW_TEARING : 0u;
    hr = g_presenter.swapchain->Present(0, flags);
    if (FAILED(hr)) {
        error = describe(hr, "IDXGISwapChain::Present");
        return false;
    }

    frame.fence_value = ++g_presenter.fence_value;
    g_presenter.queue->Signal(g_presenter.fence.Get(), frame.fence_value);
    return true;
}

bool dx12_resize(std::uint32_t width, std::uint32_t height, std::string &error) noexcept {
    if (!g_presenter.active) return false;
    if (width == 0u || height == 0u) return true;
    if (width == g_presenter.width && height == g_presenter.height) return true;

    wait_for_gpu();
    for (auto &buffer : g_presenter.backbuffer) buffer.Reset();
    for (auto &frame : g_presenter.frames) frame.fence_value = 0u;
    const UINT flags = g_presenter.tearing ? DXGI_SWAP_CHAIN_FLAG_ALLOW_TEARING : 0u;
    const HRESULT hr = g_presenter.swapchain->ResizeBuffers(kFramesInFlight, width, height,
                                                            DXGI_FORMAT_R8G8B8A8_UNORM, flags);
    if (FAILED(hr)) {
        error = describe(hr, "IDXGISwapChain::ResizeBuffers");
        return false;
    }
    g_presenter.width = width;
    g_presenter.height = height;
    return create_backbuffer_views(error);
}

void dx12_shutdown() noexcept {
    if (!g_presenter.active) return;
    wait_for_gpu();
    if (g_presenter.fence_event != nullptr) {
        CloseHandle(g_presenter.fence_event);
        g_presenter.fence_event = nullptr;
    }
    g_presenter = Presenter{};
}

bool dx12_active() noexcept { return g_presenter.active; }
std::string dx12_adapter_name() { return g_presenter.adapter; }

} // namespace defjam

#endif
