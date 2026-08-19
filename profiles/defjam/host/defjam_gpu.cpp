#include "defjam_gpu.hpp"

#include "defjam_ge.hpp"
#include "defjam_profile.hpp"
#include "psprecomp/common.hpp"

#include <cstdlib>
#include <iostream>
#include <sstream>

#ifndef _WIN32

namespace defjam {
bool gpu_enabled() { return false; }
bool gpu_initialize(std::string &error) {
    error = "the graphics backend is only available on Windows";
    return false;
}
void gpu_set_target(std::uint32_t, std::uint32_t, std::uint32_t, std::uint32_t) {}
bool gpu_draw(psprecomp::Runtime &, std::uint32_t, const std::vector<Vertex> &,
              const VertexFormat &, const TextureState &, bool) {
    return false;
}
void gpu_resolve(psprecomp::Runtime &) {}
GpuStats gpu_stats() { return {}; }
std::string gpu_report() { return {}; }
void gpu_shutdown() {}
} // namespace defjam

#else

#define WIN32_LEAN_AND_MEAN
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>

#include <d3d12.h>
#include <d3dcompiler.h>
#include <dxgi1_6.h>
#include <wrl/client.h>

#include <algorithm>
#include <chrono>
#include <cstring>
#include <map>

namespace defjam {
namespace {

using Microsoft::WRL::ComPtr;

// Screen space in, pixels out. The position arriving here has already been
// through the transform, so the only work left is the mapping onto the clip
// cube and, for a textured draw, the sample.
constexpr char kShaderSource[] = R"(
cbuffer Frame : register(b0) { float2 target_size; uint textured; uint modulate;
                               float2 texture_size; };

struct VSIn {
    float3 position : POSITION;
    float4 color : COLOR;
    float2 uv : TEXCOORD0;
};
struct VSOut {
    float4 position : SV_Position;
    float4 color : COLOR;
    float2 uv : TEXCOORD0;
};

VSOut vs_main(VSIn input) {
    VSOut output;
    // No half-pixel offset here, and it is not an oversight.
    //
    // The reference rasteriser evaluates attributes at the pixel corner and a
    // card evaluates them at the centre, so shifting the geometry half a pixel
    // looks like the obvious way to make the two agree. Measured, it takes the
    // disagreement from 1,266 pixels to 82,446 - sixty-five times worse. The
    // vertices already arrive in the convention this backend wants; the residue
    // is texture interpolation, which the card does with perspective correction
    // and the reference does affinely.
    output.position = float4(input.position.x / target_size.x * 2.0f - 1.0f,
                             1.0f - input.position.y / target_size.y * 2.0f,
                             saturate(input.position.z / 65535.0f), 1.0f);
    output.color = input.color;
    output.uv = input.uv;
    return output;
}

Texture2D source : register(t0);
SamplerState point_sampler : register(s0);

float4 ps_main(VSOut input) : SV_Target {
    if (textured == 0u) return input.color;
    // The texel index is computed the way the reference computes it, rather
    // than handed to a sampler and hoped to agree.
    //
    // This did not fix anything measurable. It was written to explain 1,266
    // pixels where the two backends disagree, on the theory that normalising by
    // the texture size and letting the sampler multiply it back drifts across a
    // texel boundary; the count came back at 1,266, unchanged to the pixel. It
    // stays because agreeing by construction is worth more than agreeing by
    // luck, not because it closed the gap. The gap is still open, and the
    // remaining suspect is the sprite path, which walks its span with a
    // parameter of its own rather than interpolating across two triangles.
    int2 size = int2(texture_size);
    // Truncate toward zero, then bring a negative back into range, which is
    // what the reference does. The doubled modulo keeps it branchless and
    // avoids select(), which needs a shader model this does not compile as.
    int2 index = ((int2(input.uv) % size) + size) % size;
    float4 texel = source.Load(int3(index, 0));
    // Same rule the software rasteriser applies: the texture function register
    // decides whether the vertex colour tints the texel or is thrown away.
    if (modulate != 0u) texel *= input.color;
    return texel;
}
)";

struct GpuVertex {
    float x, y, z;
    std::uint32_t color;   // as the guest holds it: bytes run R, G, B, A
    float u, v;
};

// What a primitive needs the pipeline to be. Small on purpose: two states that
// change the pipeline and one that changes the descriptor.
// How a pixel joins what is already in the target.
//
// The software rasteriser reads the guest's blend enable and its one non-zero
// blend function and does three different things; this backend used to do one,
// mixing every pixel source-over whether the title asked for it or not. That is
// the behaviour that painted the main menu's left half black, so leaving it here
// would mean the two paths disagree about the picture, and the software one is
// the reference.
enum class BlendMode : std::uint8_t {
    Write,      // a clear, which overwrites
    SourceOver, // everything else
};

struct PipelineKey {
    bool textured{};
    bool modulate{};
    BlendMode blend{BlendMode::Write};
    bool depth_test{};
    bool depth_write{};
    std::uint8_t compare{};

    [[nodiscard]] bool operator<(const PipelineKey &other) const {
        return std::tie(textured, modulate, blend, depth_test, depth_write, compare) <
               std::tie(other.textured, other.modulate, other.blend, other.depth_test,
                        other.depth_write, other.compare);
    }
};

struct CachedTexture {
    ComPtr<ID3D12Resource> resource;
    std::uint32_t slot{};
};

// The colour, depth and readback buffers for one guest frame buffer.
//
// This title flips between two of them, so the address changes every frame and
// building these fresh each time meant creating three resources sixty times a
// second and throwing away three more. They are kept instead, and switching
// between them costs two descriptor writes.
struct TargetResources {
    ComPtr<ID3D12Resource> colour;
    ComPtr<ID3D12Resource> depth;
    ComPtr<ID3D12Resource> readback;
    std::uint32_t width{};
    std::uint32_t height{};
};

constexpr std::uint32_t kMaxVertices = 1u << 20u;
constexpr std::uint32_t kTextureSlots = 1024u;
constexpr DXGI_FORMAT kTargetFormat = DXGI_FORMAT_R8G8B8A8_UNORM;
constexpr DXGI_FORMAT kDepthFormat = DXGI_FORMAT_D16_UNORM;

struct Backend {
    bool active{};
    bool failed{};
    std::string adapter;

