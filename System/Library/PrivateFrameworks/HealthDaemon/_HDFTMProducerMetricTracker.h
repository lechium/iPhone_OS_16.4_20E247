//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _HKExpiringCompletionTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HDFTMProducerMetricTracker : NSObject
{
    _HKExpiringCompletionTimer *_timer;	// 8 = 0x8
    CDUnknownBlockType _timeoutHandler;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    _Bool _paused;	// 32 = 0x20
    _Bool _metricAvailable;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x00000000002f6e41

@end
