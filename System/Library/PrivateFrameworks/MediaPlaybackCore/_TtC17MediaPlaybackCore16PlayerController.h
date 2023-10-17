//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSDictionary;

@interface _TtC17MediaPlaybackCore16PlayerController : _TtCs12_SwiftObject
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *mode;	// 32 = 0x20
    MISSING_TYPE *userActionTimeout;	// 40 = 0x28
    MISSING_TYPE *currentItemTransition;	// 48 = 0x30
    MISSING_TYPE *playbackCoordinatorObservation;	// 56 = 0x38
    MISSING_TYPE *player;	// 64 = 0x40
    MISSING_TYPE *audioSession;	// 80 = 0x50
    MISSING_TYPE *playerID;	// 88 = 0x58
    MISSING_TYPE *coordinatedPlaybackSuspension;	// 104 = 0x68
    MISSING_TYPE *videoPlayerViewController;	// 112 = 0x70
    MISSING_TYPE *lastAudioSessionMode;	// 120 = 0x78
    MISSING_TYPE *playbackStartSubscription;	// 128 = 0x80
    MISSING_TYPE *queue;	// 136 = 0x88
    MISSING_TYPE *fsm;	// 144 = 0x90
    MISSING_TYPE *playerObserver;	// 192 = 0xc0
    MISSING_TYPE *playerSubscription;	// 200 = 0xc8
    MISSING_TYPE *systemObserver;	// 208 = 0xd0
    MISSING_TYPE *systemSubscription;	// 272 = 0x110
    MISSING_TYPE *didBecomeActiveSubscription;	// 280 = 0x118
    MISSING_TYPE *willResignActiveSubscription;	// 288 = 0x120
    MISSING_TYPE *videoPlayerBehavior;	// 296 = 0x128
    MISSING_TYPE *userEventsMonitor;	// 304 = 0x130
    MISSING_TYPE *reporter;	// 312 = 0x138
    MISSING_TYPE *leaseController;	// 352 = 0x160
    MISSING_TYPE *previousItemID;	// 360 = 0x168
}

@property(nonatomic, readonly) NSDictionary *stateDictionary;
- (void)resetWithReason:(id)arg1;	// IMP=0x000000000004ac80
- (void)setRelativeVolume:(float)arg1;	// IMP=0x000000000004c010
- (void)setSpatializationFormat:(long long)arg1;	// IMP=0x000000000004bfe0

@end
