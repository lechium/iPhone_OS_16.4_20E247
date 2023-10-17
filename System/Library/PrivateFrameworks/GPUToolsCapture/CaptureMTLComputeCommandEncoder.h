//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSMutableSet, NSString;
@protocol MTLComputeCommandEncoder, MTLComputeCommandEncoderSPI, MTLDevice;

@interface CaptureMTLComputeCommandEncoder : NSObject
{
    id <MTLComputeCommandEncoderSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    NSMutableSet *_retainedObjects;	// 40 = 0x28
    CaptureMTLCommandBuffer *_captureCommandBuffer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000077ad4
- (void)waitForFence:(id)arg1;	// IMP=0x0000000000077952
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x0000000000077768
- (void)useResourceGroup:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x00000000000776ae
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x0000000000077510
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000077334
- (void)useHeap:(id)arg1;	// IMP=0x00000000000771b2
- (void)updateFence:(id)arg1;	// IMP=0x0000000000077030
- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000076e46
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000076ca8
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000076b9d
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000769b3
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000076815
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;	// IMP=0x0000000000076677
- (void)setStageInRegion:(CDStruct_4c83c94d)arg1;	// IMP=0x000000000007654e
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000076364
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000076104
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000075f48
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000075daa
- (void)setIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000075bc0
- (void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000075a22
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x0000000000075917
- (void)setComputePipelineState:(id)arg1;	// IMP=0x0000000000075795
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000075650
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000075436
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007532b
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000075186
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x0000000000074fda
- (void)pushDebugGroup:(id)arg1;	// IMP=0x0000000000074e54
- (void)popDebugGroup;	// IMP=0x0000000000074d72
- (id)newKernelDebugInfo;	// IMP=0x0000000000074d5c
- (void)memoryBarrierWithScope:(unsigned long long)arg1;	// IMP=0x0000000000074c6a
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000074a8e
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x0000000000074908
- (void)endEncoding;	// IMP=0x0000000000074826
- (void)encodeStartWhile:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;	// IMP=0x0000000000074759
- (void)encodeStartIf:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;	// IMP=0x000000000007468c
- (void)encodeStartElse;	// IMP=0x0000000000074659
- (void)encodeStartDoWhile;	// IMP=0x0000000000074626
- (_Bool)encodeEndWhile;	// IMP=0x00000000000745f3
- (_Bool)encodeEndIf;	// IMP=0x00000000000745c0
- (_Bool)encodeEndDoWhile:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;	// IMP=0x00000000000744ee
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;	// IMP=0x0000000000074350
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x0000000000074215
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x0000000000074055
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x0000000000073f1a
- (void)dealloc;	// IMP=0x0000000000073e1e
@property(copy) NSString *label;
@property(readonly) unsigned long long dispatchType;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000073c48
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000073c37
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000073b76
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000073b16
- (id)originalObject;	// IMP=0x0000000000073b08
- (void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x00000000000738e9
- (void)enableNullBufferBinds:(_Bool)arg1;	// IMP=0x00000000000737ea
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000073450
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000072dee
@property(readonly) id <MTLComputeCommandEncoder> baseObject;
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;	// IMP=0x0000000000072c71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
