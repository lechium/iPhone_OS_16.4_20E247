//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCThrottleBase;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCThrottler : NSObject
{
    BRCThrottleBase *_throttle;	// 8 = 0x8
    long long _latestRetry;	// 16 = 0x10
    unsigned int _retryCount;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_source;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001b5264
- (void)cancel;	// IMP=0x00000000001b51db
- (void)suspend;	// IMP=0x00000000001b51cd
- (void)resume;	// IMP=0x00000000001b51bf
- (void)reset;	// IMP=0x00000000001b5157
- (void)scheduleNextEvent;	// IMP=0x00000000001b5049
- (id)initWithName:(id)arg1 throttleParameters:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b4e2e

@end
