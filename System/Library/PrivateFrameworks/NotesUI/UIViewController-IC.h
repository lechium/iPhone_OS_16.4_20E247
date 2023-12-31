//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class ICViewControllerManager, UILayoutGuide, UINavigationController, UIWindowScene;

@interface UIViewController (IC)
+ (void)ic_enableUIViewAnimations:(_Bool)arg1 forBlock:(CDUnknownBlockType)arg2;	// IMP=0x002000000003876d
- (void)ic_performBlockAfterActiveTransition:(CDUnknownBlockType)arg1;	// IMP=0x00100000000393c6
- (void)ic_replacePresentedViewControllerWithViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000392da
- (void)ic_dismissPresentedViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039257
- (void)ic_dismissViewControllerOfClass:(Class)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039169
@property(readonly, nonatomic) _Bool ic_isBeingRevealedFromPoppingViewController;
@property(readonly, nonatomic) _Bool ic_hasFullScreenModalPresentationStyle;
@property(readonly, nonatomic) UIWindowScene *ic_windowScene;
@property(readonly, nonatomic) UINavigationController *ic_rootNavigationController;
- (id)ic_embedInNavigationControllerForModalPresentation;	// IMP=0x0010000000038da0
- (id)ic_topViewController;	// IMP=0x0010000000038cf3
- (void)ic_showSingleButtonAlertWithTitle:(id)arg1 message:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038b3a
- (void)ic_showSingleButtonAlertWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x0010000000038b25
@property(readonly, nonatomic) UILayoutGuide *ic_safeAreaLayoutGuide;
@property(readonly, nonatomic) double ic_safeAreaDistanceFromBottom;
@property(readonly, nonatomic) double ic_safeAreaDistanceFromTop;
- (_Bool)ic_isViewVisible;	// IMP=0x00100000000388e7
- (void)ic_showViewController:(id)arg1 animated:(_Bool)arg2 sender:(id)arg3;	// IMP=0x00100000000387f2
@property(readonly, nonatomic) _Bool ic_isRTL;
@property(readonly, nonatomic) ICViewControllerManager *ic_viewControllerManager;
@end

