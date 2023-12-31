//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface AMSMediaTokenServiceThrottler : NSObject
{
    double _baseSleepInterval;	// 8 = 0x8
    double _maxSleepInterval;	// 16 = 0x10
    unsigned long long _attemptNumber;	// 24 = 0x18
    NSDate *_throttleDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000028519e
@property(retain, nonatomic) NSDate *throttleDate; // @synthesize throttleDate=_throttleDate;
@property(nonatomic) unsigned long long attemptNumber; // @synthesize attemptNumber=_attemptNumber;
@property(nonatomic) double maxSleepInterval; // @synthesize maxSleepInterval=_maxSleepInterval;
@property(nonatomic) double baseSleepInterval; // @synthesize baseSleepInterval=_baseSleepInterval;
- (double)_calculateThrottleInterval;	// IMP=0x00000000002850b7
- (void)throttle;	// IMP=0x0000000000285030
- (_Bool)shouldThrottle;	// IMP=0x0000000000284fe3
- (void)reset;	// IMP=0x0000000000284fb1
- (id)initWithBaseSleepInterval:(double)arg1 maxSleepInterval:(double)arg2;	// IMP=0x0000000000284f47

@end

