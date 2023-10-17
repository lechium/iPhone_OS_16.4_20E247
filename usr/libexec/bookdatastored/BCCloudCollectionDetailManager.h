//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCCloudDataManager, BCCloudDataSource, BCCloudDataSyncManager, BCCloudKitController, NSString;

@interface BCCloudCollectionDetailManager : NSObject
{
    _Bool _enableCloudSync;	// 8 = 0x8
    BCCloudKitController *_cloudKitController;	// 16 = 0x10
    BCCloudDataSource *_collectionDetailDataSource;	// 24 = 0x18
    BCCloudDataSyncManager *_syncManager;	// 32 = 0x20
    BCCloudDataManager *_dataManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000007943a
@property(retain, nonatomic) BCCloudDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) BCCloudDataSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) BCCloudDataSource *collectionDetailDataSource; // @synthesize collectionDetailDataSource=_collectionDetailDataSource;
@property(nonatomic) __weak BCCloudKitController *cloudKitController; // @synthesize cloudKitController=_cloudKitController;
@property(nonatomic) _Bool enableCloudSync; // @synthesize enableCloudSync=_enableCloudSync;
- (void)getCollectionDetailChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000079322
- (void)fetchCollectionDetailsIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000792aa
- (void)collectionDetailsForCollectionIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000791f3
- (void)collectionDetailForCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000079052
- (void)deleteCollectionDetailForCollectionIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000078f9b
- (void)deleteCollectionDetailForCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000078ee4
- (void)updateSyncGenerationFromCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000078df3
- (void)removeCollectionDetailForSaltedHashedRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000078c7a
- (void)setCollectionDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000078b89
- (void)setCollectionDetail:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000078a9f
- (void)currentCollectionDetailCloudSyncVersions:(CDUnknownBlockType)arg1;	// IMP=0x0010000000078a2d
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000789bb
- (void)hasSaltChangedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000078949
- (void)setEnableCloudSync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000078785
- (id)entityName;	// IMP=0x0010000000078778
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000078612
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000784ac
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007822e
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000077fc5
- (void)signalSyncToCKForSyncManager:(id)arg1;	// IMP=0x0010000000077ee7
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000077e54
- (id)initWithCloudDataSource:(id)arg1 cloudKitController:(id)arg2;	// IMP=0x0010000000077cb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
