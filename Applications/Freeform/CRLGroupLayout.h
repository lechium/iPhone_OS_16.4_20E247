//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLBezierPath, CRLCanvasLayoutGeometry, NSOrderedSet;

@interface CRLGroupLayout
{
    CRLCanvasLayoutGeometry *_dynamicLayoutGeometry;	// 8 = 0x8
    struct CGRect _boundsForStandardKnobs;	// 16 = 0x10
    CRLBezierPath *_cachedWrapPath;	// 48 = 0x30
    CRLBezierPath *_cachedPathForClippingConnectionLines;	// 56 = 0x38
    NSOrderedSet *_cachedGroupedChildren;	// 64 = 0x40
    _Bool _hasInvalidated;	// 72 = 0x48
    _Bool _hasInvalidatedPosition;	// 73 = 0x49
}

- (void).cxx_destruct;	// IMP=0x00200000002c47da
- (id)p_groupedChildren;	// IMP=0x00100000002c4777
- (void)p_destroyDynamicCopies;	// IMP=0x00100000002c457a
- (void)setDynamicGeometry:(id)arg1;	// IMP=0x00100000002c44f6
- (void)p_createDynamicCopies;	// IMP=0x00100000002c42c9
- (_Bool)descendentWrappablesContainsWrappable:(id)arg1;	// IMP=0x00100000002c41c6
- (id)descendentWrappables;	// IMP=0x00100000002c3f85
- (id)commandToClampModelToLayoutSizeWithAdditionalTransform:(struct CGAffineTransform)arg1;	// IMP=0x00100000002c3cdb
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(struct CGAffineTransform)arg2 assertIfInDocument:(_Bool)arg3;	// IMP=0x00100000002c3a34
- (struct CGRect)rectInRootForCalculatingActivityLineEndpoint;	// IMP=0x00100000002c3980
- (id)pathForClippingConnectionLines;	// IMP=0x00100000002c38f2
- (id)i_wrapPath;	// IMP=0x00100000002c3603
- (id)computeWrapPath;	// IMP=0x00100000002c33eb
- (id)p_childWrapPathsFrom:(id)arg1 inDescendents:(id)arg2;	// IMP=0x00100000002c2e3d
- (id)commandToFlipWithOrientation:(int)arg1;	// IMP=0x00100000002c2bd7
- (_Bool)supportsParentFlipping;	// IMP=0x00100000002c2a76
- (_Bool)supportsFlipping;	// IMP=0x00100000002c2940
- (_Bool)supportsRotation;	// IMP=0x00100000002c276a
- (_Bool)allowsConnections;	// IMP=0x00100000002c26e4
- (id)layoutsForProvidingGuidesForChildLayouts;	// IMP=0x00100000002c2694
- (_Bool)providesGuidesForChildLayouts;	// IMP=0x00100000002c268c
- (_Bool)shouldDisplayGuides;	// IMP=0x00100000002c2615
- (_Bool)isDraggable;	// IMP=0x00100000002c260d
- (void)updateChildrenFromInfo;	// IMP=0x00100000002c25c3
- (void)invalidate;	// IMP=0x00100000002c2514
- (void)i_clearInvalidationCache;	// IMP=0x00100000002c24cd
- (void)endDynamicOperation;	// IMP=0x00100000002c248f
- (void)takeFreeTransformFromTracker:(id)arg1;	// IMP=0x00100000002c2245
- (struct CGSize)minimumSize;	// IMP=0x00100000002c1dee
- (void)takeSizeFromTracker:(id)arg1;	// IMP=0x00100000002c1ba4
- (_Bool)shouldSnapWhileResizing;	// IMP=0x00100000002c1b15
- (id)commandForSettingAspectRatioLocked:(_Bool)arg1;	// IMP=0x00100000002c1548
- (_Bool)resizeMayChangeAspectRatio;	// IMP=0x00100000002c1168
- (_Bool)canAspectRatioLockBeChangedByUser;	// IMP=0x00100000002c1124
- (void)takeRotationFromTracker:(id)arg1;	// IMP=0x00100000002c101f
- (id)computeInfoGeometryDuringResize;	// IMP=0x00100000002c0fcf
- (void)beginDynamicOperationWithRealTimeCommands:(_Bool)arg1;	// IMP=0x00100000002c0f87
- (struct CGRect)rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1;	// IMP=0x00100000002c0f2f
- (_Bool)shouldBeIncludedInParentFrameForCulling;	// IMP=0x00100000002c0eec
- (struct CGRect)baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform)arg1;	// IMP=0x00100000002c0e48
- (struct CGRect)alignmentFrame;	// IMP=0x00100000002c0dca
- (void)updateLayoutGeometryInPreparationForPartitioning;	// IMP=0x00100000002c066f
- (struct CGRect)clipRect;	// IMP=0x00100000002c064f
- (struct CGRect)frameForMiniFormatterPositioning;	// IMP=0x00100000002c0226
- (struct CGRect)boundsForStandardKnobs;	// IMP=0x00100000002c0206
- (void)processChangedProperty:(unsigned long long)arg1;	// IMP=0x00100000002bffdb
- (struct CGRect)rectInRootForSelectionPath:(id)arg1;	// IMP=0x00100000002bff7d
- (id)computeLayoutGeometry;	// IMP=0x00100000002bff12
- (struct CGRect)computeBoundsForStandardKnobs;	// IMP=0x00100000002bfc00
- (id)additionalDependenciesForChildLayout:(id)arg1;	// IMP=0x00100000002bfba0
- (id)reliedOnLayouts;	// IMP=0x00100000002bfb50
- (id)layoutGeometryFromInfo;	// IMP=0x00100000002bf58b
- (_Bool)canInspectGeometry;	// IMP=0x00100000002bf4d9
- (id)childInfosForChildLayouts;	// IMP=0x00100000002be8f7
- (id)visibleGeometries;	// IMP=0x00100000002be58d
- (id)boardItem;	// IMP=0x00100000002be57b
- (id)p_groupItem;	// IMP=0x00100000002be51c

@end
