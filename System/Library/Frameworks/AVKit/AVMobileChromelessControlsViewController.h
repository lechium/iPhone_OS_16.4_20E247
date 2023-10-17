//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVButton, AVMediaSelectionMenuController, AVMobileAuxiliaryControl, AVMobileAuxiliaryControlsView, AVMobileChromelessBackgroundGradientView, AVMobileChromelessControlsStyleSheet, AVMobileChromelessDisplayModeControlsView, AVMobileChromelessPlaybackControlsView, AVMobileChromelessTimelineView, AVMobileChromelessVolumeControlsView, AVMobileContentTagView, AVMobilePlaybackRateMenuController, AVMobileSliderMark, AVMobileTitlebarView, AVObservationController, AVPlayerControllerTimeResolver, AVRoutePickerView, AVTimeFormatter, NSArray, NSLayoutConstraint, NSString, NSTimer, UIAction, UILayoutGuide, UIMenu, UIView, UIViewPropertyAnimator;
@protocol AVMobileChromelessControlsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVMobileChromelessControlsViewController
{
    AVObservationController *_observationController;	// 8 = 0x8
    AVObservationController *_webKitExcludedObservationController;	// 16 = 0x10
    _Bool _hasBeenSetUp;	// 24 = 0x18
    AVMobileChromelessControlsStyleSheet *_styleSheet;	// 32 = 0x20
    UIView *_view;	// 40 = 0x28
    AVMobileChromelessBackgroundGradientView *_gradientBackgroundView;	// 48 = 0x30
    AVMobileChromelessDisplayModeControlsView *_displayModeControlsView;	// 56 = 0x38
    AVMobileChromelessPlaybackControlsView *_playbackControlsView;	// 64 = 0x40
    AVMobileChromelessVolumeControlsView *_volumeControlsView;	// 72 = 0x48
    AVMobileChromelessTimelineView *_timelineView;	// 80 = 0x50
    AVMobileTitlebarView *_titlebarView;	// 88 = 0x58
    AVMobileAuxiliaryControlsView *_auxiliaryControlsView;	// 96 = 0x60
    AVRoutePickerView *_routePickerView;	// 104 = 0x68
    NSArray *_pinnedAuxiliaryControls;	// 112 = 0x70
    AVMobileAuxiliaryControl *_audibleMediaSelectionControl;	// 120 = 0x78
    AVMobileAuxiliaryControl *_legibleMediaSelectionControl;	// 128 = 0x80
    AVMobileAuxiliaryControl *_playbackSpeedControl;	// 136 = 0x88
    AVMobileAuxiliaryControl *_routePickerControl;	// 144 = 0x90
    AVMobileAuxiliaryControl *_jumpToLiveControl;	// 152 = 0x98
    AVMobileAuxiliaryControl *_analysisControl;	// 160 = 0xa0
    UIMenu *_audibleMediaSelectionMenu;	// 168 = 0xa8
    UIMenu *_legibleMediaSelectionMenu;	// 176 = 0xb0
    AVButton *_analysisToggleButton;	// 184 = 0xb8
    AVButton *_jumpToLiveButton;	// 192 = 0xc0
    UIAction *_analysisToggleAction;	// 200 = 0xc8
    double _systemKeyboardUIHeight;	// 208 = 0xd0
    UIViewPropertyAnimator *_keyboardUIAvoidanceAnimator;	// 216 = 0xd8
    _Bool _volumeSliderTemporarilyVisibileInFullscreen;	// 224 = 0xe0
    UIViewPropertyAnimator *_volumeControlsEmphasisAnimator;	// 232 = 0xe8
    UIViewPropertyAnimator *_volumeControlsSliderAnimator;	// 240 = 0xf0
    NSTimer *_volumeEmphasisAnimationDelayTimer;	// 248 = 0xf8
    NSTimer *_volumeSliderTemporarilyVisibleTimer;	// 256 = 0x100
    AVPlayerControllerTimeResolver *_timeResolver;	// 264 = 0x108
    AVTimeFormatter *_elapsedTimeFormatter;	// 272 = 0x110
    AVTimeFormatter *_remainingTimeFormatter;	// 280 = 0x118
    _Bool _needsTimeResolverUpdate;	// 288 = 0x120
    AVMobilePlaybackRateMenuController *_playbackSpeedMenuController;	// 296 = 0x128
    AVMediaSelectionMenuController *_mediaSelectionMenuController;	// 304 = 0x130
    _Bool _runningLoadingAnimation;	// 312 = 0x138
    UIViewPropertyAnimator *_loadingAnimator;	// 320 = 0x140
    struct AVMobileChromelessControlsVisibilityState_st _currentVisibilityState;	// 328 = 0x148
    _Bool _needsControlsVisibilityStateUpdate;	// 344 = 0x158
    NSTimer *_visibilityTimer;	// 352 = 0x160
    UIViewPropertyAnimator *_visibilityAnimator;	// 360 = 0x168
    _Bool _controlsExpanded;	// 368 = 0x170
    _Bool _temporarilyVisibile;	// 369 = 0x171
    long long _userInteractionCount;	// 376 = 0x178
    _Bool _canFitVolumeControls;	// 384 = 0x180
    _Bool _canFitDisplayModeControls;	// 385 = 0x181
    _Bool _canFitPlaybackControls;	// 386 = 0x182
    _Bool _canFitTimelineControls;	// 387 = 0x183
    _Bool _canFitTitlebar;	// 388 = 0x184
    _Bool _canFitAuxiliaryControls;	// 389 = 0x185
    UILayoutGuide *_displayModeControlsLayoutGuide;	// 392 = 0x188
    UILayoutGuide *_transportControlsLayoutGuide;	// 400 = 0x190
    UILayoutGuide *_volumeControlsLayoutGuide;	// 408 = 0x198
    NSLayoutConstraint *_currentTransportControlsTopAnchorConstraint;	// 416 = 0x1a0
    NSLayoutConstraint *_titlebarViewTopAnchorConstraint;	// 424 = 0x1a8
    NSLayoutConstraint *_timelineTopAnchorConstraint;	// 432 = 0x1b0
    NSLayoutConstraint *_auxiliaryControlsViewTopAnchorConstraint;	// 440 = 0x1b8
    NSLayoutConstraint *_defaultTopAnchorConstraint;	// 448 = 0x1c0
    NSArray *_auxiliaryControlsForControlItems;	// 456 = 0x1c8
    UIViewPropertyAnimator *_timelineSliderEmphasisAnimator;	// 464 = 0x1d0
    AVMobileContentTagView *_liveEdgeMarkContentTagView;	// 472 = 0x1d8
    AVMobileSliderMark *_liveEdgeSliderMark;	// 480 = 0x1e0
    _Bool _showsAnalysisControl;	// 488 = 0x1e8
}

