//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SDAirDropHandlerPhotos
{
    _Bool _hasPhotos;	// 8 = 0x8
    _Bool _hasVideos;	// 9 = 0x9
    _Bool _shouldExtractMediaFromPhotosBundles;	// 10 = 0xa
}

@property(readonly, nonatomic) _Bool shouldExtractMediaFromPhotosBundles; // @synthesize shouldExtractMediaFromPhotosBundles=_shouldExtractMediaFromPhotosBundles;
- (id)createDestination;	// IMP=0x00100000002260c9
- (void)triggerImport;	// IMP=0x001000000022559d
- (_Bool)transferContainsAssetBundles:(id)arg1;	// IMP=0x00100000002253de
- (void)updatePossibleActions;	// IMP=0x00100000002251f6
- (id)transformPhotosAssetBundlesToFoldersIfNeededInCompletedURLs:(id)arg1;	// IMP=0x0010000000224ca8
- (id)suitableContentsDescription;	// IMP=0x00100000002245fe
- (long long)transferTypes;	// IMP=0x00100000002245c9
- (_Bool)canHandleTransfer;	// IMP=0x00100000002242dd
- (id)initWithTransfer:(id)arg1;	// IMP=0x00100000002242a7

@end

