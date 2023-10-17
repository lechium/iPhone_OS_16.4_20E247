//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (PKUIUtilities)
+ (void)pkui_animateUsingFactory:(id)arg1 withDelay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00500000004f217f
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 delay:(double)arg2 velocity:(double)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00500000004f20c7
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 delay:(double)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00500000004f20af
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00500000004f209a
- (void)pkui_setExcludedFromScreenCapture:(_Bool)arg1 andBroadcasting:(_Bool)arg2;	// IMP=0x00100000004f3622
- (struct CGRect)pkui_readableContentBoundsWithMargins:(struct UIEdgeInsets)arg1;	// IMP=0x00100000004f34c0
- (id)pkui_viewControllerFromResponderChain;	// IMP=0x00100000004f3418
- (id)pkui_translationAnimation;	// IMP=0x00100000004f33c1
- (void)addTransformSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 timing:(id)arg5;	// IMP=0x00100000004f31fd
- (void)addDefaultTransformSpringWithStartTime:(double)arg1;	// IMP=0x00100000004f3199
- (void)addTranslationSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 velocity:(double)arg5 timing:(id)arg6;	// IMP=0x00100000004f2fbe
- (void)addTranslationSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 timing:(id)arg5;	// IMP=0x00100000004f2fa6
- (void)addDefaultTranslationSpringWithVelocity:(double)arg1 startTime:(double)arg2;	// IMP=0x00100000004f2f38
- (_Bool)pkui_setAlpha:(double)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004f2eff
- (_Bool)pkui_setAlpha:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00100000004f2eeb
- (_Bool)pkui_setCornerRadius:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00100000004f2dfa
- (_Bool)pkui_setTransform:(struct CATransform3D)arg1 animated:(_Bool)arg2;	// IMP=0x00100000004f2a82
- (_Bool)pkui_setPosition:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00100000004f28fc
- (_Bool)pkui_setBounds:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x00100000004f24e9
- (_Bool)pkui_setFrame:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x00100000004f23b4
- (void)pkui_smallShakeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004f2300
- (void)pkui_shakeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004f224c
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x00100000005e0a8d
- (id)pk_childrenForAppearance;	// IMP=0x00100000005e0a7b
- (void)pkui_setMaskType:(unsigned long long)arg1;	// IMP=0x00100000007d13e0
@end
