//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FMSongAsset.h"

@class FlexCloudManager;

@interface FlexCloudSongAsset : FMSongAsset
{
    FlexCloudManager *_cloudManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003a976
@property(readonly) __weak FlexCloudManager *cloudManager; // @synthesize cloudManager=_cloudManager;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;	// IMP=0x000000000003a941
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;	// IMP=0x000000000003a925
- (_Bool)contentUpdateAvaliable;	// IMP=0x000000000003a91d
- (unsigned long long)assetStatus;	// IMP=0x000000000003a8ca
- (void)purgeLocalCache;	// IMP=0x000000000003a85d
- (void)cancelDownload;	// IMP=0x000000000003a7db
- (void)requestDownloadWithOptions:(id)arg1;	// IMP=0x000000000003a736
- (void)requestDownload;	// IMP=0x000000000003a6fd
- (_Bool)isCloudBacked;	// IMP=0x000000000003a6f5
- (id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 cloudManager:(id)arg4 contentVersion:(long long)arg5 compatibilityVersion:(long long)arg6;	// IMP=0x000000000003a664

@end
