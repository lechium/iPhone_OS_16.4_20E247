//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CRLMultiPaneController, CRLiOSInspectorButton, NSLayoutConstraint, NSString, UIButton, UIImage, UIImageView;

@interface CRLLockedInspectorController : UIViewController
{
    CRLMultiPaneController *mMultiPaneController;	// 8 = 0x8
    CRLiOSInspectorButton *mUnlockButton;	// 16 = 0x10
    UIImageView *mImageView;	// 24 = 0x18
    NSLayoutConstraint *mSpacerConstraint;	// 32 = 0x20
}

+ (struct CGSize)preferredPopoverSize;	// IMP=0x00200000003206d0
- (void).cxx_destruct;	// IMP=0x00200000003213a3
@property(nonatomic) __weak CRLMultiPaneController *multiPaneController; // @synthesize multiPaneController=mMultiPaneController;
- (id)keyboardObserversWindow;	// IMP=0x0010000000321326
- (void)p_unlock:(id)arg1;	// IMP=0x00100000003212e4
- (id)p_addSpacerViewToView:(id)arg1;	// IMP=0x0010000000321269
- (void)p_layoutViews;	// IMP=0x0010000000320b2a
- (void)p_setupUnlockButton;	// IMP=0x0010000000320aba
- (void)p_setupLockImageView;	// IMP=0x00100000003209aa
@property(retain, nonatomic) UIButton *unlockButton; // @synthesize unlockButton=mUnlockButton;
- (void)addTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00100000003207ed
- (id)paneIdentifier;	// IMP=0x00100000003207e0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000003207b1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000320782
- (void)viewDidLoad;	// IMP=0x001000000032071f
- (void)loadView;	// IMP=0x00100000003206e6
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000032061e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool maintainsContentOffsetWhenPossible;
@property(retain, nonatomic) UIImage *paneIcon;
@property(readonly, nonatomic) _Bool prefersFullHeightPresentationForMultiPaneController;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end
