//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TIUserModelDataStore;
@protocol CHPKPersistentAnalyticsSessionDelegate, OS_dispatch_queue;

@interface CHPKPersistentAnalyticsController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    TIUserModelDataStore *_dataStore;	// 16 = 0x10
    id <CHPKPersistentAnalyticsSessionDelegate>;	// 24 = 0x18
}

+ (void)registerScheduledEventsActivity;	// IMP=0x0020000000002f60
+ (id)userModelDataStorePath;	// IMP=0x0010000000002da0
+ (id)sharedInstance;	// IMP=0x0010000000002be0
- (void).cxx_destruct;	// IMP=0x0020000000005640
@property(nonatomic) __weak id <CHPKPersistentAnalyticsSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
- (oneway void)test_dispatchDailyEvent;	// IMP=0x00100000000055e0
- (oneway void)didEndPKCanvasSession:(id)arg1 withInputMode:(id)arg2;	// IMP=0x0010000000005340
- (oneway void)didEndInputSessionUsingScribbleWithInputMode:(id)arg1;	// IMP=0x0010000000005200
- (oneway void)didEndInputSessionWithInputMode:(id)arg1;	// IMP=0x00100000000050e0
- (oneway void)didBeginInputSession;	// IMP=0x00100000000050a0
- (_Bool)inputModeIdentifierIsValid:(id)arg1;	// IMP=0x0010000000005040
- (void)dispatchLifecycleEventForFeature:(id)arg1 denominatorKey:(id)arg2 inputModeIdentifier:(id)arg3 values:(id)arg4 sinceDate:(id)arg5;	// IMP=0x0010000000004c40
- (void)dispatchLifecycleEvents;	// IMP=0x00100000000046c0
- (void)dispatchDailyUsageEvents;	// IMP=0x0010000000003f90
- (void)dispatchSettingsEvents;	// IMP=0x0010000000003ef0
- (void)dispatchScheduledEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003db0
- (id)newContextForAnalyticsWithUserModel:(id)arg1 language:(id)arg2;	// IMP=0x0010000000003c90
- (_Bool)cachedSettingsBoolForKey:(id)arg1 userModel:(id)arg2;	// IMP=0x0010000000003bd0
- (id)durableCounterKeys;	// IMP=0x0010000000003bc0
- (id)settingsDictionary;	// IMP=0x0010000000003650
- (id)init;	// IMP=0x0010000000002c90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
