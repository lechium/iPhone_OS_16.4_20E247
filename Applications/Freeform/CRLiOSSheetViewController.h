//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSString, UIButton, UITapGestureRecognizer, UIView;

@interface CRLiOSSheetViewController : UIViewController
{
    NSLayoutConstraint *_maxWidthConstraint;	// 8 = 0x8
    _Bool _shouldTouchesOutsideCancel;	// 16 = 0x10
    _Bool _shouldStretchWidth;	// 17 = 0x11
    CDUnknownBlockType _cancelHandler;	// 24 = 0x18
    UIViewController *_contentViewController;	// 32 = 0x20
    UITapGestureRecognizer *_tapGestureRecognizer;	// 40 = 0x28
    UIView *_containerView;	// 48 = 0x30
    UIButton *_cancelButton;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000d27cc
@property(retain) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(nonatomic) _Bool shouldStretchWidth; // @synthesize shouldStretchWidth=_shouldStretchWidth;
@property(nonatomic) _Bool shouldTouchesOutsideCancel; // @synthesize shouldTouchesOutsideCancel=_shouldTouchesOutsideCancel;
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00100000000d26e5
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00100000000d26dc
- (void)animateTransition:(id)arg1;	// IMP=0x00100000000d233b
- (double)transitionDuration:(id)arg1;	// IMP=0x00100000000d232d
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00100000000d22b8
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d214b
- (double)inset;	// IMP=0x00100000000d213d
- (void)didCancel;	// IMP=0x00100000000d210d
- (void)addCancelButtonWithTitle:(id)arg1;	// IMP=0x00100000000d1c81
- (void)didTapUsingGestureRecognizer:(id)arg1;	// IMP=0x00100000000d1c0c
- (void)viewWillLayoutSubviews;	// IMP=0x00100000000d1951
- (void)updateViewConstraints;	// IMP=0x00100000000d1846
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000d17fc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000d1792
- (void)viewDidLoad;	// IMP=0x00100000000d09f8
- (id)initWithContentViewController:(id)arg1;	// IMP=0x00100000000d093e
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000d064d
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000d034f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

