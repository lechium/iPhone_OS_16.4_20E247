//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, CKRecordZone, NSOperationQueue, WBSHashGenerator;
@protocol OS_dispatch_queue;

@interface CloudSettingStore : NSObject
{
    CKDatabase *_database;	// 8 = 0x8
    CKRecordZone *_cloudSettingsRecordZone;	// 16 = 0x10
    NSOperationQueue *_cloudSettingsOperationQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;	// 40 = 0x28
    WBSHashGenerator *_threadUnsafeHashGenerator;	// 48 = 0x30
    CKContainer *_container;	// 56 = 0x38
}

+ (id)cloudSettingsRecordZoneID;	// IMP=0x0020000000033593
+ (id)recordZoneSubscriptionID;	// IMP=0x0010000000033586
- (void).cxx_destruct;	// IMP=0x0020000000039992
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void)_scheduleOperation:(id)arg1 inOperationGroup:(id)arg2 operationQueue:(id)arg3;	// IMP=0x00100000000397c6
- (void)_setUpEncryptionInfoInOperationGroup:(id)arg1 withRetryManager:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038f58
- (void)_setUpEncryptionInfoInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038ebb
- (void)_saveOrLoadRecord:(id)arg1 inOperationGroup:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000389ff
- (void)_createCloudSettingsRecordZoneInOperationGroup:(id)arg1 withRetryManager:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037e10
- (void)fetchCloudSettingsZoneSubscriptionInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037a2e
- (void)createCloudSettingsRecordZoneInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037991
- (void)deleteCloudSettingsZoneInOperationGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037622
- (void)clearCachedCloudSettingsRecordZone;	// IMP=0x0010000000037578
- (void)deleteCloudSettingsRecords:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000371ee
- (void)_saveCloudSettingsRecords:(id)arg1 retryManager:(id)arg2 inOperationGroup:(id)arg3 clientChangeTokenData:(id)arg4 mergeHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000035e90
- (void)_saveCloudSettingsRecords:(id)arg1 inOperationGroup:(id)arg2 clientChangeTokenData:(id)arg3 mergeHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000035d8d
- (void)saveCloudSettingsRecords:(id)arg1 createCloudSettingsZoneIfMissing:(_Bool)arg2 inOperationGroup:(id)arg3 clientChangeTokenData:(id)arg4 mergeHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000003568f
- (void)_saveRecordZoneSubscriptionForZoneID:(id)arg1 subscriptionID:(id)arg2 inOperationGroup:(id)arg3 operationQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000003525f
- (void)saveCloudSettingsZoneSubscriptionInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000034e6f
- (void)fetchNumberOfDevicesInSyncCircleInOperationGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000034d0b
- (void)_fetchRecordsOnInternalQueueWithRetryManager:(id)arg1 serverChangeToken:(id)arg2 recordChangedBlock:(CDUnknownBlockType)arg3 recordWithIDWasDeletedBlock:(CDUnknownBlockType)arg4 inOperationGroup:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000033d69
- (void)_fetchRecordsOnInternalQueueWithServerChangeToken:(id)arg1 recordChangedBlock:(CDUnknownBlockType)arg2 recordWithIDWasDeletedBlock:(CDUnknownBlockType)arg3 inOperationGroup:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000033c66
- (void)fetchCloudSettingsRecordChangesSinceServerChangeToken:(id)arg1 inOperationGroup:(id)arg2 recordChangedBlock:(CDUnknownBlockType)arg3 recordWithIDWasDeletedBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000033a50
- (id)createOperationGroupWithName:(id)arg1 useLargerExpectedSendSize:(_Bool)arg2;	// IMP=0x00100000000339cf
- (void)generateEncryptedHashStringWithComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003384b
@property(readonly, nonatomic) WBSHashGenerator *hashGenerator;
- (id)initWithContainer:(id)arg1;	// IMP=0x00100000000335cd

@end

