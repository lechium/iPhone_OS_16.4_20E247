//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitPasteAdjustmentsActionPerformer : PXPhotoKitAssetActionPerformer
{
}

+ (id)systemImageNameForActionManager:(id)arg1;	// IMP=0x0080000000301187
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;	// IMP=0x0080000000301176
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0080000000301157
+ (id)newActivityProgressAlertForAction:(id)arg1 assets:(id)arg2;	// IMP=0x00800000003010cb
+ (id)newProgressToastForAction:(id)arg1 assets:(id)arg2;	// IMP=0x0080000000300dd3
+ (id)newEditActionForPerformer:(id)arg1 class:(Class)arg2 assets:(id)arg3;	// IMP=0x00800000003009ed
+ (_Bool)_canPasteOnAsset:(id)arg1;	// IMP=0x008000000030093b
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;	// IMP=0x0080000000300929
+ (_Bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;	// IMP=0x0080000000300796
- (void)performUserInteractionTask;	// IMP=0x00000000003005af

@end

