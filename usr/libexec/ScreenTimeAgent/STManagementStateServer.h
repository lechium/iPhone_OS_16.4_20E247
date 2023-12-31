//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;
@protocol STScreenTimeStateManager;

@interface STManagementStateServer : NSObject
{
    NSObject<STScreenTimeStateManager> *_screenTimeManager;	// 8 = 0x8
    NSTimer *_notificationTimer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000519d0
@property(retain, nonatomic) NSTimer *notificationTimer; // @synthesize notificationTimer=_notificationTimer;
@property(retain, nonatomic) NSObject<STScreenTimeStateManager> *screenTimeManager; // @synthesize screenTimeManager=_screenTimeManager;
- (void)lastModifcationDateForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051914
- (void)lastCommunicationLimitsModifcationDateForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005188e
- (void)setLocationSharingModificationAllowed:(_Bool)arg1 forDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051800
- (void)isLocationSharingModificationAllowedForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005177a
- (void)applyIntroductionModel:(id)arg1 forDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000516e5
- (void)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051621
- (void)shouldAllowOneMoreMinuteForWebDomain:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005155d
- (void)shouldAllowOneMoreMinuteForBundleIdentifier:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051499
- (void)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051404
- (void)performMigrationFromMCXSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005137e
- (void)deleteAllWebApplicationHistory:(id)arg1 clientBundleURLWrapper:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005128a
- (void)deleteWebHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 clientBundleURLWrapper:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000051180
- (void)deleteWebHistoryForURL:(id)arg1 webApplication:(id)arg2 clientBundleURLWrapper:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000051076
- (void)deleteAllWebApplicationHistory:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050eeb
- (void)deleteWebHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000050d29
- (void)deleteWebHistoryForDomain:(id)arg1 webApplication:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000050b67
- (void)deleteWebHistoryForURLs:(id)arg1 webApplication:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000509a5
- (void)deleteWebHistoryForURL:(id)arg1 webApplication:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000507e3
- (void)isExplicitContentRestrictedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000050661
- (void)contactManagementStateForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000505db
- (void)setContactManagementState:(long long)arg1 forDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005054d
- (void)primaryiCloudCardDAVAccountIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000050458
- (void)communicationPoliciesForDSID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000503d2
- (void)communicationPoliciesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000050360
- (void)shouldRequestMoreTimeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000502a3
- (void)needsToSetRestrictionsPasscodeWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000501e5
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000500e7
- (void)clearRestrictionsPasscodeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000050042
- (void)isContentPrivacyEnabledForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ffbc
- (void)setScreenTimeSyncingEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ff44
- (void)screenTimeSyncStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004fec3
- (void)enableScreenTimeForDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004fe3d
- (void)setScreenTimeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004fdc5
- (void)screenTimeStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000004fd44
- (void)scheduleManagementStateUpdateNotification;	// IMP=0x001000000004fb8b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000004fb32
- (id)_observedManagerKeyPaths;	// IMP=0x001000000004fab5
- (void)dealloc;	// IMP=0x001000000004f91b
- (id)initWithScreenTimeStateManager:(id)arg1;	// IMP=0x001000000004f766

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

