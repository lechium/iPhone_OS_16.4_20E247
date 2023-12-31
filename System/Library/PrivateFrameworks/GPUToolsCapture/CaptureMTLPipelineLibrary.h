//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSArray, NSString;
@protocol MTLDevice, MTLPipelineCache, MTLPipelineLibrary, MTLPipelineLibrarySPI;

@interface CaptureMTLPipelineLibrary : NSObject
{
    id <MTLPipelineLibrarySPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    _Bool _isBaseObjectDebugDevice;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005875d
- (void)dealloc;	// IMP=0x0000000000058661
@property(readonly) NSArray *pipelineNames;
@property(readonly, nonatomic) id <MTLPipelineCache> pipelineCache;
@property(copy) NSString *label;
@property(readonly, nonatomic) id <MTLPipelineCache> functionCache;
@property _Bool disableRunTimeCompilation;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000585cf
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000585be
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000584fd
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000005849d
- (id)originalObject;	// IMP=0x000000000005848f
- (id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000581f7
- (id)newComputePipelineDescriptorWithName:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000581e1
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000057e0a
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000057a30
@property(readonly) id <MTLPipelineLibrary> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x0000000000057928

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

