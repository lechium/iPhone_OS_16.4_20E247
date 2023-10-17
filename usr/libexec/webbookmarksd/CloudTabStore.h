//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebUI/WBSCloudTabStore.h>

@class NSMutableArray, NSObject, NSString, NSUUID, WBSEncryptedCloudKeyValueStore;
@protocol CloudTabStoreDelegate, OS_dispatch_queue;

@interface CloudTabStore : WBSCloudTabStore
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    WBSEncryptedCloudKeyValueStore *_syncedDevicesStore;	// 16 = 0x10
    WBSEncryptedCloudKeyValueStore *_userRequestsStore;	// 24 = 0x18
    _Bool _hasInitiatedFetchOfCloudKitDataAtLeastOnce;	// 32 = 0x20
    _Bool _hasCompletedFetchOfCloudKitDataAtLeastOnce;	// 33 = 0x21
    NSMutableArray *_fetchCloudKitDataCompletionHandlers;	// 40 = 0x28
    _Bool _didAttemptToCloseAtLeastOneTab;	// 48 = 0x30
    _Bool __cloudKitDataNeedsFetching;	// 49 = 0x31
    id <CloudTabStoreDelegate> _delegate;	// 56 = 0x38
}

+ (id)sharedCloudTabStore;	// IMP=0x00200000000029a3
- (void).cxx_destruct;	// IMP=0x0020000000006102
@property(setter=_setCloudKitDataNeedsFetching:) _Bool _cloudKitDataNeedsFetching; // @synthesize _cloudKitDataNeedsFetching=__cloudKitDataNeedsFetching;
@property(nonatomic) __weak id <CloudTabStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_closeRequestedTabIfPossible:(id)arg1;	// IMP=0x0010000000005f41
- (void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2;	// IMP=0x0010000000005e03
- (void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3;	// IMP=0x0010000000005cb3
- (id)_keyValueStoreDictionaryRepresentation:(long long)arg1;	// IMP=0x0010000000005b7e
- (id)_storeForIdentifier:(long long)arg1;	// IMP=0x0010000000005b42
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(id)arg1 error:(id)arg2;	// IMP=0x0010000000005a4d
- (void)didGetCachedDevicesFromCloudKitForCloudTabStore:(id)arg1;	// IMP=0x00100000000059fb
- (id)_currentDeviceUUID;	// IMP=0x00100000000059e2
- (_Bool)canSaveCloudTabsForCurrentDevice;	// IMP=0x00100000000059d0
- (_Bool)cloudTabsAreEnabled;	// IMP=0x001000000000595d
- (_Bool)_shouldUseCloudKitForSavingCurrentDevice;	// IMP=0x001000000000594b
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)arg1 syncCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005298
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)arg1;	// IMP=0x0010000000005284
- (void)_saveCurrentDeviceCloudTabs:(id)arg1 syncCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004d77
- (void)saveCurrentDeviceCloudTabs:(id)arg1;	// IMP=0x0010000000004d63
- (void)saveCurrentDeviceCloudTabsForEnteringBackground:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000498e
- (void)_removeConflictingDevice;	// IMP=0x0010000000004144
- (void)_clearTabsForCurrentDeviceWithSyncCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000410a
- (void)clearTabsForCurrentDevice;	// IMP=0x00100000000040f6
- (void)_clearAllDevices;	// IMP=0x0010000000003d82
- (_Bool)closeAllTabsOnDevice:(id)arg1;	// IMP=0x0010000000003d2e
- (_Bool)closeTabs:(id)arg1 onDevice:(id)arg2;	// IMP=0x0010000000003cda
- (_Bool)closeTab:(id)arg1 onDevice:(id)arg2;	// IMP=0x0010000000003c86
- (void)_callFetchCloudKitDataCompletionHandlers;	// IMP=0x0010000000003b41
- (void)_waitForInitialCloudKitFetchToComplete:(CDUnknownBlockType)arg1;	// IMP=0x00100000000038f0
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;	// IMP=0x0010000000003830
- (void)synchronizeCloudTabDevices;	// IMP=0x0010000000003564
- (id)syncedCloudTabDevices;	// IMP=0x00100000000032d8
- (id)currentDevice;	// IMP=0x0010000000003031
@property(readonly, nonatomic) NSUUID *currentDeviceUUID;
- (void)_notifyCloudTabStoreDidUpdateWithType:(id)arg1;	// IMP=0x0010000000002f0c
- (void)_cloudKitDataDidUpdateOnServer:(id)arg1;	// IMP=0x0010000000002eb8
- (void)_userRequestsStoreDidUpdate:(id)arg1;	// IMP=0x0010000000002e83
- (void)_syncedDevicesStoreDidUpdate:(id)arg1;	// IMP=0x0010000000002e4e
- (void)_cloudTabsEnabledDidChange;	// IMP=0x0010000000002dc1
- (void)stopObservingTabStoreStateChanges;	// IMP=0x0010000000002d21
- (void)startObservingTabStoreStateChanges;	// IMP=0x0010000000002aff
- (id)init;	// IMP=0x00100000000029f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
