//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PSDataUsageStatisticsCache, PSSpecifier;
@protocol PSBillingPeriodSource;

__attribute__((visibility("hidden")))
@interface PSUITotalCellularUsageSubgroup : NSObject
{
    id <PSBillingPeriodSource> _billingPeriodSource;	// 8 = 0x8
    PSDataUsageStatisticsCache *_statisticsCache;	// 16 = 0x10
    PSSpecifier *_totalUsageSpecifier;	// 24 = 0x18
    PSSpecifier *_totalRoamingUsageSpecifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006f23f
@property(retain, nonatomic) PSSpecifier *totalRoamingUsageSpecifier; // @synthesize totalRoamingUsageSpecifier=_totalRoamingUsageSpecifier;
@property(retain, nonatomic) PSSpecifier *totalUsageSpecifier; // @synthesize totalUsageSpecifier=_totalUsageSpecifier;
@property(retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache; // @synthesize statisticsCache=_statisticsCache;
@property(nonatomic) __weak id <PSBillingPeriodSource> billingPeriodSource; // @synthesize billingPeriodSource=_billingPeriodSource;
- (id)getLogger;	// IMP=0x000000000006f1a7
- (id)totalRoamingDataUsageForSpecifier:(id)arg1;	// IMP=0x000000000006f09a
- (id)totalDataUsageForSpecifier:(id)arg1;	// IMP=0x000000000006ef8d
- (id)totalRoamingBytesUsed;	// IMP=0x000000000006ed15
- (id)totalBytesUsed;	// IMP=0x000000000006ea9d
- (id)specifiers;	// IMP=0x000000000006ea31
- (id)initWithStatisticsCache:(id)arg1 andBillingPeriodSource:(id)arg2;	// IMP=0x000000000006e679

@end

