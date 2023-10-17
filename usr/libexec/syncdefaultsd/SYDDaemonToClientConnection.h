//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSNumber, NSString, NSXPCConnection;
@protocol OS_dispatch_group, OS_dispatch_queue, SYDDaemonToClientConnectionDelegate;

@interface SYDDaemonToClientConnection : NSObject
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
    id <SYDDaemonToClientConnectionDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_changeNotificationGroup;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSMutableSet *_registeredStoreIDs;	// 56 = 0x38
    NSMutableSet *_entitledStoreIDs;	// 64 = 0x40
    NSMutableSet *_notEntitledStoreIDs;	// 72 = 0x48
    NSNumber *_ignoreQuotaEntitlementValue;	// 80 = 0x50
    unsigned long long _manualSyncCount;	// 88 = 0x58
}

+ (id)errorForUnknownStore:(id)arg1;	// IMP=0x0020000000021b13
+ (id)changeDictionaryWithChangedKeys:(id)arg1 reason:(long long)arg2 changeToken:(id)arg3;	// IMP=0x001000000001f8a7
+ (id)changedKeysForStoreIdentifier:(id)arg1 sinceChangeTokenIfValid:(id)arg2 inCoreDataStore:(id)arg3 error:(id *)arg4;	// IMP=0x001000000001f729
+ (id)errorNotEntitledForStoreConfiguration:(id)arg1;	// IMP=0x001000000001c67f
+ (_Bool)isXPCConnection:(id)arg1 entitledForStoreConfiguration:(id)arg2;	// IMP=0x001000000001c087
+ (id)valueForEntitlement:(id)arg1 xpcConnection:(id)arg2 storeConfiguration:(id)arg3;	// IMP=0x001000000001bc64
- (void).cxx_destruct;	// IMP=0x0020000000021fe7
@property(nonatomic) unsigned long long manualSyncCount; // @synthesize manualSyncCount=_manualSyncCount;
@property(retain, nonatomic) NSNumber *ignoreQuotaEntitlementValue; // @synthesize ignoreQuotaEntitlementValue=_ignoreQuotaEntitlementValue;
@property(retain, nonatomic) NSMutableSet *notEntitledStoreIDs; // @synthesize notEntitledStoreIDs=_notEntitledStoreIDs;
@property(retain, nonatomic) NSMutableSet *entitledStoreIDs; // @synthesize entitledStoreIDs=_entitledStoreIDs;
@property(retain, nonatomic) NSMutableSet *registeredStoreIDs; // @synthesize registeredStoreIDs=_registeredStoreIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *changeNotificationGroup; // @synthesize changeNotificationGroup=_changeNotificationGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) __weak id <SYDDaemonToClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (_Bool)isPerformingManualSync;	// IMP=0x0010000000021e68
- (void)decrementManualSyncCount;	// IMP=0x0010000000021d57
- (void)incrementManualSyncCount;	// IMP=0x0010000000021c46
- (_Bool)isKnownStore:(id)arg1;	// IMP=0x0010000000021a35
- (id)changeTokenURLForStoreConfiguration:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x00100000000217d8
- (id)client;	// IMP=0x001000000002171f
- (id)asyncClientWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000215dc
- (void)daemonToClientConnectionDidChangeValues:(id)arg1;	// IMP=0x0010000000020e73
- (void)notifyAccountDidChangeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000020658
- (void)syncManagerDidChangeNotification:(id)arg1;	// IMP=0x001000000001fbe8
- (void)processAccountChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001fa1e
- (void)saveChangeToken:(id)arg1 forStoreWithConfiguration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f03d
- (void)changeTokenForStoreWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001eb04
- (void)changeDictionarySinceChangeToken:(id)arg1 inStoreWithConfiguration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e696
- (void)registerForChangeNotificationsForStoreWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e2f5
- (void)setCloudSyncUserDefaultEnabled:(_Bool)arg1 storeIdentifier:(id)arg2;	// IMP=0x001000000001e270
- (void)isCloudSyncUserDefaultEnabledForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e1cb
- (_Bool)isCloudSyncEnablementEntitledForStoreIdentifier:(id)arg1;	// IMP=0x001000000001e0e2
- (void)allStoreIdentifiersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001def7
- (void)dictionaryRepresentationForStoreWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001dcb7
- (void)synchronizeStoresWithIdentifiers:(id)arg1 type:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d62c
- (void)synchronizeStoreWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d13b
- (void)removeObjectForKey:(id)arg1 inStoreWithConfiguration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001cef7
- (void)objectForKey:(id)arg1 inStoreWithConfiguration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001cc98
- (void)setObject:(id)arg1 forKey:(id)arg2 inStoreWithConfiguration:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001c8c3
- (_Bool)shouldEnforceQuotaForStoreConfiguration:(id)arg1;	// IMP=0x001000000001c7b2
- (_Bool)isEntitledForStoreConfiguration:(id)arg1;	// IMP=0x001000000001bc79
- (void)resume;	// IMP=0x001000000001b7de
- (void)dealloc;	// IMP=0x001000000001b51a
- (id)description;	// IMP=0x001000000001b389
- (id)initWithXPCConnection:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000001b0a4

@end
