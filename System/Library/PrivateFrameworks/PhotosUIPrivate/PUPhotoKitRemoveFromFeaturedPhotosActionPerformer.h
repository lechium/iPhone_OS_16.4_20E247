//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface PUPhotoKitRemoveFromFeaturedPhotosActionPerformer
{
    NSDictionary *_assetToSuggestionMap;	// 16 = 0x10
}

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x006000000036b649
- (void).cxx_destruct;	// IMP=0x000000000036b423
@property(retain, nonatomic) NSDictionary *assetToSuggestionMap; // @synthesize assetToSuggestionMap=_assetToSuggestionMap;
- (void)performBackgroundTask;	// IMP=0x000000000036b1e4

@end
