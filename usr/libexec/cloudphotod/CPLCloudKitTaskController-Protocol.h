//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CPLCloudKitZoneManager-Protocol.h"
#import "CPLTransportScopeTranslator-Protocol.h"

@class CKDatabase, CKOperation, CKOperationConfiguration, CKRecordZoneID, CPLCloudKitMetric, CPLCloudKitOperationsTracker, CPLCloudKitTransportTask, NSError;
@protocol CPLCKRecordPropertyMapping;

@protocol CPLCloudKitTaskController <CPLCloudKitZoneManager, CPLTransportScopeTranslator>
@property(readonly, nonatomic) id <CPLCKRecordPropertyMapping> propertyMapping;
@property(readonly, nonatomic) _Bool canBoostBackgroundOperations;
@property(readonly, nonatomic) _Bool canBoostOperations;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
@property(readonly, nonatomic, getter=isNetworkConnected) _Bool networkConnected;
@property(readonly, nonatomic) CPLCloudKitOperationsTracker *operationTracker;
- (_Bool)shouldIgnoreZoneWithZoneID:(CKRecordZoneID *)arg1;
- (CKDatabase *)databaseForOperationType:(long long)arg1 relativeToOperationType:(long long)arg2;
- (_Bool)shouldRunOperationsWithError:(id *)arg1;
- (void)processTaskErrorIfNeeded:(NSError *)arg1 forTask:(CPLCloudKitTransportTask *)arg2;
- (void)associateMetric:(CPLCloudKitMetric *)arg1;
- (void)launchOperation:(CKOperation *)arg1 type:(long long)arg2;
- (CKOperationConfiguration *)newOperationConfiguration;
@end

