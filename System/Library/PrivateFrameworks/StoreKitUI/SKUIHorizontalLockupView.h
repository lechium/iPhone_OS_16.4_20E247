//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSMapTable, NSMutableArray, NSString, SKUIBadgeViewElement, SKUIGradientView, SKUIHorizontalLockupLayout, SKUILockupViewElement, SKUIPlayButton, SKUIPreviewProgressIndicator, SUPlayerStatus, UIColor, UITapGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalLockupView
{
    NSHashTable *_artworkRelatedChildViewElementViews;	// 8 = 0x8
    SKUIBadgeViewElement *_badge;	// 16 = 0x10
    NSMapTable *_buyButtonDescriptorToButton;	// 24 = 0x18
    struct UIEdgeInsets _contentInset;	// 32 = 0x20
    NSMapTable *_cacheKeyToImageView;	// 64 = 0x40
    SUPlayerStatus *_lastPlayerStatus;	// 72 = 0x48
    SKUIHorizontalLockupLayout *_layout;	// 80 = 0x50
    SKUILockupViewElement *_lockupElement;	// 88 = 0x58
    UIView *_metadataBackgroundView;	// 96 = 0x60
    SKUIGradientView *_offerConfirmationGradientView;	// 104 = 0x68
    NSHashTable *_offerViews;	// 112 = 0x70
    SKUIPlayButton *_playButton;	// 120 = 0x78
    SKUIPreviewProgressIndicator *_previewProgressIndicator;	// 128 = 0x80
    long long _previewState;	// 136 = 0x88
    UITapGestureRecognizer *_tapGestureRecognizer;	// 144 = 0x90
    NSMutableArray *_tappableViews;	// 152 = 0x98
    _Bool _useClearBackground;	// 160 = 0xa0
    NSMapTable *_viewElementViews;	// 168 = 0xa8
    _Bool _updateLayoutOnButtonConfirmation;	// 176 = 0xb0
    UIColor *_gradientColor;	// 184 = 0xb8
}

+ (_Bool)_usesEditorialLayoutForLabelViewElement:(id)arg1;	// IMP=0x001000000018e2dc
+ (void)_requestLayoutForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000018dd52
+ (id)_attributedStringForOrdinal:(id)arg1 context:(id)arg2;	// IMP=0x001000000018da84
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x001000000018d7fa
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x001000000018d61e
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000018775f
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000187485
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000001873f4
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000001872b5
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x00100000001867eb
- (void).cxx_destruct;	// IMP=0x0000000000190052
@property(nonatomic) _Bool updateLayoutOnButtonConfirmation; // @synthesize updateLayoutOnButtonConfirmation=_updateLayoutOnButtonConfirmation;
@property(retain, nonatomic) UIColor *gradientColor; // @synthesize gradientColor=_gradientColor;
@property(retain, nonatomic) UIView *metadataBackgroundView; // @synthesize metadataBackgroundView=_metadataBackgroundView;
- (id)_viewElementForView:(id)arg1;	// IMP=0x000000000018fe33
- (_Bool)_usesBackgroundWithAlpha;	// IMP=0x000000000018fd89
- (struct CGSize)_sizeViewsForColumn:(id)arg1 toFitWidth:(double)arg2;	// IMP=0x000000000018fa40
- (void)_resizeMetadataRelativeToItemOfferView:(id)arg1;	// IMP=0x000000000018f59c
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg1;	// IMP=0x000000000018f3dd
- (id)_previewProgressIndicator;	// IMP=0x000000000018f261
- (id)_previewMediaURL;	// IMP=0x000000000018f1bf
- (id)_previewFrontView;	// IMP=0x000000000018f0f7
- (void)_performDefaultActionForImage:(id)arg1;	// IMP=0x000000000018eedf
- (void)_layoutConfirmationGradientRelativeToItemOfferView:(id)arg1 alpha:(double)arg2;	// IMP=0x000000000018ec7f
- (void)_expandEditorialForLabel:(id)arg1;	// IMP=0x000000000018eb9d
- (double)_dividerHeight:(id)arg1;	// IMP=0x000000000018eb13
- (id)_columnForView:(id)arg1;	// IMP=0x000000000018e919
- (id)_addFlipContainerViewWithFrontView:(id)arg1 backView:(id)arg2;	// IMP=0x000000000018e7a7
- (void)_addConfirmationGradientForView:(id)arg1;	// IMP=0x000000000018e360
- (void)_handlePlayButtonTap:(id)arg1 element:(id)arg2;	// IMP=0x000000000018dbe1
- (void)_animateButton:(id)arg1;	// IMP=0x000000000018d38c
- (void)_audioPlayerStatusChangeNotification:(id)arg1;	// IMP=0x000000000018d1c2
- (void)_tapGestureAction:(id)arg1;	// IMP=0x000000000018ce43
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x000000000018cddb
- (void)_previewIndicatorAction:(id)arg1;	// IMP=0x000000000018cdc4
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x000000000018cd5f
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000018c9ca
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000018c832
- (void)mediaPlayer:(id)arg1 itemStateChanged:(id)arg2;	// IMP=0x000000000018c499
- (void)toggleButtonWillAnimateTransition:(id)arg1;	// IMP=0x000000000018c487
- (void)toggleButtonDidAnimateTransition:(id)arg1;	// IMP=0x000000000018c481
- (void)offerViewWillAnimateTransition:(id)arg1;	// IMP=0x000000000018c422
- (_Bool)offerViewAnimateTransition:(id)arg1;	// IMP=0x000000000018c320
- (void)offerViewDidAnimateTransition:(id)arg1;	// IMP=0x000000000018c2cf
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x000000000018c242
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;	// IMP=0x000000000018c1f1
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000018c0af
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000018beef
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000000018bd90
- (void)layoutSubviews;	// IMP=0x000000000018a3d7
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000018a1e1
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000189e65
- (void)setContainerBackgroundImageForPlayButton:(id)arg1;	// IMP=0x0000000000189e36
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000189b1d
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000189ac5
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000187a5d
- (void)togglePreviewPlaybackAnimated:(_Bool)arg1;	// IMP=0x00000000001870c6
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000186cbf
- (void)hidePreviewProgressAnimated:(_Bool)arg1;	// IMP=0x00000000001869d4
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x000000000018699f
- (void)setVanishingPoint:(struct CGPoint)arg1;	// IMP=0x0000000000186924
- (void)setPerspectiveTargetView:(id)arg1;	// IMP=0x0000000000186804
- (id)preferredBackgroundColor;	// IMP=0x0000000000186703
- (void)dealloc;	// IMP=0x0000000000186633
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001865ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

