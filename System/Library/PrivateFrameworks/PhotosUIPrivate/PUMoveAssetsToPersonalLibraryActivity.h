//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface PUMoveAssetsToPersonalLibraryActivity : PXActivity
{
    UIViewController *_presenterViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003a4e9
- (void)performActivity;	// IMP=0x000000000003a0c7
- (id)_multiContributorConfirmationAlertControllerForAssets:(id)arg1 contributorName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039b0b
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000039aa3
- (id)_systemImageName;	// IMP=0x0000000000039a96
- (id)activityTitle;	// IMP=0x0000000000039a85
- (id)activityType;	// IMP=0x0000000000039a71
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000399da

@end
