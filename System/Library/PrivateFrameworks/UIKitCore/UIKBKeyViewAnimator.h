//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBKeyViewAnimator : NSObject
{
    _Bool _disabled;	// 8 = 0x8
    double _keyScale;	// 16 = 0x10
}

+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;	// IMP=0x0010000000a3c187
+ (id)normalizedUnwindOpacityAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;	// IMP=0x0010000000a3bfab
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;	// IMP=0x0010000000a3be9f
+ (id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;	// IMP=0x0010000000a3bd71
@property(nonatomic) double keyScale; // @synthesize keyScale=_keyScale;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (void)reset;	// IMP=0x0000000000a3e544
- (void)endTransitionForKeyView:(id)arg1;	// IMP=0x0000000000a3e458
- (void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(struct CGSize)arg2;	// IMP=0x0000000000a3e18b
- (void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2;	// IMP=0x0000000000a3d48b
- (void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 toLeft:(_Bool)arg3;	// IMP=0x0000000000a3c8b1
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a3c799
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a3c2df
- (_Bool)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;	// IMP=0x0000000000a3c2d7
- (_Bool)shouldAssertCurrentKeyState:(id)arg1;	// IMP=0x0000000000a3c2cf
- (id)keycapRightSelectRightTransform;	// IMP=0x0000000000a3bd5f
- (id)keycapRightSelectLeftTransform;	// IMP=0x0000000000a3bcef
- (id)keycapRightSelectPrimaryTransform;	// IMP=0x0000000000a3bc7f
- (id)keycapLeftSelectRightTransform;	// IMP=0x0000000000a3bc0f
- (id)keycapLeftSelectLeftTransform;	// IMP=0x0000000000a3bbfd
- (id)keycapLeftSelectPrimaryTransform;	// IMP=0x0000000000a3bb8d
- (id)keycapPrimaryExitTransform;	// IMP=0x0000000000a3bb01
- (id)keycapRightTransform;	// IMP=0x0000000000a3ba91
- (id)keycapLeftTransform;	// IMP=0x0000000000a3ba21
- (id)primaryReverseTransform;	// IMP=0x0000000000a3b9bf
- (id)keycapAlternateDualStringTransform:(id)arg1;	// IMP=0x0000000000a3b6ae
- (id)keycapAlternateTransform:(id)arg1;	// IMP=0x0000000000a3b520
- (id)keycapPrimaryDualStringTransform:(id)arg1;	// IMP=0x0000000000a3b20f
- (id)keycapPrimaryTransform;	// IMP=0x0000000000a3b1a6
- (id)keycapNullTransform;	// IMP=0x0000000000a3b144
- (id)keycapMeshTransformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2 scale:(double)arg3;	// IMP=0x0000000000a3aedd
- (id)keycapMeshTransformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;	// IMP=0x0000000000a3ae8f
@property(readonly, nonatomic) struct CGRect secondaryGlyphNormalizedExitRect;
@property(readonly, nonatomic) struct CGRect primaryGlyphNormalizedExitRect;
- (void)_fadeInKeyView:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a3accd
- (void)_fadeOutKeyView:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a3a955
- (double)delayedDeactivationTimeForKeyView:(id)arg1;	// IMP=0x0000000000a3a869
- (Class)keyViewClassForKey:(id)arg1 renderTraits:(id)arg2 screenTraits:(id)arg3;	// IMP=0x0000000000a3a712
- (Class)_keyViewClassForSpecialtyKey:(id)arg1 screenTraits:(id)arg2;	// IMP=0x0000000000a3a576
@property(readonly, nonatomic) _Bool shouldPurgeKeyViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

