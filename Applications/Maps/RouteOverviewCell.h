//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BackgroundColorButton, DirectionsElevationGraphView, MapsProgressButton, MapsThemeMultiPartLabel, NSArray, NSLayoutConstraint, RouteAdvisoriesView, TransitArtworkListView, UIButton, UIImage, UIImageView, UILabel, UILayoutGuide, UITapGestureRecognizer;
@protocol RouteOverviewCellDelegate;

@interface RouteOverviewCell
{
    _Bool _tertiaryLabelVisible;	// 8 = 0x8
    _Bool _artworkListVisible;	// 9 = 0x9
    _Bool _elevationGraphViewVisible;	// 10 = 0xa
    _Bool _detailsButtonVisible;	// 11 = 0xb
    _Bool _selectionBackgroundVisible;	// 12 = 0xc
    _Bool _advisoriesViewVisible;	// 13 = 0xd
    _Bool _detailsButtonRotated;	// 14 = 0xe
    _Bool _hasSelectedStep;	// 15 = 0xf
    UILabel *_tertiaryLabel;	// 16 = 0x10
    DirectionsElevationGraphView *_elevationGraphView;	// 24 = 0x18
    TransitArtworkListView *_artworkList;	// 32 = 0x20
    RouteAdvisoriesView *_advisoriesView;	// 40 = 0x28
    UILabel *_primaryLabel;	// 48 = 0x30
    MapsThemeMultiPartLabel *_secondaryLabel;	// 56 = 0x38
    NSLayoutConstraint *_minimumHeightConstraint;	// 64 = 0x40
    unsigned long long _buttonVisibility;	// 72 = 0x48
    long long _overrideCellGrouping;	// 80 = 0x50
    id <RouteOverviewCellDelegate> _delegate;	// 88 = 0x58
    MapsProgressButton *_goButton;	// 96 = 0x60
    BackgroundColorButton *_bookButton;	// 104 = 0x68
    UIImageView *_primaryLabelCompanionImageView;	// 112 = 0x70
    UIButton *_detailsButton;	// 120 = 0x78
    UILayoutGuide *_contentGuide;	// 128 = 0x80
    UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 136 = 0x88
    NSLayoutConstraint *_contentTopConstraint;	// 144 = 0x90
    NSLayoutConstraint *_contentBottomConstraint;	// 152 = 0x98
    NSLayoutConstraint *_goButtonWidthConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_goButtonHeightConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_labelTrailingToPrimaryButtonLeadingPaddingConstraint;	// 176 = 0xb0
    NSLayoutConstraint *_primaryToSecondaryLabelConstraint;	// 184 = 0xb8
    NSLayoutConstraint *_primaryCompanionImageToLabelPaddingConstraint;	// 192 = 0xc0
    NSLayoutConstraint *_primaryCompanionImageWidthConstraint;	// 200 = 0xc8
    NSLayoutConstraint *_noButtonLeadingConstraint;	// 208 = 0xd0
    NSLayoutConstraint *_goButtonLeadingConstraint;	// 216 = 0xd8
    NSLayoutConstraint *_bookButtonLeadingConstraint;	// 224 = 0xe0
    NSArray *_tertiaryLabelConstraints;	// 232 = 0xe8
    NSArray *_artworkListConstraints;	// 240 = 0xf0
    NSArray *_elevationGraphViewConstraints;	// 248 = 0xf8
    NSArray *_advisoriesViewConstraints;	// 256 = 0x100
    NSArray *_detailsButtonConstraints;	// 264 = 0x108
    UILayoutGuide *_labelTrailingToGoButtonLeadingLayoutGuide;	// 272 = 0x110
}

