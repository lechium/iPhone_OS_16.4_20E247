//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCNMTLResourceManager;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLTessellator : NSObject
{
    struct __C3DGeometry *_geometry;	// 8 = 0x8
    SCNMTLResourceManager *_resourceManager;	// 16 = 0x10
    CDStruct_9b587744 _cachedTessellator;	// 24 = 0x18
    id <MTLBuffer> _tessellationFactorBuffer;	// 48 = 0x30
    id <MTLBuffer> _lastFramePositionBuffer;	// 56 = 0x38
}

- (void)subdivisionSurfaceTessellationDraw:(CDStruct_8a6a5118)arg1;	// IMP=0x0000000000300ee6
- (void)updateSubdivisionSurfaceTessellator:(CDStruct_9b587744)arg1 parameters:(CDStruct_0b08fa6a)arg2;	// IMP=0x0000000000300e53
- (void)constrainedEdgeLengthTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderContext:(id)arg4;	// IMP=0x0000000000300c87
- (void)updateConstrainedEdgeLengthTessellator:(CDStruct_9b587744)arg1 parameters:(CDStruct_0b08fa6a)arg2;	// IMP=0x0000000000300513
- (void)screenSpaceAdaptiveTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderContext:(id)arg4;	// IMP=0x0000000000300347
- (void)updateScreenSpaceAdaptiveTessellator:(CDStruct_9b587744)arg1 parameters:(CDStruct_0b08fa6a)arg2;	// IMP=0x00000000002ffb2d
- (void)uniformTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderContext:(id)arg4;	// IMP=0x00000000002ffaa6
- (void)updateUniformTessellator:(CDStruct_9b587744)arg1;	// IMP=0x00000000002ff95c
- (void)draw:(CDStruct_8a6a5118)arg1;	// IMP=0x00000000002ff83c
- (void)update:(CDStruct_0b08fa6a)arg1;	// IMP=0x00000000002ff733
- (CDUnknownBlockType)newPipelineStateConfiguratorForMeshElement:(id)arg1 patchType:(unsigned char)arg2 device:(id)arg3;	// IMP=0x00000000002ff53b
- (unsigned char)pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2;	// IMP=0x00000000002ff511
- (CDStruct_9fd556a9)_pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2;	// IMP=0x00000000002ff3c2
- (void)dealloc;	// IMP=0x00000000002ff387
- (id)initWithGeometry:(struct __C3DGeometry *)arg1 resourceManager:(id)arg2;	// IMP=0x00000000002ff330

@end

