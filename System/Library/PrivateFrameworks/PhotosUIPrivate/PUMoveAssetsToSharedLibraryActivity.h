//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface PUMoveAssetsToSharedLibraryActivity : PXActivity
{
    UIViewController *_presenterViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000046ac2b
- (void)performActivity;	// IMP=0x000000000046a809
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000046a7a1
- (id)_systemImageName;	// IMP=0x000000000046a794
- (id)activityTitle;	// IMP=0x000000000046a724
- (id)activityType;	// IMP=0x000000000046a710
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000046a679

@end
