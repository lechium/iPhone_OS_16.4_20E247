//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLDisplayLink, NSArray, NSMutableSet, NSString;
@protocol CRLMediaPlayerControllerDelegate, OS_dispatch_source;

@interface CRLAnimatedGIFController : NSObject
{
    id <CRLMediaPlayerControllerDelegate> _delegate;	// 8 = 0x8
    struct CGImageSource *_imageSource;	// 16 = 0x10
    NSArray *_frames;	// 24 = 0x18
    NSMutableSet *_layers;	// 32 = 0x20
    float _rateBeforeScrubbing;	// 40 = 0x28
    unsigned long long _scrubbingCount;	// 48 = 0x30
    struct os_unfair_lock_s _timebaseLock;	// 56 = 0x38
    struct OpaqueCMTimebase *_timebase;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_timebaseTimerSource;	// 72 = 0x48
    CDStruct_1b6d18a9 _timebaseStartTime;	// 80 = 0x50
    CDStruct_1b6d18a9 _timebaseEndTime;	// 104 = 0x68
    long long _timebaseRepeatMode;	// 128 = 0x80
    NSMutableSet *_observationTokens;	// 136 = 0x88
    CRLDisplayLink *_displayLink;	// 144 = 0x90
    unsigned long long _displayLinkCounter;	// 152 = 0x98
    _Bool _playing;	// 160 = 0xa0
    _Bool _fastForwarding;	// 161 = 0xa1
    _Bool _fastReversing;	// 162 = 0xa2
    float;	// 164 = 0xa4
    double _startTime;	// 168 = 0xa8
    double _endTime;	// 176 = 0xb0
    long long _repeatMode;	// 184 = 0xb8
}

+ (_Bool)canInitWithDataType:(id)arg1;	// IMP=0x00400000005b8745
- (void).cxx_destruct;	// IMP=0x00100000005bd5a8
- (void)setFastReversing:(_Bool)arg1;	// IMP=0x00100000005bd59c
- (_Bool)isFastReversing;	// IMP=0x00100000005bd590
- (void)setFastForwarding:(_Bool)arg1;	// IMP=0x00100000005bd584
- (_Bool)isFastForwarding;	// IMP=0x00100000005bd578
- (void)setVolume:(float)arg1;	// IMP=0x00100000005bd56a
- (float)volume;	// IMP=0x00100000005bd55c
- (long long)repeatMode;	// IMP=0x00100000005bd54f
- (double)startTime;	// IMP=0x00000000005bd541
- (_Bool)isPlaying;	// IMP=0x00100000005bd535
- (id)delegate;	// IMP=0x00100000005bd51f
- (void)setVolume:(float)arg1 rampDuration:(double)arg2;	// IMP=0x00100000005bd519
- (void)p_updateLayers;	// IMP=0x00100000005bd21f
- (void)p_displayLinkDidTrigger;	// IMP=0x00100000005bd024
- (void)p_disableDisplayLink;	// IMP=0x00100000005bce12
- (void)p_enableDisplayLink;	// IMP=0x00100000005bcb28
- (void)p_updateDisplayLink;	// IMP=0x00100000005bcac3
- (void)p_timebaseTimeDidChangeToStartOrEndTime;	// IMP=0x00100000005bc372
- (void)p_updateTimebaseTimerSourceNextFireTime;	// IMP=0x00100000005bbf5f
- (CDStruct_1b6d18a9)p_timebaseTimeForHostTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 updatedRate:(out double *)arg3 anchorTime:(out CDStruct_1b6d18a9 *)arg4;	// IMP=0x00100000005bb780
- (void)p_prepareFrames;	// IMP=0x00100000005bb17a
- (id)newLayer;	// IMP=0x00100000005bb146
- (void)removeLayer:(id)arg1;	// IMP=0x00100000005bb114
- (void)addLayer:(id)arg1;	// IMP=0x00100000005bb0e2
- (void)removeObservationToken:(id)arg1;	// IMP=0x00100000005bb0c9
- (void)addObservationToken:(id)arg1;	// IMP=0x00100000005bb0b0
- (void)removePeriodicTimeObserver:(id)arg1;	// IMP=0x00100000005bb0a3
- (id)addPeriodicTimeObserverForInterval:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000005bafac
- (id)p_frameAtTime:(double)arg1 fromIndex:(unsigned long long)arg2 frameIndex:(out unsigned long long *)arg3;	// IMP=0x00100000005bae46
@property(readonly, nonatomic) struct CGImage *imageForCurrentTime;
- (struct CGImage *)imageForTime:(double)arg1;	// IMP=0x00100000005badd0
- (_Bool)hasNewImageForTime:(double)arg1 sinceTime:(double)arg2;	// IMP=0x00100000005bad37
- (double)timeForHostTime:(double)arg1;	// IMP=0x00100000005bac8e
- (void)updatePlayingToMatchPlayer;	// IMP=0x00100000005bac88
- (void)seekToEnd;	// IMP=0x00100000005bac5a
- (void)seekToBeginning;	// IMP=0x00100000005bac2c
- (void)seekForwardByOneFrame;	// IMP=0x00100000005bac26
- (void)seekBackwardByOneFrame;	// IMP=0x00100000005bac20
- (_Bool)canFastForward;	// IMP=0x00100000005bac18
- (_Bool)canFastReverse;	// IMP=0x00100000005bac10
- (void)endScrubbing;	// IMP=0x00100000005ba96a
- (void)cancelPendingSeeks;	// IMP=0x00100000005ba964
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000005ba69a
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;	// IMP=0x00100000005ba686
- (_Bool)isScrubbing;	// IMP=0x00100000005ba678
- (void)beginScrubbing;	// IMP=0x00100000005ba58e
- (void)setRepeatMode:(long long)arg1;	// IMP=0x00100000005ba503
- (void)setEndTime:(double)arg1;	// IMP=0x00100000005ba481
- (double)endTime;	// IMP=0x00100000005ba459
- (void)setStartTime:(double)arg1;	// IMP=0x00100000005ba3d7
- (double)duration;	// IMP=0x00100000005ba357
- (double)absoluteDuration;	// IMP=0x00100000005ba303
- (double)remainingTime;	// IMP=0x00100000005ba2bc
- (double)absoluteCurrentTime;	// IMP=0x00100000005ba215
- (void)p_setAbsoluteCurrentTime:(double)arg1;	// IMP=0x00100000005ba1af
- (double)currentTime;	// IMP=0x00100000005ba149
- (_Bool)hasCurrentTime;	// IMP=0x00100000005ba141
- (void)stopSynchronously;	// IMP=0x00100000005ba12d
- (void)p_setRate:(float)arg1;	// IMP=0x00100000005b9f2c
- (void)setRate:(float)arg1;	// IMP=0x00100000005b9ee8
- (float)rate;	// IMP=0x00100000005b9ea6
- (void)setPlaying:(_Bool)arg1;	// IMP=0x00100000005b9dd3
- (_Bool)canPlay;	// IMP=0x00100000005b9dcb
- (void)teardown;	// IMP=0x00100000005b9a36
- (void)dealloc;	// IMP=0x00100000005b966c
- (id)initWithData:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000005b95f4
- (id)initWithImageSource:(struct CGImageSource *)arg1 delegate:(id)arg2;	// IMP=0x00100000005b8843
- (id)newRenderable;	// IMP=0x001000000005b423

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

