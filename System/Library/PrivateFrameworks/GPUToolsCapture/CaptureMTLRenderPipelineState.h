//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, MTLDebugInstrumentationData, MTLMeshRenderPipelineDescriptor, MTLRenderPipelineDescriptor, MTLTileRenderPipelineDescriptor, NSMapTable, NSString;
@protocol MTLDevice, MTLRenderPipelineState, MTLRenderPipelineStateSPI;

@interface CaptureMTLRenderPipelineState : NSObject
{
    id <MTLRenderPipelineStateSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    NSMapTable *_functionHandleMap;	// 40 = 0x28
    MTLRenderPipelineDescriptor *_descriptor;	// 48 = 0x30
    MTLTileRenderPipelineDescriptor *_tileDescriptor;	// 56 = 0x38
    MTLMeshRenderPipelineDescriptor *_meshDescriptor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000455a0
@property(copy, nonatomic) MTLMeshRenderPipelineDescriptor *meshDescriptor; // @synthesize meshDescriptor=_meshDescriptor;
@property(copy, nonatomic) MTLTileRenderPipelineDescriptor *tileDescriptor; // @synthesize tileDescriptor=_tileDescriptor;
@property(copy, nonatomic) MTLRenderPipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (id)objectFunctionHandleWithFunction:(id)arg1;	// IMP=0x00000000000454be
- (id)newVertexShaderDebugInfo;	// IMP=0x00000000000454a8
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000453b6
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 fragmentAdditionalBinaryFunctions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000045292
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000045039
- (id)newFragmentShaderDebugInfo;	// IMP=0x0000000000045023
- (id)meshFunctionHandleWithFunction:(id)arg1;	// IMP=0x0000000000044f8c
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;	// IMP=0x0000000000044f76
- (void)dealloc;	// IMP=0x0000000000044e7a
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly) _Bool threadgroupSizeMatchesTileSize;
@property(readonly) long long textureWriteRoundingMode;
@property(readonly) _Bool supportIndirectCommandBuffers;
@property(readonly, nonatomic) unsigned long long resourceIndex;
@property(readonly) unsigned long long objectThreadExecutionWidth;
@property(readonly) unsigned long long meshThreadExecutionWidth;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) unsigned long long maxTotalThreadsPerObjectThreadgroup;
@property(readonly) unsigned long long maxTotalThreadsPerMeshThreadgroup;
@property(readonly) unsigned long long maxTotalThreadgroupsPerMeshGrid;
@property(readonly) NSString *label;
@property(readonly) unsigned long long imageblockSampleLength;
@property(readonly) struct MTLResourceID gpuResourceID;
@property(readonly) unsigned long long gpuHandle;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly) id <MTLDevice> device;
@property(readonly, nonatomic) unsigned long long allocatedSize;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000044ce0
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000044ccf
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000044c0e
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000044bae
- (id)originalObject;	// IMP=0x0000000000044ba0
- (id)functionHandleWithFunction:(id)arg1 stage:(unsigned long long)arg2;	// IMP=0x0000000000044996
- (id)fragmentFunctionHandleWithFunction:(id)arg1;	// IMP=0x00000000000447ac
- (id)vertexFunctionHandleWithFunction:(id)arg1;	// IMP=0x00000000000445c2
- (id)tileFunctionHandleWithFunction:(id)arg1;	// IMP=0x00000000000443d8
- (id)newObjectIntersectionFunctionTableWithDescriptor:(id)arg1;	// IMP=0x000000000004431c
- (id)newMeshIntersectionFunctionTableWithDescriptor:(id)arg1;	// IMP=0x0000000000044260
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2;	// IMP=0x0000000000043fde
- (id)newVisibleFunctionTableFromObjectStageWithDescriptor:(id)arg1;	// IMP=0x0000000000043f22
- (id)newVisibleFunctionTableFromMeshStageWithDescriptor:(id)arg1;	// IMP=0x0000000000043e66
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2;	// IMP=0x0000000000043be4
- (id)newTileIntersectionFunctionTableWithDescriptor:(id)arg1;	// IMP=0x00000000000439cd
- (id)newFragmentIntersectionFunctionTableWithDescriptor:(id)arg1;	// IMP=0x00000000000437b6
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)arg1;	// IMP=0x000000000004359f
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)arg1;	// IMP=0x0000000000043327
- (id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)arg1;	// IMP=0x00000000000430af
- (id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)arg1;	// IMP=0x0000000000042e37
- (_Bool)newFunctionHandle:(out id *)arg1 associatedWithBaseFunctionHandle:(id)arg2 captureFunction:(id)arg3;	// IMP=0x0000000000042d10
- (id)functionHandleMap;	// IMP=0x0000000000042cb8
@property(readonly) id <MTLRenderPipelineState> baseObject;
- (void)swapObject:(id)arg1;	// IMP=0x0000000000042c09
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x0000000000042b2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) unsigned int explicitVisibilityGroupID;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *meshDebugInstrumentationData;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *objectDebugInstrumentationData;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;

@end

