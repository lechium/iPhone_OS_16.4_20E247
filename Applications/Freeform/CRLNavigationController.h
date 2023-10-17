//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class NSNumber, UIResponder;

@interface CRLNavigationController : UINavigationController
{
    _Bool _allowTextInputWhilePresenting;	// 8 = 0x8
    _Bool _wantsAppearanceUpdateAfterNextMoveToParentVC;	// 9 = 0x9
    UIResponder *_nextResponderOverride;	// 16 = 0x10
    double _preferredContentHeightOverride;	// 24 = 0x18
    NSNumber *_preferredPartialScreenPresentationStatusBarStyleNumber;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000407b59
@property(copy, nonatomic) NSNumber *preferredPartialScreenPresentationStatusBarStyleNumber; // @synthesize preferredPartialScreenPresentationStatusBarStyleNumber=_preferredPartialScreenPresentationStatusBarStyleNumber;
@property(nonatomic) double preferredContentHeightOverride; // @synthesize preferredContentHeightOverride=_preferredContentHeightOverride;
@property(nonatomic) _Bool wantsAppearanceUpdateAfterNextMoveToParentVC; // @synthesize wantsAppearanceUpdateAfterNextMoveToParentVC=_wantsAppearanceUpdateAfterNextMoveToParentVC;
@property(nonatomic) _Bool allowTextInputWhilePresenting; // @synthesize allowTextInputWhilePresenting=_allowTextInputWhilePresenting;
@property(retain, nonatomic) UIResponder *nextResponderOverride; // @synthesize nextResponderOverride=_nextResponderOverride;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000004079c3
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000004078a1
@property(readonly, nonatomic) _Bool hasPreferredPartialScreenPresentationStatusBarStyle;
@property(nonatomic) long long preferredPartialScreenPresentationStatusBarStyle;
- (struct CGSize)preferredContentSize;	// IMP=0x0010000000407754
- (id)childViewControllerForStatusBarHidden;	// IMP=0x0010000000407704
- (long long)preferredStatusBarStyle;	// IMP=0x00100000004076ac
- (_Bool)crl_preserveEditorSelection;	// IMP=0x0010000000407668
- (_Bool)crl_optsIntoDoneButtonManagement;	// IMP=0x0010000000407660
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x0010000000407564
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x00100000004074ae
- (id)nextResponder;	// IMP=0x0010000000407427
- (id)initWithRootViewController:(id)arg1;	// IMP=0x001000000040738a

@end
