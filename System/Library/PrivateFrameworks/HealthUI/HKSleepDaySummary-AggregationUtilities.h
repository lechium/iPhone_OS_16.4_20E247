//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKSleepDaySummary.h>

@class NSDate;

@interface HKSleepDaySummary (AggregationUtilities)
+ (id)_computeProbablePeriodsFromSummaries:(id)arg1 summaryDateInterval:(id)arg2;	// IMP=0x00200000001c80d5
+ (id)_endOfWeekContainingDate:(id)arg1 calendar:(id)arg2;	// IMP=0x00200000001c7369
+ (double)_findMidPointOffsetForSummary:(id)arg1 sleepCategory:(long long)arg2;	// IMP=0x00200000001c6ce6
+ (id)_computeAveragePeriodsFromSummaries:(id)arg1 summaryDateInterval:(id)arg2;	// IMP=0x00200000001c648c
+ (id)_lastNonZeroDurationGoal:(id)arg1;	// IMP=0x00200000001c61f5
+ (id)_lastNonEmptySchedules:(id)arg1;	// IMP=0x00200000001c5fdd
+ (id)_aggregateWeeklySummaryFromDailySummaries:(id)arg1 calendar:(id)arg2 strategy:(unsigned long long)arg3;	// IMP=0x00200000001c5c58
+ (id)aggregateWeeklySummariesFromDailySummaries:(id)arg1 firstWeekdayOverride:(id)arg2 strategy:(unsigned long long)arg3;	// IMP=0x00200000001c538f
@property(readonly, nonatomic) double hui_startOfSleepOffset;
@property(readonly, nonatomic) double hui_durationOfSleep;
@property(readonly, nonatomic) NSDate *hui_endOfSleep;
@property(readonly, nonatomic) NSDate *hui_startOfSleep;
- (id)lastEndDateMatchingSleepValues:(id)arg1;	// IMP=0x00100000001c7c2a
- (id)firstStartDateMatchingSleepValues:(id)arg1;	// IMP=0x00100000001c78a8
- (id)hkui_somnogramChartDateInterval;	// IMP=0x00100000001c74e8
- (double)hkui_durationForSleepCategoryValue:(long long)arg1;	// IMP=0x00100000001c74c7
- (id)_secondsFromSummaryStartDateForDateComponents:(id)arg1;	// IMP=0x00100000001c5ab9
- (id)hk_sleepDurationGoalValue;	// IMP=0x00100000001c59f9
- (id)hk_wakeTimeGoalValue;	// IMP=0x00100000001c5979
- (id)hk_bedtimeGoalValue;	// IMP=0x00100000001c58f9
- (id)maxYValue;	// IMP=0x00100000001c58dd
- (id)minYValue;	// IMP=0x00100000001c58c1
@end
