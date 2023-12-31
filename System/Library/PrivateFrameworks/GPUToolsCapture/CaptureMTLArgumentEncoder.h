//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLArgumentEncoder, MTLDevice;

@interface CaptureMTLArgumentEncoder : NSObject
{
    id <MTLArgumentEncoder> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005ca97
- (void)setVisibleFunctionTables:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000005c820
- (void)setVisibleFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005c65a
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000005c3e3
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005c21d
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000005bfa6
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005bde0
- (void)setRenderPipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000005bb69
- (void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005b9a3
- (void)setIntersectionFunctionTables:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000005b72c
- (void)setIntersectionFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005b566
- (void)setIndirectCommandBuffers:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000005b2ef
- (void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005b129
- (void)setComputePipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000005b062
- (void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005b00d
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x000000000005ad5f
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000005ab80
- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005a9a7
- (void)dealloc;	// IMP=0x000000000005a8ab
- (void *)constantDataAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005a895
@property(copy) NSString *label;
@property(readonly) unsigned long long encodedLength;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long alignment;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000005a6a9
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000005a698
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000005a5d7
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000005a577
- (id)originalObject;	// IMP=0x000000000005a569
- (void)setAccelerationStructure:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005a32d
- (void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;	// IMP=0x000000000005a12c
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000059f3f
@property(readonly) id <MTLArgumentEncoder> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x0000000000059e53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

