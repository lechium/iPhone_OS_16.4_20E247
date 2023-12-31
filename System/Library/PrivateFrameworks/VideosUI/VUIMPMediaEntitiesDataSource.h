//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSOrderedSet, NSString, VUIMediaEntitiesFetchController, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntitiesDataSource
{
    _Bool _shouldPauseAutoFetchingArtworkInfoDictionaries;	// 8 = 0x8
    VUIMediaLibrary *_mediaLibrary;	// 16 = 0x10
    VUIMediaEntitiesFetchController *_fetchController;	// 24 = 0x18
    NSOrderedSet *_mediaEntitiesSet;	// 32 = 0x20
    NSArray *_mediaEntitiesToFetch;	// 40 = 0x28
    unsigned long long _inFlightArtworkRequests;	// 48 = 0x30
    struct _NSRange _requestedRange;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000051c1e
@property(nonatomic) unsigned long long inFlightArtworkRequests; // @synthesize inFlightArtworkRequests=_inFlightArtworkRequests;
@property(nonatomic) struct _NSRange requestedRange; // @synthesize requestedRange=_requestedRange;
@property(retain, nonatomic) NSArray *mediaEntitiesToFetch; // @synthesize mediaEntitiesToFetch=_mediaEntitiesToFetch;
@property(retain, nonatomic) NSOrderedSet *mediaEntitiesSet; // @synthesize mediaEntitiesSet=_mediaEntitiesSet;
@property(retain, nonatomic) VUIMediaEntitiesFetchController *fetchController; // @synthesize fetchController=_fetchController;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (_Bool)shouldPauseAutoFetchingArtworkInfoDictionaries;	// IMP=0x0000000000051b2c
- (id)_getPurchaseHistoryIdsFromMediaEntities:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000051a02
- (void)_loadImageUrlsByPurchaseHistoryIds:(id)arg1;	// IMP=0x00000000000515a6
- (void)_fetchArtworkInfoIfNecessary;	// IMP=0x00000000000514b9
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x00000000000512dd
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;	// IMP=0x0000000000050deb
- (void)dealloc;	// IMP=0x0000000000050cc5
- (void)setShouldPauseAutoFetchingArtworkInfoDictionaries:(_Bool)arg1;	// IMP=0x0000000000050c8f
- (void)startFetch;	// IMP=0x0000000000050ada
- (id)initWithMediaLibrary:(id)arg1 fetchRequest:(id)arg2;	// IMP=0x0000000000050a41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

