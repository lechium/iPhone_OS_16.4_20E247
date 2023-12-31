//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKRecordZone, CUTUnsafePromise, IDSCloudKitKeyTransparencyDeviceRecord, IDSServerBag, MISSING_TYPE, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyTransparencyStore : NSObject
{
    CKContainer *_container;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _cachedManateeAvailability;	// 24 = 0x18
    IDSServerBag *_serverBag;	// 32 = 0x20
    MISSING_TYPE *_cachedRecordZone;	// 40 = 0x28
    IDSCloudKitKeyTransparencyDeviceRecord *_lastSuccessfulUpsertDeviceRecord;	// 48 = 0x30
    CUTUnsafePromise *_currentDeviceRecordsPromise;	// 56 = 0x38
    NSUbiquitousKeyValueStore *_kvStore;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001cbc70
@property(retain, nonatomic) NSUbiquitousKeyValueStore *kvStore; // @synthesize kvStore=_kvStore;
@property(retain, nonatomic) CUTUnsafePromise *currentDeviceRecordsPromise; // @synthesize currentDeviceRecordsPromise=_currentDeviceRecordsPromise;
@property(retain, nonatomic) IDSCloudKitKeyTransparencyDeviceRecord *lastSuccessfulUpsertDeviceRecord; // @synthesize lastSuccessfulUpsertDeviceRecord=_lastSuccessfulUpsertDeviceRecord;
@property(retain, nonatomic) CKRecordZone *cachedRecordZone; // @synthesize cachedRecordZone=_cachedRecordZone;
@property(readonly, nonatomic) IDSServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(nonatomic) _Bool cachedManateeAvailability; // @synthesize cachedManateeAvailability=_cachedManateeAvailability;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (_Bool)initializeKVS;	// IMP=0x00100000001cb930
- (id)forceKVSSync;	// IMP=0x00100000001cb2d0
- (void)removeAllEntries;	// IMP=0x00100000001caeb0
- (id)fetchAllEntries;	// IMP=0x00100000001cacd0
- (void)removeEntryForKey:(id)arg1;	// IMP=0x00100000001caa80
- (void)insertDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000001ca7f0
- (void)handleKVSUpdate:(id)arg1;	// IMP=0x00100000001ca430
- (id)_no_timeout_no_cache_fetchKeyTransparencyDeviceRecords;	// IMP=0x00100000001c8590
- (void)_no_timeout_fetchKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c7ae0
- (void)fetchKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c6e70
- (void)_no_timeout_nukeKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c6370
- (void)nukeKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c58a0
- (void)deleteKeyTransparencyDeviceRecordsForPushToken:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c57b0
- (void)_no_timeout_upsertKeyTransparencyDeviceRecord:(id)arg1 recordsToModify:(id)arg2 recordsToDelete:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c3b60
- (void)upsertKeyTransparencyDeviceRecord:(id)arg1 recordsToModify:(id)arg2 recordsToDelete:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c2d90
- (void)_no_timeout_verifyEncryptionPrerequisitesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c2890
- (void)fetchAccountEligibilityForDeviceToDeviceEncryptionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c1b10
- (void)fetchShouldNoteManateeAvailability:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c16b0
- (void)setupContainerCache;	// IMP=0x00100000001c1500
- (void)_createZoneIfNeededUsingTimeIntervalForRequest:(double)arg1 isNonDiscretionary:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001bfc00
- (void)_copyDeviceRecord:(id)arg1 toCloudKitRecordRef:(id *)arg2;	// IMP=0x00100000001bfab0
- (id)_cloudKitRecordForDeviceRecord:(id)arg1;	// IMP=0x00100000001bf680
- (id)_deviceRecordForCloudKitRecord:(id)arg1;	// IMP=0x00100000001bf3c0
- (id)_clientErrorWithCode:(long long)arg1 debugDescription:(id)arg2 underlyingError:(id)arg3;	// IMP=0x00100000001bf260
- (id)_recordIDForDeviceRecord:(id)arg1;	// IMP=0x00100000001bf030
- (id)_recordType;	// IMP=0x00100000001bf010
- (id)_zoneID;	// IMP=0x00100000001bedd0
- (id)database;	// IMP=0x00100000001bed60
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x00100000001beca0
- (id)initWithContainer:(id)arg1 serverBag:(id)arg2 kvStore:(id)arg3 queue:(id)arg4;	// IMP=0x00100000001bea80
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001be5e0

@end

