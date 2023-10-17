//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSManagedObjectContext, NSOperationQueue, NSString, VSPreferences, VSPrivacyFacade, VSRemoteNotifier, VSUserAccountPersistentContainer, VSUserAccountUpdateManager, WLKChannelUtilities, WLKSettingsStore;
@protocol OS_dispatch_source, VSUserAccountRegistryDelegate;

__attribute__((visibility("hidden")))
@interface VSUserAccountRegistry : NSObject
{
    _Bool _currentUpdateSessionIsForced;	// 8 = 0x8
    _Bool _storesLoaded;	// 9 = 0x9
    struct os_unfair_lock_s _loadingStoresLock;	// 12 = 0xc
    id <VSUserAccountRegistryDelegate> _delegate;	// 16 = 0x10
    VSPreferences *_preferences;	// 24 = 0x18
    NSOperationQueue *_privateQueue;	// 32 = 0x20
    VSRemoteNotifier *_remoteNotifier;	// 40 = 0x28
    VSUserAccountPersistentContainer *_container;	// 48 = 0x30
    NSManagedObjectContext *_viewContext;	// 56 = 0x38
    WLKSettingsStore *_sharedSettingsStore;	// 64 = 0x40
    WLKChannelUtilities *_sharedChannelUtilities;	// 72 = 0x48
    NSArray *_allChannelDetails;	// 80 = 0x50
    VSUserAccountUpdateManager *_updateManager;	// 88 = 0x58
    VSPrivacyFacade *_privacyFacade;	// 96 = 0x60
    NSDate *_lastUpdateTime;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_timer;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000038d94
@property(nonatomic) struct os_unfair_lock_s loadingStoresLock; // @synthesize loadingStoresLock=_loadingStoresLock;
@property(nonatomic) _Bool storesLoaded; // @synthesize storesLoaded=_storesLoaded;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) VSPrivacyFacade *privacyFacade; // @synthesize privacyFacade=_privacyFacade;
@property(retain, nonatomic) VSUserAccountUpdateManager *updateManager; // @synthesize updateManager=_updateManager;
@property(nonatomic) _Bool currentUpdateSessionIsForced; // @synthesize currentUpdateSessionIsForced=_currentUpdateSessionIsForced;
@property(retain, nonatomic) NSArray *allChannelDetails; // @synthesize allChannelDetails=_allChannelDetails;
@property(retain, nonatomic) WLKChannelUtilities *sharedChannelUtilities; // @synthesize sharedChannelUtilities=_sharedChannelUtilities;
@property(retain, nonatomic) WLKSettingsStore *sharedSettingsStore; // @synthesize sharedSettingsStore=_sharedSettingsStore;
@property(retain, nonatomic) NSManagedObjectContext *viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) VSUserAccountPersistentContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) __weak id <VSUserAccountRegistryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateManagerDidFinish:(id)arg1;	// IMP=0x0000000000038bb4
- (void)updateManager:(id)arg1 updateRequestDidFinish:(id)arg2;	// IMP=0x00000000000387e9
- (id)_predicateForQueryRequestWithOptions:(long long)arg1;	// IMP=0x0000000000038367
- (_Bool)_isValidForUpdateQueryForCurrentTask:(id)arg1;	// IMP=0x00000000000381e1
- (_Bool)_isValidForUpdateQueryForCurrentTask;	// IMP=0x0000000000038193
- (id)_securityTaskForCurrentConnection;	// IMP=0x000000000003811f
- (id)_userAccountForPersistentUserAccount:(id)arg1 context:(id)arg2;	// IMP=0x00000000000374fd
- (void)_populatePersistentUserAccount:(id)arg1 withUserAccount:(id)arg2;	// IMP=0x00000000000371ba
- (long long)_deviceCategoryFromDeviceType:(unsigned long long)arg1;	// IMP=0x00000000000371a7
- (void)_queryPersistentUserAccountsWithOptions:(long long)arg1 predicate:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000036ab5
- (void)_queryUserAccountsWithOptions:(long long)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000366cf
- (void)_deleteUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035e9b
- (void)insertUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035d3c
- (void)_insertUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034c80
- (void)_removeNonConnectedSignedOutUserAccounts;	// IMP=0x0000000000034451
- (void)resetTimer;	// IMP=0x0000000000033a0d
- (void)_update;	// IMP=0x000000000003351d
- (id)createSaveContext;	// IMP=0x00000000000334a3
- (_Bool)saveContext:(id)arg1 withError:(id)arg2;	// IMP=0x000000000003338d
- (void)removeSubscriptions:(id)arg1;	// IMP=0x0000000000032ef0
- (void)registerSubscription:(id)arg1;	// IMP=0x0000000000032dff
- (void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003231f
- (void)insertLegacySubscription:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032202
- (void)forceUpdateUserAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031f9b
- (void)deleteUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031dee
- (void)updateUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031455
- (void)queryUserAccountsWithOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031251
- (void)_subscriptionsForMigrationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030de8
- (void)_loadStoresAndMigrateIfRequiredWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000300ce
- (void)_setupObservers;	// IMP=0x000000000002fe11
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000002f9c3
- (id)init;	// IMP=0x000000000002f9af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
