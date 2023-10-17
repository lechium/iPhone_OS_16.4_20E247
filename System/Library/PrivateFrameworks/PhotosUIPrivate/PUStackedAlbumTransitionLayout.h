//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewTransitionLayout.h>

@class PUCollectionViewLayoutCache;

__attribute__((visibility("hidden")))
@interface PUStackedAlbumTransitionLayout : UICollectionViewTransitionLayout
{
    struct CGPoint _expandedStackDelta;	// 8 = 0x8
    _Bool _didPrepareLayout;	// 24 = 0x18
    PUCollectionViewLayoutCache *_currentLayoutCache;	// 32 = 0x20
    PUCollectionViewLayoutCache *_nextLayoutCache;	// 40 = 0x28
    _Bool _isExpanding;	// 48 = 0x30
    struct CGPoint _expandedStackFinalDelta;	// 56 = 0x38
    struct CGPoint _interactionOffset;	// 72 = 0x48
    struct CGPoint _initialCollapsedStackCenter;	// 88 = 0x58
    struct CGPoint _finalCollapsedStackCenter;	// 104 = 0x68
    struct CGPoint _currentCollapsedStackCenter;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000489ed9
@property(nonatomic) struct CGPoint currentCollapsedStackCenter; // @synthesize currentCollapsedStackCenter=_currentCollapsedStackCenter;
@property(nonatomic) struct CGPoint finalCollapsedStackCenter; // @synthesize finalCollapsedStackCenter=_finalCollapsedStackCenter;
@property(nonatomic) struct CGPoint initialCollapsedStackCenter; // @synthesize initialCollapsedStackCenter=_initialCollapsedStackCenter;
@property(nonatomic) struct CGPoint interactionOffset; // @synthesize interactionOffset=_interactionOffset;
@property(readonly, nonatomic) struct CGPoint expandedStackFinalDelta; // @synthesize expandedStackFinalDelta=_expandedStackFinalDelta;
@property(readonly, nonatomic) _Bool isExpanding; // @synthesize isExpanding=_isExpanding;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000489d70
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000489caa
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000489c29
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000489a09
- (void)prepareLayout;	// IMP=0x00000000004897e9
- (struct CGPoint)_centerOfLayoutAttributes:(id)arg1;	// IMP=0x000000000048952e
- (struct CGPoint)_newCenterForLayoutAttributes:(id)arg1 transitionProgress:(double)arg2;	// IMP=0x000000000048913b
- (id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2 isExpanding:(_Bool)arg3;	// IMP=0x0000000000489043

@end
