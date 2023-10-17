//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSAnimationSettings, BSUIAnimationFactory, NSSet, NSString, NSUUID, PRSPosterConfiguration, UIView;
@protocol BSInvalidatable, BSInvalidatable><PBUIWallpaperPositioning, PBUIWallpaperAnimatedInvalidating, PBUIWallpaperObserver, PBUIWallpaperPresentingDelegate;

@protocol PBUIWallpaperPresenting <NSObject>
@property(readonly, nonatomic) double lockscreenWallpaperScale;
@property(readonly, nonatomic) double minimumLockscreenWallpaperScale;
@property(readonly, nonatomic) double homescreenWallpaperScale;
@property(readonly, nonatomic) double minimumHomescreenWallpaperScale;
@property(nonatomic) long long activeVariant;
@property(readonly, nonatomic) CDStruct_8ff95007 currentHomescreenStyleTransitionState;
@property(nonatomic) __weak id <PBUIWallpaperPresentingDelegate> wallpaperPresentingDelegate;
- (id <BSInvalidatable>)requireWallpaperRasterizationWithReason:(NSString *)arg1;
- (id <PBUIWallpaperAnimatedInvalidating>)setLockscreenWallpaperScale:(double)arg1 withAnimationFactory:(BSUIAnimationFactory *)arg2;
- (id <PBUIWallpaperAnimatedInvalidating>)setHomescreenWallpaperScale:(double)arg1 withAnimationFactory:(BSUIAnimationFactory *)arg2;
- (void)setActiveVariant:(long long)arg1 withOutAnimationFactory:(BSUIAnimationFactory *)arg2 inAnimationFactory:(BSUIAnimationFactory *)arg3 completion:(void (^)(void))arg4;
- (void)cancelInProcessAnimations;
- (void)removeObserver:(id <PBUIWallpaperObserver>)arg1 forVariant:(long long)arg2;
- (void)addObserver:(id <PBUIWallpaperObserver>)arg1 forVariant:(long long)arg2;
- (id <BSInvalidatable>)requireWallpaperWithReason:(NSString *)arg1;
- (id <BSInvalidatable>)suspendWallpaperAnimationForReason:(NSString *)arg1;
- (_Bool)removeWallpaperStyleForPriority:(long long)arg1 forVariant:(long long)arg2 withAnimationFactory:(BSUIAnimationFactory *)arg3;
- (_Bool)setWallpaperStyleTransitionState:(CDStruct_8ff95007)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(BSUIAnimationFactory *)arg4;
- (_Bool)setWallpaperStyle:(long long)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(BSUIAnimationFactory *)arg4;

@optional
@property(readonly, nonatomic) unsigned long long significantEventsCounter;
- (void)setWallpaperObscured:(_Bool)arg1;
- (unsigned long long)significantEventsCounterForPosterWithIdentifier:(NSUUID *)arg1;
- (void)triggerSceneUpdate;
- (void)triggerPosterSignificantEvent;
- (void)noteDidRotateFromInterfaceOrientation:(long long)arg1;
- (void)noteWillAnimateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)noteWillAnimateToInterfaceOrientation:(long long)arg1;
- (void)setAssociatedPosterConfiguration:(PRSPosterConfiguration *)arg1 withAnimationSettings:(BSAnimationSettings *)arg2;
- (void)setConfiguration:(PRSPosterConfiguration *)arg1 withAnimationSettings:(BSAnimationSettings *)arg2;
- (NSSet *)scenesForBacklightSession;
- (NSSet *)scenesForInactiveEnvironmentSession;
- (void)updateWallpaperAnimationWithWakeSourceIsSwipeToUnlock:(_Bool)arg1;
- (_Bool)posterHandlesWakeAnimation;
- (_Bool)homeScreenPosterMirrorsLock;
- (void)updateWallpaperAnimationWithIconFlyInTension:(double)arg1 friction:(double)arg2;
- (void)updateWallpaperAnimationWithProgress:(double)arg1;
- (id <PBUIWallpaperAnimatedInvalidating>)setWallpaperFloatingLayerContainerView:(UIView *)arg1 forReason:(NSString *)arg2 withAnimationFactory:(BSUIAnimationFactory *)arg3;
- (UIView<BSInvalidatable><PBUIWallpaperPositioning> *)createWallpaperFloatingViewForReason:(NSString *)arg1 ignoreReplica:(_Bool)arg2;
@end
