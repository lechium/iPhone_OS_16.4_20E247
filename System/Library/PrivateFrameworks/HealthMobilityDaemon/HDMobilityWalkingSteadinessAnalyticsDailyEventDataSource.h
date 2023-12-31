//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface HDMobilityWalkingSteadinessAnalyticsDailyEventDataSource : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    NSUserDefaults *_mobilitySettingsDefaults;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000007c37
- (id)_healthAppLastOpenedDateWithError:(id *)arg1;	// IMP=0x0000000000007bcc
- (id)_hasLaunchedHealthAppInLastTimeInterval:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000007ab8
- (id)_hasLaunchedHealthAppInLastMonthWithError:(id *)arg1;	// IMP=0x0000000000007a9e
- (id)_hasLaunchedHealthAppInLastWeekWithError:(id *)arg1;	// IMP=0x0000000000007a84
- (id)_hasSampleWithType:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000079e7
- (id)_numberOfDaysSinceLastCategorySampleWithSampleType:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000007958
- (id)_numberOfDaysSinceLastSampleWithSampleType:(id)arg1 predicate:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000077b5
- (id)_countOfSamplesWithType:(id)arg1 predicate:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000770d
- (id)_countOfSamplesInPastYearWithType:(id)arg1 valuePredicate:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000075b7
- (id)_countOfCategorySamplesInPastYearWithType:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000007528
- (id)_categoryValuePredicateWithValues:(id)arg1;	// IMP=0x0000000000007480
- (id)_samplePredicateForPastYearFromDate:(id)arg1;	// IMP=0x0000000000007316
- (id)areHealthNotificationsAuthorizedWithError:(id *)arg1;	// IMP=0x000000000000728e
- (id)walkingSteadinessNotificationsEnabledWithError:(id *)arg1;	// IMP=0x000000000000724b
- (id)hasWalkingSteadinessMeasurementsWithError:(id *)arg1;	// IMP=0x00000000000071ef
- (id)previousWalkingSteadinessClassificationWithError:(id *)arg1;	// IMP=0x0000000000006ec3
- (id)currentWalkingSteadinessClassificationWithError:(id *)arg1;	// IMP=0x0000000000006cae
- (id)daysSinceLastInitialNotificationWithError:(id *)arg1;	// IMP=0x0000000000006c32
- (id)daysSinceLastRepeatNotificationWithError:(id *)arg1;	// IMP=0x0000000000006bb6
- (id)numberOfInitialNotificationsInPastYearWithError:(id *)arg1;	// IMP=0x0000000000006b3a
- (id)numberOfRepeatVeryLowNotificationsInPastYearWithError:(id *)arg1;	// IMP=0x0000000000006abe
- (id)numberOfVeryLowNotificationsInPastYearWithError:(id *)arg1;	// IMP=0x0000000000006a42
- (id)numberOfRepeatLowNotificationsInPastYearWithError:(id *)arg1;	// IMP=0x00000000000069c6
- (id)numberOfLowNotificationsInPastYearWithError:(id *)arg1;	// IMP=0x000000000000694a
- (id)numberOfDaysSinceLastWalkingSteadinessMeasurementWithError:(id *)arg1;	// IMP=0x0000000000006860
- (id)hasLaunchedHealthAppInLastMonth:(id *)arg1;	// IMP=0x000000000000684e
- (id)hasLaunchedHealthAppInLastWeek:(id *)arg1;	// IMP=0x000000000000683c
- (id)hasHeightWithError:(id *)arg1;	// IMP=0x00000000000067c7
- (id)biologicalSexWithError:(id *)arg1;	// IMP=0x000000000000676b
- (id)ageWithError:(id *)arg1;	// IMP=0x00000000000066da
- (id)activePairedWatchTypeWithError:(id *)arg1;	// IMP=0x00000000000066c1
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000006629

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