    ComPtr<ID3D12Device> device;
    ComPtr<ID3D12CommandQueue> queue;
    ComPtr<ID3D12CommandAllocator> allocator;
    ComPtr<ID3D12GraphicsCommandList> list;
    ComPtr<ID3D12Fence> fence;
    HANDLE fence_event{nullptr};
    std::uint64_t fence_value{};
    bool recording{};

    ComPtr<ID3D12RootSignature> root_signature;
    ComPtr<ID3DBlob> vertex_shader;
    ComPtr<ID3DBlob> pixel_shader;
    std::map<PipelineKey, ComPtr<ID3D12PipelineState>> pipelines;

    ComPtr<ID3D12DescriptorHeap> rtv_heap;
    ComPtr<ID3D12DescriptorHeap> dsv_heap;
    ComPtr<ID3D12DescriptorHeap> srv_heap;
    std::uint32_t srv_size{};
    std::uint32_t next_texture_slot{};
    std::map<std::uint64_t, CachedTexture> textures;
    std::uint32_t last_texture_address{};
    std::uint32_t last_clut_address{};
    std::uint64_t last_texture_key{};

    std::map<std::uint64_t, TargetResources> targets;
    ComPtr<ID3D12Resource> target;
    ComPtr<ID3D12Resource> depth;
    ComPtr<ID3D12Resource> readback;
    std::uint32_t target_width{};
    std::uint32_t target_height{};
    std::uint32_t target_address{};
    std::uint32_t target_stride{};
    bool target_cleared{};

    ComPtr<ID3D12Resource> vertex_buffer;
    GpuVertex *vertices{};
    std::uint32_t vertex_count{};

    PipelineKey batch_key{};
    std::uint32_t batch_start{};
    std::uint32_t batch_texture_slot{};
    // The size of the texture the open batch samples, so the shader can index
    // it in texels the way the reference rasteriser does.
    std::uint32_t batch_texture_width{1u};
    std::uint32_t batch_texture_height{1u};
    bool batch_open{};

