//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICDJaliscoMediaFilter, NSArray;
@protocol ICDJaliscoSupportedMediaKindsHandler;

@interface JaliscoMediaImporter
{
    ICDJaliscoMediaFilter *_mediaFilter;	// 8 = 0x8
    NSArray *_supportedMediaKinds;	// 16 = 0x10
    id <ICDJaliscoSupportedMediaKindsHandler> _supportedMediaKindsHandler;	// 24 = 0x18
}

+ (id)oversizeLogCategory;	// IMP=0x00400000000e4b56
+ (id)logCategory;	// IMP=0x00100000000e4b36
- (void).cxx_destruct;	// IMP=0x00200000000e4220
- (id)_supportedMediaKindsDatabasePropertyValue;	// IMP=0x00100000000e419f
- (id)_importTracksFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 withItemsResponse:(id)arg3 clientIdentity:(id)arg4;	// IMP=0x00100000000e37b6
- (id)_chapterArtworkURLsForData:(id)arg1 baseURL:(id)arg2;	// IMP=0x00100000000e33b2
- (id)_chapterDataFromURL:(id)arg1;	// IMP=0x00100000000e3324
- (id)updateLibraryFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 withResponse:(id)arg3 clientIdentity:(id)arg4;	// IMP=0x00100000000e325c
- (void)clearNeedsUpdateForTokens;	// IMP=0x00100000000e321d
- (_Bool)needsUpdateForTokens;	// IMP=0x00100000000e3049
- (id)supportedMediaKinds;	// IMP=0x00100000000e2fce
- (id)metadataKeys;	// IMP=0x00100000000e2b42
- (id)purchaseTokens;	// IMP=0x00100000000e2762
- (id)queryFilter;	// IMP=0x00100000000e2712
- (id)mediaFilter;	// IMP=0x00100000000e2654
- (_Bool)includePreorders;	// IMP=0x00100000000e264c
- (unsigned int)onDiskRevision;	// IMP=0x00100000000e2608
- (void)cancel;	// IMP=0x00100000000e251c
- (id)initWithConnection:(id)arg1 supportedMediaKindsHandler:(id)arg2;	// IMP=0x00100000000e24a4

@end
