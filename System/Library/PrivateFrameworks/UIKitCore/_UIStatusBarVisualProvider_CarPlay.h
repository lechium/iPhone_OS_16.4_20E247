//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIFont, _UIStatusBar, _UIStatusBarRegion, _UIStatusBarVisualProvider_PillRegionCoordinator;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_CarPlay : NSObject
{
    _Bool _showingSensorActivityIndicator;	// 8 = 0x8
    _Bool _showingPill;	// 9 = 0x9
    _UIStatusBar *_statusBar;	// 16 = 0x10
    _UIStatusBarVisualProvider_PillRegionCoordinator *_pillRegionCoordinator;	// 24 = 0x18
    _UIStatusBarRegion *_timeRegion;	// 32 = 0x20
    _UIStatusBarRegion *_radarRegion;	// 40 = 0x28
}

+ (_Bool)requiresIterativeOverflowLayout;	// IMP=0x0010000000fa3c55
+ (_Bool)scalesWithScreenNativeScale;	// IMP=0x0010000000fa3c4d
+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;	// IMP=0x0010000000fa3c3c
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;	// IMP=0x0010000000fa3b9e
- (void).cxx_destruct;	// IMP=0x0000000000fa4c13
@property(nonatomic) _Bool showingPill; // @synthesize showingPill=_showingPill;
@property(nonatomic) _Bool showingSensorActivityIndicator; // @synthesize showingSensorActivityIndicator=_showingSensorActivityIndicator;
@property(retain, nonatomic) _UIStatusBarRegion *radarRegion; // @synthesize radarRegion=_radarRegion;
@property(retain, nonatomic) _UIStatusBarRegion *timeRegion; // @synthesize timeRegion=_timeRegion;
@property(retain, nonatomic) _UIStatusBarVisualProvider_PillRegionCoordinator *pillRegionCoordinator; // @synthesize pillRegionCoordinator=_pillRegionCoordinator;
@property(nonatomic) __weak _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
- (_Bool)showSensorActivityIndicatorWithoutPortalView;	// IMP=0x0000000000fa4b6f
- (id)setupInContainerView:(id)arg1;	// IMP=0x0000000000fa4b62
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000fa49f8
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;	// IMP=0x0000000000fa49eb
- (id)_animationForPillTime;	// IMP=0x0000000000fa49c7
- (id)_animationForSensorIndicator;	// IMP=0x0000000000fa4929
- (id)_defaultScaleAnimationWithIdentifier:(id)arg1;	// IMP=0x0000000000fa489e
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;	// IMP=0x0000000000fa4753
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x0000000000fa44f4
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x0000000000fa4295
- (id)willUpdateWithData:(id)arg1;	// IMP=0x0000000000fa40ad
- (id)styleAttributesForStyle:(long long)arg1;	// IMP=0x0000000000fa3e01
- (double)animatedTypeDisplayItemSpacingFactorForCellularType:(long long)arg1;	// IMP=0x0000000000fa3df3
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double *)arg3;	// IMP=0x0000000000fa3ddd
- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;	// IMP=0x0000000000fa3db1
- (void)itemCreated:(id)arg1;	// IMP=0x0000000000fa3d24
@property(readonly, nonatomic) _Bool supportsIndirectPointerTouchActions;
@property(nonatomic) _Bool expanded;
- (id)init;	// IMP=0x0000000000fa3c65
@property(readonly, nonatomic) UIFont *clockFont;

// Remaining properties
@property(readonly, nonatomic) _Bool canFixupDisplayItemAttributes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