    GpuStats stats;
};

Backend g_gpu;

std::string describe(HRESULT hr, const char *what) {
    char buffer[160];
    std::snprintf(buffer, sizeof(buffer), "%s failed (0x%08lX)", what,
                  static_cast<unsigned long>(hr));
    return buffer;
}

// The PSP compare codes, in the order the depth test register states them.
D3D12_COMPARISON_FUNC comparison(std::uint8_t code) {
    switch (code & 7u) {
        case 0u: return D3D12_COMPARISON_FUNC_NEVER;
        case 1u: return D3D12_COMPARISON_FUNC_ALWAYS;
        case 2u: return D3D12_COMPARISON_FUNC_EQUAL;
        case 3u: return D3D12_COMPARISON_FUNC_NOT_EQUAL;
        case 4u: return D3D12_COMPARISON_FUNC_LESS;
        case 5u: return D3D12_COMPARISON_FUNC_LESS_EQUAL;
        case 6u: return D3D12_COMPARISON_FUNC_GREATER;
        default: return D3D12_COMPARISON_FUNC_GREATER_EQUAL;
    }
}

ID3D12PipelineState *pipeline_for(const PipelineKey &key) {
    const auto found = g_gpu.pipelines.find(key);
    if (found != g_gpu.pipelines.end()) return found->second.Get();

    D3D12_INPUT_ELEMENT_DESC layout[] = {
        {"POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0},
        {"COLOR", 0, DXGI_FORMAT_R8G8B8A8_UNORM, 0, 12, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 16, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0},
    };

    D3D12_GRAPHICS_PIPELINE_STATE_DESC desc{};
    desc.pRootSignature = g_gpu.root_signature.Get();
    desc.VS = {g_gpu.vertex_shader->GetBufferPointer(), g_gpu.vertex_shader->GetBufferSize()};
    desc.PS = {g_gpu.pixel_shader->GetBufferPointer(), g_gpu.pixel_shader->GetBufferSize()};
    desc.InputLayout = {layout, 3u};
    desc.RasterizerState.FillMode = D3D12_FILL_MODE_SOLID;
    // The transform already decides what faces the viewer, and the software
    // rasteriser culls nothing, so neither does this.
    desc.RasterizerState.CullMode = D3D12_CULL_MODE_NONE;
    desc.RasterizerState.DepthClipEnable = FALSE;

    auto &blend = desc.BlendState.RenderTarget[0];
    blend.RenderTargetWriteMask = D3D12_COLOR_WRITE_ENABLE_ALL;
    // Source over destination, which is what the software path does. Clear mode
    // writes straight through, and arrives here with blending off.
    blend.BlendEnable = key.blend == BlendMode::Write ? FALSE : TRUE;
    blend.SrcBlend = D3D12_BLEND_SRC_ALPHA;
    blend.DestBlend = D3D12_BLEND_INV_SRC_ALPHA;
    blend.BlendOp = D3D12_BLEND_OP_ADD;
    blend.SrcBlendAlpha = D3D12_BLEND_ONE;
    blend.DestBlendAlpha = D3D12_BLEND_ZERO;
    blend.BlendOpAlpha = D3D12_BLEND_OP_ADD;

    desc.DepthStencilState.DepthEnable = key.depth_test ? TRUE : FALSE;
    desc.DepthStencilState.DepthWriteMask =
        key.depth_write ? D3D12_DEPTH_WRITE_MASK_ALL : D3D12_DEPTH_WRITE_MASK_ZERO;
    desc.DepthStencilState.DepthFunc = comparison(key.compare);
    desc.DSVFormat = kDepthFormat;

    desc.SampleMask = UINT_MAX;
    desc.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
    desc.NumRenderTargets = 1;
    desc.RTVFormats[0] = kTargetFormat;
    desc.SampleDesc.Count = 1;

    ComPtr<ID3D12PipelineState> state;
    if (FAILED(g_gpu.device->CreateGraphicsPipelineState(&desc, IID_PPV_ARGS(&state)))) return nullptr;
    auto *raw = state.Get();
    g_gpu.pipelines.emplace(key, std::move(state));
    return raw;
}

void wait_for_gpu() {
    if (!g_gpu.queue || !g_gpu.fence) return;
    const std::uint64_t value = ++g_gpu.fence_value;
    if (FAILED(g_gpu.queue->Signal(g_gpu.fence.Get(), value))) return;
    if (g_gpu.fence->GetCompletedValue() < value) {
        g_gpu.fence->SetEventOnCompletion(value, g_gpu.fence_event);
        WaitForSingleObject(g_gpu.fence_event, 5000);
    }
}

void begin_recording() {
    if (g_gpu.recording) return;
    g_gpu.allocator->Reset();
    g_gpu.list->Reset(g_gpu.allocator.Get(), nullptr);

    D3D12_VIEWPORT viewport{0.0f, 0.0f, static_cast<float>(g_gpu.target_width),
                            static_cast<float>(g_gpu.target_height), 0.0f, 1.0f};
    D3D12_RECT scissor{0, 0, static_cast<LONG>(g_gpu.target_width),
                       static_cast<LONG>(g_gpu.target_height)};
    g_gpu.list->RSSetViewports(1, &viewport);
    g_gpu.list->RSSetScissorRects(1, &scissor);

    const D3D12_CPU_DESCRIPTOR_HANDLE rtv = g_gpu.rtv_heap->GetCPUDescriptorHandleForHeapStart();
    const D3D12_CPU_DESCRIPTOR_HANDLE dsv = g_gpu.dsv_heap->GetCPUDescriptorHandleForHeapStart();
    g_gpu.list->OMSetRenderTargets(1, &rtv, FALSE, &dsv);
    if (!g_gpu.target_cleared) {
        // The depth buffer starts where the software path starts it, at zero,
        // so a GEQUAL test lets the first draw through.
        g_gpu.list->ClearDepthStencilView(dsv, D3D12_CLEAR_FLAG_DEPTH, 0.0f, 0u, 0u, nullptr);
        g_gpu.target_cleared = true;
    }

    ID3D12DescriptorHeap *heaps[] = {g_gpu.srv_heap.Get()};
    g_gpu.list->SetDescriptorHeaps(1, heaps);
    g_gpu.list->SetGraphicsRootSignature(g_gpu.root_signature.Get());
    g_gpu.list->IASetPrimitiveTopology(D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

    D3D12_VERTEX_BUFFER_VIEW view{};
    view.BufferLocation = g_gpu.vertex_buffer->GetGPUVirtualAddress();
    view.SizeInBytes = kMaxVertices * sizeof(GpuVertex);
    view.StrideInBytes = sizeof(GpuVertex);
    g_gpu.list->IASetVertexBuffers(0, 1, &view);

    g_gpu.recording = true;
}

void flush_batch() {
    if (!g_gpu.batch_open || g_gpu.vertex_count == g_gpu.batch_start) {
        g_gpu.batch_open = false;
        return;
    }
    begin_recording();
    ID3D12PipelineState *pipeline = pipeline_for(g_gpu.batch_key);
    if (pipeline != nullptr) {
        g_gpu.list->SetPipelineState(pipeline);
        const float constants[4] = {static_cast<float>(g_gpu.target_width),
                                    static_cast<float>(g_gpu.target_height), 0.0f, 0.0f};
        g_gpu.list->SetGraphicsRoot32BitConstants(0, 2, constants, 0);
        const std::uint32_t textured = g_gpu.batch_key.textured ? 1u : 0u;
        g_gpu.list->SetGraphicsRoot32BitConstants(0, 1, &textured, 2);
        const std::uint32_t modulate = g_gpu.batch_key.modulate ? 1u : 0u;
        g_gpu.list->SetGraphicsRoot32BitConstants(0, 1, &modulate, 3);
        const float size[2] = {static_cast<float>(g_gpu.batch_texture_width),
                               static_cast<float>(g_gpu.batch_texture_height)};
        g_gpu.list->SetGraphicsRoot32BitConstants(0, 2, size, 4);
        if (g_gpu.batch_key.textured) {
            D3D12_GPU_DESCRIPTOR_HANDLE srv = g_gpu.srv_heap->GetGPUDescriptorHandleForHeapStart();
            srv.ptr += static_cast<UINT64>(g_gpu.batch_texture_slot) * g_gpu.srv_size;
            g_gpu.list->SetGraphicsRootDescriptorTable(1, srv);
        }
        g_gpu.list->DrawInstanced(g_gpu.vertex_count - g_gpu.batch_start, 1, g_gpu.batch_start, 0);
        ++g_gpu.stats.batches_flushed;
    }
    g_gpu.batch_open = false;
}

void submit() {
    flush_batch();
    if (!g_gpu.recording) return;
    g_gpu.list->Close();
    ID3D12CommandList *lists[] = {g_gpu.list.Get()};
    g_gpu.queue->ExecuteCommandLists(1, lists);
    wait_for_gpu();
    g_gpu.recording = false;
    g_gpu.vertex_count = 0u;
}

// One texture per distinct guest state. The key is what the state names rather
// than the decoded bytes, so a texture the title keeps re-binding is uploaded
// once; a title that edits texture memory under the same address would need
// this to watch the memory, which this one has not been observed doing.
bool ensure_texture(psprecomp::Runtime &runtime, const TextureState &texture,
                    std::uint32_t &slot) {
    // Keyed on what the texture is, not on where it lives.
    //
    // Keying on the address alone was wrong, and the comment that used to sit
    // here said as much while assuming this title would not do it: it loads the
    // next character's textures over the last one's memory, so a cache hit
    // handed the new model the old model's skin. The software rasteriser never
    // showed this because it decodes afresh on every draw.
    //
    // The bytes are sampled rather than read whole - a few hundred points
    // spread across the image and the whole palette, which is small and is what
    // a recoloured variant changes. Sampling can in principle miss an edit, and
    // that is a trade against decoding megabytes on every bind; nothing seen so
    // far slips through it.
    // Almost every bind repeats the one before it - a run showed 981,857 binds
    // of 16 textures - so the sampled hash is computed once per texture per
    // frame and remembered. Costing it on every bind put five seconds on a
    // forty second segment for an answer that had not changed.
    if (texture.address == g_gpu.last_texture_address &&
        texture.clut_address == g_gpu.last_clut_address) {
        const auto quick = g_gpu.textures.find(g_gpu.last_texture_key);
        if (quick != g_gpu.textures.end()) {
            slot = quick->second.slot;
            ++g_gpu.stats.texture_cache_hits;
            return true;
        }
    }

    std::uint64_t key = 0xcbf29ce484222325ull;
    const auto mix = [&key](std::uint64_t value) {
        key = (key ^ value) * 0x100000001b3ull;
    };
    mix(texture.address);
    mix(texture.clut_address);
    mix(texture.width);
    mix(texture.height);
    mix(static_cast<std::uint64_t>(texture.format));
    mix(texture.stride);
    mix(texture.swizzled ? 1u : 0u);

    const std::uint32_t span = texture.stride * texture.height;
    if (span != 0u && runtime.memory().contains(texture.address, span)) {
        constexpr std::uint32_t kSamples = 256u;
        const std::uint32_t step = std::max(4u, (span / kSamples) & ~3u);
        for (std::uint32_t offset = 0u; offset + 4u <= span; offset += step) {
            mix(runtime.memory().load32(texture.address + offset));
        }
    }
    if (texture_format_is_paletted(texture.format) && texture.clut_address != 0u &&
        runtime.memory().contains(texture.clut_address, 1024u)) {
        for (std::uint32_t offset = 0u; offset < 1024u; offset += 16u) {
            mix(runtime.memory().load32(texture.clut_address + offset));
        }
    }
    g_gpu.last_texture_address = texture.address;
    g_gpu.last_clut_address = texture.clut_address;
    g_gpu.last_texture_key = key;

    const auto found = g_gpu.textures.find(key);
    if (found != g_gpu.textures.end()) {
        slot = found->second.slot;
        ++g_gpu.stats.texture_cache_hits;
        return true;
    }
    if (g_gpu.next_texture_slot >= kTextureSlots) return false;

    std::vector<std::uint32_t> texels;
    std::string error;
    if (!decode_texture(runtime, texture, texels, error)) return false;
    if (texels.empty()) return false;

    D3D12_HEAP_PROPERTIES heap{};
    heap.Type = D3D12_HEAP_TYPE_DEFAULT;
    D3D12_RESOURCE_DESC desc{};
    desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    desc.Width = texture.width;
    desc.Height = texture.height;
    desc.DepthOrArraySize = 1;
    desc.MipLevels = 1;
    desc.Format = kTargetFormat;
    desc.SampleDesc.Count = 1;

    CachedTexture cached;
    if (FAILED(g_gpu.device->CreateCommittedResource(&heap, D3D12_HEAP_FLAG_NONE, &desc,
                                                     D3D12_RESOURCE_STATE_COPY_DEST, nullptr,
                                                     IID_PPV_ARGS(&cached.resource)))) {
        return false;
    }

    const std::uint32_t row_pitch = (texture.width * 4u + D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u) &
                                    ~(D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u);
    D3D12_HEAP_PROPERTIES upload_heap{};
    upload_heap.Type = D3D12_HEAP_TYPE_UPLOAD;
    D3D12_RESOURCE_DESC upload_desc{};
    upload_desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    upload_desc.Width = static_cast<UINT64>(row_pitch) * texture.height;
    upload_desc.Height = 1;
    upload_desc.DepthOrArraySize = 1;
    upload_desc.MipLevels = 1;
    upload_desc.SampleDesc.Count = 1;
    upload_desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    ComPtr<ID3D12Resource> staging;
    if (FAILED(g_gpu.device->CreateCommittedResource(&upload_heap, D3D12_HEAP_FLAG_NONE,
                                                     &upload_desc,
                                                     D3D12_RESOURCE_STATE_GENERIC_READ, nullptr,
                                                     IID_PPV_ARGS(&staging)))) {
        return false;
    }
    void *mapped = nullptr;
    D3D12_RANGE nothing{0, 0};
    if (FAILED(staging->Map(0, &nothing, &mapped))) return false;
    for (std::uint32_t y = 0; y < texture.height; ++y) {
        std::memcpy(static_cast<std::uint8_t *>(mapped) + static_cast<std::size_t>(y) * row_pitch,
                    texels.data() + static_cast<std::size_t>(y) * texture.width,
                    static_cast<std::size_t>(texture.width) * 4u);
    }
    staging->Unmap(0, nullptr);

    // Uploading needs its own submission: the batch in flight is mid-recording
    // against a different pipeline, and interleaving a copy into it would order
    // the upload after draws that already sample the texture.
    submit();
    begin_recording();
    D3D12_TEXTURE_COPY_LOCATION destination{};
    destination.pResource = cached.resource.Get();
    destination.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    D3D12_TEXTURE_COPY_LOCATION source{};
    source.pResource = staging.Get();
    source.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
    source.PlacedFootprint.Footprint.Format = kTargetFormat;
    source.PlacedFootprint.Footprint.Width = texture.width;
    source.PlacedFootprint.Footprint.Height = texture.height;
    source.PlacedFootprint.Footprint.Depth = 1;
    source.PlacedFootprint.Footprint.RowPitch = row_pitch;
    g_gpu.list->CopyTextureRegion(&destination, 0, 0, 0, &source, nullptr);

    D3D12_RESOURCE_BARRIER barrier{};
    barrier.Transition.pResource = cached.resource.Get();
    barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_COPY_DEST;
    barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;
    barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    g_gpu.list->ResourceBarrier(1, &barrier);
    submit();

    cached.slot = g_gpu.next_texture_slot++;
    D3D12_SHADER_RESOURCE_VIEW_DESC view{};
    view.Format = kTargetFormat;
    view.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    view.Shader4ComponentMapping = D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING;
    view.Texture2D.MipLevels = 1;
    D3D12_CPU_DESCRIPTOR_HANDLE handle = g_gpu.srv_heap->GetCPUDescriptorHandleForHeapStart();
    handle.ptr += static_cast<SIZE_T>(cached.slot) * g_gpu.srv_size;
    g_gpu.device->CreateShaderResourceView(cached.resource.Get(), &view, handle);

    slot = cached.slot;
    ++g_gpu.stats.textures_uploaded;
    g_gpu.textures.emplace(key, std::move(cached));
    return true;
}

// Positions go across as they are.
//
// The two rasterisers do place a pixel differently - the software one evaluates
// at the integer coordinate, a card at the pixel centre - and shifting the
// geometry by half to compensate looks obviously right. It was measured and it
// is wrong: the difference against the software frame went from 1,240 pixels to
// 31,682. Coverage is why. The software sprite loop truncates its bounds, so a
// rectangle from 100.3 to 200.3 fills columns 100 to 199, which is exactly what
// the centre rule gives for the same unshifted rectangle; adding half moves the
// first covered column to 101 and the whole sprite lands a pixel across. The
// attribute is half a texel out this way, and that costs far less.

void append(const Vertex &vertex, float u, float v, std::uint32_t color, float depth) {
    if (g_gpu.vertex_count >= kMaxVertices) return;
    g_gpu.vertices[g_gpu.vertex_count++] =
        GpuVertex{vertex.x, vertex.y, depth, color, u, v};
    ++g_gpu.stats.vertices_submitted;
}

// Normalised texture coordinates, from whichever convention the draw states.
// Texture coordinates in texels, which is the unit the shader now fetches in
// and the unit the reference rasteriser has always worked in.
void texture_coordinates(const Vertex &vertex, const TextureState &texture, bool uv_in_texels,
                         float &u, float &v) {
    u = vertex.u;
    v = vertex.v;
    if (uv_in_texels) return;
    // A transformed draw carries normalised coordinates; they only become
    // texels once scaled by the texture size.
    u *= static_cast<float>(texture.width);
    v *= static_cast<float>(texture.height);
}

void begin_batch(const PipelineKey &key, std::uint32_t texture_slot, std::uint32_t texture_width,
                 std::uint32_t texture_height) {
    if (g_gpu.batch_open && key < g_gpu.batch_key) {
        // ordered comparison both ways is how a map key says "different"
    }
    const bool same = g_gpu.batch_open && !(key < g_gpu.batch_key) && !(g_gpu.batch_key < key) &&
                      (!key.textured || texture_slot == g_gpu.batch_texture_slot);
    if (same) return;
    flush_batch();
    g_gpu.batch_key = key;
    g_gpu.batch_texture_slot = texture_slot;
    g_gpu.batch_texture_width = texture_width != 0u ? texture_width : 1u;
    g_gpu.batch_texture_height = texture_height != 0u ? texture_height : 1u;
    g_gpu.batch_start = g_gpu.vertex_count;
    g_gpu.batch_open = true;
}

} // namespace

bool gpu_enabled() {
    static const bool enabled = [] {
        const char *text = std::getenv("PSPRECOMP_DEFJAM_GPU");
        return text != nullptr && *text != 0 && *text != 48;
    }();
    return enabled;
}

bool gpu_initialize(std::string &error) {
    if (g_gpu.active) return true;
    if (g_gpu.failed) {
        error = "the graphics backend already failed to start";
        return false;
    }

    ComPtr<IDXGIFactory4> factory;
    HRESULT hr = CreateDXGIFactory2(0u, IID_PPV_ARGS(&factory));
    if (FAILED(hr)) {
        error = describe(hr, "CreateDXGIFactory2");
        g_gpu.failed = true;
        return false;
    }
    ComPtr<IDXGIFactory6> by_preference;
    if (SUCCEEDED(factory.As(&by_preference))) {
        for (UINT index = 0;; ++index) {
            ComPtr<IDXGIAdapter1> adapter;
            if (by_preference->EnumAdapterByGpuPreference(index,
                                                          DXGI_GPU_PREFERENCE_HIGH_PERFORMANCE,
                                                          IID_PPV_ARGS(&adapter)) ==
                DXGI_ERROR_NOT_FOUND) {
                break;
            }
            DXGI_ADAPTER_DESC1 description{};
            adapter->GetDesc1(&description);
            if ((description.Flags & DXGI_ADAPTER_FLAG_SOFTWARE) != 0) continue;
            if (SUCCEEDED(D3D12CreateDevice(adapter.Get(), D3D_FEATURE_LEVEL_11_0,
                                            IID_PPV_ARGS(&g_gpu.device)))) {
                const int length = WideCharToMultiByte(CP_UTF8, 0, description.Description, -1,
                                                       nullptr, 0, nullptr, nullptr);
                if (length > 1) {
                    std::string name(static_cast<std::size_t>(length - 1), '\0');
                    WideCharToMultiByte(CP_UTF8, 0, description.Description, -1, name.data(),
                                        length, nullptr, nullptr);
                    g_gpu.adapter = name;
                    g_gpu.stats.adapter = name;
                }
                break;
            }
        }
    }
    if (!g_gpu.device) {
        hr = D3D12CreateDevice(nullptr, D3D_FEATURE_LEVEL_11_0, IID_PPV_ARGS(&g_gpu.device));
        if (FAILED(hr)) {
            error = describe(hr, "D3D12CreateDevice");
            g_gpu.failed = true;
            return false;
        }
        g_gpu.adapter = "default adapter";
        g_gpu.stats.adapter = g_gpu.adapter;
    }

    D3D12_COMMAND_QUEUE_DESC queue_desc{};
    queue_desc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
    hr = g_gpu.device->CreateCommandQueue(&queue_desc, IID_PPV_ARGS(&g_gpu.queue));
    if (FAILED(hr)) {
        error = describe(hr, "CreateCommandQueue");
        g_gpu.failed = true;
        return false;
    }
    hr = g_gpu.device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT,
                                              IID_PPV_ARGS(&g_gpu.allocator));
    if (FAILED(hr)) {
        error = describe(hr, "CreateCommandAllocator");
        g_gpu.failed = true;
        return false;
    }
    hr = g_gpu.device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, g_gpu.allocator.Get(),
                                         nullptr, IID_PPV_ARGS(&g_gpu.list));
    if (FAILED(hr)) {
        error = describe(hr, "CreateCommandList");
        g_gpu.failed = true;
        return false;
    }
    g_gpu.list->Close();
    hr = g_gpu.device->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&g_gpu.fence));
    if (FAILED(hr)) {
        error = describe(hr, "CreateFence");
        g_gpu.failed = true;
        return false;
    }
    g_gpu.fence_event = CreateEventW(nullptr, FALSE, FALSE, nullptr);

    D3D12_DESCRIPTOR_RANGE range{};
    range.RangeType = D3D12_DESCRIPTOR_RANGE_TYPE_SRV;
    range.NumDescriptors = 1;
    D3D12_ROOT_PARAMETER parameters[2]{};
    parameters[0].ParameterType = D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS;
    parameters[0].Constants.Num32BitValues = 6;
    parameters[0].ShaderVisibility = D3D12_SHADER_VISIBILITY_ALL;
    parameters[1].ParameterType = D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE;
    parameters[1].DescriptorTable.NumDescriptorRanges = 1;
    parameters[1].DescriptorTable.pDescriptorRanges = &range;
    parameters[1].ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL;

    // Point sampling, because the software rasteriser samples one texel and the
    // two are meant to be comparable.
    D3D12_STATIC_SAMPLER_DESC sampler{};
    sampler.Filter = D3D12_FILTER_MIN_MAG_MIP_POINT;
    sampler.AddressU = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
    sampler.AddressV = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
    sampler.AddressW = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
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
        g_gpu.failed = true;
        return false;
    }
    hr = g_gpu.device->CreateRootSignature(0, signature->GetBufferPointer(),
                                           signature->GetBufferSize(),
                                           IID_PPV_ARGS(&g_gpu.root_signature));
    if (FAILED(hr)) {
        error = describe(hr, "CreateRootSignature");
        g_gpu.failed = true;
        return false;
    }

    ComPtr<ID3DBlob> compile_error;
    hr = D3DCompile(kShaderSource, sizeof(kShaderSource) - 1, "gpu", nullptr, nullptr, "vs_main",
                    "vs_5_0", 0, 0, &g_gpu.vertex_shader, &compile_error);
    if (FAILED(hr)) {
        error = "the vertex shader did not compile";
        if (compile_error) {
            error += std::string(": ") + static_cast<const char *>(compile_error->GetBufferPointer());
        }
        g_gpu.failed = true;
        return false;
    }
    hr = D3DCompile(kShaderSource, sizeof(kShaderSource) - 1, "gpu", nullptr, nullptr, "ps_main",
                    "ps_5_0", 0, 0, &g_gpu.pixel_shader, &compile_error);
    if (FAILED(hr)) {
        error = "the pixel shader did not compile";
        if (compile_error) {
            error += std::string(": ") + static_cast<const char *>(compile_error->GetBufferPointer());
        }
        g_gpu.failed = true;
        return false;
    }

    D3D12_DESCRIPTOR_HEAP_DESC rtv_desc{};
    rtv_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
    rtv_desc.NumDescriptors = 1;
    g_gpu.device->CreateDescriptorHeap(&rtv_desc, IID_PPV_ARGS(&g_gpu.rtv_heap));
    D3D12_DESCRIPTOR_HEAP_DESC dsv_desc{};
    dsv_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_DSV;
    dsv_desc.NumDescriptors = 1;
    g_gpu.device->CreateDescriptorHeap(&dsv_desc, IID_PPV_ARGS(&g_gpu.dsv_heap));
    D3D12_DESCRIPTOR_HEAP_DESC srv_desc{};
    srv_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
    srv_desc.NumDescriptors = kTextureSlots;
    srv_desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
    g_gpu.device->CreateDescriptorHeap(&srv_desc, IID_PPV_ARGS(&g_gpu.srv_heap));
    g_gpu.srv_size =
        g_gpu.device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV);

    D3D12_HEAP_PROPERTIES vertex_heap{};
    vertex_heap.Type = D3D12_HEAP_TYPE_UPLOAD;
    D3D12_RESOURCE_DESC vertex_desc{};
    vertex_desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    vertex_desc.Width = static_cast<UINT64>(kMaxVertices) * sizeof(GpuVertex);
    vertex_desc.Height = 1;
    vertex_desc.DepthOrArraySize = 1;
    vertex_desc.MipLevels = 1;
    vertex_desc.SampleDesc.Count = 1;
    vertex_desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    hr = g_gpu.device->CreateCommittedResource(&vertex_heap, D3D12_HEAP_FLAG_NONE, &vertex_desc,
                                               D3D12_RESOURCE_STATE_GENERIC_READ, nullptr,
                                               IID_PPV_ARGS(&g_gpu.vertex_buffer));
    if (FAILED(hr)) {
        error = describe(hr, "CreateCommittedResource for the vertex buffer");
        g_gpu.failed = true;
        return false;
    }
    D3D12_RANGE nothing{0, 0};
    g_gpu.vertex_buffer->Map(0, &nothing, reinterpret_cast<void **>(&g_gpu.vertices));

    g_gpu.active = true;
    return true;
}

