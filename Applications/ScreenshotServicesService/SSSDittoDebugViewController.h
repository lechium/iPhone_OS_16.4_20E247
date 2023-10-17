//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, SSSDittoRootViewController, SSSViewControllerManager, UIVisualEffectView;

@interface SSSDittoDebugViewController : UIViewController
{
    SSSDittoRootViewController *_rootViewController;	// 8 = 0x8
    UIVisualEffectView *_backgroundView;	// 16 = 0x10
    SSSViewControllerManager *viewControllerManager;	// 24 = 0x18
}

+ (void)prepareForDebugging;	// IMP=0x0020000000016b1f
- (void).cxx_destruct;	// IMP=0x00200000000178fe
@property(nonatomic) __weak SSSViewControllerManager *viewControllerManager; // @synthesize viewControllerManager;
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000017827
- (void)viewDidLoad;	// IMP=0x0010000000017709
- (id)debugView;	// IMP=0x00100000000176f7
- (void)loadView;	// IMP=0x001000000001767e
- (void)_addScreenshots;	// IMP=0x00100000000173a9
- (void)dittoDebugView:(id)arg1 requestsPresentationOfViewController:(id)arg2;	// IMP=0x001000000001738c
- (void)_addScreenshotWithPDF:(id)arg1 visibleRect:(struct CGRect)arg2;	// IMP=0x0010000000016efe
- (void)removeDittoRootViewController;	// IMP=0x0010000000016e68
- (void)createDittoRootViewControllerIfNecessary;	// IMP=0x0010000000016cd5
@property(readonly, nonatomic) SSSDittoRootViewController *rootViewController;
- (void)cleanupRootViewController;	// IMP=0x0010000000016cba
- (void)stopBeingParentOfDittoRootViewController:(id)arg1;	// IMP=0x0010000000016cb4
- (void)becomeParentOfDittoRootViewController:(id)arg1;	// IMP=0x0010000000016cae
- (void)dittoRootViewControllerDidDismiss:(id)arg1;	// IMP=0x0010000000016c9c
- (void)dittoRootViewController:(id)arg1 wantsBackground:(_Bool)arg2 duration:(double)arg3;	// IMP=0x0010000000016bb7
- (void)dittoRootViewControllerFinishedShowingSharingUI:(id)arg1 inStateTransition:(_Bool)arg2;	// IMP=0x0010000000016bb1
- (void)dittoRootViewController:(id)arg1 willShowTestFlightUIWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016ba6
- (void)dittoRootViewController:(id)arg1 willShowShowSharingUIWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016b9b
- (void)dittoRootViewController:(id)arg1 didTransitionToState:(unsigned long long)arg2;	// IMP=0x0010000000016b95
- (void)dittoRootViewController:(id)arg1 willTransitionToState:(unsigned long long)arg2 changeBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000016b8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
