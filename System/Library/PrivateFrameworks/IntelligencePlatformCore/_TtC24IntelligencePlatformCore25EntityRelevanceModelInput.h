//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSSet;

@interface _TtC24IntelligencePlatformCore25EntityRelevanceModelInput : _TtCs12_SwiftObject
{
    MISSING_TYPE *behaviorPopularityGivenContext_coarseGeoHash;	// 16 = 0x10
    MISSING_TYPE *behaviorPopularityGivenContext_coarseTimeOfDay;	// 24 = 0x18
    MISSING_TYPE *behaviorPopularityGivenContext_dayOfWeek;	// 32 = 0x20
    MISSING_TYPE *behaviorPopularityGivenContext_largeGeoHash;	// 40 = 0x28
    MISSING_TYPE *behaviorPopularityGivenContext_microLocation;	// 48 = 0x30
    MISSING_TYPE *behaviorPopularityGivenSequence;	// 56 = 0x38
    MISSING_TYPE *behaviorPopularityGivenContext_specificGeoHash;	// 64 = 0x40
    MISSING_TYPE *behaviorPopularityGivenContext_timeOfDay;	// 72 = 0x48
    MISSING_TYPE *behaviorPopularityGivenContext_wifi;	// 80 = 0x50
    MISSING_TYPE *posteriorProbabilityGivenContext_coarseGeoHash_coarseTimeOfDay;	// 88 = 0x58
    MISSING_TYPE *posteriorProbabilityGivenContext_coarseGeoHash_dayOfWeek;	// 96 = 0x60
    MISSING_TYPE *posteriorProbabilityGivenContext_coarseGeoHash_timeOfDay;	// 104 = 0x68
    MISSING_TYPE *contextPopularityGivenBehavior_coarseGeoHash;	// 112 = 0x70
    MISSING_TYPE *posteriorProbabilityGivenContext_coarseGeoHash;	// 120 = 0x78
    MISSING_TYPE *posteriorProbabilityGivenContext_coarseTimeOfDay_dayOfWeek;	// 128 = 0x80
    MISSING_TYPE *contextPopularityGivenBehavior_coarseTimeOfDay;	// 136 = 0x88
    MISSING_TYPE *posteriorProbabilityGivenContext_coarseTimeOfDay;	// 144 = 0x90
    MISSING_TYPE *dailyDoseL1Error;	// 152 = 0x98
    MISSING_TYPE *dailyDoseL2Error;	// 160 = 0xa0
    MISSING_TYPE *contextPopularityGivenBehavior_dayOfWeek;	// 168 = 0xa8
    MISSING_TYPE *posteriorProbabilityGivenContext_dayOfWeek;	// 176 = 0xb0
    MISSING_TYPE *posteriorProbabilityGivenContext_coarseTimeOfDay_largeGeoHash;	// 184 = 0xb8
    MISSING_TYPE *posteriorProbabilityGivenContext_dayOfWeek_largeGeoHash;	// 192 = 0xc0
    MISSING_TYPE *posteriorProbabilityGivenContext_largeGeoHash_timeOfDay;	// 200 = 0xc8
    MISSING_TYPE *contextPopularityGivenBehavior_largeGeoHash;	// 208 = 0xd0
    MISSING_TYPE *posteriorProbabilityGivenContext_largeGeoHash;	// 216 = 0xd8
    MISSING_TYPE *lastExecutionAge;	// 224 = 0xe0
    MISSING_TYPE *longTermTrendingPopularity;	// 232 = 0xe8
    MISSING_TYPE *medianTimeIntervalBetweenExecution;	// 240 = 0xf0
    MISSING_TYPE *posteriorProbabilityGivenContext_coarseTimeOfDay_microLocation;	// 248 = 0xf8
    MISSING_TYPE *posteriorProbabilityGivenContext_dayOfWeek_microLocation;	// 256 = 0x100
    MISSING_TYPE *posteriorProbabilityGivenContext_microLocation_timeOfDay;	// 264 = 0x108
    MISSING_TYPE *contextPopularityGivenBehavior_microLocation;	// 272 = 0x110
    MISSING_TYPE *posteriorProbabilityGivenContext_microLocation;	// 280 = 0x118
    MISSING_TYPE *sequencePopularityGivenBehavior;	// 288 = 0x120
    MISSING_TYPE *shortTermTrendingPopularity;	// 296 = 0x128
    MISSING_TYPE *posteriorProbabilityGivenContext_coarseTimeOfDay_specificGeoHash;	// 304 = 0x130
    MISSING_TYPE *posteriorProbabilityGivenContext_dayOfWeek_specificGeoHash;	// 312 = 0x138
    MISSING_TYPE *posteriorProbabilityGivenContext_specificGeoHash_timeOfDay;	// 320 = 0x140
    MISSING_TYPE *contextPopularityGivenBehavior_specificGeoHash;	// 328 = 0x148
    MISSING_TYPE *posteriorProbabilityGivenContext_specificGeoHash;	// 336 = 0x150
    MISSING_TYPE *posteriorProbabilityGivenContext_dayOfWeek_timeOfDay;	// 344 = 0x158
    MISSING_TYPE *contextPopularityGivenBehavior_timeOfDay;	// 352 = 0x160
    MISSING_TYPE *posteriorProbabilityGivenContext_timeOfDay;	// 360 = 0x168
    MISSING_TYPE *trendingPopularity;	// 368 = 0x170
    MISSING_TYPE *posteriorProbabilityGivenContext_coarseTimeOfDay_wifi;	// 376 = 0x178
    MISSING_TYPE *posteriorProbabilityGivenContext_dayOfWeek_wifi;	// 384 = 0x180
    MISSING_TYPE *posteriorProbabilityGivenContext_timeOfDay_wifi;	// 392 = 0x188
    MISSING_TYPE *posteriorProbabilityGivenContext_wifi;	// 400 = 0x190
    MISSING_TYPE *contextPopularityGivenBehavior_wifi;	// 408 = 0x198
}

- (id)featureValueForName:(id)arg1;	// IMP=0x000000000056b223
@property(nonatomic, readonly) NSSet *featureNames;

@end