void gpu_set_target(std::uint32_t address, std::uint32_t stride, std::uint32_t width,
                    std::uint32_t height) {
    if (!g_gpu.active || width == 0u || height == 0u) return;
    if (g_gpu.target && g_gpu.target_address == address && g_gpu.target_width == width &&
        g_gpu.target_height == height) {
        g_gpu.target_stride = stride;
        return;
    }
    submit();

    g_gpu.target_address = address;
    g_gpu.target_stride = stride;
    g_gpu.target_width = width;
    g_gpu.target_height = height;
    g_gpu.target_cleared = false;

    const std::uint64_t key = (static_cast<std::uint64_t>(address) << 32u) ^
                              (static_cast<std::uint64_t>(width) << 16u) ^
                              static_cast<std::uint64_t>(height);
    auto found = g_gpu.targets.find(key);
    if (found == g_gpu.targets.end()) {
        TargetResources made;
        made.width = width;
        made.height = height;

        D3D12_HEAP_PROPERTIES heap{};
        heap.Type = D3D12_HEAP_TYPE_DEFAULT;
        D3D12_RESOURCE_DESC desc{};
        desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
        desc.Width = width;
        desc.Height = height;
        desc.DepthOrArraySize = 1;
        desc.MipLevels = 1;
        desc.Format = kTargetFormat;
        desc.SampleDesc.Count = 1;
        desc.Flags = D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET;
        D3D12_CLEAR_VALUE clear{};
        clear.Format = kTargetFormat;
        g_gpu.device->CreateCommittedResource(&heap, D3D12_HEAP_FLAG_NONE, &desc,
                                              D3D12_RESOURCE_STATE_RENDER_TARGET, &clear,
                                              IID_PPV_ARGS(&made.colour));

        D3D12_RESOURCE_DESC depth_desc = desc;
        depth_desc.Format = kDepthFormat;
        depth_desc.Flags = D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL;
        D3D12_CLEAR_VALUE depth_clear{};
        depth_clear.Format = kDepthFormat;
        g_gpu.device->CreateCommittedResource(&heap, D3D12_HEAP_FLAG_NONE, &depth_desc,
                                              D3D12_RESOURCE_STATE_DEPTH_WRITE, &depth_clear,
                                              IID_PPV_ARGS(&made.depth));

        const std::uint32_t row_pitch = (width * 4u + D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u) &
                                        ~(D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u);
        D3D12_HEAP_PROPERTIES readback_heap{};
        readback_heap.Type = D3D12_HEAP_TYPE_READBACK;
        D3D12_RESOURCE_DESC readback_desc{};
        readback_desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
        readback_desc.Width = static_cast<UINT64>(row_pitch) * height;
        readback_desc.Height = 1;
        readback_desc.DepthOrArraySize = 1;
        readback_desc.MipLevels = 1;
        readback_desc.SampleDesc.Count = 1;
        readback_desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
        g_gpu.device->CreateCommittedResource(&readback_heap, D3D12_HEAP_FLAG_NONE, &readback_desc,
                                              D3D12_RESOURCE_STATE_COPY_DEST, nullptr,
                                              IID_PPV_ARGS(&made.readback));

        ++g_gpu.stats.targets_created;
        found = g_gpu.targets.emplace(key, std::move(made)).first;
    } else {
        ++g_gpu.stats.targets_reused;
    }

    g_gpu.target = found->second.colour;
    g_gpu.depth = found->second.depth;
    g_gpu.readback = found->second.readback;

    // The views are rewritten rather than kept per target: a descriptor write
    // is a handful of bytes and this keeps one slot in each heap.
    g_gpu.device->CreateRenderTargetView(g_gpu.target.Get(), nullptr,
                                         g_gpu.rtv_heap->GetCPUDescriptorHandleForHeapStart());
    D3D12_DEPTH_STENCIL_VIEW_DESC dsv{};
    dsv.Format = kDepthFormat;
    dsv.ViewDimension = D3D12_DSV_DIMENSION_TEXTURE2D;
    g_gpu.device->CreateDepthStencilView(g_gpu.depth.Get(), &dsv,
                                         g_gpu.dsv_heap->GetCPUDescriptorHandleForHeapStart());
}

