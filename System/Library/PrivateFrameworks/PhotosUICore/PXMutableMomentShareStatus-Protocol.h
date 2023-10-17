//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXDisplayAssetFetchResult, PXDisplayMomentShare, PXSectionedFetchResult;

@protocol PXMutableMomentShareStatus <NSObject>
@property(retain, nonatomic) id <PXSectionedFetchResult> participantsFetchResult;
@property(retain, nonatomic) id <PXDisplayAssetFetchResult> allAssetsFetchResult;
@property(retain, nonatomic) id <PXDisplayAssetFetchResult> copiedAssetsFetchResult;
@property(retain, nonatomic) id <PXDisplayAssetFetchResult> copyingAssetsFetchResult;
@property(retain, nonatomic) id <PXDisplayMomentShare> momentShare;
@end
