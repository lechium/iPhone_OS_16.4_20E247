//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSNumber, NSString, UIColor;

@protocol HKPopulationNormsViewModelDataSource
- (NSString *)hk_UIAutomationIdentifier;
- (void)prepareUserCharacteristicCacheWithHandler:(void (^)(void))arg1;
- (void)clearUserCharacteristicCache;
- (double)minimumSampleValueQuantity;
- (double)maximumSampleValueQuantity;
- (unsigned long long)maximumUserAgeBucketIndex;
- (NSNumber *)userLatestSampleValue;
- (NSNumber *)userAgeBucketIndex;
- (void)setClassificationIndex:(unsigned long long)arg1;
- (unsigned long long)classificationIndexForLevelIndex:(unsigned long long)arg1;
- (unsigned long long)currentClassificationIndex;
- (_Bool)isCurrentClassificationAvailable;
- (void)setBiologicalSexSegmentIndex:(unsigned long long)arg1;
- (unsigned long long)currentBiologicalSexSegmentIndex;
- (NSDictionary *)currentDataForBiologicalSex;
- (NSNumber *)currentAgeInYears;
- (long long)currentBiologicalSex;
- (NSString *)currentLocalizedClassificationDescription;
- (NSString *)currentLocalizedClassificationName;
- (NSString *)currentLocalizedClassificationTitle;
- (NSString *)localizedClassificationDescriptionForIndex:(unsigned long long)arg1;
- (NSString *)localizedClassificationNameForIndex:(unsigned long long)arg1;
- (NSString *)localizedClassificationTitleForIndex:(unsigned long long)arg1;
- (_Bool)shouldShowClassificationTitle;
- (unsigned long long)numberOfClassifications;
- (NSArray *)localizedBiologicalSexTitles;
- (unsigned long long)numberOfBiologicalSexSegments;
- (UIColor *)seriesHighlightedSegmentColor;
- (UIColor *)seriesHighlightedColor;
- (NSString *)footerText;
- (NSString *)ageBucketsTitle;
- (NSString *)quantityUnitTitle;
- (NSString *)levelsTitle;
- (NSString *)chartTitle;
- (NSString *)viewTitle;
@end
