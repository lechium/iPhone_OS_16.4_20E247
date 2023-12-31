//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSMapTable, NSMutableArray, NSString, SKUIGradientView, SKUILockupViewElement, SKUIProductLockupLayout;

__attribute__((visibility("hidden")))
@interface SKUIProductLockupCollectionViewCell
{
    NSHashTable *_artworkRelatedChildViewElementViews;	// 8 = 0x8
    NSMapTable *_buyButtonDescriptorToButton;	// 16 = 0x10
    NSMapTable *_elementViews;	// 24 = 0x18
    NSMapTable *_imageViewToImageResourceCacheKey;	// 32 = 0x20
    SKUIProductLockupLayout *_layout;	// 40 = 0x28
    SKUILockupViewElement *_lockup;	// 48 = 0x30
    SKUIGradientView *_offerConfirmationGradientView;	// 56 = 0x38
    long long _offerMetadataPosition;	// 64 = 0x40
    NSHashTable *_offerViews;	// 72 = 0x48
    NSMutableArray *_segmentedControlControllers;	// 80 = 0x50
}

+ (void)_requestLayoutForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000131c40
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x001000000013199a
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x0010000000131808
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000012e454
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000012e232
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000012e1a4
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000012e065
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x001000000012de90
- (void).cxx_destruct;	// IMP=0x0000000000133d8d
- (id)_viewElementForView:(id)arg1;	// IMP=0x0000000000133bd8
- (void)_updateLayoutToAnimateOfferTransitionForView:(id)arg1;	// IMP=0x000000000013358c
- (struct CGRect)_stackElements:(id)arg1 alignment:(long long)arg2 inRect:(struct CGRect)arg3;	// IMP=0x00000000001330dc
- (struct CGRect)_stackBottomRightElements:(id)arg1 inRect:(struct CGRect)arg2;	// IMP=0x0000000000132cce
- (void)_prepareOfferConfirmationGradientForView:(id)arg1;	// IMP=0x0000000000132698
- (void)_layoutConfirmationGradientRelativeToSection:(long long)arg1 alpha:(double)arg2;	// IMP=0x00000000001321e1
- (struct CGRect)_frameForSection:(long long)arg1;	// IMP=0x0000000000131fdc
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x00000000001317a0
- (void)_imageTapAction:(id)arg1;	// IMP=0x00000000001315c7
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x0000000000131562
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000001312d1
- (void)offerViewWillAnimateTransition:(id)arg1;	// IMP=0x00000000001312bf
- (void)offerViewDidAnimateTransition:(id)arg1;	// IMP=0x000000000013126e
- (_Bool)offerViewAnimateTransition:(id)arg1;	// IMP=0x0000000000131259
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x0000000000131247
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;	// IMP=0x00000000001311f6
- (void)layoutSubviews;	// IMP=0x000000000012fcbb
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000012fac5
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000012f71c
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000012f332
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000012e65d
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x000000000012e030
- (void)setVanishingPoint:(struct CGPoint)arg1;	// IMP=0x000000000012dfb5
- (void)setPerspectiveTargetView:(id)arg1;	// IMP=0x000000000012dea9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000012de08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

