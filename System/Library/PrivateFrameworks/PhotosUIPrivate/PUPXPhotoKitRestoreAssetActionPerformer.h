//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitRestoreAssetActionPerformer
{
}

+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;	// IMP=0x00800000002fc1e1
+ (_Bool)canPerformOnImplicitSelectionInContainerCollection:(id)arg1;	// IMP=0x00800000002fc1cc
+ (_Bool)canPerformOnSubsetOfSelection;	// IMP=0x00800000002fc1c4
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;	// IMP=0x00800000002fc1a5
+ (_Bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;	// IMP=0x00800000002fbf75
- (long long)destructivePhotosAction;	// IMP=0x00000000002fbf6a

@end
