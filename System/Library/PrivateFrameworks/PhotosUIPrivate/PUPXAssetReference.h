//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUAssetReference.h"

@class PXAssetReference;

__attribute__((visibility("hidden")))
@interface PUPXAssetReference : PUAssetReference
{
    PXAssetReference *_underlyingAssetReference;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000049226e
@property(readonly, nonatomic) PXAssetReference *underlyingAssetReference; // @synthesize underlyingAssetReference=_underlyingAssetReference;
- (id)pxAssetReference;	// IMP=0x000000000049224b
- (id)initWithPXAssetReference:(id)arg1 dataSourceIdentifier:(id)arg2;	// IMP=0x0000000000492113
- (id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;	// IMP=0x000000000049206c

@end
