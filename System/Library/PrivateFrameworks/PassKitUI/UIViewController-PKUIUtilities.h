//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (PKUIUtilities)
- (_Bool)pkui_disablesAutomaticDismissalUponEnteringBackground;	// IMP=0x00600000004f381c
- (id)pkui_frontMostViewController;	// IMP=0x00600000004f3747
- (void)_pk_presentViewController:(id)arg1 animated:(_Bool)arg2 transition:(int)arg3 popToViewControllerAfterPresentation:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0060000000540513
- (void)pk_presentViewController:(id)arg1 transition:(int)arg2 popToViewControllerAfterPresentation:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00600000005404e6
- (void)pk_presentViewController:(id)arg1 animated:(_Bool)arg2 popToViewControllerAfterPresentation:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00600000005404be
- (void)pk_paymentSetupPreflight:(CDUnknownBlockType)arg1;	// IMP=0x0060000000540452
- (void)pk_paymentSetupSetHideSetupLaterButton:(_Bool)arg1;	// IMP=0x0060000000540410
- (void)presentModalViewController:(id)arg1 withPaymentSetupContext:(long long)arg2;	// IMP=0x006000000059c223
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x00600000005e095d
- (id)pk_childrenForAppearance;	// IMP=0x00600000005e0874
@end
