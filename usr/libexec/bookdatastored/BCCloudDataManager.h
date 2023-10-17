//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCCloudDataSource, BCCloudDataSyncManager, BCCloudKitController, NSManagedObjectContext, NSString;
@protocol BCCloudDataMapper, BCCloudDataPrivacyDelegate, BDSCloudDataManagerMonitor, OS_dispatch_queue;

@interface BCCloudDataManager : NSObject
{
    _Bool _signalDataChangedTransaction;	// 8 = 0x8
    id <BDSCloudDataManagerMonitor> _monitor;	// 16 = 0x10
    NSManagedObjectContext *_moc;	// 24 = 0x18
    BCCloudDataSource *_dataSource;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_responseQueue;	// 40 = 0x28
    NSString *_entityName;	// 48 = 0x30
    NSString *_notificationName;	// 56 = 0x38
    BCCloudDataSyncManager *_syncManager;	// 64 = 0x40
    Class _immutableClass;	// 72 = 0x48
    Class _mutableClass;	// 80 = 0x50
    id <BCCloudDataPrivacyDelegate> _privacyDelegate;	// 88 = 0x58
    BCCloudKitController *_cloudKitController;	// 96 = 0x60
    id <BCCloudDataMapper> _dataMapper;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000004d405
- (void);	// IMP=0x001000000004d3f4
@property(retain, nonatomic) id <BCCloudDataMapper> dataMapper; // @synthesize dataMapper=_dataMapper;
@property(nonatomic) __weak BCCloudKitController *cloudKitController; // @synthesize cloudKitController=_cloudKitController;
@property(nonatomic) _Bool signalDataChangedTransaction; // @synthesize signalDataChangedTransaction=_signalDataChangedTransaction;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate; // @synthesize privacyDelegate=_privacyDelegate;
@property Class mutableClass; // @synthesize mutableClass=_mutableClass;
@property Class immutableClass; // @synthesize immutableClass=_immutableClass;
@property(nonatomic) __weak BCCloudDataSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(copy, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(retain, nonatomic) BCCloudDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak NSManagedObjectContext *moc; // @synthesize moc=_moc;
@property(nonatomic) __weak id <BDSCloudDataManagerMonitor> monitor; // @synthesize monitor=_monitor;
- (void)hasSaltChangedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004cc17
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004c32d
- (void)getChangesSince:(id)arg1 forEntityClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b51f
- (void)fetchCloudDataIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004b475
- (void)failedRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ae36
- (void)resolveConflictsForRecords:(id)arg1 withResolvers:(id)arg2 mergers:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000049a82
- (void)resolveConflictsForRecords:(id)arg1 withResolvers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000049a68
- (void)resolveConflictsForRecords:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049a51
- (void)resolvedCloudDataForCloudData:(id)arg1 withResolvers:(id)arg2 mergers:(id)arg3 predicate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000048fe8
- (void)resolvedCloudDataForCloudData:(id)arg1 withResolvers:(id)arg2 predicate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000048fbe
- (void)resolvedCloudDataForCloudData:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000048fa4
- (void)transformedCloudDatasWithPredicate:(id)arg1 transformer:(CDUnknownBlockType)arg2 limit:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000489b1
- (void)cloudDatasWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000048328
- (void)cloudDatasWithPredicate:(id)arg1 sortDescriptors:(id)arg2 maximumResultCount:(unsigned long long)arg3 filter:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000047ac6
- (void)cloudDataWithPredicate:(id)arg1 sortDescriptors:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047585
- (void)countWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000471fc
- (void)deleteCloudDataForPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000046960
- (void)updateSyncGenerationFromCloudData:(id)arg1 predicate:(id)arg2 propertyIDKey:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000045f8f
- (void)removeCloudDataForPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000458bb
- (void)setCloudData:(id)arg1 predicate:(id)arg2 propertyIDKey:(id)arg3 mergers:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000044765
- (void)setCloudData:(id)arg1 predicate:(id)arg2 propertyIDKey:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000044743
- (void)setCloudData:(id)arg1 predicate:(id)arg2 mergers:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000043e7e
- (void)setCloudData:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000043e66
- (void)currentCloudSyncVersions:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043b87
- (id)mq_sanitizeError:(id)arg1;	// IMP=0x0010000000043a12
- (void)mq_signalTransactions;	// IMP=0x0010000000043907
- (id)mq_cloudSyncVersions;	// IMP=0x0010000000043730
- (void)startSyncToCKWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000042da6
- (void)mq_incrementCloudVersion;	// IMP=0x0010000000042cc7
- (void)_logError:(id)arg1;	// IMP=0x0010000000042c6a
- (id)initWithCloudDataSource:(id)arg1 entityName:(id)arg2 notificationName:(id)arg3 immutableClass:(Class)arg4 mutableClass:(Class)arg5 syncManager:(id)arg6 cloudKitController:(id)arg7 dataMapper:(id)arg8;	// IMP=0x001000000004285a
- (id)initWithCloudDataSource:(id)arg1 entityName:(id)arg2 notificationName:(id)arg3 immutableClass:(Class)arg4 mutableClass:(Class)arg5 syncManager:(id)arg6 cloudKitController:(id)arg7;	// IMP=0x0010000000042825

@end
