//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudUpdateLibraryOperation, ICConnectionConfiguration, ML3MusicLibrary, NSMutableArray, NSString, SagaArtworkImporter, SagaLibrary;
@protocol ICDCloudMusicLibrarySagaUpdateTaskHelper, OS_dispatch_queue, OS_dispatch_source;

@interface SagaRequestHandler : NSObject
{
    SagaLibrary *_library;	// 8 = 0x8
    SagaArtworkImporter *_artworkImporter;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_uploadItemPropertiesQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_uploadPlaylistPropertiesQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_updateCloudLibraryQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 48 = 0x30
    CloudUpdateLibraryOperation *_updateCloudLibraryOperation;	// 56 = 0x38
    NSMutableArray *_updateLibraryCompletionHandlers;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_itemPropertiesCoalescingTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_playlistPropertiesCoalescingTimer;	// 80 = 0x50
    id <ICDCloudMusicLibrarySagaUpdateTaskHelper> _updateTaskHelper;	// 88 = 0x58
    ICConnectionConfiguration *_configuration;	// 96 = 0x60
    ML3MusicLibrary *_musicLibrary;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000007e257
- (void)_handleCloudLibraryUpdateOperationFinishedWithError:(id)arg1;	// IMP=0x001000000007e0ce
- (void)updateLibraryWithClientIdentity:(id)arg1 reason:(long long)arg2 allowNoisyAuthPrompt:(_Bool)arg3 isExplicitUserAction:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000007d6f9
- (void)_addLibraryOperation:(id)arg1 priority:(int)arg2 noLibraryHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d62c
- (id)_library;	// IMP=0x001000000007d5cc
- (void)environmentMonitorDidChangePower:(id)arg1;	// IMP=0x001000000007d439
- (void)unfavoritePlaylistWithGlobalID:(id)arg1 time:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d20e
- (void)unfavoriteArtistWithCloudLibraryID:(id)arg1 time:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007cfe3
- (void)unfavoriteAlbumWithCloudLibraryID:(id)arg1 time:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007cdb8
- (void)unfavoriteEntityWithSagaID:(long long)arg1 entityType:(long long)arg2 time:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007cb66
- (void)unfavoriteEntityWithStoreID:(long long)arg1 entityType:(long long)arg2 time:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007c914
- (void)favoriteArtistWithCloudLibraryID:(id)arg1 time:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007c6e9
- (void)favoriteAlbumWithCloudLibraryID:(id)arg1 time:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007c4be
- (void)favoriteEntityWithSagaID:(long long)arg1 entityType:(long long)arg2 time:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007c26c
- (void)favoritePlaylistWithGlobalID:(id)arg1 time:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007c041
- (void)favoriteEntityWithStoreID:(long long)arg1 entityType:(long long)arg2 time:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007bdef
- (float)updateProgress;	// IMP=0x001000000007bd5a
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007b9ae
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007b769
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007b192
- (void);	// IMP=0x001000000007ae3a
- (void)loadArtworkInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007aacc
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x001000000007aab1
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1;	// IMP=0x001000000007aa96
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x001000000007aa7b
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007a95c
- (void)importScreenshotForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007a83d
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007a71e
- (_Bool)isUpdateInProgressWithIsInitialImport:(_Bool *)arg1;	// IMP=0x001000000007a652
- (void)setAlbumProperties:(id)arg1 forItemsWithAlbumPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007a3f4
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007a19a
- (void)addStorePlaylistWithGlobalID:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000079f4f
- (void)addStoreItemWithOpaqueID:(id)arg1 requestingBundleID:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000079d1b
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000798c2
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 requestReason:(long long)arg3 pinnedOnly:(_Bool)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000079634
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000793ef
- (void)removePlaylistsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000791a7
- (void)removeItemsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000078f5f
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000078d20
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 clientIdentity:(id)arg4 requestingBundleID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000078a01
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000078721
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(long long)arg2 requestingBundleID:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000784b8
- (void)addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 requestingBundleID:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000078285
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007802f
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000077b75
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000778a0
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 requestingBundleID:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000077597
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000772bf
- (void)uploadPlaylistPropertiesWithClientIdentity:(id)arg1 minimumTimeInterval:(double)arg2;	// IMP=0x0010000000077225
- (void)uploadItemPropertiesWithClientIdentity:(id)arg1 minimumTimeInterval:(double)arg2;	// IMP=0x001000000007718b
- (void)updatePlaylistPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000076fcf
- (void)updateItemPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000076e13
- (void)increasePriorityForAllOperations;	// IMP=0x0010000000076ca8
- (void)decreasePriorityForAllOperations;	// IMP=0x0010000000076b3d
- (void)cancelOperations;	// IMP=0x0010000000076a68
- (void)cancelOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000076954
- (void)cancelPendingChanges;	// IMP=0x0010000000076940
- (void)cancelPendingChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000767d8
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000007675a
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x00100000000766dc
- (id)initWithConfiguration:(id)arg1 progressObserver:(id)arg2;	// IMP=0x00100000000763ce
- (id)init;	// IMP=0x001000000007638c
- (void)dealloc;	// IMP=0x00100000000761ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

