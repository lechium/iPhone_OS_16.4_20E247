//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CKContainer, CloudBookmarkDatabaseLockArbiter, CloudBookmarkStore, CloudBookmarkSyncCoordinator, CloudBookmarkSyncMigrationCoordinator, CloudBookmarksMigrationCoordinator, CloudExtensionStore, CloudExtensionSyncCoordinator, CloudSettingStore, CloudSettingSyncCoordinator, CloudTabGroupSyncManager, CloudTabSyncArbiter, CyclerCloudBookmarksAssistant, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSTimer, NSUserDefaults, NSXPCListener, WBSCloudKitContainerManateeObserver, WBSDiagnosticStateCollector, WBTabCollection;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction, WBSBookmarkDBAccess, WBSSettingsSyncEngineAccess;

@interface SafariSyncController : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    id <WBSBookmarkDBAccess> _databaseAccessor;	// 16 = 0x10
    CloudBookmarkStore *_bookmarkStore;	// 24 = 0x18
    NSXPCListener *_xpcListener;	// 32 = 0x20
    NSTimer *_delayBeforeSyncingAfterPushNotificationTimer;	// 40 = 0x28
    NSDate *_dateToForceSyncAfterPushNotification;	// 48 = 0x30
    NSObject<OS_os_transaction> *_transactionForTimerToDelaySyncing;	// 56 = 0x38
    WBSDiagnosticStateCollector *_stateCollector;	// 64 = 0x40
    _Bool _isSyncing;	// 72 = 0x48
    _Bool _isMigrating;	// 73 = 0x49
    _Bool _periodicallyObservingRemoteMigrationState;	// 74 = 0x4a
    _Bool _didCheckAgentVersionOnDatabaseLock;	// 75 = 0x4b
    CKContainer *_cloudBookmarksStoreContainer;	// 80 = 0x50
    CloudBookmarkDatabaseLockArbiter *_databaseLockArbiter;	// 88 = 0x58
    CloudBookmarkSyncMigrationCoordinator *_syncMigrationCoordinator;	// 96 = 0x60
    CloudBookmarksMigrationCoordinator *_migrationCoordinator;	// 104 = 0x68
    CloudBookmarkSyncCoordinator *_bookmarkSyncCoordinator;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_activityCheckInQueue;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_cloudKitSubscriptionRegistrationTimer;	// 128 = 0x80
    unsigned long long _lastSuccessfulCloudKitSubscriptions;	// 136 = 0x88
    unsigned long long _remainingCloudKitSubscriptionsToRegister;	// 144 = 0x90
    unsigned long long _numberOfFailedCloudKitSubscriptionRegistrationAttempts;	// 152 = 0x98
    _Bool _cloudKitSubscriptionRegistrationIsInProgress;	// 160 = 0xa0
    _Bool _ignoreOngoingCloudKitSubscriptionRegistrationResult;	// 161 = 0xa1
    CyclerCloudBookmarksAssistant *_cyclerAssistant;	// 168 = 0xa8
    NSMutableSet *_detectedBugIDs;	// 176 = 0xb0
    NSUserDefaults *_safariUserDefaults;	// 184 = 0xb8
    NSTimer *_hierarchyCheckTimer;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_operationDispatchQueue;	// 200 = 0xc8
    NSOperationQueue *_operationQueue;	// 208 = 0xd0
    NSMutableSet *_containersCheckedForDatabaseChanges;	// 216 = 0xd8
    CKContainer *_cloudTabsContainer;	// 224 = 0xe0
    CloudTabSyncArbiter *_tabSyncArbiter;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_customizationSyncQueue;	// 240 = 0xf0
    CKContainer *_cloudSettingsContainer;	// 248 = 0xf8
    CloudSettingStore *_settingsStore;	// 256 = 0x100
    CloudSettingSyncCoordinator *_settingsSyncCoordinator;	// 264 = 0x108
    id <WBSSettingsSyncEngineAccess> _settingsSyncEngine;	// 272 = 0x110
    _Bool _isCustomizationSyncing;	// 280 = 0x118
    NSMutableDictionary *_fetchedSettingsDictionary;	// 288 = 0x120
    NSTimer *_delayBeforeSavingBackgroundImageTimer;	// 296 = 0x128
    NSString *_perSiteSettingsDeviceIdentifier;	// 304 = 0x130
    NSMutableArray *_fetchedPerSiteSettings;	// 312 = 0x138
    CloudExtensionStore *_extensionStore;	// 320 = 0x140
    CloudExtensionSyncCoordinator *_extensionsSyncCoordinator;	// 328 = 0x148
    CloudTabGroupSyncManager *_tabGroupSyncManager;	// 336 = 0x150
    WBSCloudKitContainerManateeObserver *_cloudTabsContainerManateeObserver;	// 344 = 0x158
    long long _cloudTabsContainerManateeState;	// 352 = 0x160
    WBTabCollection *_tabCollection;	// 360 = 0x168
}

