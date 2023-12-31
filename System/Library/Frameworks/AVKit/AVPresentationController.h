//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPresentationContext, UIPresentationController, UIView, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface AVPresentationController : NSObject
{
    UIPresentationController *_presentationController;	// 8 = 0x8
    AVPresentationContext *_context;	// 16 = 0x10
    AVObservationController *_observationController;	// 24 = 0x18
    UIWindow *_presentationWindowForDisablingAutorotation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007443d
@property(nonatomic) __weak UIWindow *presentationWindowForDisablingAutorotation; // @synthesize presentationWindowForDisablingAutorotation=_presentationWindowForDisablingAutorotation;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(readonly, nonatomic) AVPresentationContext *context; // @synthesize context=_context;
- (void)_observeSceneDidBecomeActiveForRestoringRotatability;	// IMP=0x00000000000743af
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000073fb4
- (void)_prepareDismissingTransitionContext;	// IMP=0x00000000000739a2
- (void)dismissalTransitionWillBegin;	// IMP=0x000000000007361f
- (void)_ensureOrientation:(long long)arg1 enablingMixedOrientations:(_Bool)arg2;	// IMP=0x0000000000072db6
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000072c35
- (void)presentationTransitionWillBegin;	// IMP=0x000000000007238a
@property(readonly, nonatomic) UIView *presentedView;
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, nonatomic) UIViewController *presentedViewController;
@property(readonly, nonatomic) UIViewController *presentingViewController;
- (void)containerViewWillLayoutSubviews;	// IMP=0x0000000000072108
- (_Bool)dismissed;	// IMP=0x00000000000720f2
- (_Bool)presented;	// IMP=0x00000000000720dc
- (_Bool)presenting;	// IMP=0x00000000000720c6
- (_Bool)dismissing;	// IMP=0x00000000000720b0
- (_Bool)shouldPresentInFullscreen;	// IMP=0x00000000000720a8
- (_Bool)shouldRemovePresentersView;	// IMP=0x0000000000072060
- (void)dealloc;	// IMP=0x0000000000071eb8
- (id)initWithPresentationController:(id)arg1 presentedViewController:(id)arg2 presentingViewController:(id)arg3 withConfiguration:(id)arg4;	// IMP=0x0000000000071d36

@end

