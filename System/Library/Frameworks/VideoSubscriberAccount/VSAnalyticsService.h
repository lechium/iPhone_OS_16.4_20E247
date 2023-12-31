//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSBag, MTMetricsKit, NSMutableArray, NSObject, NSString, VSPreferences;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VSAnalyticsService
{
    _Bool _didBuddyComplete;	// 8 = 0x8
    _Bool _optedIn;	// 9 = 0x9
    MTMetricsKit *_mainMetricsKit;	// 16 = 0x10
    AMSBag *_bag;	// 24 = 0x18
    NSMutableArray *_eventCache;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_eventQueue;	// 40 = 0x28
    VSPreferences *_preferences;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000418d3
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
@property _Bool optedIn; // @synthesize optedIn=_optedIn;
@property _Bool didBuddyComplete; // @synthesize didBuddyComplete=_didBuddyComplete;
@property(retain, nonatomic) NSMutableArray *eventCache; // @synthesize eventCache=_eventCache;
@property(retain, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
@property(retain, nonatomic) MTMetricsKit *mainMetricsKit; // @synthesize mainMetricsKit=_mainMetricsKit;
- (id)capacitySystemAvailable:(id)arg1;	// IMP=0x00000000000417ce
- (id)capacityDisk:(id)arg1;	// IMP=0x00000000000417c6
- (id)capacityDataAvailable:(id)arg1;	// IMP=0x00000000000417be
- (id)capacitySystem:(id)arg1;	// IMP=0x00000000000417b6
- (id)capacityData:(id)arg1;	// IMP=0x00000000000417ae
- (id)isSignedIn:(id)arg1;	// IMP=0x00000000000417a6
- (id)clientId:(id)arg1;	// IMP=0x000000000004179e
- (id)xpSendMethod:(id)arg1;	// IMP=0x0000000000041796
- (id)xpPostFrequency:(id)arg1;	// IMP=0x000000000004178e
- (id)windowOuterHeight:(id)arg1;	// IMP=0x0000000000041786
- (id)windowOuterWidth:(id)arg1;	// IMP=0x000000000004177e
- (id)windowInnerHeight:(id)arg1;	// IMP=0x0000000000041776
- (id)windowInnerWidth:(id)arg1;	// IMP=0x000000000004176e
- (id)screenHeight:(id)arg1;	// IMP=0x0000000000041766
- (id)screenWidth:(id)arg1;	// IMP=0x000000000004175e
- (id)resourceRevNum:(id)arg1;	// IMP=0x0000000000041756
- (id)pixelRatio:(id)arg1;	// IMP=0x000000000004174e
- (id)hardwareModel:(id)arg1;	// IMP=0x0000000000041746
- (id)connection:(id)arg1;	// IMP=0x000000000004173e
- (id)pageUrl:(id)arg1;	// IMP=0x0000000000041736
- (id)dsId:(id)arg1;	// IMP=0x000000000004172e
- (void)profileConnectionSettingsChanged:(id)arg1;	// IMP=0x000000000004167c
- (void)publishMetricsKitEventWithData:(id)arg1;	// IMP=0x0000000000041117
- (void)recordMetricsCenterExitEventWithPage:(id)arg1 pageType:(id)arg2 data:(id)arg3;	// IMP=0x0000000000040eb3
- (void)recordMetricsCenterEnterEventWithPage:(id)arg1 pageType:(id)arg2 data:(id)arg3;	// IMP=0x0000000000040c4f
- (void)recordMetricsCenterClickEventWithPage:(id)arg1 pageType:(id)arg2 data:(id)arg3;	// IMP=0x00000000000409eb
- (void)recordMetricsCenterFlexibleEventWithName:(id)arg1 data:(id)arg2;	// IMP=0x00000000000407a4
- (void)recordNowPlayingBrokenEventWithBundleID:(id)arg1;	// IMP=0x000000000004057c
- (void)recordFederatedPunchoutEventWithError:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000000401d4
- (void)onBuddyComplete;	// IMP=0x00000000000401ce
- (id)init;	// IMP=0x000000000003fe2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