bool gpu_draw(psprecomp::Runtime &runtime, std::uint32_t primitive,
              const std::vector<Vertex> &vertices, const VertexFormat &format,
              const TextureState &texture, bool clearing) {
    if (!g_gpu.active || !g_gpu.target) return false;
    if (vertices.size() < 2u) return false;

    const bool textured = texture.enabled && texture.valid() && !clearing;
    std::uint32_t slot = 0u;
    if (textured && !ensure_texture(runtime, texture, slot)) {
        ++g_gpu.stats.primitives_skipped;
        return false;
    }

    const std::array<std::uint32_t, 256> &registers = ge_registers();
    PipelineKey key;
    key.textured = textured;
    // The same registers the software path reads, so the two agree about how a
    // pixel joins the target rather than only about when.
    constexpr std::uint8_t kTextureFunction = 0xC4u;
    constexpr std::uint32_t kModulate = 2u;
    key.blend = clearing ? BlendMode::Write : BlendMode::SourceOver;
    key.modulate = textured && registers[kTextureFunction] == kModulate;
    key.depth_test = !clearing && (registers[0x23u] & 1u) != 0u;
    key.depth_write = (registers[0xE7u] & 1u) == 0u;
    key.compare = static_cast<std::uint8_t>(registers[0xDEu] & 7u);
    begin_batch(key, slot, texture.width, texture.height);

    const auto emit = [&](const Vertex &vertex, std::uint32_t color, float depth) {
        float u{}, v{};
        if (textured) texture_coordinates(vertex, texture, format.through, u, v);
        append(vertex, u, v, color, depth);
    };
    const auto triangle = [&](const Vertex &a, const Vertex &b, const Vertex &c) {
        emit(a, a.color, a.z);
        emit(b, b.color, b.z);
        emit(c, c.color, c.z);
        ++g_gpu.stats.primitives_drawn;
    };

    switch (primitive) {
        case 3u:   // triangles
            for (std::size_t i = 0; i + 2u < vertices.size(); i += 3u) {
                triangle(vertices[i], vertices[i + 1u], vertices[i + 2u]);
            }
            return true;
        case 4u:   // triangle strip
            for (std::size_t i = 0; i + 2u < vertices.size(); ++i) {
                triangle(vertices[i], vertices[i + 1u], vertices[i + 2u]);
            }
            return true;
        case 5u:   // triangle fan
            for (std::size_t i = 1; i + 1u < vertices.size(); ++i) {
                triangle(vertices[0], vertices[i], vertices[i + 1u]);
            }
            return true;
        case 6u: {
            // A sprite is a screen-aligned rectangle taking its colour and depth
            // from the second vertex and its texture coordinates from both, as
            // the software rasteriser reads them.
            for (std::size_t i = 0; i + 1u < vertices.size(); i += 2u) {
                const Vertex &first = vertices[i];
                const Vertex &second = vertices[i + 1u];
                Vertex corner[4] = {first, first, first, first};
                const float x0 = std::min(first.x, second.x);
                const float x1 = std::max(first.x, second.x);
                const float y0 = std::min(first.y, second.y);
                const float y1 = std::max(first.y, second.y);
                corner[0].x = x0; corner[0].y = y0; corner[0].u = first.u;  corner[0].v = first.v;
                corner[1].x = x1; corner[1].y = y0; corner[1].u = second.u; corner[1].v = first.v;
                corner[2].x = x1; corner[2].y = y1; corner[2].u = second.u; corner[2].v = second.v;
                corner[3].x = x0; corner[3].y = y1; corner[3].u = first.u;  corner[3].v = second.v;
                for (Vertex &c : corner) {
                    c.color = second.color;
                    c.z = second.z;
                }
                triangle(corner[0], corner[1], corner[2]);
                triangle(corner[0], corner[2], corner[3]);
            }
            return true;
        }
        default:
            ++g_gpu.stats.primitives_skipped;
            return false;
    }
}

