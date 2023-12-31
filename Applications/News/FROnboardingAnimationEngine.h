//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, FCMapTable, NSArray, NSMutableOrderedSet;
@protocol FROnboardingAnimationEngineDelegate;

@interface FROnboardingAnimationEngine : NSObject
{
    id <FROnboardingAnimationEngineDelegate> _delegate;	// 8 = 0x8
    NSMutableOrderedSet *_runningAnimatorsStorage;	// 16 = 0x10
    CADisplayLink *_displayLink;	// 24 = 0x18
    double _mediaTimeAtStartOfSession;	// 32 = 0x20
    double _currentMediaTime;	// 40 = 0x28
    FCMapTable *_itemsToAnimators;	// 48 = 0x30
    double _sessionTimeAtLastTick;	// 56 = 0x38
    struct CGSize _stageSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000e2fb8
@property(nonatomic) double sessionTimeAtLastTick; // @synthesize sessionTimeAtLastTick=_sessionTimeAtLastTick;
@property(retain, nonatomic) FCMapTable *itemsToAnimators; // @synthesize itemsToAnimators=_itemsToAnimators;
@property(nonatomic) double currentMediaTime; // @synthesize currentMediaTime=_currentMediaTime;
@property(nonatomic) double mediaTimeAtStartOfSession; // @synthesize mediaTimeAtStartOfSession=_mediaTimeAtStartOfSession;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSMutableOrderedSet *runningAnimatorsStorage; // @synthesize runningAnimatorsStorage=_runningAnimatorsStorage;
@property(nonatomic) struct CGSize stageSize; // @synthesize stageSize=_stageSize;
@property(nonatomic) __weak id <FROnboardingAnimationEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_animatorsRegisteredForItem:(id)arg1;	// IMP=0x00100000000e2e0a
- (void)_registerAnimator:(id)arg1 forItem:(id)arg2;	// IMP=0x00100000000e2d92
- (void)tick:(id)arg1;	// IMP=0x00100000000e2afb
- (void)_stopSessionIfNoMoreAnimators;	// IMP=0x00100000000e29bb
- (void)_startSessionIfNotAlreadyRunning;	// IMP=0x00100000000e2812
- (void)_removeAnimator:(id)arg1;	// IMP=0x00100000000e26d8
- (id)animatorsTrackingItem:(id)arg1;	// IMP=0x00100000000e2690
- (void)cancelAllAnimations;	// IMP=0x00100000000e2602
- (void)cancelAnimator:(id)arg1;	// IMP=0x00100000000e24c8
- (void)addAnimator:(id)arg1;	// IMP=0x00100000000e239d
@property(readonly, nonatomic) double currentSessionTimeElapsed;
@property(readonly, nonatomic) _Bool isRunning;
@property(readonly, copy, nonatomic) NSArray *runningAnimators;
- (id)init;	// IMP=0x00100000000e223a
- (void)dealloc;	// IMP=0x00100000000e21cf

@end

