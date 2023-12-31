//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIBaseMediaItem.h"

@class ML3Track, MPMediaItem, MPMediaLibrary, NSURL, VUIPlaybackPositionInfo;
@protocol TVImageLoader;

__attribute__((visibility("hidden")))
@interface VUILibraryMediaItem_iOS : VUIBaseMediaItem
{
    _Bool _bookmarkDisabled;	// 8 = 0x8
    long long _persistentID;	// 16 = 0x10
    MPMediaItem *_mpMediaItem;	// 24 = 0x18
    MPMediaLibrary *_mpMediaLibrary;	// 32 = 0x20
    ML3Track *_ml3Track;	// 40 = 0x28
    VUIPlaybackPositionInfo *_playbackPositionInfo;	// 48 = 0x30
    NSURL *_mediaItemURLInternal;	// 56 = 0x38
}

+ (void)initialize;	// IMP=0x00600000001c9878
- (void).cxx_destruct;	// IMP=0x00000000001caefa
@property(retain, nonatomic) NSURL *mediaItemURLInternal; // @synthesize mediaItemURLInternal=_mediaItemURLInternal;
@property(retain, nonatomic) VUIPlaybackPositionInfo *playbackPositionInfo; // @synthesize playbackPositionInfo=_playbackPositionInfo;
@property(retain, nonatomic) ML3Track *ml3Track; // @synthesize ml3Track=_ml3Track;
@property(nonatomic) _Bool bookmarkDisabled; // @synthesize bookmarkDisabled=_bookmarkDisabled;
@property(readonly, nonatomic) MPMediaLibrary *mpMediaLibrary; // @synthesize mpMediaLibrary=_mpMediaLibrary;
@property(retain, nonatomic) MPMediaItem *mpMediaItem; // @synthesize mpMediaItem=_mpMediaItem;
@property(nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
- (_Bool)_supportsBookmarks;	// IMP=0x00000000001cadfe
- (void)_schedulePlaybackPositionInfoPersistence;	// IMP=0x00000000001cacf0
- (id)_localPlaybackFilePathURL;	// IMP=0x00000000001caa9d
- (void)cleanUpMediaItem;	// IMP=0x00000000001caa89
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;	// IMP=0x00000000001ca90b
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;	// IMP=0x00000000001ca7ec
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ca5b7
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x00000000001c9d51
- (_Bool)hasTrait:(id)arg1;	// IMP=0x00000000001c9b7d
- (id)mediaItemURL;	// IMP=0x00000000001c9afa
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x00000000001c9a73
@property(readonly, nonatomic) id <TVImageLoader> imageLoader;
- (id)initWithMPMediaItem:(id)arg1;	// IMP=0x00000000001c98c8

@end

