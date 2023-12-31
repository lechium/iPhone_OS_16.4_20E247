//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol CRLSyncEngine <NSObject>
- (void)setHasPendingModifications;
- (void)setNeedsToFetchChanges;
- (void)modifyPendingChangesInZoneIDs:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)modifyPendingChangesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)fetchChangesForZoneIDs:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchChangesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)addRecordZonesToSave:(NSArray *)arg1 recordZoneIDsToDelete:(NSArray *)arg2;
- (void)addRecordIDsToSave:(NSArray *)arg1 recordIDsToDelete:(NSArray *)arg2;
@end