void gpu_resolve(psprecomp::Runtime &runtime) {
    // Silence here reads as a blank frame and says nothing about why, so each
    // way out states itself once.
    const auto give_up = [](const char *why) {
        static std::string reported;
        if (reported == why) return;
        reported = why;
        std::cerr << "  gpu resolve skipped: " << why << "\n";
    };
    if (!g_gpu.active) return give_up("the backend is not running");
    if (!g_gpu.target) return give_up("there is no render target");
    if (!g_gpu.readback) return give_up("there is no readback buffer");
    flush_batch();
    begin_recording();

    D3D12_RESOURCE_BARRIER to_source{};
    to_source.Transition.pResource = g_gpu.target.Get();
    to_source.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
    to_source.Transition.StateAfter = D3D12_RESOURCE_STATE_COPY_SOURCE;
    to_source.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    g_gpu.list->ResourceBarrier(1, &to_source);

    const std::uint32_t row_pitch =
        (g_gpu.target_width * 4u + D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u) &
        ~(D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u);
    D3D12_TEXTURE_COPY_LOCATION destination{};
    destination.pResource = g_gpu.readback.Get();
    destination.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
    destination.PlacedFootprint.Footprint.Format = kTargetFormat;
    destination.PlacedFootprint.Footprint.Width = g_gpu.target_width;
    destination.PlacedFootprint.Footprint.Height = g_gpu.target_height;
    destination.PlacedFootprint.Footprint.Depth = 1;
    destination.PlacedFootprint.Footprint.RowPitch = row_pitch;
    D3D12_TEXTURE_COPY_LOCATION source{};
    source.pResource = g_gpu.target.Get();
    source.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    g_gpu.list->CopyTextureRegion(&destination, 0, 0, 0, &source, nullptr);

    D3D12_RESOURCE_BARRIER back = to_source;
    back.Transition.StateBefore = D3D12_RESOURCE_STATE_COPY_SOURCE;
    back.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;
    g_gpu.list->ResourceBarrier(1, &back);

    const auto waiting = std::chrono::steady_clock::now();
    submit();
    const auto copying = std::chrono::steady_clock::now();
    g_gpu.stats.resolve_wait_us += static_cast<std::uint64_t>(
        std::chrono::duration_cast<std::chrono::microseconds>(copying - waiting).count());

    void *mapped = nullptr;
    D3D12_RANGE everything{0, static_cast<SIZE_T>(row_pitch) * g_gpu.target_height};
    if (FAILED(g_gpu.readback->Map(0, &everything, &mapped))) {
        return give_up("the readback buffer could not be mapped");
    }
    std::vector<std::uint8_t> row(static_cast<std::size_t>(g_gpu.target_stride) * 4u, 0u);
    for (std::uint32_t y = 0; y < g_gpu.target_height; ++y) {
        std::memcpy(row.data(),
                    static_cast<const std::uint8_t *>(mapped) + static_cast<std::size_t>(y) * row_pitch,
                    static_cast<std::size_t>(g_gpu.target_width) * 4u);
        const std::uint32_t address =
            g_gpu.target_address + y * g_gpu.target_stride * 4u;
        if (runtime.memory().contains(address, static_cast<std::uint32_t>(row.size()))) {
            runtime.memory().copy_in(address, row);
        }
    }
    D3D12_RANGE nothing{0, 0};
    g_gpu.readback->Unmap(0, &nothing);
    g_gpu.stats.resolve_copy_us += static_cast<std::uint64_t>(
        std::chrono::duration_cast<std::chrono::microseconds>(
            std::chrono::steady_clock::now() - copying)
            .count());
    g_gpu.last_texture_address = 0u;
    g_gpu.last_clut_address = 0u;
    ++g_gpu.stats.resolves;
}