- (void).cxx_destruct;	// IMP=0x00000000000cef00
@property(nonatomic) _Bool showsAnalysisControl; // @synthesize showsAnalysisControl=_showsAnalysisControl;
- (id)_sliderMarkForInterstitialTimeRange:(id)arg1;	// IMP=0x00000000000cee70
- (void)_timelineSliderTrackingStateDidChange:(id)arg1;	// IMP=0x00000000000cee66
- (void)_timelineSliderDidChangeValue:(id)arg1;	// IMP=0x00000000000ced50
- (void)_handleJumpToLiveButton;	// IMP=0x00000000000ced04
- (void)_handleAnalysisToggleButton;	// IMP=0x00000000000cec67
- (void)_setUpControlsViewsForVisibileControlsStateIfNeeded:(struct AVMobileChromelessControlsVisibilityState_st)arg1;	// IMP=0x00000000000ceaaa
- (void)_updateVolumeControlsViewAllowsVolumeAdjustmentState;	// IMP=0x00000000000cea43
- (void)_updatePrefersVolumeSliderIncludedAnimated:(_Bool)arg1;	// IMP=0x00000000000ce7da
- (void)_updateLegibleMediaSelectionControlInclusionState;	// IMP=0x00000000000ce779
- (void)_updatePrefersSystemVolumeHUDHidden;	// IMP=0x00000000000ce718
- (void)_updateAudibleMediaSelectionControlInclusionState;	// IMP=0x00000000000ce6b7
- (void)_updateStyleSheet;	// IMP=0x00000000000ce5c9
- (void)_updateControlsVisibilityStateIfNeededAnimated:(id)arg1;	// IMP=0x00000000000ce58b
- (void)_incrementUserInteractionCount;	// IMP=0x00000000000ce559
- (void)_willBeginUpdatingControlsVisibilityStateTo:(struct AVMobileChromelessControlsVisibilityState_st)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000ce3fd
- (void)_didEndUpdatingControlsVisibilityStateTo:(struct AVMobileChromelessControlsVisibilityState_st)arg1 completed:(_Bool)arg2;	// IMP=0x00000000000ce3a8
- (void)_didBeginUpdatingControlsVisibilityStateTo:(struct AVMobileChromelessControlsVisibilityState_st)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000ce2c0
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;	// IMP=0x00000000000ce2b6
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;	// IMP=0x00000000000ce2a4
- (void)webkitPlayerController:(id)arg1 didUpdateSeekToTime:(double)arg2;	// IMP=0x00000000000ce29a
- (void)webkitPlayerController:(id)arg1 didChangeScrubbingStateTo:(_Bool)arg2;	// IMP=0x00000000000ce27e
- (void)fullscreenControllerDidChangePresentationState:(id)arg1;	// IMP=0x00000000000ce220
- (void)slider:(id)arg1 didUpdateFrame:(struct CGRect)arg2 forSliderMark:(id)arg3;	// IMP=0x00000000000ce156
- (void)sliderDidEndTracking:(id)arg1;	// IMP=0x00000000000ce0e5
- (void)sliderDidBeginTracking:(id)arg1;	// IMP=0x00000000000ce06f
- (void)playbackControlsViewRightSecondaryControlWasPressed:(id)arg1;	// IMP=0x00000000000cdf5c
- (void)playbackControlsViewLeftSecondaryControlWasPressed:(id)arg1;	// IMP=0x00000000000cde8c
- (void)playbackControlsViewPlayPauseButtonWasPressed:(id)arg1;	// IMP=0x00000000000cde03
- (void)displayModeControlsViewPictureInPictureButtonWasPressed:(id)arg1;	// IMP=0x00000000000cdd2d
- (void)displayModeControlsViewFullscreenButtonWasPressed:(id)arg1;	// IMP=0x00000000000cdc70
- (void)volumeControlsViewButtonWasTapped:(id)arg1;	// IMP=0x00000000000cdbd7
- (void)volumeControlsViewInteractionDidEnd:(id)arg1;	// IMP=0x00000000000cda6c
- (void)volumeControlsView:(id)arg1 volumeDidChangeTo:(double)arg2;	// IMP=0x00000000000cd940
- (void)volumeControlsViewInteractionDidBegin:(id)arg1;	// IMP=0x00000000000cd88a
- (id)auxiliaryControlsView:(id)arg1 menuElementForControl:(id)arg2;	// IMP=0x00000000000ccec8
- (void)auxiliaryControlsViewWillBeginShowingOverflowMenu:(id)arg1;	// IMP=0x00000000000cceb6
- (void)auxiliaryControlsViewDidEndShowingOverflowMenu:(id)arg1;	// IMP=0x00000000000cceac
- (id)mediaSelectionMenuController:(id)arg1 displayNameForMediaSelectionOption:(id)arg2;	// IMP=0x00000000000ccded
- (void)mediaSelectionMenuController:(id)arg1 didSelectOption:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000ccd37
- (void)controlItemDidUpdateVisualConfiguration:(id)arg1;	// IMP=0x00000000000ccd13
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000cccb8
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000ccbeb
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x00000000000ccb29
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000000000ccaf0
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000cbd3c
- (void)loadView;	// IMP=0x00000000000cbc73
- (void)updateVisibilityPolicy:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000cbb9b
- (void)toggleVisibility:(id)arg1;	// IMP=0x00000000000cbb49
- (void)flashControlsWithDuration:(double)arg1;	// IMP=0x00000000000cb9a7
- (id)volumeControlsLayoutItem;	// IMP=0x00000000000cb8ab
- (void)setVolumeController:(id)arg1;	// IMP=0x00000000000cb7c0
- (unsigned long long)visibileControls;	// IMP=0x00000000000cb7af
- (id)transportControlsLayoutItem;	// IMP=0x00000000000cb2b2
- (void)setTransportBarCustomMenuItems:(id)arg1;	// IMP=0x00000000000cb21d
- (void)setSecondaryPlaybackControlsType:(unsigned long long)arg1;	// IMP=0x00000000000cb16c
- (void)setRoutingConfiguration:(id)arg1;	// IMP=0x00000000000cb0c1
- (void)setRequiresLinearPlayback:(_Bool)arg1;	// IMP=0x00000000000cb051
- (void)setPlayerController:(id)arg1;	// IMP=0x00000000000caf25
- (void)setPlaybackSpeedCollection:(id)arg1;	// IMP=0x00000000000cae72
- (void)setOptimizeForPerformance:(_Bool)arg1;	// IMP=0x00000000000cae1c
- (void)setIncludedControls:(unsigned long long)arg1;	// IMP=0x00000000000cad9d
- (void)setFullscreenController:(id)arg1;	// IMP=0x00000000000cad2f
- (id)displayModeControlsLayoutItem;	// IMP=0x00000000000cac33
- (void)setControlItems:(id)arg1;	// IMP=0x00000000000caa37
- (void)setShowsFullScreenControl:(_Bool)arg1;	// IMP=0x00000000000ca9be
- (void)dealloc;	// IMP=0x00000000000ca8dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <AVMobileChromelessControlsViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
