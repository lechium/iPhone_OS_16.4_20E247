//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface DDFallbackController : UIViewController
{
    UIWindow *_baseWindow;	// 8 = 0x8
    UIWindow *_ourWindow;	// 16 = 0x10
    id _interactionDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000015b7a
- (_Bool)shouldAutorotate;	// IMP=0x0000000000015b72
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000159fe
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000157a0
- (void)loadView;	// IMP=0x0000000000015710
- (id)initWithWindow:(id)arg1 interactionDelegate:(id)arg2;	// IMP=0x0000000000015674

@end
