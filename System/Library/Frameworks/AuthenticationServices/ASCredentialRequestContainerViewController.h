//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSString, UIVisualEffectView;
@protocol ASCredentialRequestPaneViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ASCredentialRequestContainerViewController : UIViewController
{
    NSLayoutConstraint *_sheetHeightConstraint;	// 8 = 0x8
    NSLayoutConstraint *_sheetPresentedConstraint;	// 16 = 0x10
    UIViewController *_rootViewController;	// 24 = 0x18
    id <ASCredentialRequestPaneViewControllerDelegate> _paneDelegate;	// 32 = 0x20
    UIVisualEffectView *_blurBackgroundView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000009762
@property(retain, nonatomic) UIVisualEffectView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(nonatomic) __weak id <ASCredentialRequestPaneViewControllerDelegate> paneDelegate; // @synthesize paneDelegate=_paneDelegate;
@property(readonly, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000000096cc
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000009682
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00000000000092f8
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000009273
- (void)_setPaneDelegate:(id)arg1 forViewController:(id)arg2;	// IMP=0x0000000000009200
- (void)_clearPaneDelegateForViewController:(id)arg1;	// IMP=0x00000000000091e9
- (void)_setPaneDelegateForViewController:(id)arg1;	// IMP=0x0000000000009174
- (void)_setPaneDelegateForTopViewController;	// IMP=0x00000000000090b9
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000000905e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000008e97
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000008c44
- (void)viewDidLoad;	// IMP=0x000000000000861d
- (id)initWithRootViewController:(id)arg1;	// IMP=0x0000000000008538

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