- (void).cxx_destruct;	// IMP=0x0020000000019d85
- (void)_hierarchyCheckerDidFail;	// IMP=0x0010000000019cf5
- (void)_performHiearchyCheck;	// IMP=0x0010000000019c35
- (void)_hierarchyCheckTimer:(id)arg1;	// IMP=0x0010000000019c09
- (void)_invalidateHierarchyCheckTimer;	// IMP=0x0010000000019bce
- (void)_scheduleHierarchyCheckTimer;	// IMP=0x0010000000019b19
- (void)_sendDetectedBugNotificationIfNeeded;	// IMP=0x00100000000198d4
- (void);	// IMP=0x00100000000197ed
- (id)_cyclerAssistant;	// IMP=0x001000000001978a
- (_Bool)isDeviceToDeviceEncryptionEnabledForCloudTabGroupSyncManager:(id)arg1;	// IMP=0x0010000000019778
- (_Bool)_isDeviceToDeviceEncryptionEnabled;	// IMP=0x0010000000019767
- (void)cloudTabGroupSyncManager:(id)arg1 didFindChangesToRecordZonesWithIDs:(id)arg2;	// IMP=0x00100000000195ed
- (_Bool)hasEntitlementForSensitiveOperationInCloudTabGroupSyncManager:(id)arg1;	// IMP=0x00100000000195db
- (void)cloudTabGroupSyncManagerPCSIdentitiesDidChange:(id)arg1;	// IMP=0x001000000001958c
- (void)userDidUpdateCloudTabGroupSyncManagerDatabase:(id)arg1;	// IMP=0x0010000000019540
- (void)_performTabGroupSyncForManager:(id)arg1 withTrigger:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000019214
- (void)_runTabGroupsSyncForManager:(id)arg1 withTrigger:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000018f03
- (void)_attemptTabGroupsSyncForManager:(id)arg1 withTrigger:(long long)arg2;	// IMP=0x0010000000018c82
- (void)_runTabGroupSyncUsingXPCActivityForManager:(id)arg1 tigger:(long long)arg2;	// IMP=0x0010000000018a01
- (void)_updateTabGroupsSyncCoordinatorAfterUserAccountChange:(long long)arg1;	// IMP=0x0010000000018972
- (void)_saveTabGroupsSharedDatabaseSubscriptionIfNeededInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000185df
- (void)_saveTabGroupsPrivateDatabaseSubscriptionIfNeededInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001824c
- (void)registerMigrationXPCActivity:(_Bool)arg1;	// IMP=0x0010000000017cc7
- (void)_registerPeriodicRemoteMigrationStateObserverXPCActivityRegisteringIfNeeded:(_Bool)arg1;	// IMP=0x001000000001761a
- (void)observeRemoteMigrationStateForSecondaryMigration;	// IMP=0x0010000000017588
- (void)_registerRemainingCloudKitSubscriptions:(unsigned long long)arg1 withLastSuccessfulSubscriptions:(unsigned long long)arg2 inOperationGroup:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000016e46
- (void)_registerCloudKitSubscriptionsXPCActivityRegisteringIfNeeded:(_Bool)arg1 ignoreOnGoingRegistration:(_Bool)arg2 resetSubscriptions:(unsigned long long)arg3 qualityOfService:(long long)arg4 delay:(long long)arg5;	// IMP=0x001000000001632c
- (void)_didRegisterCloudKitSubscriptions:(unsigned long long)arg1 timer:(id)arg2 lastError:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000015e84
- (double)_retryIntervalToRegisterCloudKitSubscriptionsWithNumberOfFailedAttempts:(long long)arg1 lastCKError:(id)arg2;	// IMP=0x0010000000015dc4
- (void)_checkInXPCActivityWithIdentifier:(const char *)arg1 criteria:(id)arg2 registerIfNeeded:(_Bool)arg3 performBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000015905
- (void)_migrateFromDAVInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015830
- (void)cloudTabSyncArbiterPCSIdentitiesDidChange:(id)arg1;	// IMP=0x0010000000015819
- (void)cloudTabSyncArbiterDidChangeCloudKitContainer:(id)arg1;	// IMP=0x0010000000015733
- (id)tabSyncArbiter:(id)arg1 containerUsingManatee:(_Bool)arg2;	// IMP=0x0010000000015715
- (void)_deleteLegacySectionIdentifiers;	// IMP=0x0010000000015401
- (void)cloudSettingSyncCoordinator:(id)arg1 setPageZoomSyncData:(id)arg2 forRecordName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001534a
- (void)pcsIdentitiesDidChangeForCloudSettingSyncCoordinator:(id)arg1;	// IMP=0x001000000001530e
- (void)performInitialSyncDown;	// IMP=0x0010000000014ae8
- (void)cloudSettingSyncCoordinator:(id)arg1 storeRemoteCloudSettingsUpdateWithRecord:(id)arg2;	// IMP=0x001000000001488f
- (void)cloudSettingSyncCoordinator:(id)arg1 didDeleteRemoteRecordWithID:(id)arg2;	// IMP=0x0010000000014820
- (void)cloudSettingSyncCoordinator:(id)arg1 didReceiveRemoteCloudSettingsUpdateWithRecord:(id)arg2;	// IMP=0x00100000000147b1
- (void)_updateCloudExtensionsSyncCoordinatorAfterUserAccountChange:(long long)arg1;	// IMP=0x0010000000014767
- (void)_saveCloudExtensionsZoneSubscriptionIfNeededInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014370
- (void)_attemptCloudExtensionsSyncForPushNotification;	// IMP=0x00100000000142ca
- (void)_cancelBackgroundImageSaveDelayTimer;	// IMP=0x001000000001428f
- (void)_saveCloudBackgroundImageWithURL:(id)arg1 isLightAppearance:(_Bool)arg2 successCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013ff6
- (void)_performSettingsSyncForTrigger:(long long)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013ce6
- (void)_attemptCloudSettingsSyncForTrigger:(long long)arg1;	// IMP=0x0010000000013c0b
- (void)_updateCloudSettingsSyncCoordinatorAfterUserAccountChange:(long long)arg1;	// IMP=0x0010000000013b3d
- (void)_saveCloudSettingsZoneSubscriptionIfNeededInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013746
- (void)_scheduleInitialManateeCloudTabFetchRetryXPCActivityRegisteringIfNeeded:(_Bool)arg1;	// IMP=0x001000000001337b
- (void)_updateCloudTabsSyncCoordinatorAfterUserAccountChange:(long long)arg1;	// IMP=0x001000000001333e
- (void)_attemptCloudTabsSyncForPushNotification;	// IMP=0x0010000000013152
- (void)_attemptSyncAndFallBackToMigrationIfPossibleForTrigger:(long long)arg1;	// IMP=0x0010000000012a75
- (void)_saveCloudTabsZoneSubscriptionIfNeededInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012590
- (void)_saveBookmarksZoneSubscriptionIfNeededInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000121a3
- (void)_cancelPushNotificationSyncDelayTimer;	// IMP=0x001000000001214a
- (void)_fetchUpdatedZonesInPushNotificationForContainer:(id)arg1;	// IMP=0x0010000000011171
- (void)_attemptSyncForChangedZonesSharingContainer:(id)arg1;	// IMP=0x0010000000010f1f
- (id)_pushTopicForContainer:(id)arg1;	// IMP=0x0010000000010e9b
- (void)_didReceiveIncomingMessageWithNotification:(id)arg1 pushTopic:(id)arg2 subscriptionID:(id)arg3;	// IMP=0x0010000000010abe
- (void)_setUpSyncAgentInterfaceOnConnection:(id)arg1;	// IMP=0x0010000000010a19
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000109eb
- (_Bool)_hasEntitlementForSensitiveOperation;	// IMP=0x0010000000010925
- (_Bool)_shouldPerformMigrationAfterUpgradingBookmarksDatabaseFromSafariVersion:(id)arg1;	// IMP=0x00100000000108c5
- (void)databaseLockArbiterDidAcquireDatabaseLock:(id)arg1;	// IMP=0x001000000001064c
- (void)migrateToCloudKitWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010400
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001027e
- (void)clearLocalDataIncludingMigrationState:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000100e1
- (void)resetToDAVDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ff5f
- (void)fetchTabGroupEntitiesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fbc6
- (void)deleteCloudExtensionStatesDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fa34
- (void)deleteCloudExtensionDevicesWithUUIDStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f855
- (void)getCloudExtensionStatesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f621
- (void)saveExtensionDeviceWithDictionaryRepresentation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f442
- (void)saveExtensionStatesWithDictionaryRepresentation:(id)arg1 forDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f247
- (void)_saveCloudSettingsBatchWithDictionaryRepresentation:(id)arg1 successCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e99b
- (void)_saveCloudPerSiteSettingsWithMacZoomPreferences:(id)arg1 successCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e201
- (void)syncUpSafariPerSiteSettingsSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e1a7
- (void)syncDownSafariPerSiteSettingsSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e10a
- (void)syncUpSafariSettingsSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000dfde
- (void)syncDownSafariSettingsSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000df41
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000dc10
- (void)scheduleCloudBackgroundImageSaveWithURL:(id)arg1 isLightAppearance:(_Bool)arg2 successCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000d9e4
- (void)triggerImmediateBackgroundImageSaveIfApplicable;	// IMP=0x001000000000d99d
- (void)deleteBackgroundImageDirectory;	// IMP=0x001000000000d94f
- (id)_perSitePreferencesStore;	// IMP=0x001000000000d8a9
- (id)_archivedDataForPerSiteSettingDictionaryInDictionary:(id)arg1;	// IMP=0x001000000000d7dc
- (void)_getPerSiteSettingRecordNameWithDictionaryRepresentation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d648
- (id)_deviceClass;	// IMP=0x001000000000d614
- (id)_createNewPerSiteCloudKitRecordWithDictionaryRepresentation:(id)arg1 precomputedRecordName:(id)arg2;	// IMP=0x001000000000d28c
- (id)_modifyExistingPerSiteCloudKitRecordWithData:(id)arg1 dictionaryRepresentation:(id)arg2;	// IMP=0x001000000000cdbb
- (void)deletePerSiteSettingsSyncData;	// IMP=0x001000000000cd4a
- (void)saveCloudPerSiteSettingWithDictionaryRepresentation:(id)arg1 successCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c2fd
- (void)saveCloudSettingWithDictionaryRepresentation:(id)arg1 successCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000bf96
- (void)fetchCloudSettingsChangesImmediately;	// IMP=0x001000000000bf1c
- (void)getCloudTabContainerManateeStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000be2c
- (void)triggerSafariTabGroupSync;	// IMP=0x001000000000bdc8
- (void)getCloudTabDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000baab
- (void)_fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b439
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b36c
- (void)fetchCloudTabDevicesAndCloseRequests;	// IMP=0x001000000000b34d
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b22d
- (void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b10d
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ae54
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ac86
- (void)collectDiagnosticsDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000abfb
- (void)_beginMigrationFromDAVInOperationGroupInternal:(id)arg1;	// IMP=0x001000000000ab01
- (void)_beginMigrationFromDAVInOperationGroup:(id)arg1;	// IMP=0x001000000000aa18
- (void)beginMigrationFromDAV;	// IMP=0x001000000000aa04
- (void)_fetchRemoteMigrationStateWithXPCActivity:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a61b
- (void)fetchRemoteMigrationStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a4d2
- (void)_sendNotificationForSyncResult:(long long)arg1;	// IMP=0x001000000000a393
- (void)_performBookmarkSyncForTrigger:(long long)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009e89
- (void)_userDidUpdateBookmarkDatabase;	// IMP=0x0010000000009e1d
- (void)userDidUpdateBookmarkDatabase;	// IMP=0x0010000000009d9e
- (void)getCloudSettingsContainerManateeStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009b8e
- (void)_updateCloudBookmarksSyncCoordinatorAfterUserAccountChange:(long long)arg1;	// IMP=0x0010000000009b13
- (void)_userAccountDidChange:(long long)arg1;	// IMP=0x001000000000987a
- (void)userAccountDidChange:(long long)arg1;	// IMP=0x00100000000097e9
- (void)setUsesOpportunisticPushTopic:(_Bool)arg1;	// IMP=0x00100000000097e3
- (void)registerForPushNotificationsIfNeeded;	// IMP=0x001000000000973e
- (void)didReceiveLocalNotificationWithPushTopic:(id)arg1;	// IMP=0x0010000000009738
- (void)didReceiveIncomingMessageForSubscriptionID:(id)arg1 withPushTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x0010000000009732
- (id)_syncManagerWithStoreOwner:(long long)arg1;	// IMP=0x0010000000009692
- (_Bool)_needsDatabaseFetchOperationForContainer:(id)arg1;	// IMP=0x00100000000095b2
- (_Bool)_topic:(id)arg1 matchesPushTopicForContainer:(id)arg2;	// IMP=0x001000000000951f
- (id)_updatedContainerForPushTopic:(id)arg1;	// IMP=0x0010000000009473
@property(readonly, nonatomic) _Bool isSyncEnabled;
- (void)updatePushTopicSubscriptions;	// IMP=0x0010000000009425
- (void)didReceivePushNotificationWithTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000009296
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x001000000000925b
- (id)init;	// IMP=0x00100000000084ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

