//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSString, SKUICollectionViewCell, SKUIViewElementLayoutContext;
@protocol SKUIViewElementView;

__attribute__((visibility("hidden")))
@interface SKUIViewElementPageSection : SKUIStorePageSection
{
    Class _cellClass;	// 8 = 0x8
    struct UIEdgeInsets _cellContentInset;	// 16 = 0x10
    SKUIViewElementLayoutContext *_cellLayoutContext;	// 48 = 0x30
    double _firstSectionTopInset;	// 56 = 0x38
    SKUICollectionViewCell<SKUIViewElementView> *_lastCell;	// 64 = 0x40
    _Bool _rendersWithPerspective;	// 72 = 0x48
    NSString *_reuseIdentifier;	// 80 = 0x50
    double _sectionBottomInset;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000370a25
- (_Bool)_stretchesToFitCollectionViewBounds;	// IMP=0x000000000037098f
- (_Bool)_showsImageReflection;	// IMP=0x0000000000370987
- (void)_requestCellLayout;	// IMP=0x00000000003708b4
- (void)_reloadViewElementProperties;	// IMP=0x000000000037019d
@property(readonly, nonatomic) double defaultVerticalInset;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x0000000000370053
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000036ffa7
- (void)willAppearInContext:(id)arg1;	// IMP=0x000000000036fe7f
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000036fdec
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x000000000036fcd1
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000036fba3
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x000000000036fade
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x000000000036fa21
- (struct CGSize)preferredContentSize;	// IMP=0x000000000036f954
- (struct UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;	// IMP=0x000000000036f7df
- (long long)numberOfCells;	// IMP=0x000000000036f7d4
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000036f5ea
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000036f4ec
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;	// IMP=0x000000000036f465
- (long long)defaultItemPinningStyle;	// IMP=0x000000000036f398
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;	// IMP=0x000000000036f292
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x000000000036f19a
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x000000000036f0a2
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;	// IMP=0x000000000036ee06
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;	// IMP=0x000000000036ed98
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;	// IMP=0x000000000036ed2a
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;	// IMP=0x000000000036eb00
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x000000000036e9ea
- (id)cellForIndexPath:(id)arg1;	// IMP=0x000000000036e6b4
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x000000000036e539
- (long long)applyUpdateType:(long long)arg1;	// IMP=0x000000000036e4e8
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x000000000036e458
- (id)initWithPageComponent:(id)arg1;	// IMP=0x000000000036e40c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

