//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSMutableSet, NSString;
@protocol MTLDevice, MTLRenderCommandEncoder, MTLRenderCommandEncoderSPI;

@interface CaptureMTLRenderCommandEncoder : NSObject
{
    id <MTLRenderCommandEncoderSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    NSMutableSet *_retainedObjects;	// 40 = 0x28
    CaptureMTLCommandBuffer *_captureCommandBuffer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000006c672
- (void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2;	// IMP=0x000000000006c4d4
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4;	// IMP=0x000000000006c2cf
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x000000000006c0e5
- (void)useResourceGroup:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x000000000006c021
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x000000000006be7c
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x000000000006bcde
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x000000000006baf4
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000006b918
- (void)useHeap:(id)arg1 stages:(unsigned long long)arg2;	// IMP=0x000000000006b77a
- (void)useHeap:(id)arg1;	// IMP=0x000000000006b5f8
- (void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2;	// IMP=0x000000000006b45a
- (void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000006b34f
- (void)setViewportTransformEnabled:(_Bool)arg1;	// IMP=0x000000000006b250
- (void)setViewport:(CDStruct_8727d297)arg1;	// IMP=0x000000000006b127
- (void)setVertexVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x000000000006af3d
- (void)setVertexVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000006ad9f
- (void)setVertexTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000006abb5
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000006aa17
- (void)setVertexSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000006a82d
- (void)setVertexSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x000000000006a5cd
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x000000000006a505
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x000000000006a349
- (void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000006a1ab
- (void)setVertexIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000069fc1
- (void)setVertexIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000069e23
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000069cde
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000069ac4
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000699b9
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000069814
- (void)setVertexAmplificationMode:(unsigned long long)arg1 value:(unsigned long long)arg2;	// IMP=0x0000000000069709
- (void)setTriangleFrontFillMode:(unsigned long long)arg1 backFillMode:(unsigned long long)arg2;	// IMP=0x00000000000695fe
- (void)setTriangleFillMode:(unsigned long long)arg1;	// IMP=0x000000000006950c
- (void)setTransformFeedbackState:(unsigned long long)arg1;	// IMP=0x00000000000694f6
- (void)setTileVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x000000000006930c
- (void)setTileVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000006916e
- (void)setTileTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000068f84
- (void)setTileTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000068de6
- (void)setTileSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000068bfc
- (void)setTileSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x000000000006899c
- (void)setTileSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x00000000000687e0
- (void)setTileSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000068642
- (void)setTileIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000068458
- (void)setTileIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x00000000000682ba
- (void)setTileBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000068175
- (void)setTileBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000067f4a
- (void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000067e3f
- (void)setTileBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000067c9a
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000067b83
- (void)setTessellationFactorScale:(float)arg1;	// IMP=0x0000000000067a81
- (void)setTessellationFactorBuffer:(id)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3;	// IMP=0x00000000000678dc
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;	// IMP=0x00000000000677ea
- (void)setStencilStoreAction:(unsigned long long)arg1;	// IMP=0x00000000000676f8
- (void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5;	// IMP=0x000000000006752b
- (void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;	// IMP=0x0000000000067377
- (void)setStencilReferenceValue:(unsigned int)arg1;	// IMP=0x000000000006727b
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;	// IMP=0x0000000000067177
- (void)setStencilCleared;	// IMP=0x0000000000067095
- (void)setScissorRect:(CDStruct_33dcf794)arg1;	// IMP=0x0000000000066f7e
- (void)setRenderPipelineState:(id)arg1;	// IMP=0x0000000000066dfc
- (void)setProvokingVertexMode:(unsigned long long)arg1;	// IMP=0x0000000000066d0a
- (void)setPrimitiveRestartEnabled:(_Bool)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000000066bf5
- (void)setPrimitiveRestartEnabled:(_Bool)arg1;	// IMP=0x0000000000066af6
- (void)setPointSize:(float)arg1;	// IMP=0x00000000000669f4
- (void)setObjectVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000066908
- (void)setObjectVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000006684e
- (void)setObjectThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000066807
- (void)setObjectTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000006661d
- (void)setObjectTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000006647f
- (void)setObjectSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000066295
- (void)setObjectSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x000000000006601b
- (void)setObjectSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000065e5f
- (void)setObjectSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000065cc1
- (void)setObjectIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000065bd5
- (void)setObjectIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000065b1b
- (void)setObjectBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000659d6
- (void)setObjectBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000000000657ab
- (void)setObjectBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000656a0
- (void)setObjectBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000654fb
- (void)setObjectAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000065441
- (void)setMeshVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000065355
- (void)setMeshVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000006529b
- (void)setMeshTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000650b1
- (void)setMeshTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000064f13
- (void)setMeshSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000064d29
- (void)setMeshSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000064aaf
- (void)setMeshSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x00000000000648f3
- (void)setMeshSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000064755
- (void)setMeshIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000064669
- (void)setMeshIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x00000000000645af
- (void)setMeshBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000006446a
- (void)setMeshBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x000000000006423f
- (void)setMeshBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000064134
- (void)setMeshBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000063f8f
- (void)setMeshAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000063ed5
- (void)setLineWidth:(float)arg1;	// IMP=0x0000000000063dd3
- (void)setFrontFacingWinding:(unsigned long long)arg1;	// IMP=0x0000000000063ce1
- (void)setFragmentVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000063af7
- (void)setFragmentVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000063959
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000006376f
- (void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4;	// IMP=0x0000000000063532
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000063394
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000631aa
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000062f4a
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x0000000000062e82
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000062cc6
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000062b28
- (void)setFragmentIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x000000000006293e
- (void)setFragmentIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x00000000000627a0
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000006265b
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000062441
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000062336
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000062191
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;	// IMP=0x000000000006209f
- (void)setDepthStoreAction:(unsigned long long)arg1;	// IMP=0x0000000000061fad
- (void)setDepthStencilState:(id)arg1;	// IMP=0x0000000000061e2b
- (void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5;	// IMP=0x0000000000061c5e
- (void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;	// IMP=0x0000000000061aaa
- (void)setDepthClipModeSPI:(unsigned long long)arg1;	// IMP=0x0000000000061a94
- (void)setDepthClipMode:(unsigned long long)arg1;	// IMP=0x00000000000619a2
- (void)setDepthCleared;	// IMP=0x00000000000618c0
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;	// IMP=0x0000000000061791
- (void)setCullMode:(unsigned long long)arg1;	// IMP=0x000000000006169f
- (void)setCommandDataCorruptModeSPI:(unsigned long long)arg1;	// IMP=0x0000000000061689
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000006157e
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000061473
- (void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5 atIndex:(unsigned long long)arg6;	// IMP=0x0000000000061298
- (void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x00000000000610d4
- (void)setClipPlane:(float)arg1 p2:(float)arg2 p3:(float)arg3 p4:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x00000000000610bb
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;	// IMP=0x0000000000060f7f
- (void)setAlphaTestReferenceValue:(float)arg1;	// IMP=0x0000000000060e7d
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x0000000000060cd1
- (void)pushDebugGroup:(id)arg1;	// IMP=0x0000000000060b4b
- (void)popDebugGroup;	// IMP=0x0000000000060a69
- (_Bool)isMemorylessRender;	// IMP=0x0000000000060a53
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x00000000000608cd
- (void)endEncoding;	// IMP=0x00000000000607eb
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;	// IMP=0x00000000000606a9
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;	// IMP=0x0000000000060577
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;	// IMP=0x0000000000060460
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x00000000000602bb
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7;	// IMP=0x00000000000600ea
- (void)drawPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(unsigned long long)arg5;	// IMP=0x000000000005fe9d
- (void)drawMeshThreads:(CDStruct_14f26992)arg1 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg2 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x000000000005fd44
- (void)drawMeshThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg3 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg4;	// IMP=0x000000000005fb70
- (void)drawMeshThreadgroups:(CDStruct_14f26992)arg1 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg2 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x000000000005fa17
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;	// IMP=0x000000000005f7af
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;	// IMP=0x000000000005f5e0
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;	// IMP=0x000000000005f413
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;	// IMP=0x000000000005f24f
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9;	// IMP=0x000000000005efe1
- (void)drawIndexedPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(unsigned long long)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(unsigned long long)arg7;	// IMP=0x000000000005ed0c
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1 inRegion:(CDStruct_4c83c94d)arg2 withRenderTargetArrayIndex:(unsigned int)arg3;	// IMP=0x000000000005ebb4
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1 inRegion:(CDStruct_4c83c94d)arg2;	// IMP=0x000000000005ea76
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1;	// IMP=0x000000000005e965
@property(readonly) unsigned long long tileWidth;
@property(readonly) unsigned long long tileHeight;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000005e779
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000005e768
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000005e6a7
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000005e647
- (id)originalObject;	// IMP=0x000000000005e639
- (void)setTileAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000005e41a
- (void)setFragmentAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000005e1fb
- (void)setVertexAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000005dfdc
- (void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3;	// IMP=0x000000000005dec5
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4;	// IMP=0x000000000005dcc0
- (void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const CDStruct_c0454aff *)arg2;	// IMP=0x000000000005db8d
- (void)setViewports:(const CDStruct_8727d297 *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000005da5d
- (void)setScissorRects:(const CDStruct_33dcf794 *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000005d931
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000005d318
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000005cf7e
- (void)dealloc;	// IMP=0x000000000005ce59
- (id)initWithBaseObject:(id)arg1 captureParallelRenderCommandEncoder:(id)arg2;	// IMP=0x000000000005cca8
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;	// IMP=0x000000000005cb39
@property(readonly) id <MTLRenderCommandEncoder> baseObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

