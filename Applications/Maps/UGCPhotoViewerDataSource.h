//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSArray, NSMutableArray, NSString, UGCPhotoAlbumCategory, UGCPhotoViewerDataProvider;
@protocol UGCPhotoViewerDataProviding, UGCPhotoViewerDataSourceDelegate;

@interface UGCPhotoViewerDataSource : NSObject
{
    MKMapItem *_mapItem;	// 8 = 0x8
    NSMutableArray *_dataProviders;	// 16 = 0x10
    id <UGCPhotoViewerDataSourceDelegate> _delegate;	// 24 = 0x18
    id <UGCPhotoViewerDataProviding> _userUploadDataProvider;	// 32 = 0x20
    _Bool _active;	// 40 = 0x28
    unsigned long long _albumIndex;	// 48 = 0x30
    unsigned long long _indexOfTappedPhoto;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000073c640
@property(nonatomic) unsigned long long indexOfTappedPhoto; // @synthesize indexOfTappedPhoto=_indexOfTappedPhoto;
@property(nonatomic) unsigned long long albumIndex; // @synthesize albumIndex=_albumIndex;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) unsigned long long totalNumberOfPhotosForCurrentDataProvider;
@property(readonly, nonatomic) _Bool isSingleVendorThatHasPhotosNeedingObfuscation;
@property(readonly, nonatomic, getter=isAllowedToShowAddPhotosCallToAction) _Bool allowedToShowAddPhotosCallToAction;
@property(readonly, nonatomic) _Bool hasDataToShow;
- (id)photoViewerDataProviderRequestsMapItem:(id)arg1;	// IMP=0x001000000073c480
- (void)photoViewerDataProvider:(id)arg1 failedBatchRequestWithError:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x001000000073c3db
- (void)photoViewerDataProvider:(id)arg1 didUpdateWithPhotos:(id)arg2;	// IMP=0x001000000073c352
@property(readonly, nonatomic) UGCPhotoViewerDataProvider *currentDataProvider;
@property(readonly, nonatomic) NSArray *currentVendorNameList;
@property(readonly, nonatomic) NSArray *currentPhotoList;
- (void)fetchNextBatchRequestIfNeeded;	// IMP=0x001000000073c1a7
@property(readonly, nonatomic) _Bool hasReachedTotalCount;
@property(readonly, nonatomic) unsigned long long numberOfCategories;
- (void)_initSingleVendorPhotos;	// IMP=0x001000000073bf5c
- (void)_initComingledVendorPhotos;	// IMP=0x001000000073bb4e
- (id)_dataProviderForAlbumIndex:(unsigned long long)arg1;	// IMP=0x001000000073baff
@property(readonly, nonatomic) NSArray *albumCategories;
@property(readonly, nonatomic) UGCPhotoAlbumCategory *currentAlbumCategory;
- (void)_createDataSourceIfNeeded;	// IMP=0x001000000073b8d8
- (id)initWithMapItem:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000073b817

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

