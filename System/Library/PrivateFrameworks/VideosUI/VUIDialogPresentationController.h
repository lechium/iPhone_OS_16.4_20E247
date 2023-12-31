//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VUIDialogPresentationController : UIPresentationController
{
    UIVisualEffectView *_backdropView;	// 8 = 0x8
    CDUnknownBlockType _completedAnimationBlock;	// 16 = 0x10
    struct CGSize _modalSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000028c429
@property(copy, nonatomic) CDUnknownBlockType completedAnimationBlock; // @synthesize completedAnimationBlock=_completedAnimationBlock;
@property(nonatomic) struct CGSize modalSize; // @synthesize modalSize=_modalSize;
- (void)_tapGesture:(id)arg1;	// IMP=0x000000000028c393
- (void)_layoutPresentedView;	// IMP=0x000000000028c253
@property(readonly, nonatomic) UIVisualEffectView *backdropView;
- (void)dismissalTransitionWillBegin;	// IMP=0x000000000028c138
- (void)presentationTransitionWillBegin;	// IMP=0x000000000028beac
- (long long)presentationStyle;	// IMP=0x000000000028bea1
- (void)dealloc;	// IMP=0x000000000028be36
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x000000000028bd86

@end

