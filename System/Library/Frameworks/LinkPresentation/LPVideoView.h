//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CATextLayer, LPFullScreenVideoController, LPImage, LPImageViewStyle, LPVideo, LPVideoViewConfiguration, LPVideoViewStyle, NSString, UIGestureRecognizer, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPVideoView
{
    LPVideo *_video;	// 8 = 0x8
    LPVideoViewStyle *_style;	// 16 = 0x10
    LPImage *_posterFrame;	// 24 = 0x18
    LPImageViewStyle *_posterFrameStyle;	// 32 = 0x20
    LPVideoViewConfiguration *_configuration;	// 40 = 0x28
    UIView *_playButtonContainerView;	// 48 = 0x30
    UIView *_playButtonView;	// 56 = 0x38
    UIView *_muteButtonContainerView;	// 64 = 0x40
    UIImageView *_muteButtonView;	// 72 = 0x48
    UIImageView *_unmuteButtonView;	// 80 = 0x50
    UIView *_videoPlaceholderView;	// 88 = 0x58
    UIView *_visualEffectView;	// 96 = 0x60
    UIView *_pulsingLoadView;	// 104 = 0x68
    UIView *_containerView;	// 112 = 0x70
    UIView *_playbackView;	// 120 = 0x78
    CATextLayer *_debugIndicator;	// 128 = 0x80
    UIGestureRecognizer *_tapRecognizer;	// 136 = 0x88
    UIGestureRecognizer *_playButtonTapRecognizer;	// 144 = 0x90
    LPFullScreenVideoController *_fullScreenController;	// 152 = 0x98
    _Bool _playing;	// 160 = 0xa0
    _Bool _hasBuilt;	// 161 = 0xa1
    _Bool _wasPlayingOrWaitingToPlayWhenUnparented;	// 162 = 0xa2
    _Bool _wasPlayingWhenSuspended;	// 163 = 0xa3
    _Bool _showingPlayButton;	// 164 = 0xa4
    _Bool _waitingForPlaybackDueToAutoPlay;	// 165 = 0xa5
    _Bool _hasEverPlayed;	// 166 = 0xa6
    unsigned long long _lastInteractionTimestamp;	// 168 = 0xa8
    unsigned long long _playbackWatchdogTimerID;	// 176 = 0xb0
    unsigned int _loggingID;	// 184 = 0xb8
    _Bool _usesSharedAudioSession;	// 188 = 0xbc
    _Bool _allowsUserInteractionWithVideoPlayer;	// 189 = 0xbd
    _Bool _waitingForPlayback;	// 190 = 0xbe
    _Bool _fullScreen;	// 191 = 0xbf
    double _volume;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000039289
@property(readonly, nonatomic) unsigned int loggingID; // @synthesize loggingID=_loggingID;
@property(readonly, nonatomic) UIView *playbackView; // @synthesize playbackView=_playbackView;
@property(readonly, nonatomic) LPVideo *video; // @synthesize video=_video;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool hasEverPlayed; // @synthesize hasEverPlayed=_hasEverPlayed;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic, getter=isWaitingForPlayback) _Bool waitingForPlayback; // @synthesize waitingForPlayback=_waitingForPlayback;
@property(nonatomic) _Bool allowsUserInteractionWithVideoPlayer; // @synthesize allowsUserInteractionWithVideoPlayer=_allowsUserInteractionWithVideoPlayer;
@property(readonly, nonatomic) _Bool usesSharedAudioSession; // @synthesize usesSharedAudioSession=_usesSharedAudioSession;
- (id)playable;	// IMP=0x00000000000391ba
@property(nonatomic, getter=isActive) _Bool active;
- (void)_muteButtonTapRecognized:(id)arg1;	// IMP=0x000000000003914d
- (void)_muteButtonHighlightLongPressRecognized:(id)arg1;	// IMP=0x00000000000390d9
- (void)fullScreenVideoDidDismiss;	// IMP=0x00000000000390b1
- (void)fullScreenVideoWillDismiss;	// IMP=0x000000000003906f
- (void)fullScreenVideoDidPresent;	// IMP=0x0000000000039028
- (void)enterFullScreen;	// IMP=0x0000000000038fc6
- (void)recreateFullScreenViewControllerIfNeeded;	// IMP=0x0000000000038f82
- (void)destroyFullScreenViewController;	// IMP=0x0000000000038f4a
- (void)tapRecognized:(id)arg1;	// IMP=0x0000000000038eb3
- (void)swapVideoPlaceholderForPlaybackIfNeeded;	// IMP=0x0000000000038e8f
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000038e44
- (_Bool)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)arg1;	// IMP=0x0000000000038e03
- (void)_buildVideoPlaceholderView;	// IMP=0x0000000000038968
- (id)_createPosterFrameView;	// IMP=0x000000000003880a
@property(nonatomic, getter=isMuted) _Bool muted;
@property(readonly, nonatomic) _Bool shouldShowMuteButton;
- (void)fadeInMuteButton;	// IMP=0x00000000000386af
- (void)hideMuteButton;	// IMP=0x000000000003868f
- (void)showMuteButton;	// IMP=0x000000000003834a
- (void)hidePlayButtonAnimated:(_Bool)arg1;	// IMP=0x00000000000381b2
- (void)showPlayButtonAnimated:(_Bool)arg1;	// IMP=0x0000000000038023
- (void)updatePlayButtonVisibility;	// IMP=0x0000000000037f0b
- (void)didChangeMutedState:(_Bool)arg1;	// IMP=0x0000000000037ea9
- (void)updateMuteButton;	// IMP=0x0000000000037d8b
- (void)didEncounterPossiblyTransientPlaybackError;	// IMP=0x0000000000037d6e
- (void)didEncounterPlaybackError;	// IMP=0x0000000000037d51
- (void)didChangePlayingState:(_Bool)arg1;	// IMP=0x0000000000037c1b
- (void)removePlaceholderViews;	// IMP=0x0000000000037ba9
- (void)resetToPlaceholderView;	// IMP=0x00000000000379f0
- (void)enterCustomFullScreen;	// IMP=0x00000000000379ea
- (_Bool)usesCustomFullScreenImplementation;	// IMP=0x00000000000379e2
- (id)createFullScreenVideoViewController;	// IMP=0x00000000000379da
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000379cf
- (id)createVideoPlayerView;	// IMP=0x00000000000379c6
- (void)userInteractedWithVideoView;	// IMP=0x00000000000379a6
@property(readonly, nonatomic) double unobscuredAreaFraction;
@property(readonly, nonatomic) unsigned long long lastInteractionTimestamp;
@property(readonly, nonatomic) _Bool shouldUnmuteWhenUserAdjustsVolume;
- (void)resetPlaybackState;	// IMP=0x0000000000037793
@property(readonly, nonatomic) _Bool hasMuteControl;
@property(nonatomic, getter=isPlaying) _Bool playing;
- (void)_swapVideoPlaceholderForVideoForAutoPlay:(_Bool)arg1;	// IMP=0x0000000000037616
- (void)_startPlaybackWatchdogTimer;	// IMP=0x0000000000037500
- (id)_createPulsingLoadIndicator;	// IMP=0x0000000000037321
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003705a
- (void)layoutComponentView;	// IMP=0x0000000000036799
@property(readonly, nonatomic) _Bool shouldAutoPlay;
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000000036738
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00000000000366b7
- (void)beginLoadingMediaForPreroll;	// IMP=0x00000000000366b1
- (void)buildSubviewsIfNeeded;	// IMP=0x000000000003608d
- (void)componentViewDidMoveToWindow;	// IMP=0x0000000000035f4c
- (_Bool)isParented;	// IMP=0x0000000000035f0a
@property(readonly, copy, nonatomic) LPVideoViewConfiguration *configuration;
- (void)dealloc;	// IMP=0x0000000000035e70
- (id)initWithHost:(id)arg1 video:(id)arg2 style:(id)arg3 posterFrame:(id)arg4 posterFrameStyle:(id)arg5 configuration:(id)arg6;	// IMP=0x0000000000035c50
- (id)initWithHost:(id)arg1;	// IMP=0x0000000000035c42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

