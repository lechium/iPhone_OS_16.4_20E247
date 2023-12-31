//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, MKMapItem, MUPlacePhotoGalleryViewController, MacPlacePhotoViewerConfiguration, MapsSceneDelegate, NSString, PhotoViewerToolbarController, RAPPlacecardImageryLayoutManager, RAPPresenter, Result, UGCMorePhotosFeedViewController, UGCReportImageryController;
@protocol MUPlacePhotoGalleryViewControllerDelegate, MacPlacePhotoViewerActionDelegate;

@interface MacPlacePhotoViewerRootViewController : UIViewController
{
    id <MacPlacePhotoViewerActionDelegate> _delegate;	// 8 = 0x8
    MacPlacePhotoViewerConfiguration *_configuration;	// 16 = 0x10
    UGCMorePhotosFeedViewController *_photoThumbnailViewController;	// 24 = 0x18
    MUPlacePhotoGalleryViewController *_photoGalleryViewController;	// 32 = 0x20
    PhotoViewerToolbarController *_toolbarController;	// 40 = 0x28
    UGCReportImageryController *_reportImageryController;	// 48 = 0x30
    RAPPlacecardImageryLayoutManager *_reportImageryLayoutManager;	// 56 = 0x38
    RAPPresenter *_rapPresenter;	// 64 = 0x40
    MapsSceneDelegate *_mapsSceneDelegate;	// 72 = 0x48
    MISSING_TYPE *_underlyingGalleryDelegate;	// 80 = 0x50
    Result *_userAttributionResult;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000001ac459
@property(retain, nonatomic) Result *userAttributionResult; // @synthesize userAttributionResult=_userAttributionResult;
@property(nonatomic) __weak id <MUPlacePhotoGalleryViewControllerDelegate> underlyingGalleryDelegate; // @synthesize underlyingGalleryDelegate=_underlyingGalleryDelegate;
@property(retain, nonatomic) MapsSceneDelegate *mapsSceneDelegate; // @synthesize mapsSceneDelegate=_mapsSceneDelegate;
@property(retain, nonatomic) RAPPresenter *rapPresenter; // @synthesize rapPresenter=_rapPresenter;
@property(retain, nonatomic) RAPPlacecardImageryLayoutManager *reportImageryLayoutManager; // @synthesize reportImageryLayoutManager=_reportImageryLayoutManager;
@property(retain, nonatomic) UGCReportImageryController *reportImageryController; // @synthesize reportImageryController=_reportImageryController;
@property(retain, nonatomic) PhotoViewerToolbarController *toolbarController; // @synthesize toolbarController=_toolbarController;
@property(retain, nonatomic) MUPlacePhotoGalleryViewController *photoGalleryViewController; // @synthesize photoGalleryViewController=_photoGalleryViewController;
@property(retain, nonatomic) UGCMorePhotosFeedViewController *photoThumbnailViewController; // @synthesize photoThumbnailViewController=_photoThumbnailViewController;
@property(retain, nonatomic) MacPlacePhotoViewerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <MacPlacePhotoViewerActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logAction:(int)arg1 withValue:(id)arg2;	// IMP=0x00100000001ac291
- (void)_logUGCAction:(int)arg1 withIndex:(unsigned long long)arg2;	// IMP=0x00100000001ac153
@property(readonly, nonatomic) UIViewController *topmostViewController;
- (void)photoViewerToolbarControllerTappedMorePhotos:(id)arg1;	// IMP=0x00100000001ac03c
- (void)photoViewerToolbarControllerTappedRight:(id)arg1;	// IMP=0x00100000001abfff
- (void)photoViewerToolbarControllerTappedLeft:(id)arg1;	// IMP=0x00100000001abfc2
- (void)photoViewerToolbarControllerTappedAddPhoto:(id)arg1;	// IMP=0x00100000001abfa9
- (id)userUploadedDataProviderForThumbnailGallery:(id)arg1;	// IMP=0x00100000001abf8c
@property(nonatomic) long long context;
- (void)photoThumbnailGalleryViewController:(id)arg1 selectedPhotoAtIndex:(unsigned long long)arg2 photoList:(id)arg3 albumCategory:(id)arg4 imageViewForTransition:(id)arg5;	// IMP=0x00100000001abcce
- (void)photoThumbnailGalleryViewController:(id)arg1 selectedAddPhotosUsingEntryPoint:(long long)arg2 presentationOptions:(id)arg3;	// IMP=0x00100000001abcc8
- (void)_fetchUserAttribution;	// IMP=0x00100000001ab8d5
- (id)placePhotoGalleryRequestsUserAttribution:(id)arg1;	// IMP=0x00100000001ab6ac
- (void)placePhotoGalleryDidFinishDismissing:(id)arg1;	// IMP=0x00100000001ab698
- (void)placePhotoGallery:(id)arg1 openButtonTappedAtIndex:(unsigned long long)arg2;	// IMP=0x00100000001ab4f7
- (void)placePhotoGalleryDidScrollToIndex:(unsigned long long)arg1;	// IMP=0x00100000001ab457
- (void)_updateScrollButtonsWithIndex:(unsigned long long)arg1;	// IMP=0x00100000001ab451
- (void)placePhotoGalleryDidScrollRightToIndex:(unsigned long long)arg1;	// IMP=0x00100000001ab374
- (void)placePhotoGalleryDidScrollLeftToIndex:(unsigned long long)arg1;	// IMP=0x00100000001ab297
- (void)_performPunchoutWithPhoto:(id)arg1 index:(unsigned long long)arg2 presentingViewController:(id)arg3;	// IMP=0x00100000001ab11f
- (void)placePhotoGallery:(id)arg1 attributionViewTappedAtIndex:(unsigned long long)arg2;	// IMP=0x00100000001ab03a
- (void)placePhotoGalleryAdditionalViewTapped:(id)arg1;	// IMP=0x00100000001aaf94
- (void)placePhotoGalleryDidCloseAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001aaef4
- (void)placePhotoGallery:(id)arg1 willCloseAtIndex:(unsigned long long)arg2;	// IMP=0x00100000001aae48
- (void)placePhotoGalleryDidSelectAddPhoto:(id)arg1;	// IMP=0x00100000001aae42
- (void)photoViewerToolbarController:(id)arg1 selectedReportAnIssueItem:(id)arg2;	// IMP=0x00100000001aaccc
- (void)placePhotoGallery:(id)arg1 didSelectReportImageAtIndex:(unsigned long long)arg2;	// IMP=0x00100000001aacc6
- (id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001aac67
- (void)viewDidLoad;	// IMP=0x00100000001aa881
- (id)initWithConfiguration:(id)arg1 sceneDelegate:(id)arg2;	// IMP=0x00100000001aa5b8
@property(readonly) MKMapItem *mapItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

