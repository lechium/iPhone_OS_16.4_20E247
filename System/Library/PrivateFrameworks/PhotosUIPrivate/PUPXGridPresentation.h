//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PUSessionInfo;

__attribute__((visibility("hidden")))
@interface PUPXGridPresentation : NSObject
{
    PUSessionInfo *_sessionInfo;	// 8 = 0x8
    long long _userInterfaceIdiom;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002f6a65
@property long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
- (void)_customizePhotosViewConfiguationForAssetPicker:(id)arg1 assetCollection:(id)arg2;	// IMP=0x00000000002f67e1
- (id)createDuplicatesGridViewControllerWithCollection:(id)arg1;	// IMP=0x00000000002f659b
- (id)createImportHistoryGridViewControllerWithCollection:(id)arg1;	// IMP=0x00000000002f5fdc
- (id)createPanoramaViewController;	// IMP=0x00000000002f5b5a
- (id)createAssetPickerPhotosAlbumViewControllerForAlbum:(id)arg1;	// IMP=0x00000000002f59ad
- (id)createPhotosAlbumViewControllerForAlbum:(id)arg1 withFetchResult:(id)arg2;	// IMP=0x00000000002f566c
- (id)createPlacesViewControllerForAssetCollection:(id)arg1;	// IMP=0x00000000002f5477
- (id)createSharedAlbumListViewControllerWithConfiguration:(id)arg1;	// IMP=0x00000000002f535d
- (id)createAlbumListViewControllerWithConfiguration:(id)arg1;	// IMP=0x00000000002f5244
- (id)createAlbumListViewControllerWithCollectionList:(id)arg1;	// IMP=0x00000000002f517f
- (id)createViewControllerForAssetCollection:(id)arg1 existingAssetsFetchResult:(id)arg2;	// IMP=0x00000000002f4ffd
- (id)createViewControllerForAssetCollection:(id)arg1;	// IMP=0x00000000002f4fe9
- (_Bool)_isEmpty:(id)arg1;	// IMP=0x00000000002f4eae
- (void)createGridViewControllerWithAssets:(id)arg1 photoLibrary:(id)arg2 withTitle:(id)arg3 hideTabBar:(_Bool)arg4 gridPresentationContext:(long long)arg5 containerViewController:(id)arg6 barsUpdateDelegate:(id)arg7 andCompletion:(CDUnknownBlockType)arg8;	// IMP=0x00000000002f4b7b
- (id)initWithUserInterfaceIdiom:(long long)arg1;	// IMP=0x00000000002f4b3e
- (id)init;	// IMP=0x00000000002f4ac4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
