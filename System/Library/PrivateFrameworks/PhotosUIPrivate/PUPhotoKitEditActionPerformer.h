//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIViewController;

__attribute__((visibility("hidden")))
@interface PUPhotoKitEditActionPerformer
{
    UIViewController *_presentedAlertViewController;	// 16 = 0x10
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x0060000000369233
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x0060000000369120
- (void).cxx_destruct;	// IMP=0x0000000000368c0b
- (void)_presentEditorForAsset:(id)arg1;	// IMP=0x0000000000368b07
- (void)_beginEditingCurrentAsset;	// IMP=0x00000000003689a7
- (void)performUserInteractionTask;	// IMP=0x000000000036880a

@end

