//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface REDActionRefreshSchedule : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_hourlyApplicationLaunches;	// 16 = 0x10
    NSMutableDictionary *_dailyApplicationLaunches;	// 24 = 0x18
    NSArray *_upcomingHourlyLaunches;	// 32 = 0x20
    NSArray *_upcomingDailyLaunches;	// 40 = 0x28
    NSString *_scheduleDirectory;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000055a2
- (_Bool)_shouldLaunchApp:(id)arg1;	// IMP=0x00100000000054a6
- (void)_queue_markDailyLaunch:(id)arg1;	// IMP=0x00100000000053d8
- (void)_queue_markHourlyLaunch:(id)arg1;	// IMP=0x001000000000530a
- (void)_queue_fetchAllDailyApplications:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004eb1
- (void)_queue_fetchTopHourlyApplication:(CDUnknownBlockType)arg1;	// IMP=0x00100000000044d0
- (void)_removePrecedingApplicationLaunches:(id)arg1;	// IMP=0x0010000000004358
- (void)_saveApplicationList:(id)arg1 toPath:(id)arg2;	// IMP=0x0010000000004290
- (id)_loadApplicationListFromPath:(id)arg1;	// IMP=0x0010000000004138
- (void)recordDailyApplicationLaunch:(id)arg1;	// IMP=0x0010000000004090
- (void)recordHourlyApplicationLaunch:(id)arg1;	// IMP=0x0010000000003fe8
- (void)fetchDailyApplications:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003f3b
- (void)fetchNextHourlyApplication:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003e5e
- (id)init;	// IMP=0x0010000000003c1f

@end