GpuStats gpu_stats() { return g_gpu.stats; }

std::string gpu_report() {
    if (!gpu_enabled()) return {};
    std::ostringstream out;
    out << "  gpu:                " << g_gpu.stats.primitives_drawn << " primitives, "
        << g_gpu.stats.primitives_skipped << " skipped, " << g_gpu.stats.vertices_submitted
        << " vertices, " << g_gpu.stats.batches_flushed << " batches\n"
        << "  gpu textures:       " << g_gpu.stats.textures_uploaded << " uploaded, "
        << g_gpu.stats.texture_cache_hits << " reused\n"
        << "  gpu resolve time:   " << g_gpu.stats.resolve_wait_us / 1000u
        << " ms waiting, " << g_gpu.stats.resolve_copy_us / 1000u << " ms copying\n"
        << "  gpu targets:        " << g_gpu.stats.targets_created << " created, "
        << g_gpu.stats.targets_reused << " reused\n"
        << "  gpu resolves:       " << g_gpu.stats.resolves << " on "
        << (g_gpu.adapter.empty() ? "no adapter" : g_gpu.adapter) << "\n";
    return out.str();
}

void gpu_shutdown() {
    if (!g_gpu.active) return;
    wait_for_gpu();
    if (g_gpu.fence_event != nullptr) CloseHandle(g_gpu.fence_event);
    g_gpu = Backend{};
}

} // namespace defjam

#endif
