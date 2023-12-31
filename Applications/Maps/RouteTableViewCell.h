//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsLargerHitTargetButton, NSLayoutAnchor, NSLayoutConstraint, Route, RouteTableViewCellButtonConstraintsController, _MKUILabel;
@protocol RouteTableViewCellDelegate;

@interface RouteTableViewCell
{
    _MKUILabel *_primaryLabel;	// 8 = 0x8
    _MKUILabel *_secondaryLabel;	// 16 = 0x10
    NSLayoutConstraint *_leftPaddingConstraint;	// 24 = 0x18
    NSLayoutConstraint *_secondaryLabelToContentViewConstraint;	// 32 = 0x20
    NSLayoutConstraint *_primaryToTopViewConstraint;	// 40 = 0x28
    NSLayoutConstraint *_secondaryToPrimaryConstraint;	// 48 = 0x30
    NSLayoutConstraint *_secondaryLabelToBottomConstraint;	// 56 = 0x38
    _Bool _useRoutePreviewDescription;	// 64 = 0x40
    _Bool __maps_shouldHaveFullLengthBottomSeparator;	// 65 = 0x41
    _Bool _showDisclosureButton;	// 66 = 0x42
    Route *_route;	// 72 = 0x48
    MapsLargerHitTargetButton *_disclosureButton;	// 80 = 0x50
    RouteTableViewCellButtonConstraintsController *_buttonConstraintsController;	// 88 = 0x58
    id <RouteTableViewCellDelegate> _delegate;	// 96 = 0x60
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00400000005a631b
+ (double)estimatedHeight;	// IMP=0x00100000005a5e6a
+ (id)reuseIdentifier;	// IMP=0x00100000005a5e60
- (void).cxx_destruct;	// IMP=0x00200000005a75b4
@property(nonatomic) __weak id <RouteTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) RouteTableViewCellButtonConstraintsController *buttonConstraintsController; // @synthesize buttonConstraintsController=_buttonConstraintsController;
@property(nonatomic) _Bool showDisclosureButton; // @synthesize showDisclosureButton=_showDisclosureButton;
@property(readonly, nonatomic) MapsLargerHitTargetButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(nonatomic) _Bool _maps_shouldHaveFullLengthBottomSeparator; // @synthesize _maps_shouldHaveFullLengthBottomSeparator=__maps_shouldHaveFullLengthBottomSeparator;
@property(nonatomic) _Bool useRoutePreviewDescription; // @synthesize useRoutePreviewDescription=_useRoutePreviewDescription;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
- (void)_disclosureButtonTapped:(id)arg1;	// IMP=0x00100000005a74d8
@property(readonly, nonatomic) RouteTableViewCellButtonConstraintsController *_buttonConstraintsController;
- (id)_disclosureButtonFont;	// IMP=0x00100000005a73bf
- (id)_disclosureButton;	// IMP=0x00100000005a7243
- (void)setSeparatorInset:(struct UIEdgeInsets)arg1;	// IMP=0x00100000005a70bc
- (void)_setShouldHaveFullLengthBottomSeparator:(_Bool)arg1;	// IMP=0x00100000005a705c
- (void)_updateCellLabels;	// IMP=0x00100000005a6ce7
- (void)_updateFonts;	// IMP=0x00100000005a6b82
- (void)_localeDidChange:(id)arg1;	// IMP=0x00100000005a6b70
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00100000005a6b35
@property(readonly, nonatomic) double _distanceToPositionPrimaryLabelFirstBaseline;
@property(readonly, nonatomic) NSLayoutAnchor *_anchorFromWhichToPositionPrimaryLabelFirstBaseline;
- (void);	// IMP=0x00100000005a68b4
- (id)_autolayoutConstraints;	// IMP=0x00100000005a6323
- (void)didMoveToWindow;	// IMP=0x00100000005a62da
- (void)_createSubviews;	// IMP=0x00100000005a60d4
- (void)dealloc;	// IMP=0x00100000005a605f
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000005a5f4f
- (id)init;	// IMP=0x00100000005a5ef2

@end

