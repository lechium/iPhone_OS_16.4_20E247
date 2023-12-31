//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCommitTransition : NSObject
{
    UIViewController *_viewController;	// 8 = 0x8
    UIWindow *_currentCommitEffectWindow;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000db617a
@property(retain, nonatomic) UIWindow *currentCommitEffectWindow; // @synthesize currentCommitEffectWindow=_currentCommitEffectWindow;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (_Bool)_shouldReduceMotion;	// IMP=0x0000000000db6134
- (void)_applyCommitEffectTransformToView:(id)arg1;	// IMP=0x0000000000db6048
- (id)_preferredTransitionAnimatorForReducedMotion;	// IMP=0x0000000000db5fe0
- (id)_preferredTransitionAnimator;	// IMP=0x0000000000db5f61
- (void)performTransitionWithPresentationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000db57fa
- (id)initWithPresentedViewController:(id)arg1;	// IMP=0x0000000000db5702

@end

