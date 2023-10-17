//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITabBarController.h>

@interface UITabBarController (PhotosUICore)
- (void)_px_selectTabForKeyCommand:(id)arg1;	// IMP=0x00300000001660f2
- (id)px_defaultKeyCommandsWithDelegate:(id)arg1;	// IMP=0x0030000000165faa
- (struct CGRect)px_frameForTabItem:(unsigned long long)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0030000000165f8c
- (void)px_performAddToTabAnimation:(unsigned long long)arg1 withSnapshotView:(id)arg2;	// IMP=0x0030000000165446
@property(readonly, nonatomic) _Bool px_hidesTabBarForCurrentHorizontalSizeClass;
@property(readonly, nonatomic) _Bool px_hidesTabBarForRegularHorizontalSizeClass;
- (_Bool)px_canPerformAddToTabAnimationForTab:(unsigned long long)arg1;	// IMP=0x003000000016532a
@property(readonly, nonatomic, getter=px_isTabBarHidden) _Bool px_tabBarHidden;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00300000003c5c50
- (double)px_imageModulationIntensity;	// IMP=0x00300000005aea25
- (double)px_HDRFocus;	// IMP=0x00300000005ae9d5
- (_Bool)px_isImageModulationEnabled;	// IMP=0x00300000005ae991
- (void)_switchToBarBarItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x003000000071e388
- (void)ppt_runTabSwitchingTestWithName:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x003000000071dab4
- (id)px_navigationDestination;	// IMP=0x003000000085beef
- (void)px_switchToTabAndNavigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x003000000085bd3b
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x003000000085bb9c
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x003000000085ba9e
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x003000000085ba1e
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x003000000085b953
@end
