//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerLayer, AVPlayerLooper, AVQueuePlayer;

__attribute__((visibility("hidden")))
@interface LPStreamingVideoView
{
    AVQueuePlayer *_player;	// 8 = 0x8
    AVPlayerLooper *_looper;	// 16 = 0x10
    AVPlayerLayer *_playerLayer;	// 24 = 0x18
    CDUnknownBlockType _readyForDisplayCallback;	// 32 = 0x20
    _Bool _hasCreatedVideoPlayerView;	// 40 = 0x28
    _Bool _isWaitingToRetryAfterFailingToPlay;	// 41 = 0x29
    unsigned int _playbackRetryCountWithoutSuccess;	// 44 = 0x2c
    _Bool _desiredPlayingState;	// 48 = 0x30
    float _desiredVolume;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000008477
- (void)fullScreenVideoWillDismiss;	// IMP=0x0000000000008448
- (void)fullScreenVideoDidPresent;	// IMP=0x0000000000008419
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008380
- (id)createVideoPlayerView;	// IMP=0x000000000000828a
- (_Bool)usesCustomFullScreenImplementation;	// IMP=0x0000000000008282
- (id)createFullScreenVideoViewController;	// IMP=0x0000000000008241
- (void)layoutComponentView;	// IMP=0x0000000000008172
- (void)setVolume:(double)arg1;	// IMP=0x00000000000080c3
- (double)volume;	// IMP=0x00000000000080a1
- (void)setMuted:(_Bool)arg1;	// IMP=0x0000000000008061
- (_Bool)isMuted;	// IMP=0x0000000000008044
- (_Bool)shouldShowMuteButton;	// IMP=0x0000000000008000
- (_Bool)usesSharedAudioSession;	// IMP=0x0000000000007ff8
- (_Bool)shouldAutoPlay;	// IMP=0x0000000000007eea
- (_Bool)releaseDecodingResourcesIfInactive;	// IMP=0x0000000000007e68
- (void)setPlaying:(_Bool)arg1;	// IMP=0x0000000000007dd8
- (void)beginLoadingMediaForPreroll;	// IMP=0x0000000000007d98
- (void)didFailToPlay;	// IMP=0x0000000000007afb
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000077c5
- (void)resetToPlaceholderView;	// IMP=0x0000000000007787
- (void)destroyPlayer;	// IMP=0x0000000000007645
- (void)createPlayerIfNeeded;	// IMP=0x0000000000007133
- (void)createPlayerItemAdjustedForLoopingWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006a13
- (void)dealloc;	// IMP=0x00000000000069d5
- (id)initWithHost:(id)arg1 video:(id)arg2 style:(id)arg3 posterFrame:(id)arg4 posterFrameStyle:(id)arg5 configuration:(id)arg6;	// IMP=0x0000000000006957

@end

