//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDAnalyticsDailyEventManager, HDBackgroundFeatureDeliveryManager, HDFeatureAvailabilityManager, HDMobilityNotificationManager, HDMobilityWalkingSteadinessFeatureAvailabilityManager, NSString;

__attribute__((visibility("hidden")))
@interface HDMobilityProfileExtension : NSObject
{
    HDMobilityNotificationManager *_notificationManager;	// 8 = 0x8
    HDFeatureAvailabilityManager *_walkingSteadinessClassificationsAvailabilityManager;	// 16 = 0x10
    HDBackgroundFeatureDeliveryManager *_walkingSteadinessClassificationsBackgroundFeatureDeliveryManager;	// 24 = 0x18
    HDMobilityWalkingSteadinessFeatureAvailabilityManager *_walkingSteadinessNotificationsAvailabilityManager;	// 32 = 0x20
    HDAnalyticsDailyEventManager *_walkingSteadinessDailyAnalyticsEventManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000065e0
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1;	// IMP=0x0000000000006557
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000006021

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

