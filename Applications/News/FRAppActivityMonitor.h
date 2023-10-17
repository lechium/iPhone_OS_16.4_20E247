//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCCloudContext, FRAnalyticsController, FRAnalyticsReferral, FREventCenter, MISSING_TYPE, NSHashTable, NSString;
@protocol FRAppActivityObserving, FRURLAnalyticsReferralFactory;

@interface FRAppActivityMonitor : NSObject
{
    _Bool windowIsForeground;	// 8 = 0x8
    _Bool _isActive;	// 9 = 0x9
    _Bool _hasBeenNotifiedOfApplicationLaunch;	// 10 = 0xa
    id <FRAppActivityObserving> _appSessionCloseObserver;	// 16 = 0x10
    unsigned long long _activationCount;	// 24 = 0x18
    FRAnalyticsController *_analyticsController;	// 32 = 0x20
    FRAnalyticsReferral *_appSessionStartReferral;	// 40 = 0x28
    id <FRURLAnalyticsReferralFactory> _analyticsReferralFactory;	// 48 = 0x30
    FREventCenter *_eventCenter;	// 56 = 0x38
    FCCloudContext *_cloudContext;	// 64 = 0x40
    NSHashTable *_observers;	// 72 = 0x48
}

+ (id)recordedExposureDateForObserver:(id)arg1;	// IMP=0x002000000006c273
+ (void)recordExposureEventForObserver:(id)arg1;	// IMP=0x001000000006c1e7
+ (void)saveViewAppearanceDateForObserver:(id)arg1;	// IMP=0x001000000006c11e
- (void).cxx_destruct;	// IMP=0x001000000006dd7a
@property(nonatomic) _Bool hasBeenNotifiedOfApplicationLaunch; // @synthesize hasBeenNotifiedOfApplicationLaunch=_hasBeenNotifiedOfApplicationLaunch;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) FREventCenter *eventCenter; // @synthesize eventCenter=_eventCenter;
@property(retain, nonatomic) id <FRURLAnalyticsReferralFactory> analyticsReferralFactory; // @synthesize analyticsReferralFactory=_analyticsReferralFactory;
@property(retain, nonatomic) FRAnalyticsReferral *appSessionStartReferral; // @synthesize appSessionStartReferral=_appSessionStartReferral;
@property(retain, nonatomic) FRAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
@property(readonly, nonatomic) unsigned long long activationCount; // @synthesize activationCount=_activationCount;
@property(nonatomic) __weak id <FRAppActivityObserving> appSessionCloseObserver; // @synthesize appSessionCloseObserver=_appSessionCloseObserver;
@property(nonatomic, getter=isWindowForeground) _Bool windowIsForeground; // @synthesize windowIsForeground;
- (void)activityObservingApplicationWindowDidBecomeBackground;	// IMP=0x001000000006daac
- (void)activityObservingApplicationWindowDidBecomeForeground;	// IMP=0x001000000006d8b3
- (void)activityObservingApplicationWillEnterForeground;	// IMP=0x001000000006d713
- (void)activityObservingApplicationDidEnterBackgroundWithSceneID:(id)arg1;	// IMP=0x001000000006d2ed
- (MISSING_TYPE *)activityObservingApplicationWillResignActiveWithSceneID: /* Error: Ran out of types for this method. */;	// IMP=0x001000000006d121
- (void)activityObservingApplicationDidBecomeActiveWithURL:(id)arg1 sourceApplication:(id)arg2 sceneID:(id)arg3;	// IMP=0x001000000006cc14
- (void)activityObservingApplicationDidFinishLaunching;	// IMP=0x001000000006caae
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x001000000006c946
- (void)_checkForNeedToResetIdentifier;	// IMP=0x001000000006c7ce
- (void)_closeAppSessionForReason:(long long)arg1 startNewSession:(_Bool)arg2 resetUserID:(_Bool)arg3 forSceneID:(id)arg4;	// IMP=0x001000000006c737
- (void)readingHistoryDidClear:(id)arg1;	// IMP=0x001000000006c644
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x001000000006c4a4
- (void)applicationWillFinishLaunching;	// IMP=0x001000000006c452
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x001000000006c2ec
- (void)dealloc;	// IMP=0x001000000006c051
- (void)addAppSessionCloseObserver:(id)arg1;	// IMP=0x001000000006bfcc
- (void)removeObserver:(id)arg1;	// IMP=0x001000000006beac
- (void)addObserver:(id)arg1;	// IMP=0x001000000006bdac
- (id)initWithEventCenter:(id)arg1 analyticsController:(id)arg2 appActivityMonitor:(id)arg3 cloudContext:(id)arg4 window:(id)arg5;	// IMP=0x001000000006bb3a
- (void)removeMonitor:(id)arg1;	// IMP=0x001000000006de14
- (void)addMonitor:(id)arg1;	// IMP=0x001000000006de02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
