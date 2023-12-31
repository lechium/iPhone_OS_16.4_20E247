//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoardServices/NSObject-Protocol.h>

@class ATXFaceGalleryConfiguration, NSArray, NSData, NSNumber, NSString, NSUUID, PRSPosterConfiguration, PRSPosterSnapshotCollection, PRSPosterSnapshotRequest, PRSPosterUpdateSessionInfo, PRSServerPosterPath;
@protocol __PRSPosterUpdate__;

@protocol PRSClientToServerInterface <NSObject>
- (oneway void)clearMigrationFlags:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)runMigration:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)notifyFocusModeDidChange:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)refreshSnapshotForGalleryItemsMatchingDescriptorIdentifier:(NSString *)arg1 extensionIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)gatherDataFreshnessState:(void (^)(NSString *, NSError *))arg1;
- (oneway void)overnightUpdateWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)prewarmWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)retrieveGallery:(void (^)(ATXFaceGalleryConfiguration *, NSDate *, NSError *))arg1;
- (oneway void)fetchGallery:(void (^)(ATXFaceGalleryConfiguration *, NSDate *, NSError *))arg1;
- (oneway void)pushToProactiveWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)pushPosterGalleryUpdate:(ATXFaceGalleryConfiguration *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)removeAllFocusConfigurationsMatchingFocusUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)fetchFocusUUIDForConfiguration:(PRSServerPosterPath *)arg1 completion:(void (^)(NSUUID *, NSError *))arg2;
- (oneway void)fetchActivePosterConfiguration:(void (^)(PRSServerPosterPath *, PRSServerPosterPath *, NSError *))arg1;
- (oneway void)fetchActiveConfiguration:(void (^)(PRSServerPosterPath *, NSError *))arg1;
- (oneway void)fetchSelectedConfiguration:(void (^)(PRSServerPosterPath *, NSError *))arg1;
- (oneway void)updateToSelectedConfigurationMatchingUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)fetchLimitedOcclusionBoundsForPosterConfiguration:(PRSPosterConfiguration *)arg1 orientation:(NSNumber *)arg2 completion:(void (^)(NSValue *, NSError *))arg3;
- (oneway void)fetchObscurableBoundsForPosterConfiguration:(PRSPosterConfiguration *)arg1 orientation:(NSNumber *)arg2 completion:(void (^)(NSValue *, NSError *))arg3;
- (oneway void)fetchContentCutoutBoundsForPosterConfiguration:(PRSPosterConfiguration *)arg1 orientation:(NSNumber *)arg2 completion:(void (^)(NSValue *, NSError *))arg3;
- (oneway void)fetchMaximalContentCutoutBoundsForOrientation:(NSNumber *)arg1 completion:(void (^)(NSValue *, NSError *))arg2;
- (oneway void)fetchContentObstructionBoundsForPosterConfiguration:(PRSPosterConfiguration *)arg1 orientation:(NSNumber *)arg2 completion:(void (^)(NSArray<__NSValue__> *, NSError *))arg3;
- (oneway void)updatePosterConfigurationMatchingUUID:(NSUUID *)arg1 updates:(NSArray<__PRSPosterUpdate__> *)arg2 completion:(void (^)(PRSServerPosterPath *, NSArray<__PRSPosterUpdateResult__> *, NSError *))arg3;
- (oneway void)fetchAssociatedHomeScreenPosterConfigurationUUID:(NSUUID *)arg1 completion:(void (^)(PRSServerPosterPath *, NSError *))arg2;
- (oneway void)refreshSnapshotForPosterConfigurationMatchUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)importPosterConfigurationFromArchiveData:(NSData *)arg1 completion:(void (^)(NSUUID *, NSError *))arg2;
- (oneway void)exportPosterConfigurationMatchingUUID:(NSUUID *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (oneway void)deletePosterConfigurationsMatchingUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)ingestSnapshotCollection:(PRSPosterSnapshotCollection *)arg1 forPosterConfigurationUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)fetchPosterSnapshotsWithRequest:(PRSPosterSnapshotRequest *)arg1 completion:(void (^)(PRSPosterSnapshotResponse *, NSError *))arg2;
- (oneway void)fetchPosterConfigurations:(void (^)(NSArray<__PRSServerPosterPath__> *, NSError *))arg1;
- (oneway void)associateConfigurationMatchingUUID:(NSUUID *)arg1 focusModeActivityUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)refreshPosterConfigurationMatchingUUID:(NSUUID *)arg1 sessionInfo:(PRSPosterUpdateSessionInfo *)arg2 completion:(void (^)(PRSServerPosterPath *, NSError *))arg3;
- (oneway void)createPosterConfigurationForProviderIdentifier:(NSString *)arg1 posterDescriptorIdentifier:(NSString *)arg2 completion:(void (^)(PRSServerPosterPath *, NSError *))arg3;
- (oneway void)deletePosterDescriptorsForExtension:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)refreshPosterDescriptorsForExtension:(NSString *)arg1 sessionInfo:(PRSPosterUpdateSessionInfo *)arg2 completion:(void (^)(NSArray<__PRSServerPosterPath__> *, NSError *))arg3;
- (oneway void)fetchStaticPosterDescriptorsForExtension:(NSString *)arg1 completion:(void (^)(NSArray<__PRSServerPosterPath__> *, NSError *))arg2;
- (oneway void)fetchPosterDescriptorsForExtension:(NSString *)arg1 completion:(void (^)(NSArray<__PRSServerPosterPath__> *, NSError *))arg2;
- (oneway void)fetchExtensionIdentifiersWithCompletion:(void (^)(NSArray<__NSString__> *, NSError *))arg1;
- (oneway void)fetchRuntimeAssertionState:(void (^)(NSString *, NSError *))arg1;
- (oneway void)deleteSnapshots:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)deleteTransientDataWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)notifyPosterBoardOfApplicationUpdatesWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)deleteDataStoreWithCompletion:(void (^)(NSError *))arg1;
@end

