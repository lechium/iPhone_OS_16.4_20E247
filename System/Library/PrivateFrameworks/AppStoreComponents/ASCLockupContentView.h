//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class ASCArtworkView, ASCLockupDisplayContext, ASCOfferButton, ASCOfferTheme, ASCSkeletonLabel, NSString, UIColor, UILabel;
@protocol ASCLockupTheme;

__attribute__((visibility("hidden")))
@interface ASCLockupContentView : UIControl
{
    NSString *_size;	// 8 = 0x8
    ASCOfferTheme *_offerTheme;	// 16 = 0x10
    id <ASCLockupTheme> _lockupTheme;	// 24 = 0x18
    ASCLockupDisplayContext *_displayContext;	// 32 = 0x20
    ASCArtworkView *_iconArtworkView;	// 40 = 0x28
    ASCSkeletonLabel *_titleLabel;	// 48 = 0x30
    ASCSkeletonLabel *_subtitleLabel;	// 56 = 0x38
    ASCOfferButton *_offerButton;	// 64 = 0x40
    UILabel *_headingLabelIfLoaded;	// 72 = 0x48
    UILabel *_offerStatusLabelIfLoaded;	// 80 = 0x50
}

+ (_Bool)offerButtonShouldExpandBackgroundForSize:(id)arg1;	// IMP=0x00100000000264f7
+ (double)offerButtonTopPaddingForSize:(id)arg1;	// IMP=0x00100000000264ee
+ (_Bool)offerButtonShouldTopAlignForSize:(id)arg1;	// IMP=0x001000000002647c
+ (_Bool)isOfferButtonFixedHeightForSize:(id)arg1;	// IMP=0x001000000002643e
+ (_Bool)isSmallOfferButtonLockupForSize:(id)arg1;	// IMP=0x001000000002639f
- (void).cxx_destruct;	// IMP=0x0000000000028edc
@property(readonly, nonatomic) UILabel *offerStatusLabelIfLoaded; // @synthesize offerStatusLabelIfLoaded=_offerStatusLabelIfLoaded;
@property(readonly, nonatomic) UILabel *headingLabelIfLoaded; // @synthesize headingLabelIfLoaded=_headingLabelIfLoaded;
@property(readonly, nonatomic) ASCOfferButton *offerButton; // @synthesize offerButton=_offerButton;
@property(readonly, nonatomic) ASCSkeletonLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) ASCSkeletonLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) ASCArtworkView *iconArtworkView; // @synthesize iconArtworkView=_iconArtworkView;
@property(readonly, copy, nonatomic) ASCLockupDisplayContext *displayContext; // @synthesize displayContext=_displayContext;
@property(retain, nonatomic) id <ASCLockupTheme> lockupTheme; // @synthesize lockupTheme=_lockupTheme;
@property(copy, nonatomic) ASCOfferTheme *offerTheme; // @synthesize offerTheme=_offerTheme;
@property(retain, nonatomic) NSString *size; // @synthesize size=_size;
@property(readonly, copy) NSString *description;
- (void)offerButton:(id)arg1 willTransitionToMetadata:(id)arg2 usingAnimator:(id)arg3;	// IMP=0x0000000000028960
- (void)endOfferModalState;	// IMP=0x0000000000028923
- (void)beginOfferModalStateWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000288b1
- (void)setOfferStatus:(id)arg1;	// IMP=0x0000000000028778
- (void)setOfferInteractive:(_Bool)arg1;	// IMP=0x000000000002872c
- (void)setOfferEnabled:(_Bool)arg1;	// IMP=0x00000000000286e0
- (void)setOfferMetadata:(id)arg1;	// IMP=0x00000000000285dc
- (id)saveOfferState;	// IMP=0x0000000000028526
- (void)setDisplayContext:(id)arg1;	// IMP=0x00000000000284a4
- (void)setLoading:(_Bool)arg1;	// IMP=0x0000000000028352
- (void)setPrefersRightToLeftLayout:(_Bool)arg1;	// IMP=0x0000000000028328
- (void)setSubtitle:(id)arg1;	// IMP=0x00000000000282b0
- (void)setTitle:(id)arg1;	// IMP=0x0000000000028238
- (void)setHeading:(id)arg1;	// IMP=0x00000000000280a6
- (void)setIconImage:(id)arg1 withDecoration:(id)arg2;	// IMP=0x0000000000027fe4
- (void)removeOfferTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000027cc2
- (void)addOfferTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000027c44
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000027ae8
- (void)layoutSubviews;	// IMP=0x00000000000279dd
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000277fa
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000277d8
- (void)invalidateIntrinsicContentSize;	// IMP=0x0000000000027757
- (double)minimumLockupHeight;	// IMP=0x0000000000027707
- (id)makeLayout;	// IMP=0x00000000000275a3
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000000027434
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000273bd
@property(copy, nonatomic) UIColor *loadingColor;
@property(readonly, nonatomic) struct CGSize preferredIconSize;
@property(readonly, nonatomic) UILabel *headingLabel;
@property(readonly, nonatomic) UILabel *offerStatusLabel;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026dd3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026da8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000026663
- (_Bool)shouldHideOfferStatus;	// IMP=0x000000000002662a
- (_Bool)shouldHideSubtitle;	// IMP=0x000000000002655c
- (_Bool)shouldHideTitle;	// IMP=0x000000000002654a
- (_Bool)shouldHideHeading;	// IMP=0x0000000000026516
- (_Bool)shouldHideIconArtwork;	// IMP=0x0000000000026504
- (_Bool)isMiniLockup;	// IMP=0x0000000000026403
- (_Bool)isSmallOfferButtonOnlyLockup;	// IMP=0x00000000000263ac
@property(readonly, nonatomic) _Bool isOfferButtonOnlyLockup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

