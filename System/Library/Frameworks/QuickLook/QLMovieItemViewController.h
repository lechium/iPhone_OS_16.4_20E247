//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVEditBehavior, AVPlayerViewController, NSLayoutConstraint, NSNumber, NSString, PHPlaceholderView, PXUIAssetBadgeView, QLMovieEdits, QLOverlayPlayButton, QLVideoScrubberView, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface QLMovieItemViewController
{
    _Bool _previewIsVisisble;	// 8 = 0x8
    _Bool _isObservingPlayerExternalPlaybackActive;	// 9 = 0x9
    PHPlaceholderView *_airPlayPlaceholderView;	// 16 = 0x10
    _Bool _isEditing;	// 24 = 0x18
    _Bool _isSavingEditsBeforeDismissing;	// 25 = 0x19
    _Bool _assetCanBeRotated;	// 26 = 0x1a
    AVPlayerViewController *_playerViewController;	// 32 = 0x20
    QLOverlayPlayButton *_playButton;	// 40 = 0x28
    QLVideoScrubberView *_scrubber;	// 48 = 0x30
    NSLayoutConstraint *_bottomScrubberConstraint;	// 56 = 0x38
    UIView *_scrubberContainer;	// 64 = 0x40
    UIScrollView *_scrubberContainerScrollView;	// 72 = 0x48
    double _scrubberVerticalOffset;	// 80 = 0x50
    UIView *_playerViewContainer;	// 88 = 0x58
    UIScrollView *_playerViewControllerScrollView;	// 96 = 0x60
    NSNumber *_assetIsHDR;	// 104 = 0x68
    PXUIAssetBadgeView *_hdrBadgeView;	// 112 = 0x70
    AVEditBehavior *_editBehavior;	// 120 = 0x78
    QLMovieEdits *_edits;	// 128 = 0x80
    QLMovieEdits *_editsSinceLastSave;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000006c605
@property(nonatomic) _Bool assetCanBeRotated; // @synthesize assetCanBeRotated=_assetCanBeRotated;
@property(nonatomic) _Bool isSavingEditsBeforeDismissing; // @synthesize isSavingEditsBeforeDismissing=_isSavingEditsBeforeDismissing;
@property(retain, nonatomic) QLMovieEdits *editsSinceLastSave; // @synthesize editsSinceLastSave=_editsSinceLastSave;
@property(retain, nonatomic) QLMovieEdits *edits; // @synthesize edits=_edits;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) AVEditBehavior *editBehavior; // @synthesize editBehavior=_editBehavior;
@property(retain, nonatomic) PXUIAssetBadgeView *hdrBadgeView; // @synthesize hdrBadgeView=_hdrBadgeView;
@property(retain, nonatomic) NSNumber *assetIsHDR; // @synthesize assetIsHDR=_assetIsHDR;
@property(nonatomic) __weak UIScrollView *playerViewControllerScrollView; // @synthesize playerViewControllerScrollView=_playerViewControllerScrollView;
@property(retain, nonatomic) UIView *playerViewContainer; // @synthesize playerViewContainer=_playerViewContainer;
@property(nonatomic) double scrubberVerticalOffset; // @synthesize scrubberVerticalOffset=_scrubberVerticalOffset;
@property(retain) UIScrollView *scrubberContainerScrollView; // @synthesize scrubberContainerScrollView=_scrubberContainerScrollView;
@property(retain) UIView *scrubberContainer; // @synthesize scrubberContainer=_scrubberContainer;
@property(retain) NSLayoutConstraint *bottomScrubberConstraint; // @synthesize bottomScrubberConstraint=_bottomScrubberConstraint;
@property(retain) QLVideoScrubberView *scrubber; // @synthesize scrubber=_scrubber;
@property(retain) QLOverlayPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (void)playerViewControllerWillPerformAnalysisCalloutAction:(id)arg1;	// IMP=0x000000000006c2e0
- (void)_updateHDRBadgeViewVisibilityForFullscreenMode:(_Bool)arg1;	// IMP=0x000000000006c1a0
- (void)_updateHDRBadgeViewVisibilityWithNewPlayingStatus:(long long)arg1;	// IMP=0x000000000006c172
- (void)_hideHDRBadgeViewIfVisible;	// IMP=0x000000000006c0c2
- (void)_hideHDRBadgeViewAfterDelayIfNeeded:(double)arg1;	// IMP=0x000000000006bf98
- (void)_displayHDRBadgeView:(id)arg1;	// IMP=0x000000000006be37
- (void)_addHDRBadgeViewToHierarchyIfNeeded:(id)arg1;	// IMP=0x000000000006bc0c
- (void)_showHDRBadgeView:(id)arg1;	// IMP=0x000000000006bbb7
- (void)_showHDRBadgeViewIfNeeded;	// IMP=0x000000000006bab9
- (void)_updatePlaceHolderView;	// IMP=0x000000000006b734
@property(readonly, nonatomic) PHPlaceholderView *airPlayPlaceholderView;
- (void)handlePerformedKeyCommandIfNeeded:(id)arg1;	// IMP=0x000000000006b5ac
- (id)registeredKeyCommands;	// IMP=0x000000000006b38b
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b2b9
- (id)toolbarButtonsForTraitCollection:(id)arg1;	// IMP=0x000000000006b0cb
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;	// IMP=0x000000000006b0a4
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;	// IMP=0x000000000006b077
- (void)editBehaviorDidCancel:(id)arg1;	// IMP=0x000000000006b063
- (id)editBehaviorAlertActionsForDoneButtonTap:(id)arg1;	// IMP=0x000000000006aede
- (void)_showFailedToSaveChangesAlertWithError:(id)arg1;	// IMP=0x000000000006ace2
- (void)savePreviewEditedCopyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006ac1d
- (void)_saveMovieIfEditedWithEditedCopy:(id)arg1 shouldDismissAfterSaving:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000069b2a
- (void)_saveMovieIfEdited:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006976f
- (void)_rotateMovieRight;	// IMP=0x00000000000696f2
- (void)_rotateIfPossible;	// IMP=0x000000000006964a
- (void)_rotateRightButtonTapped;	// IMP=0x0000000000069638
- (void)updateInterfaceAfterSavingEdits;	// IMP=0x00000000000695c3
- (void)updateInterfaceForSavingEdits;	// IMP=0x0000000000069547
- (id)editProgressIndicatorMessage;	// IMP=0x000000000006952f
- (void)_updateEditMode;	// IMP=0x0000000000069483
- (void)_resetTrimmingValues;	// IMP=0x000000000006943a
- (void)_updateInterfaceAfterExitingEditMode;	// IMP=0x00000000000693df
- (void)_updateEditsTrimmingValuesWithTrimStartTime:(double)arg1 trimEndTime:(double)arg2;	// IMP=0x0000000000069357
- (void)_exitEditMode:(_Bool)arg1;	// IMP=0x0000000000068c14
- (void)_enterEditMode;	// IMP=0x0000000000068a24
- (_Bool)_enterEditModeIfPossible;	// IMP=0x000000000006898a
- (void)editButtonTapped;	// IMP=0x0000000000068978
- (void)_setupEditBehavior;	// IMP=0x000000000006890d
- (_Bool)shouldHandleRegisteringForCommandCenterHandlers;	// IMP=0x0000000000068905
- (_Bool)shouldDisplayPlayButtonInNavigationBar;	// IMP=0x00000000000688fb
- (_Bool)shouldAllowEditingContents;	// IMP=0x00000000000687ce
- (id)parallaxView;	// IMP=0x00000000000687bc
- (id)transitioningView;	// IMP=0x0000000000068731
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;	// IMP=0x00000000000686ed
- (void)transitionDidStart:(_Bool)arg1;	// IMP=0x00000000000686a4
- (long long)preferredWhitePointAdaptivityStyle;	// IMP=0x0000000000068699
- (_Bool)_isInteractingWithAnalysis;	// IMP=0x0000000000068603
- (_Bool)_videoIsPlaying;	// IMP=0x00000000000685e9
- (void)didChangePlayingStatus;	// IMP=0x00000000000685ab
- (void)_updatePlayButtonVisibility;	// IMP=0x0000000000068459
- (void)setPlayControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000068361
- (_Bool)canToggleFullScreen;	// IMP=0x000000000006830e
- (_Bool)canSwipeToDismiss;	// IMP=0x00000000000682ce
- (_Bool)canPinchToDismiss;	// IMP=0x0000000000068258
- (id)scrollViewInView:(id)arg1;	// IMP=0x0000000000068094
- (id)scrollView;	// IMP=0x0000000000067fed
- (_Bool)play;	// IMP=0x0000000000067f6b
- (_Bool)canEnterFullScreen;	// IMP=0x0000000000067f28
- (id)timeLabelScrollView;	// IMP=0x0000000000067f0b
- (id)accessoryView;	// IMP=0x0000000000067ef6
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000067e5c
- (void)previewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000067e20
- (void)previewDidAppear:(_Bool)arg1;	// IMP=0x0000000000067d6b
- (void)previewWillAppear:(_Bool)arg1;	// IMP=0x0000000000067d2a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000067b0b
- (void)dealloc;	// IMP=0x00000000000679dd
- (id)_metadataItemTitle;	// IMP=0x00000000000678d3
- (id)setupPlayerViewWithPlayer:(id)arg1;	// IMP=0x0000000000067411
- (void)_setupScrubberPlaceholderThumbnail;	// IMP=0x00000000000671cd
- (void)addScrubberIfNeededWithDeferral;	// IMP=0x0000000000066a12
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000066505
- (id)init;	// IMP=0x0000000000066482

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
