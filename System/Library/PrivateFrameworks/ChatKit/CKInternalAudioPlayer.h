//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioPlayer, AVPlayer, AVPlayerItem, NSString;
@protocol CKInternalAudioPlayerDelegate;

__attribute__((visibility("hidden")))
@interface CKInternalAudioPlayer : NSObject
{
    AVAudioPlayer *_avAudioPlayer;	// 8 = 0x8
    AVPlayer *_avPlayer;	// 16 = 0x10
    AVPlayerItem *_playerItem;	// 24 = 0x18
    long long _avPlayerState;	// 32 = 0x20
    _Bool _avPlayerPrepareRequested;	// 40 = 0x28
    _Bool _avPlayerPlayRequested;	// 41 = 0x29
    long long _playerType;	// 48 = 0x30
    id <CKInternalAudioPlayerDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000482624
@property(nonatomic) __weak id <CKInternalAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long playerType; // @synthesize playerType=_playerType;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x00000000004825df
- (void)_notifyPlayerDidPrepareAudioFileSuccessfully:(_Bool)arg1;	// IMP=0x000000000048257c
- (void)_notifyPlayerDidFinishSuccessfully:(_Bool)arg1;	// IMP=0x0000000000482519
- (void)_handleAVPlayerItemStateChange;	// IMP=0x00000000004824ad
- (void)_playerItemDidEndNotification:(id)arg1;	// IMP=0x0000000000482397
- (void)dealloc;	// IMP=0x00000000004822a1
- (void)resetCurrentTime;	// IMP=0x000000000048223b
- (void)prepareToPlay;	// IMP=0x000000000048219e
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
- (void)setCurrentTime:(double)arg1;	// IMP=0x0000000000481e98
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(nonatomic) float volume;
- (void)pause;	// IMP=0x0000000000481de8
- (void)stop;	// IMP=0x0000000000481d93
@property(readonly) double deviceCurrentTime;
- (_Bool)_playAtTime:(double)arg1;	// IMP=0x0000000000481ccc
- (_Bool)playAtTime:(double)arg1;	// IMP=0x0000000000481c79
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000481adb
- (id)initWithContentsOfURL:(id)arg1 playerType:(long long)arg2;	// IMP=0x00000000004818d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

