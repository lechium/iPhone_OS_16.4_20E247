//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AVPlayerItem, NSArray, NSLayoutConstraint, NSNumber, NSString, PICompositionController, PLEditSource, PLPhotoEditRenderer, PULivePhotoKeyFrameSelectionViewController, PUTimeCodeOverlayView, PXFocusTimelineAction, PXFocusTimelineView, PXLivePhotoTrimScrubber, PXLivePhotoTrimScrubberSnapStripController, PXLivePhotoTrimScrubberSpec, PXSlowMotionEditor, UIButton, UIImage, UILabel, UIView, UIVisualEffectView;
@protocol PUTrimToolControllerDelegate, PXTrimToolPlayerWrapper;

__attribute__((visibility("hidden")))
@interface PUTrimToolController : UIViewController
{
    PXLivePhotoTrimScrubber *_trimScrubber;	// 8 = 0x8
    PXSlowMotionEditor *_slomoView;	// 16 = 0x10
    _Bool _needsUpdateRenderForVisualChanges;	// 24 = 0x18
    PUTimeCodeOverlayView *_timeCodeOverlayView;	// 32 = 0x20
    NSLayoutConstraint *_timeCodeHorizontalConstraint;	// 40 = 0x28
    PXLivePhotoTrimScrubberSpec *_spec;	// 48 = 0x30
    long long _currentlyInteractingElement;	// 56 = 0x38
    _Bool _disabled;	// 64 = 0x40
    _Bool _slomoEnabled;	// 65 = 0x41
    _Bool _isPortraitVideo;	// 66 = 0x42
    _Bool _slomoDraggingStartHandle;	// 67 = 0x43
    _Bool _playButtonEnabled;	// 68 = 0x44
    _Bool _objectTrackingShouldStop;	// 69 = 0x45
    _Bool _portraitVideoEnabled;	// 70 = 0x46
    UIButton *_playPauseButton;	// 72 = 0x48
    id <PUTrimToolControllerDelegate> _delegate;	// 80 = 0x50
    id <PXTrimToolPlayerWrapper> _playerWrapper;	// 88 = 0x58
    PICompositionController *_compositionController;	// 96 = 0x60
    unsigned long long _state;	// 104 = 0x68
    PLEditSource *_editSource;	// 112 = 0x70
    PLEditSource *_overcaptureEditSource;	// 120 = 0x78
    UIVisualEffectView *_auxilaryContainerView;	// 128 = 0x80
    UIVisualEffectView *_scrubberPlayButtonContainerView;	// 136 = 0x88
    NSLayoutConstraint *_scrubberContainerToAuxiliaryContainerConstraint;	// 144 = 0x90
    PULivePhotoKeyFrameSelectionViewController *_livePhotoKeyFramePicker;	// 152 = 0x98
    PLPhotoEditRenderer *_renderer;	// 160 = 0xa0
    AVPlayerItem *_currentVideoPlayerItem;	// 168 = 0xa8
    double _cachedFrameRate;	// 176 = 0xb0
    PXLivePhotoTrimScrubberSnapStripController *_snapStripController;	// 184 = 0xb8
    unsigned long long _playheadStyle;	// 192 = 0xc0
    unsigned long long _internalState;	// 200 = 0xc8
    NSNumber *_slomoTimeForPlayheadUpdate;	// 208 = 0xd0
    UILabel *_debugTimeCodeLabel;	// 216 = 0xd8
    UILabel *_debugPlayerTimeLabel;	// 224 = 0xe0
    UILabel *_debugOriginalTimeLabel;	// 232 = 0xe8
    UILabel *_debugTrimToolStateLabel;	// 240 = 0xf0
    UILabel *_debugTrimToolPlayheadStyleLabel;	// 248 = 0xf8
    UIView *_debugStartRectView;	// 256 = 0x100
    UIView *_debugEndRectView;	// 264 = 0x108
    UIView *_debugStartOffsetView;	// 272 = 0x110
    UIView *_debugEndOffsetView;	// 280 = 0x118
    PXFocusTimelineView *_focusTimelineView;	// 288 = 0x120
    NSLayoutConstraint *_auxilaryContainerViewHeightConstraint;	// 296 = 0x128
    UIView *_trimScrubberTimelineOverlayView;	// 304 = 0x130
    UIButton *_trimScrubberTimelineOverlayButton;	// 312 = 0x138
    PXFocusTimelineAction *_focusTimelineAction;	// 320 = 0x140
    NSArray *_focusEventTimes;	// 328 = 0x148
    CDStruct_1b6d18a9 _unadjustedStillImageTime;	// 336 = 0x150
    CDStruct_1b6d18a9 _originalStartTime;	// 360 = 0x168
    CDStruct_1b6d18a9 _originalEndTime;	// 384 = 0x180
    CDStruct_1b6d18a9 _suggestedKeyFrameTime;	// 408 = 0x198
    CDStruct_1b6d18a9 _cachedFrameDuration;	// 432 = 0x1b0
    CDStruct_1b6d18a9 _unadjustedAssetDuration;	// 456 = 0x1c8
    CDStruct_1b6d18a9 _debugPlayerTime;	// 480 = 0x1e0
}

