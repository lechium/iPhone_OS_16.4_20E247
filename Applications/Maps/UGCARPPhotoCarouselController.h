//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject, NSString, PHCachingImageManager, PHPhotoLibrary, UGCPhotoCreditSectionHeaderView, UICollectionView, UICollectionViewDiffableDataSource, UIImagePickerController, UIViewController;
@protocol OS_dispatch_queue, UGCAddPhotosControllerDelegate;

@interface UGCARPPhotoCarouselController
{
    UICollectionView *_collectionView;	// 8 = 0x8
    UGCPhotoCreditSectionHeaderView *_headerView;	// 16 = 0x10
    PHPhotoLibrary *_library;	// 24 = 0x18
    PHCachingImageManager *_imageManager;	// 32 = 0x20
    struct CLLocationCoordinate2D _centerCoordinate;	// 40 = 0x28
    UIImagePickerController *_imagePicker;	// 56 = 0x38
    UIViewController *_presentingViewController;	// 64 = 0x40
    id <UGCAddPhotosControllerDelegate> _addPhotosDelegate;	// 72 = 0x48
    NSMutableArray *_viewModels;	// 80 = 0x50
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 88 = 0x58
    unsigned long long _maximumNumberOfPhotos;	// 96 = 0x60
    _Bool _isPhotoCreditOn;	// 104 = 0x68
    NSString *_photoCreditName;	// 112 = 0x70
    _Bool _photoCreditNotSetupYet;	// 120 = 0x78
    long long _photoCreditFetchStatus;	// 128 = 0x80
    _Bool _previouslySubmittedPhotosExist;	// 136 = 0x88
    _Bool _showPhotoCarousel;	// 137 = 0x89
    NSObject<OS_dispatch_queue> *_serialQueue;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_suggestedPhotosImageDownloadingQueue;	// 152 = 0x98
    double _lastContentOffset;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00200000007329a9
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
- (void)photoAttributionPreferencesDidChange:(id)arg1;	// IMP=0x0010000000732973
- (void)_addViewModel:(id)arg1 shouldMarkAsChecked:(_Bool)arg2;	// IMP=0x001000000073269b
- (void)addPhotoWithMetadata:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000007325d4
- (id)_viewModelForIdentifier:(id)arg1;	// IMP=0x0010000000732408
- (id)_buildSnapshotFromCurrentState;	// IMP=0x00100000007321ba
- (void)_invokeChangeHandler;	// IMP=0x0010000000732149
- (void)_handleAddFromSuggestionImage:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x001000000073209d
- (id)collectionViewBackgroundColor;	// IMP=0x0010000000732084
- (double)preferredCellHeight;	// IMP=0x0010000000732076
- (id)anchoringView;	// IMP=0x0010000000731fff
- (void)fetchPhotoCreditPreferences;	// IMP=0x0010000000731d28
- (id)collectionViewButtonTitle;	// IMP=0x0010000000731cc0
- (id)collectionViewHeaderTitleForNumberOfSelectedPhotos:(unsigned long long)arg1;	// IMP=0x0010000000731bbf
- (id)configurePhotoCreditStringForCollectionViewHeader;	// IMP=0x0010000000731a13
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00100000007319c1
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0010000000731990
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000731554
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0010000000731255
- (void)_prepareImageThumbnailWithOriginalImage:(id)arg1 targetSize:(struct CGSize)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000073115b
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x001000000073097e
- (void)setupCollectionView:(id)arg1;	// IMP=0x00100000007306f6
- (void)loadPhotoFromAsset:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007300e5
- (void)fetchSuggestedImageAssetsWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000072fa31
- (void)setupSuggestedPhotosIfNeeded;	// IMP=0x001000000072f829
- (void)dealloc;	// IMP=0x001000000072f79f
- (id)initWithDelegate:(id)arg1 presentingViewController:(id)arg2 maximumNumberOfPhotos:(unsigned long long)arg3 previouslySubmittedPhotosExist:(_Bool)arg4 mapItemCoordinate:(struct CLLocationCoordinate2D)arg5 showPhotoCarousel:(_Bool)arg6;	// IMP=0x001000000072f5c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

