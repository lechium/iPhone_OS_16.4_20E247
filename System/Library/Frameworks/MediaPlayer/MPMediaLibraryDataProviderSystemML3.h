//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPMediaLibraryDataProviderML3.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3
{
    long long _currentRevision;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)_localizedGeniusErrorForError:(id)arg1 geniusEnabled:(_Bool)arg2;	// IMP=0x006000000019cd94
+ (id)_localizedCloudGeniusErrorForError:(id)arg1;	// IMP=0x006000000019c816
- (void).cxx_destruct;	// IMP=0x000000000019b999
- (_Bool)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class *)arg3;	// IMP=0x000000000019b968
- (void)updateEntitesToCurrentRevision;	// IMP=0x000000000019b8e8
- (id)errorResolverForItem:(id)arg1;	// IMP=0x000000000019b85d
- (void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000019b5d8
- (void)geniusItemsForSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019b33c
- (void)releaseGeniusClusterPlaylist:(void *)arg1;	// IMP=0x000000000019b32e
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)arg1 count:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000019b246
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000019b104
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000019aef4
- (_Bool)isGeniusEnabled;	// IMP=0x000000000019ae5a
- (long long)_currentRevision;	// IMP=0x000000000019adf9
- (void)_initInstanceVariableOnce;	// IMP=0x000000000019ad8a
- (id)initWithLibrary:(id)arg1;	// IMP=0x000000000019ad3e

@end
