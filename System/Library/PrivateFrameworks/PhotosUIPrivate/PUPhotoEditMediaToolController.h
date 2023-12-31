//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEKApertureButton, CEKEdgeGradientView, NSLayoutConstraint, NSMutableArray, NSString, PLRoundProgressView, PTCinematographyScript, PUPhotoEditApertureToolbar, PUTrimToolController, PUVideoEditOverlayViewController, PXCinematicEditController, PXUIButton, UIButton, UILabel, UILayoutGuide, UIView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditMediaToolController
{
    _UIBackdropView *_backdropBackgroundView;	// 16 = 0x10
    UIView *_solidBackgroundView;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
    NSLayoutConstraint *_viewHeightConstraint;	// 40 = 0x28
    NSLayoutConstraint *_leadingWidthConstraint;	// 48 = 0x30
    NSLayoutConstraint *_trailingWidthConstraint;	// 56 = 0x38
    NSMutableArray *_constraints;	// 64 = 0x40
    PUTrimToolController *_trimController;	// 72 = 0x48
    PXUIButton *_muteButton;	// 80 = 0x50
    PXUIButton *_livePhotoButton;	// 88 = 0x58
    UILabel *_videoLabelView;	// 96 = 0x60
    UIButton *_stabilizeButton;	// 104 = 0x68
    PLRoundProgressView *_stabilizeProgressView;	// 112 = 0x70
    _Bool _cinematicButtonsNeedDimmingViews;	// 120 = 0x78
    PXUIButton *_portraitVideoButton;	// 128 = 0x80
    UIView *_portraitVideoButtonDimmingView;	// 136 = 0x88
    CEKApertureButton *_apertureButton;	// 144 = 0x90
    UIView *_apertureButtonContainerDimmingView;	// 152 = 0x98
    UIView *_apertureButtonContainer;	// 160 = 0xa0
    PXUIButton *_autoFocusButton;	// 168 = 0xa8
    PUVideoEditOverlayViewController *_overlayController;	// 176 = 0xb0
    UIView *_apertureContainer;	// 184 = 0xb8
    PUPhotoEditApertureToolbar *_apertureToolbar;	// 192 = 0xc0
    UILayoutGuide *_apertureContainerLayoutGuide;	// 200 = 0xc8
    long long _toolMode;	// 208 = 0xd0
    PXCinematicEditController *_cinematographyController;	// 216 = 0xd8
    CEKEdgeGradientView *_apertureGradientView;	// 224 = 0xe0
    _Bool _trimControllerVisible;	// 232 = 0xe8
    _Bool _viewHasAppeared;	// 233 = 0xe9
    _Bool _trimControllerScrubberNeedsVisualUpdate;	// 234 = 0xea
    _Bool _stabilizationInProgress;	// 235 = 0xeb
    CDStruct_1b6d18a9 _originalStillImageTime;	// 236 = 0xec
    _Bool _useTranslucentBackground;	// 260 = 0x104
    long long _layoutType;	// 264 = 0x108
    UIView *_primaryView;	// 272 = 0x110
    double _horizontalControlPadding;	// 280 = 0x118
    double _horizontalPrimaryViewPaddingOffset;	// 288 = 0x120
    double _verticalButtonOffset;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x000000000031f78c
@property(nonatomic) _Bool useTranslucentBackground; // @synthesize useTranslucentBackground=_useTranslucentBackground;
@property(nonatomic) double verticalButtonOffset; // @synthesize verticalButtonOffset=_verticalButtonOffset;
@property(readonly, nonatomic) double horizontalPrimaryViewPaddingOffset; // @synthesize horizontalPrimaryViewPaddingOffset=_horizontalPrimaryViewPaddingOffset;
@property(nonatomic) double horizontalControlPadding; // @synthesize horizontalControlPadding=_horizontalControlPadding;
@property(retain, nonatomic) UIView *primaryView; // @synthesize primaryView=_primaryView;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
- (void)apertureToolbarDidStopSliding:(id)arg1;	// IMP=0x000000000031f6d2
- (void)apertureToolbarDidStartSliding:(id)arg1;	// IMP=0x000000000031f6c0
- (_Bool)apertureToolbarShouldRotateLabelsWithOrientation:(id)arg1;	// IMP=0x000000000031f677
- (void)apertureToolbar:(id)arg1 didChangeValue:(double)arg2;	// IMP=0x000000000031f63e
- (void)addCropToolGainMapIfNeeded;	// IMP=0x000000000031f601
- (void)removeCropToolGainMap;	// IMP=0x000000000031f5c4
- (void)trimToolController:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2;	// IMP=0x000000000031f54c
- (void)trimToolController:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;	// IMP=0x000000000031f4f4
- (id)axDescriptionForFocusDecisionAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000031f4d7
- (void)removeFocusDecisionAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000031f412
- (void)trimToolControllerDidChange:(id)arg1 state:(unsigned long long)arg2;	// IMP=0x000000000031f2cd
- (void)didRemoveUserDecision;	// IMP=0x000000000031f2bb
- (_Bool)hasTrimmedVideo;	// IMP=0x000000000031f211
- (void)interactionBegan;	// IMP=0x000000000031f1c9
- (void)objectTrackingFinishedWithSuccess:(_Bool)arg1;	// IMP=0x000000000031f172
- (void)trackedObjectWasUpdatedAtTime:(CDStruct_1b6d18a9)arg1 shouldStop:(_Bool *)arg2;	// IMP=0x000000000031f107
- (void)objectTrackingStartedAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000031f0a6
- (void)updateCinematicVideoControlsEnableState;	// IMP=0x000000000031efca
- (void)cinematographyWasEditedAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000031eec1
- (void)cinematographyWasEdited;	// IMP=0x000000000031edfe
- (void)cineScriptCouldNotInitializeWithError:(id)arg1;	// IMP=0x000000000031ed33
- (void)cineScriptBecameAvailable:(id)arg1;	// IMP=0x000000000031eb1c
- (void)disableCinematicUIForLoadingAsset;	// IMP=0x000000000031eaa3
- (void)_initializeCinematographyScript;	// IMP=0x000000000031e802
- (void)_handleAutoFocusButton:(id)arg1;	// IMP=0x000000000031e6ad
- (void)_updateApertureSliderLength;	// IMP=0x000000000031e5b3
- (void)_dismissPortraitVideoDebugControls:(id)arg1;	// IMP=0x000000000031e59a
- (void)_presentPortraitVideoDebugControls;	// IMP=0x000000000031e23c
- (void)_handlePortraitVideoButtonLongPress:(id)arg1;	// IMP=0x000000000031e200
- (void)_handlePortraitVideoButton:(id)arg1;	// IMP=0x000000000031e00a
- (void)_setToolMode:(long long)arg1;	// IMP=0x000000000031df73
- (void)_resetDefaultToolMode;	// IMP=0x000000000031df5f
- (void)_handleApertureButton:(id)arg1;	// IMP=0x000000000031df3c
- (void)_updateApertureControlsAnimated:(_Bool)arg1;	// IMP=0x000000000031dc6b
- (void)_updateTrackerDisplay:(_Bool)arg1;	// IMP=0x000000000031db50
- (void)_updatePortraitVideoButtonAnimated:(_Bool)arg1;	// IMP=0x000000000031d9ef
- (_Bool)_wantsPortraitVideoControls;	// IMP=0x000000000031d9ab
@property(readonly, nonatomic) PTCinematographyScript *cinematographyScript;
- (void)_updateStabilizationInProgress:(_Bool)arg1;	// IMP=0x000000000031d94c
- (void)_reportStabilizeProgress:(double)arg1;	// IMP=0x000000000031d8de
- (void)_updateStabilizeProgressViewAnimated:(_Bool)arg1;	// IMP=0x000000000031d6dc
- (void)_handleStabilizeButton:(id)arg1;	// IMP=0x000000000031d3d9
- (void)_updateStabilizeButtonAnimated:(_Bool)arg1;	// IMP=0x000000000031d20b
- (void)_handleMuteButton:(id)arg1;	// IMP=0x000000000031d12d
- (void)_updateMuteButtonAnimated:(_Bool)arg1;	// IMP=0x000000000031cd6c
- (id)_localizedTitleForCurrentPlaybackVariation;	// IMP=0x000000000031ccb8
- (void)_handleLivePhotoButton:(id)arg1;	// IMP=0x000000000031cc7b
- (void)_updateLivePhotoButton:(id)arg1;	// IMP=0x000000000031cc64
- (void)_updateLivePhotoButtonAnimated:(_Bool)arg1;	// IMP=0x000000000031cb17
- (void)togglePlayback:(id)arg1;	// IMP=0x000000000031cab2
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000031ca2f
- (void)updateToolbarButtonsAnimated:(_Bool)arg1;	// IMP=0x000000000031c99c
- (void)reloadToolbarButtons:(_Bool)arg1;	// IMP=0x000000000031c84f
- (void)videoRenderingChanged;	// IMP=0x000000000031c7f2
- (void)_invalidateTrimControlScrubberThumbnails;	// IMP=0x000000000031c7e1
@property(readonly, nonatomic) PUTrimToolController *trimController;
- (id)makeTrimToolController;	// IMP=0x000000000031c439
- (_Bool)_updateAutoFocusToolbarButton;	// IMP=0x000000000031c19a
- (void)_updateTrimControlAndToolbarButtons;	// IMP=0x0000000000319c5a
- (_Bool)_wantsTrimControl;	// IMP=0x0000000000319afe
- (_Bool)_isTrimAllowed;	// IMP=0x00000000003199f2
- (void)_updateBackgroundAnimated:(_Bool)arg1;	// IMP=0x00000000003197e4
- (long long)toolControllerTag;	// IMP=0x00000000003197d9
- (id)trailingToolbarViews;	// IMP=0x00000000003196ba
- (id)centerToolbarView;	// IMP=0x0000000000319682
- (id)leadingToolbarViews;	// IMP=0x0000000000319563
- (_Bool)wantsSecondaryToolbarVisible;	// IMP=0x000000000031955b
- (void)setUseGradientBackground:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003193e3
- (void)setBackdropViewGroupName:(id)arg1;	// IMP=0x00000000003192fd
- (id)accessibilityHUDItemForButton:(id)arg1;	// IMP=0x0000000000319129
- (void)mediaViewDidScroll:(id)arg1;	// IMP=0x0000000000319107
- (void)mediaView:(id)arg1 didZoom:(double)arg2;	// IMP=0x00000000003190e5
- (void)decreaseScrubberValue:(_Bool)arg1;	// IMP=0x00000000003190ba
- (void)increaseScrubberValue:(_Bool)arg1;	// IMP=0x0000000000319094
- (long long)scrubberOrientation;	// IMP=0x0000000000319089
- (_Bool)wantsScrubberKeyControl;	// IMP=0x0000000000319081
- (_Bool)wantsZoomAndPanEnabled;	// IMP=0x0000000000319079
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;	// IMP=0x0000000000318e26
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5;	// IMP=0x0000000000318dc9
- (void)willResignActiveTool;	// IMP=0x0000000000318d72
- (void)reactivate;	// IMP=0x0000000000318d60
- (void)willBecomeActiveTool;	// IMP=0x0000000000318ce7
- (void)setPlaceholderImage:(id)arg1;	// IMP=0x0000000000318c47
- (void)photoEditLivePhotoModelUpdated;	// IMP=0x0000000000318c35
- (void)baseMediaInvalidated;	// IMP=0x0000000000318bf4
- (void)updateForIncomingAnimation;	// IMP=0x0000000000318bb3
- (void)setOriginalStillImageTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000318b49
- (_Bool)canResetToDefaultValue;	// IMP=0x0000000000318b41
- (id)toolbarIconAccessibilityLabel;	// IMP=0x0000000000318aa8
- (id)toolbarIcon;	// IMP=0x0000000000318972
- (id)localizedName;	// IMP=0x00000000003188d9
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000318642
- (void)_updateToolVisibilityAnimated:(_Bool)arg1;	// IMP=0x0000000000318516
- (void)_invalidateConstraints;	// IMP=0x0000000000318483
- (void)updateViewConstraints;	// IMP=0x0000000000316b85
@property(readonly, nonatomic) UIButton *livePhotoButton;
- (void)_layoutToolGradient;	// IMP=0x00000000003169d0
- (void)viewDidLayoutSubviews;	// IMP=0x000000000031698f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000316921
- (void)loadView;	// IMP=0x000000000031678a
- (id)init;	// IMP=0x0000000000316593
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000316581

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

