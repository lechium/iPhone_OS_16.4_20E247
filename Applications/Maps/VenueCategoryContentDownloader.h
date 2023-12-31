//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSearchCategory, MISSING_TYPE, MKMapItem;
@protocol VenueCategoryContentDownloaderDelegate;

@interface VenueCategoryContentDownloader : NSObject
{
    _Bool _currentSearchShouldFrameMapViewport;	// 8 = 0x8
    id <VenueCategoryContentDownloaderDelegate> _delegate;	// 16 = 0x10
    MISSING_TYPE *_mapItem;	// 24 = 0x18
    GEOSearchCategory *_searchCategory;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000530014
@property(nonatomic) _Bool currentSearchShouldFrameMapViewport; // @synthesize currentSearchShouldFrameMapViewport=_currentSearchShouldFrameMapViewport;
@property(retain, nonatomic) GEOSearchCategory *searchCategory; // @synthesize searchCategory=_searchCategory;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) __weak id <VenueCategoryContentDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)searchDidReceiveAutoCompleteSubcategories:(id)arg1;	// IMP=0x001000000052fef9
- (void)searchDidReceiveResults:(id)arg1;	// IMP=0x001000000052fe7d
- (void)searchDidCancel;	// IMP=0x001000000052fe31
- (void)searchDidFail;	// IMP=0x001000000052fde5
- (void)searchWillStart;	// IMP=0x001000000052fd99
- (void)performSearchWithVenueCategoryItem:(id)arg1 actionCoordination:(id)arg2;	// IMP=0x001000000052fcc3
- (void)performSearchWithSearchCategory:(id)arg1 subcategoriesType:(int)arg2 filter:(id)arg3 shouldFrameMapViewport:(_Bool)arg4 actionCoordination:(id)arg5;	// IMP=0x001000000052fad8
- (void)fetchVenueMapItemWithBusinessID:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000052f8e6
- (id)initWithDelegate:(id)arg1 venueAutoCompleteCategoryCardItem:(id)arg2;	// IMP=0x001000000052f706
- (id)initWithDelegate:(id)arg1 venueCategoryCardItem:(id)arg2;	// IMP=0x001000000052f624

@end

