//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSURLCompletionDatabase.h>

@class NSArray, NSCache, NSObject, NSString;
@protocol OS_dispatch_queue, WBBookmarkProvider, WBSCloudTabDeviceProvider;

__attribute__((visibility("hidden")))
@interface URLCompletionDatabase : WBSURLCompletionDatabase
{
    id <WBSCloudTabDeviceProvider> _cloudTabStore;	// 8 = 0x8
    NSArray *_cloudDevices;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_cloudTabsAccessQueue;	// 24 = 0x18
    NSCache *_bookmarksCache;	// 32 = 0x20
    id <WBBookmarkProvider> _bookmarkProvider;	// 40 = 0x28
    int _searchableCollectionsMask;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001827f2
@property(nonatomic) int searchableCollectionsMask; // @synthesize searchableCollectionsMask=_searchableCollectionsMask;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(_Bool)arg3;	// IMP=0x0000000000182701
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000181574
- (void)_updateCloudDevices:(id)arg1;	// IMP=0x000000000018149b
- (void)clearBookmarksCache;	// IMP=0x000000000018147e
- (void)dealloc;	// IMP=0x00000000001813cb
- (id)initWithCloudTabStore:(id)arg1 searchableCollectionsMask:(int)arg2 bookmarkProvider:(id)arg3;	// IMP=0x0000000000181206

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
