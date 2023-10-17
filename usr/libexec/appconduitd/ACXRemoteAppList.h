//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSURL, NSUUID;
@protocol ACXRemoteAppListCommunications, OS_dispatch_queue, OS_dispatch_source;

@interface ACXRemoteAppList : NSObject
{
    _Bool _remoteIsConnected;	// 8 = 0x8
    _Bool _performingResync;	// 9 = 0x9
    _Bool _syncPending;	// 10 = 0xa
    NSDictionary *_appList;	// 16 = 0x10
    NSUUID *_currentDBUUID;	// 24 = 0x18
    unsigned long long _lastSequenceNumber;	// 32 = 0x20
    NSURL *_storageBaseURL;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_syncTimeout;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_resyncThrottleTimer;	// 56 = 0x38
    id <ACXRemoteAppListCommunications> _delegate;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 72 = 0x48
    NSDictionary *_appInstallRecordsToFetch;	// 80 = 0x50
    NSSet *_bundleIDsToFetch;	// 88 = 0x58
    NSMutableSet *_observers;	// 96 = 0x60
    NSMutableDictionary *_attemptsPerBundleID;	// 104 = 0x68
    unsigned long long _resyncAttempts;	// 112 = 0x70
    CDUnknownBlockType _resumeOnReconnect;	// 120 = 0x78
}

+ (id)remoteAppListForStorageBaseURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;	// IMP=0x002000000004504c
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000044c24
- (void).cxx_destruct;	// IMP=0x002000000004d750
@property(nonatomic) _Bool syncPending; // @synthesize syncPending=_syncPending;
@property(copy, nonatomic) CDUnknownBlockType resumeOnReconnect; // @synthesize resumeOnReconnect=_resumeOnReconnect;
@property(nonatomic) unsigned long long resyncAttempts; // @synthesize resyncAttempts=_resyncAttempts;
@property(retain, nonatomic) NSMutableDictionary *attemptsPerBundleID; // @synthesize attemptsPerBundleID=_attemptsPerBundleID;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool performingResync; // @synthesize performingResync=_performingResync;
@property(retain, nonatomic) NSSet *bundleIDsToFetch; // @synthesize bundleIDsToFetch=_bundleIDsToFetch;
@property(retain, nonatomic) NSDictionary *appInstallRecordsToFetch; // @synthesize appInstallRecordsToFetch=_appInstallRecordsToFetch;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <ACXRemoteAppListCommunications> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *resyncThrottleTimer; // @synthesize resyncThrottleTimer=_resyncThrottleTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *syncTimeout; // @synthesize syncTimeout=_syncTimeout;
@property(nonatomic) _Bool remoteIsConnected; // @synthesize remoteIsConnected=_remoteIsConnected;
@property(retain, nonatomic) NSURL *storageBaseURL; // @synthesize storageBaseURL=_storageBaseURL;
@property(nonatomic) unsigned long long lastSequenceNumber; // @synthesize lastSequenceNumber=_lastSequenceNumber;
@property(retain, nonatomic) NSUUID *currentDBUUID; // @synthesize currentDBUUID=_currentDBUUID;
@property(retain, nonatomic) NSDictionary *appList; // @synthesize appList=_appList;
- (void)getCurrentDBUUID:(id *)arg1 sequenceNumber:(unsigned long long *)arg2;	// IMP=0x001000000004d416
- (id)appBundleIDForCounterpartBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004d045
- (_Bool)applicationIsInstalledWithCounterpartBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004cccb
- (id)applicationWithCounterpartBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004c902
- (_Bool)applicationIsInstalledWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004c62e
- (id)applicationForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004c32d
- (id)bundleIDsTrackedWithError:(id *)arg1;	// IMP=0x001000000004c0b3
@property(readonly, nonatomic) _Bool databaseIsSynced;
- (_Bool)_onQueue_databaseIsSynced;	// IMP=0x001000000004bf4c
- (_Bool)startDatabaseSyncIfNeeded;	// IMP=0x001000000004bd9e
- (void)appsRemoved:(id)arg1 currentRemoteDBUUID:(id)arg2 lastSequenceNumber:(unsigned long long)arg3;	// IMP=0x001000000004b809
- (void)appsAdded:(id)arg1 currentRemoteDBUUID:(id)arg2 lastSequenceNumber:(unsigned long long)arg3;	// IMP=0x001000000004ae66
- (void)reportAppEvents:(id)arg1 forDBUUID:(id)arg2 startingSequenceNumber:(unsigned long long)arg3;	// IMP=0x001000000004a547
- (void)updateAppInfoWithRecords:(id)arg1 currentRemoteDBUUID:(id)arg2;	// IMP=0x00100000000492cf
- (void)updateBundleIDList:(id)arg1 currentRemoteDBUUID:(id)arg2 lastSequenceNumber:(unsigned long long)arg3;	// IMP=0x00100000000490f5
- (void)reportCurrentDBUUID:(id)arg1 lastSequenceNumber:(unsigned long long)arg2;	// IMP=0x0010000000048d94
- (void)remoteDeviceConnected;	// IMP=0x0010000000048c5f
- (void)remoteDeviceDisconnected;	// IMP=0x0010000000048b8a
- (void)removeObserver:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000487ff
- (void)addObserver:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000048679
- (void)_onQueue_databaseResynced;	// IMP=0x001000000004842b
- (void)_onQueue_appsRemoved:(id)arg1;	// IMP=0x0010000000048171
- (void)_onQueue_appsUpdated:(id)arg1;	// IMP=0x0010000000047eb7
- (void)_onQueue_appsAdded:(id)arg1;	// IMP=0x0010000000047bfd
- (void)_onQueue_acknowledgeAppEvents;	// IMP=0x001000000004790c
- (void)_onQueue_fetchOutstandingAppEvents;	// IMP=0x001000000004763b
- (void)_onQueue_fetchAppsForAppInstallRecords;	// IMP=0x001000000004701d
- (void)_onQueue_fetchRemainingBundleIDs;	// IMP=0x0010000000046925
- (void)reportTotalSyncFailureForError:(id)arg1;	// IMP=0x0010000000046831
- (void)_onQueue_reSync;	// IMP=0x00100000000465c5
- (void)_onQueue_stopResyncThrottleTimer;	// IMP=0x001000000004650f
- (void)_onQueue_startResyncThrottleTimer;	// IMP=0x0010000000046221
- (void)_onQueue_stopSyncTimer;	// IMP=0x001000000004616b
- (void)_onQueue_startSyncTimer;	// IMP=0x0010000000045e95
- (void)_onQueue_saveData;	// IMP=0x0010000000045b41
- (void)_onQueue_purgeSavedData;	// IMP=0x0010000000045923
- (void)_resetLastSequenceNumberTo:(unsigned long long)arg1;	// IMP=0x001000000004577e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (id)initWithStorageBaseURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;	// IMP=0x0010000000044f4c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000044ea0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000044c83
- (void)_initCommonReliabilityState;	// IMP=0x0010000000044c2c

@end