- (void).cxx_destruct;	// IMP=0x00000000004dcb28
@property(copy, nonatomic) NSArray *focusEventTimes; // @synthesize focusEventTimes=_focusEventTimes;
@property(nonatomic) _Bool portraitVideoEnabled; // @synthesize portraitVideoEnabled=_portraitVideoEnabled;
@property(nonatomic) _Bool objectTrackingShouldStop; // @synthesize objectTrackingShouldStop=_objectTrackingShouldStop;
@property(retain, nonatomic) PXFocusTimelineAction *focusTimelineAction; // @synthesize focusTimelineAction=_focusTimelineAction;
@property(retain, nonatomic) UIButton *trimScrubberTimelineOverlayButton; // @synthesize trimScrubberTimelineOverlayButton=_trimScrubberTimelineOverlayButton;
@property(retain, nonatomic) UIView *trimScrubberTimelineOverlayView; // @synthesize trimScrubberTimelineOverlayView=_trimScrubberTimelineOverlayView;
@property(retain, nonatomic) NSLayoutConstraint *auxilaryContainerViewHeightConstraint; // @synthesize auxilaryContainerViewHeightConstraint=_auxilaryContainerViewHeightConstraint;
@property(retain, nonatomic) PXFocusTimelineView *focusTimelineView; // @synthesize focusTimelineView=_focusTimelineView;
@property(retain, nonatomic) UIView *debugEndOffsetView; // @synthesize debugEndOffsetView=_debugEndOffsetView;
@property(retain, nonatomic) UIView *debugStartOffsetView; // @synthesize debugStartOffsetView=_debugStartOffsetView;
@property(retain, nonatomic) UIView *debugEndRectView; // @synthesize debugEndRectView=_debugEndRectView;
@property(retain, nonatomic) UIView *debugStartRectView; // @synthesize debugStartRectView=_debugStartRectView;
@property(retain, nonatomic) UILabel *debugTrimToolPlayheadStyleLabel; // @synthesize debugTrimToolPlayheadStyleLabel=_debugTrimToolPlayheadStyleLabel;
@property(retain, nonatomic) UILabel *debugTrimToolStateLabel; // @synthesize debugTrimToolStateLabel=_debugTrimToolStateLabel;
@property(retain, nonatomic) UILabel *debugOriginalTimeLabel; // @synthesize debugOriginalTimeLabel=_debugOriginalTimeLabel;
@property(retain, nonatomic) UILabel *debugPlayerTimeLabel; // @synthesize debugPlayerTimeLabel=_debugPlayerTimeLabel;
@property(nonatomic) CDStruct_1b6d18a9 debugPlayerTime; // @synthesize debugPlayerTime=_debugPlayerTime;
@property(retain, nonatomic) UILabel *debugTimeCodeLabel; // @synthesize debugTimeCodeLabel=_debugTimeCodeLabel;
@property(retain, nonatomic) NSNumber *slomoTimeForPlayheadUpdate; // @synthesize slomoTimeForPlayheadUpdate=_slomoTimeForPlayheadUpdate;
@property(readonly, nonatomic) _Bool playButtonEnabled; // @synthesize playButtonEnabled=_playButtonEnabled;
@property(nonatomic) _Bool slomoDraggingStartHandle; // @synthesize slomoDraggingStartHandle=_slomoDraggingStartHandle;
@property(nonatomic) unsigned long long internalState; // @synthesize internalState=_internalState;
@property(nonatomic) unsigned long long playheadStyle; // @synthesize playheadStyle=_playheadStyle;
@property(nonatomic) CDStruct_1b6d18a9 unadjustedAssetDuration; // @synthesize unadjustedAssetDuration=_unadjustedAssetDuration;
@property(retain, nonatomic) PXLivePhotoTrimScrubberSnapStripController *snapStripController; // @synthesize snapStripController=_snapStripController;
@property(nonatomic) double cachedFrameRate; // @synthesize cachedFrameRate=_cachedFrameRate;
@property(nonatomic) CDStruct_1b6d18a9 cachedFrameDuration; // @synthesize cachedFrameDuration=_cachedFrameDuration;
@property(retain, nonatomic) AVPlayerItem *currentVideoPlayerItem; // @synthesize currentVideoPlayerItem=_currentVideoPlayerItem;
@property(retain, nonatomic) PLPhotoEditRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak PULivePhotoKeyFrameSelectionViewController *livePhotoKeyFramePicker; // @synthesize livePhotoKeyFramePicker=_livePhotoKeyFramePicker;
@property(retain, nonatomic) NSLayoutConstraint *scrubberContainerToAuxiliaryContainerConstraint; // @synthesize scrubberContainerToAuxiliaryContainerConstraint=_scrubberContainerToAuxiliaryContainerConstraint;
@property(retain, nonatomic) UIVisualEffectView *scrubberPlayButtonContainerView; // @synthesize scrubberPlayButtonContainerView=_scrubberPlayButtonContainerView;
@property(retain, nonatomic) UIVisualEffectView *auxilaryContainerView; // @synthesize auxilaryContainerView=_auxilaryContainerView;
@property(retain, nonatomic) PLEditSource *overcaptureEditSource; // @synthesize overcaptureEditSource=_overcaptureEditSource;
@property(retain, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
@property(readonly, nonatomic, getter=isPortraitVideo) _Bool isPortraitVideo; // @synthesize isPortraitVideo=_isPortraitVideo;
@property(readonly, nonatomic, getter=isSlomoEnabled) _Bool slomoEnabled; // @synthesize slomoEnabled=_slomoEnabled;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) CDStruct_1b6d18a9 suggestedKeyFrameTime; // @synthesize suggestedKeyFrameTime=_suggestedKeyFrameTime;
@property(nonatomic) CDStruct_1b6d18a9 originalEndTime; // @synthesize originalEndTime=_originalEndTime;
@property(nonatomic) CDStruct_1b6d18a9 originalStartTime; // @synthesize originalStartTime=_originalStartTime;
@property(nonatomic) CDStruct_1b6d18a9 unadjustedStillImageTime; // @synthesize unadjustedStillImageTime=_unadjustedStillImageTime;
@property(retain, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property(readonly, nonatomic) id <PXTrimToolPlayerWrapper> playerWrapper; // @synthesize playerWrapper=_playerWrapper;
@property(nonatomic) __weak id <PUTrimToolControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)axDescriptionForFocusEventATime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000004dc4b1
- (void)hideFocusTimelineActions:(id)arg1;	// IMP=0x00000000004dc49f
- (void)focusTimeline:(id)arg1 updateTrackingProgressShouldStop:(_Bool *)arg2;	// IMP=0x00000000004dc489
- (void)focusTimeline:(id)arg1 presentAction:(id)arg2 locationInTimeline:(struct CGPoint)arg3;	// IMP=0x00000000004dc1f8
- (void)_hideScrubberTimelineOverlay;	// IMP=0x00000000004dc10e
- (void)_updateScrubberTimelineOverlayButtonOffset;	// IMP=0x00000000004dbf47
- (void)_handleScrubberTimelineOverlayButton:(id)arg1;	// IMP=0x00000000004dbe74
- (void)slowMotionEditorRequestForceUnzoom:(id)arg1;	// IMP=0x00000000004dbe57
- (_Bool)slowMotionEditorRequestForceZoom:(id)arg1;	// IMP=0x00000000004dbdb5
- (void)slowMotionEditorEndValueChanged:(id)arg1;	// IMP=0x00000000004dbcdd
- (void)slowMotionEditorStartValueChanged:(id)arg1;	// IMP=0x00000000004dbc05
- (void)slowMotionEditorDidEndEditing:(id)arg1;	// IMP=0x00000000004dbaed
- (void)slowMotionEditorDidBeginEditing:(id)arg1 withStartHandle:(_Bool)arg2;	// IMP=0x00000000004db9d4
- (void)userDidRequestToMakeKeyPhoto:(id)arg1;	// IMP=0x00000000004db70f
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;	// IMP=0x00000000004db707
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x00000000004db659
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x00000000004db64c
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x00000000004db63f
- (void)playerWrapper:(id)arg1 timeChanged:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000004db5e8
- (void)playerStatusChangedForPlayerWrapper:(id)arg1;	// IMP=0x00000000004db568
- (void)compositonDidUpdateForPlayerWrapper:(id)arg1;	// IMP=0x00000000004db521
- (id)_slomoMapperForCurrentConfiguration;	// IMP=0x00000000004db1ca
- (CDStruct_1b6d18a9)_originalTimeFromCurrentPlayerScaledTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000004dafb1
- (CDStruct_1b6d18a9)_currentPlayerScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000004dad98
- (void)stepByCount:(long long)arg1;	// IMP=0x00000000004daca0
- (void)pause;	// IMP=0x00000000004dac63
- (void)play;	// IMP=0x00000000004dac26
- (void)_handlePlayPauseButton:(id)arg1;	// IMP=0x00000000004dabcc
- (void)_updatePlayPauseButton;	// IMP=0x00000000004daaac
- (void)_livePhotoKeyFramePickerDidDismiss:(id)arg1;	// IMP=0x00000000004da989
- (struct CGRect)_presentationRectFromLoupeRect;	// IMP=0x00000000004da89a
- (void)_resetScrubberToStillPhotoFrame;	// IMP=0x00000000004da656
- (double)_frameRate;	// IMP=0x00000000004da573
- (CDStruct_1b6d18a9)_frameDuration;	// IMP=0x00000000004da43b
- (id)_currentVideoAsset;	// IMP=0x00000000004da3eb
- (void)_updatePlayerItem;	// IMP=0x00000000004da2b1
- (void)_updateSnappingDots;	// IMP=0x00000000004da0ea
- (void)_updateScrubberFocusEventTimes;	// IMP=0x00000000004d9fe5
- (void)_updateScrubberTimes;	// IMP=0x00000000004d967a
- (void)_updateScrubberContents;	// IMP=0x00000000004d95c6
- (void)_updatePlayerWrapperTrim;	// IMP=0x00000000004d9447
- (void)_updateCompositionController;	// IMP=0x00000000004d8df1
- (void)_updateTimeCodeOverlay;	// IMP=0x00000000004d8837
- (void)_updateScrubberPresentedPlayhead;	// IMP=0x00000000004d87f3
- (void)_updatePlayerWrapperTimeObserver;	// IMP=0x00000000004d8794
- (void)_updatePlayheadStyle;	// IMP=0x00000000004d8611
- (void)_updatePublicState;	// IMP=0x00000000004d85cf
- (void)_updateDebugPlayheadStyleLabel;	// IMP=0x00000000004d84d8
- (void)_updateDebugTrimToolStateLabel;	// IMP=0x00000000004d8249
- (void)_updateDebugPlayerTimeLabel;	// IMP=0x00000000004d7d50
- (void)_updateDebugTimeCodeLabel;	// IMP=0x00000000004d793e
- (_Bool)_showKeyFrameSelection;	// IMP=0x00000000004d75f0
- (_Bool)_allowsKeyFrameCreation;	// IMP=0x00000000004d7540
- (void)_setState:(unsigned long long)arg1;	// IMP=0x00000000004d7426
@property(nonatomic) CDStruct_1b6d18a9 adjustedStillFrameTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentStillFrameTime;
- (id)currentEditSource;	// IMP=0x00000000004d706b
- (void)objectTrackingFinishedWithSuccess:(_Bool)arg1;	// IMP=0x00000000004d704e
- (void)updateObjectTrackingProgressAtTime:(CDStruct_1b6d18a9)arg1 shouldStop:(_Bool *)arg2;	// IMP=0x00000000004d7031
- (void)objectTrackingStartedAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000004d7014
- (void)didUpdateFocusEventsWithTimes:(id)arg1;	// IMP=0x00000000004d6fcc
- (void)updateFocusTimelineWithEvent:(CDStruct_1b6d18a9)arg1 userInitiated:(_Bool)arg2 shouldAnimate:(_Bool)arg3;	// IMP=0x00000000004d6faf
- (void)updateFocusTimelineWithTimeRange:(CDStruct_5c5366e1)arg1;	// IMP=0x00000000004d6f92
- (void)resetTimeline;	// IMP=0x00000000004d6f75
- (void)updateFocusTimeline;	// IMP=0x00000000004d6f58
- (void)showFocusTimeline:(_Bool)arg1;	// IMP=0x00000000004d6eec
- (void)enableUIForCinematographyScriptLoad:(_Bool)arg1;	// IMP=0x00000000004d6ecf
- (void)enableFocusTimeline:(_Bool)arg1;	// IMP=0x00000000004d6e6a
@property(readonly, nonatomic) long long currentlyInteractingElement;
- (void)setEditSource:(id)arg1 overcaptureEditSource:(id)arg2;	// IMP=0x00000000004d6b22
- (void)releaseAVObjects;	// IMP=0x00000000004d696e
@property(readonly, nonatomic) double scrubberHeight;
- (void)trimScrubberDidLayoutSubviews:(id)arg1;	// IMP=0x00000000004d68fb
- (void)trimScrubberPausePlayer:(id)arg1;	// IMP=0x00000000004d6853
- (void)trimScrubberDidUnzoom:(id)arg1;	// IMP=0x00000000004d67d1
- (void)trimScrubber:(id)arg1 didZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;	// IMP=0x00000000004d674f
- (void)trimScrubber:(id)arg1 didChangeLoupeRect:(struct CGRect)arg2;	// IMP=0x00000000004d6684
- (void)trimScrubberAssetDurationDidChange:(id)arg1;	// IMP=0x00000000004d6647
- (void)trimScrubber:(id)arg1 didChangeTimeForElement:(long long)arg2;	// IMP=0x00000000004d65b7
- (void)_didCompleteInteractiveEditForElement:(long long)arg1 atTime:(CDStruct_1b6d18a9)arg2 state:(unsigned long long)arg3;	// IMP=0x00000000004d64be
- (void)trimScrubber:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2 successful:(_Bool)arg3;	// IMP=0x00000000004d604a
- (void)trimScrubber:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;	// IMP=0x00000000004d5ec3
- (_Bool)trimScrubber:(id)arg1 canBeginInteractivelyEditingElement:(long long)arg2;	// IMP=0x00000000004d5eb7
- (void)trimScrubber:(id)arg1 didTapTimelineAtTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000004d5e44
- (void)trimScrubber:(id)arg1 didTapElement:(long long)arg2;	// IMP=0x00000000004d5dee
- (void)_seekToTimeForElement:(long long)arg1 exact:(_Bool)arg2 forceSeek:(_Bool)arg3;	// IMP=0x00000000004d5c22
- (void)_seekToTimeForElement:(long long)arg1 exact:(_Bool)arg2;	// IMP=0x00000000004d5c0d
- (void)setPlayheadTime:(CDStruct_1b6d18a9)arg1 forceSeek:(_Bool)arg2;	// IMP=0x00000000004d5ba7
@property(nonatomic) CDStruct_1b6d18a9 playheadTime;
- (id)_playPauseButtonIfLoaded;	// IMP=0x00000000004d5b3c
@property(readonly, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
- (void)_createRendererIfNeeded;	// IMP=0x00000000004d55c3
@property(retain, nonatomic) UIImage *placeholderImage;
- (void)livePhotoRenderDidChange:(_Bool)arg1;	// IMP=0x00000000004d54ce
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000004d546b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000004d52de
- (void)updateViewConstraints;	// IMP=0x00000000004d508e
- (void)viewDidLayoutSubviews;	// IMP=0x00000000004d4f37
- (void)trimScrubber:(id)arg1 debugEndOffset:(struct CGRect)arg2;	// IMP=0x00000000004d4e5b
- (void)trimScrubber:(id)arg1 debugStartOffset:(struct CGRect)arg2;	// IMP=0x00000000004d4d7f
- (void)trimScrubber:(id)arg1 debugEndRect:(struct CGRect)arg2;	// IMP=0x00000000004d4ca3
- (void)trimScrubber:(id)arg1 debugStartRect:(struct CGRect)arg2;	// IMP=0x00000000004d4bc7
- (void)viewDidLoad;	// IMP=0x00000000004d23e0
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;	// IMP=0x00000000004d2286
- (id)initWithPlayerWrapper:(id)arg1 playButtonEnabled:(_Bool)arg2 slomoEnabled:(_Bool)arg3 portraitVideoEnabled:(_Bool)arg4;	// IMP=0x00000000004d21da
- (id)initWithPlayerWrapper:(id)arg1 playButtonEnabled:(_Bool)arg2 slomoEnabled:(_Bool)arg3;	// IMP=0x00000000004d2135
- (id)initWithPlayerWrapper:(id)arg1;	// IMP=0x00000000004d211e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
