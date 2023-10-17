//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMetricsDatabase : NSObject
{
    NSString *_containerId;	// 8 = 0x8
    AMSSQLiteConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_internalQueue;	// 24 = 0x18
}

+ (id)sharedDatabaseWithContainerId:(id)arg1;	// IMP=0x001000000029394f
- (void).cxx_destruct;	// IMP=0x000000000029c2e6
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) AMSSQLiteConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
- (void)_performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000000029beda
- (id)_lockedById;	// IMP=0x000000000029be83
- (id)_cachePath;	// IMP=0x000000000029be1a
- (_Bool)connectionNeedsResetForCorruption:(id)arg1;	// IMP=0x000000000029bc3a
- (_Bool)removeCrossDeviceIdentifiersWithError:(id *)arg1;	// IMP=0x000000000029b894
- (_Bool)permanentlyRemoveIdentifierForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029b3a4
- (_Bool)enumerateUnsyncedIdentifiersUsingBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x000000000029abf8
- (_Bool)enumerateUnsyncedIdentifierStoresUsingBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x000000000029a4cd
- (_Bool)clearIdentifierSyncStateWithError:(id *)arg1;	// IMP=0x000000000029a127
- (id)identifierForKey:(id)arg1 updateMaybe:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0000000000299287
- (id)identifierStoreForKey:(id)arg1 updateMaybe:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000000002981c6
- (_Bool)removeIdentifiersForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000297a3f
- (_Bool)cleanupInvalidIdentifiersWithError:(id *)arg1;	// IMP=0x0000000000297572
- (_Bool)unlockEvents:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029703b
- (_Bool)unlockAllEventsWithKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000296c93
- (id)lockAllEventsWithError:(id *)arg1;	// IMP=0x00000000002968be
- (_Bool)insertEvents:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000295a5a
- (void)enumerateEventsWithTopic:(id)arg1 lockKey:(id)arg2 objectBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000294dea
- (_Bool)dropEvents:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002948a5
- (_Bool)dropAllEventsWithLockKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002944da
- (long long)countAllEventsWithLockKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000293f11
- (void)close;	// IMP=0x0000000000293d7c
- (void)dealloc;	// IMP=0x0000000000293d27
- (id)initWithContainerId:(id)arg1;	// IMP=0x000000000029354e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
