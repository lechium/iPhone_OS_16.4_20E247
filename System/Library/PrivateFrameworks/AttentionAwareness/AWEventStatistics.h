//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWEventStatistics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    _Bool _timerResumed;	// 24 = 0x18
    unsigned long long _lastLogTime;	// 32 = 0x20
    NSDate *_lastLogDate;	// 40 = 0x28
    NSMutableDictionary *_stats;	// 48 = 0x30
}

+ (id)sharedStatistics;	// IMP=0x006000000000524e
- (void).cxx_destruct;	// IMP=0x0000000000004daa
- (void)logEvent:(unsigned long long)arg1;	// IMP=0x0000000000004c6b
- (id)init;	// IMP=0x0000000000004b2d

@end
