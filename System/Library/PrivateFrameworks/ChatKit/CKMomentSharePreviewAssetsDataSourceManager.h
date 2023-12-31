//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsDataSourceManager.h>

@class IMMomentShareCache, NSURL, PHMomentShare, PXStaticDisplayAssetsDataSource;

__attribute__((visibility("hidden")))
@interface CKMomentSharePreviewAssetsDataSourceManager : PXAssetsDataSourceManager
{
    IMMomentShareCache *_momentShareCache;	// 8 = 0x8
    PXStaticDisplayAssetsDataSource *_currentDataSource;	// 16 = 0x10
    NSURL *_momentShareURL;	// 24 = 0x18
    PHMomentShare *_momentShare;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004bfb04
@property(readonly, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
@property(readonly, nonatomic) NSURL *momentShareURL; // @synthesize momentShareURL=_momentShareURL;
- (void)_momentShareCacheDidChange:(id)arg1;	// IMP=0x00000000004bf9ce
- (void)_handleFetchedMomentShare:(id)arg1 error:(id)arg2;	// IMP=0x00000000004bf6d1
- (void)_fetchMomentShare;	// IMP=0x00000000004bf577
- (id)createInitialDataSource;	// IMP=0x00000000004bf310
- (id)initWithMomentShareURL:(id)arg1;	// IMP=0x00000000004bf1fc
- (id)init;	// IMP=0x00000000004bf1e8

@end

