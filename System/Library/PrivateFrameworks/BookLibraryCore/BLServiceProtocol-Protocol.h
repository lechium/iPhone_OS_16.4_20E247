//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BLDownloadManifestRequest, BLPurchaseRequest, NSArray, NSDictionary, NSSet, NSString, NSURL, NSUUID;
@protocol BLUIHostServiceProtocol;

@protocol BLServiceProtocol
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)setValueSimulateDeviceOutOfSpace:(_Bool)arg1 withReply:(void (^)(NSError *))arg2;
- (void)resetAllCrashSimulationOverridesWithReply:(void (^)(NSError *))arg1;
- (void)getCrashSimulationOverrideValuesWithReply:(void (^)(_Bool, _Bool, _Bool, _Bool, NSError *))arg1;
- (void)setValueSimulateCrashAtInstallDuringFinish:(_Bool)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setValueSimulateCrashAtInstallDuringUnzip:(_Bool)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(_Bool)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setValueSimulateCrashAtInstallStart:(_Bool)arg1 withReply:(void (^)(NSError *))arg2;
- (void)prepareForRemoveAppWithReply:(void (^)(NSError *))arg1;
- (void)removeAllMigrationInfosExcludingStates:(NSSet *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)removeMigrationInfoForStoreID:(long long)arg1 withReply:(void (^)(NSError *))arg2;
- (void)migrationInfosWithStates:(NSSet *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)migrationInfosWithStoreIDs:(NSSet *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)migrationInfoWithStoreID:(long long)arg1 withReply:(void (^)(BLBookletMigrationInfo *, NSError *))arg2;
- (void)setMigrationState:(long long)arg1 forStoreIDs:(NSSet *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)removeRacGUIDForStoreID:(long long)arg1 withReply:(void (^)(NSError *))arg2;
- (void)racGUIDForStoreID:(long long)arg1 withReply:(void (^)(NSUUID *, NSError *))arg2;
- (void)setRacGUID:(NSUUID *)arg1 forStoreID:(long long)arg2 withReply:(void (^)(NSError *))arg3;
- (void)monitorProgressWithReply:(void (^)(NSError *))arg1;
- (void)flushMetricsWithReply:(void (^)(NSError *))arg1;
- (void)reloadFromServerWithReply:(void (^)(NSError *))arg1;
- (void)restartDownloadWithID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setAutomaticDownloadEnabled:(_Bool)arg1 uiHostProxy:(id <BLUIHostServiceProtocol>)arg2 reply:(void (^)(NSError *))arg3;
- (void)processAutomaticDownloadsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)requestDownloadsWithManifestRequest:(BLDownloadManifestRequest *)arg1 uiHostProxy:(id <BLUIHostServiceProtocol>)arg2 reply:(void (^)(BLDownloadManifestResponse *, NSError *))arg3;
- (void)requestDownloadsWithRestoreContentRequestItems:(NSArray *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)requestDownloadsWithMetadata:(NSArray *)arg1 areRestore:(_Bool)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestDownloadWithMetadata:(NSDictionary *)arg1 isRestore:(_Bool)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestDownloadWithParameters:(NSDictionary *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)downloadWithPermlink:(NSURL *)arg1 title:(NSString *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)purchaseWithRequest:(BLPurchaseRequest *)arg1 uiHostProxy:(id <BLUIHostServiceProtocol>)arg2 reply:(void (^)(NSString *, BLPurchaseResponse *, NSError *))arg3;
- (void)cancelAllActiveDownloadsWithReply:(void (^)(NSError *))arg1;
- (void)cancelDownloadWithID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)resumeDownloadWithID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)pauseDownloadWithID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)fetchDownloadFromDownloadID:(NSString *)arg1 withReply:(void (^)(BLDownload *, NSError *))arg2;
- (void)fetchDownloadListWithReply:(void (^)(NSArray *, NSError *))arg1;
@end
