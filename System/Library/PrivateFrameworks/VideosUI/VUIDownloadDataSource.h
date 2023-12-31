//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSString, SSDownloadManager, VUIMediaEntitiesFetchController, VUIMediaLibrary;
@protocol VUIDownloadDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface VUIDownloadDataSource
{
    _Bool _hasFetchedAllDownloadEntities;	// 8 = 0x8
    _Bool _hasFetchedAllDownloadedEntities;	// 9 = 0x9
    _Bool _performingRentalExpirationFetch;	// 10 = 0xa
    id <VUIDownloadDataSourceDelegate> _downloadDelegate;	// 16 = 0x10
    NSArray *_downloadEntities;	// 24 = 0x18
    VUIMediaLibrary *_mediaLibrary;	// 32 = 0x20
    VUIMediaEntitiesFetchController *_downloadedEntitiesFetchController;	// 40 = 0x28
    VUIMediaEntitiesFetchController *_activeDownloadingEntitiesFetchController;	// 48 = 0x30
    SSDownloadManager *_sDownloadManager;	// 56 = 0x38
    NSArray *_localMediaItems;	// 64 = 0x40
    NSArray *_activelyDownloadingAdamIds;	// 72 = 0x48
    NSArray *_activelyDownloadingMediaItems;	// 80 = 0x50
    NSMutableDictionary *_episodesDownloadingForShow;	// 88 = 0x58
    NSMutableDictionary *_groupingByShowIdentifier;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000192f33
@property(retain, nonatomic) NSMutableDictionary *groupingByShowIdentifier; // @synthesize groupingByShowIdentifier=_groupingByShowIdentifier;
@property(retain, nonatomic) NSMutableDictionary *episodesDownloadingForShow; // @synthesize episodesDownloadingForShow=_episodesDownloadingForShow;
@property(retain, nonatomic) NSArray *activelyDownloadingMediaItems; // @synthesize activelyDownloadingMediaItems=_activelyDownloadingMediaItems;
@property(retain, nonatomic) NSArray *activelyDownloadingAdamIds; // @synthesize activelyDownloadingAdamIds=_activelyDownloadingAdamIds;
@property(retain, nonatomic) NSArray *localMediaItems; // @synthesize localMediaItems=_localMediaItems;
@property(nonatomic) _Bool performingRentalExpirationFetch; // @synthesize performingRentalExpirationFetch=_performingRentalExpirationFetch;
@property(nonatomic) _Bool hasFetchedAllDownloadedEntities; // @synthesize hasFetchedAllDownloadedEntities=_hasFetchedAllDownloadedEntities;
@property(nonatomic) _Bool hasFetchedAllDownloadEntities; // @synthesize hasFetchedAllDownloadEntities=_hasFetchedAllDownloadEntities;
@property(retain, nonatomic) SSDownloadManager *sDownloadManager; // @synthesize sDownloadManager=_sDownloadManager;
@property(retain, nonatomic) VUIMediaEntitiesFetchController *activeDownloadingEntitiesFetchController; // @synthesize activeDownloadingEntitiesFetchController=_activeDownloadingEntitiesFetchController;
@property(retain, nonatomic) VUIMediaEntitiesFetchController *downloadedEntitiesFetchController; // @synthesize downloadedEntitiesFetchController=_downloadedEntitiesFetchController;
@property(readonly, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(retain, nonatomic) NSArray *downloadEntities; // @synthesize downloadEntities=_downloadEntities;
@property(nonatomic) __weak id <VUIDownloadDataSourceDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
- (_Bool)_downloadsDidChange:(id)arg1;	// IMP=0x0000000000192ce3
- (id)_coalesceActiveDownloadEntitiesAndDownloadedEntities;	// IMP=0x000000000019297d
- (_Bool)_doesEpisodeSet:(id)arg1 containMediaEntity:(id)arg2;	// IMP=0x00000000001927bc
- (void)_notifyDelegatesDownloadsFetchCompletedWithChanges:(_Bool)arg1;	// IMP=0x0000000000192416
- (void)_updateDownloadEntity:(id *)arg1 withLatestMediaEntity:(id)arg2;	// IMP=0x0000000000192117
- (id)_createDownloadEntitiesFromLatestDownloads:(id)arg1;	// IMP=0x0000000000191847
- (id)_createGroupingByShowIdentifierWithLatestMediaEntityGroups:(id)arg1;	// IMP=0x00000000001915cd
- (id)_upsertDownloadEntities:(id)arg1 withEpisodesDownloadingForShow:(id)arg2;	// IMP=0x0000000000190d2f
- (void)_upsertEpisodesDownloadingForShowWithMediaEntity:(id)arg1;	// IMP=0x0000000000190b61
- (id)_getDownloadEntityInDownloadEntities:(id)arg1 containingMediaEntity:(id)arg2;	// IMP=0x000000000019087c
- (void)_handleDownloadingStateDidChange;	// IMP=0x0000000000190458
- (void)_getActivelyDownloadingAdamIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000018fc00
- (void)_rentalsDidExpire;	// IMP=0x000000000018facf
- (void)_removeNotifcationObservers;	// IMP=0x000000000018fa6f
- (void)_addNotificationObservers;	// IMP=0x000000000018fa08
- (void)_loadActiveDownloads;	// IMP=0x000000000018f6ca
- (void)_loadDownloadedEntities;	// IMP=0x000000000018f3fa
- (void)downloadManagerDownloadsDidChange:(id)arg1;	// IMP=0x000000000018f2cd
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;	// IMP=0x000000000018f189
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x000000000018eea9
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;	// IMP=0x000000000018ebe9
- (void)loadDownloadData;	// IMP=0x000000000018e85c
- (void)dealloc;	// IMP=0x000000000018e6b7
- (void)startFetch;	// IMP=0x000000000018e511
- (id)initWithMediaLibrary:(id)arg1 fetchRequest:(id)arg2;	// IMP=0x000000000018e24d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