+ (_Bool)_maps_overridePreferredLayoutAttributesWithCompressedSize;	// IMP=0x0040000000bc2306
+ (id)tertiaryLabelBoldFont;	// IMP=0x0010000000bc1185
+ (CDUnknownBlockType)goButtonFontProvider;	// IMP=0x0010000000bc116c
+ (CDUnknownBlockType)secondaryLabelFontProvider;	// IMP=0x0010000000bc1102
+ (CDUnknownBlockType)primaryLabelEnlargedFontProvider;	// IMP=0x0010000000bc10e9
+ (CDUnknownBlockType)primaryLabelFontProvider;	// IMP=0x0010000000bc107f
+ (double)horizontalBackgroundInset;	// IMP=0x0010000000bc1023
+ (double)horizontalContentInset;	// IMP=0x0010000000bc0fc7
+ (double)minimumVerticalPadding;	// IMP=0x0010000000bc0f6b
+ (double)minimumRidesharingHeight;	// IMP=0x0010000000bc0f5d
+ (double)minimumHeight;	// IMP=0x0010000000bc0f01
- (void).cxx_destruct;	// IMP=0x0020000000bc7818
@property(retain, nonatomic) UILayoutGuide *labelTrailingToGoButtonLeadingLayoutGuide; // @synthesize labelTrailingToGoButtonLeadingLayoutGuide=_labelTrailingToGoButtonLeadingLayoutGuide;
@property(retain, nonatomic) NSArray *detailsButtonConstraints; // @synthesize detailsButtonConstraints=_detailsButtonConstraints;
@property(retain, nonatomic) NSArray *advisoriesViewConstraints; // @synthesize advisoriesViewConstraints=_advisoriesViewConstraints;
@property(retain, nonatomic) NSArray *elevationGraphViewConstraints; // @synthesize elevationGraphViewConstraints=_elevationGraphViewConstraints;
@property(retain, nonatomic) NSArray *artworkListConstraints; // @synthesize artworkListConstraints=_artworkListConstraints;
@property(retain, nonatomic) NSArray *tertiaryLabelConstraints; // @synthesize tertiaryLabelConstraints=_tertiaryLabelConstraints;
@property(retain, nonatomic) NSLayoutConstraint *bookButtonLeadingConstraint; // @synthesize bookButtonLeadingConstraint=_bookButtonLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *goButtonLeadingConstraint; // @synthesize goButtonLeadingConstraint=_goButtonLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *noButtonLeadingConstraint; // @synthesize noButtonLeadingConstraint=_noButtonLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryCompanionImageWidthConstraint; // @synthesize primaryCompanionImageWidthConstraint=_primaryCompanionImageWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryCompanionImageToLabelPaddingConstraint; // @synthesize primaryCompanionImageToLabelPaddingConstraint=_primaryCompanionImageToLabelPaddingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryToSecondaryLabelConstraint; // @synthesize primaryToSecondaryLabelConstraint=_primaryToSecondaryLabelConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelTrailingToPrimaryButtonLeadingPaddingConstraint; // @synthesize labelTrailingToPrimaryButtonLeadingPaddingConstraint=_labelTrailingToPrimaryButtonLeadingPaddingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *goButtonHeightConstraint; // @synthesize goButtonHeightConstraint=_goButtonHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *goButtonWidthConstraint; // @synthesize goButtonWidthConstraint=_goButtonWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentBottomConstraint; // @synthesize contentBottomConstraint=_contentBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentTopConstraint; // @synthesize contentTopConstraint=_contentTopConstraint;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) UILayoutGuide *contentGuide; // @synthesize contentGuide=_contentGuide;
@property(retain, nonatomic) UIButton *detailsButton; // @synthesize detailsButton=_detailsButton;
@property(readonly, nonatomic) UIImageView *primaryLabelCompanionImageView; // @synthesize primaryLabelCompanionImageView=_primaryLabelCompanionImageView;
@property(readonly, nonatomic) BackgroundColorButton *bookButton; // @synthesize bookButton=_bookButton;
@property(readonly, nonatomic) MapsProgressButton *goButton; // @synthesize goButton=_goButton;
@property(nonatomic) _Bool hasSelectedStep; // @synthesize hasSelectedStep=_hasSelectedStep;
@property(nonatomic) __weak id <RouteOverviewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool detailsButtonRotated; // @synthesize detailsButtonRotated=_detailsButtonRotated;
@property(nonatomic) long long overrideCellGrouping; // @synthesize overrideCellGrouping=_overrideCellGrouping;
@property(nonatomic, getter=isAdvisoriesViewVisible) _Bool advisoriesViewVisible; // @synthesize advisoriesViewVisible=_advisoriesViewVisible;
@property(nonatomic) unsigned long long buttonVisibility; // @synthesize buttonVisibility=_buttonVisibility;
@property(nonatomic, getter=isSelectionBackgroundVisible) _Bool selectionBackgroundVisible; // @synthesize selectionBackgroundVisible=_selectionBackgroundVisible;
@property(nonatomic, getter=isDetailsButtonVisible) _Bool detailsButtonVisible; // @synthesize detailsButtonVisible=_detailsButtonVisible;
@property(nonatomic, getter=isElevationGraphViewVisible) _Bool elevationGraphViewVisible; // @synthesize elevationGraphViewVisible=_elevationGraphViewVisible;
@property(nonatomic, getter=isArtworkListVisible) _Bool artworkListVisible; // @synthesize artworkListVisible=_artworkListVisible;
@property(nonatomic, getter=isTertiaryLabelVisible) _Bool tertiaryLabelVisible; // @synthesize tertiaryLabelVisible=_tertiaryLabelVisible;
@property(readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(readonly, nonatomic) MapsThemeMultiPartLabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void)prepareForReuse;	// IMP=0x0010000000bc73cd
- (void)_didTapAutomaticSharingButton;	// IMP=0x0010000000bc7330
- (void)_didTapDetailsButton:(id)arg1;	// IMP=0x0010000000bc7293
- (void)_didTapPrimaryActionButton:(id)arg1;	// IMP=0x0010000000bc7247
- (void)_updateColorsForSelection;	// IMP=0x0010000000bc6ef4
- (void)_updateConstraintsForArtworkListVisible:(_Bool)arg1 elevationGraphViewVisible:(_Bool)arg2 advisoriesViewVisible:(_Bool)arg3 tertiaryLabelVisible:(_Bool)arg4 detailsButtonVisible:(_Bool)arg5;	// IMP=0x0010000000bc5a1e
- (void)updateConstraints;	// IMP=0x0010000000bc5966
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x0010000000bc588e
- (id)keyCommands;	// IMP=0x0010000000bc57ec
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0010000000bc56b5
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0010000000bc5674
- (void)_updateGoButtonWidthConstraint;	// IMP=0x0010000000bc525d
- (void)_resetBookButtonTitle;	// IMP=0x0010000000bc5195
@property(nonatomic, getter=isGoButtonProgressVisible) _Bool goButtonProgressVisible;
@property(nonatomic) double goButtonProgress;
- (void)setBookButtonTitle:(id)arg1;	// IMP=0x0010000000bc4fb7
- (void)_updateButtonVisibility;	// IMP=0x0010000000bc4bd3
- (void)_setDetailsButtonRotated:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000bc47d7
- (void)setDetailsButtonRotated:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000bc474f
@property(readonly, nonatomic) RouteAdvisoriesView *advisoriesView; // @synthesize advisoriesView=_advisoriesView;
@property(readonly, nonatomic) DirectionsElevationGraphView *elevationGraphView; // @synthesize elevationGraphView=_elevationGraphView;
@property(readonly, nonatomic) TransitArtworkListView *artworkList; // @synthesize artworkList=_artworkList;
@property(readonly, nonatomic) UILabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
- (long long)_resolvedGrouping;	// IMP=0x0010000000bc3f52
- (void)_doubleTap:(id)arg1;	// IMP=0x0010000000bc3eb5
- (void)_setupConstraints;	// IMP=0x0010000000bc25e3
- (void)updateTheme;	// IMP=0x0010000000bc230e
@property(retain, nonatomic) UIImage *primaryLabelCompanionImage;
- (void)_createSubviews;	// IMP=0x0010000000bc16d4
- (void)customInit;	// IMP=0x0010000000bc1263
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000bc1205
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000bc1196

@end

