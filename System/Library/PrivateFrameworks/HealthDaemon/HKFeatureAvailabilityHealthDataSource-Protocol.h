//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource, HKProfileIdentifier, HKWatchLowPowerModeDataSource, HKWristDetectionSettingManager, NSString;
@protocol HKFeatureAvailabilityProviding;

@protocol HKFeatureAvailabilityHealthDataSource <NSObject>
@property(readonly, nonatomic) _Bool requiresWeakRetention;
@property(readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
- (HKWristDetectionSettingManager *)wristDetectionSettingManager;
- (HKWatchLowPowerModeDataSource *)watchLowPowerModeDataSource;
- (HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource *)requirementSatisfactionOverridesDataSource;
- (id <HKFeatureAvailabilityProviding>)featureAvailabilityProvidingForFeatureIdentifier:(NSString *)arg1;
@end

