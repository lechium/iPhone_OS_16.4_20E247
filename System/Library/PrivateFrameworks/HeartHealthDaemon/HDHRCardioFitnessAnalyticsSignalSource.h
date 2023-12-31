//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeartHealth/HKHRCardioFitnessAnalyticsSignalSource.h>

@class HDProfile;

__attribute__((visibility("hidden")))
@interface HDHRCardioFitnessAnalyticsSignalSource : HKHRCardioFitnessAnalyticsSignalSource
{
    HDProfile *_profile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003620c
- (long long)_biologicalSexWithError:(id *)arg1;	// IMP=0x0000000000036028
- (id)_birthDateComponentsWithError:(id *)arg1;	// IMP=0x0000000000035edd
- (id)_classificationStringForCardioFitnessValue:(double)arg1 age:(long long)arg2 biologicalSex:(long long)arg3;	// IMP=0x0000000000035e9b
- (id)_latestCardioFitnessValueWithError:(id *)arg1;	// IMP=0x0000000000035d62
- (id)latestClassificationWithIsOnboarded:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000000359f9
- (id)biologicalSexStringWithError:(id *)arg1;	// IMP=0x00000000000359c8
- (long long)bucketedAgeWithError:(id *)arg1;	// IMP=0x00000000000358f5
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000003588e

@end

