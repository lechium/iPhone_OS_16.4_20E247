//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class MISSING_TYPE, PBFExtensionTestingViewController, PBFPosterRackCollectionViewController, UIScene, UIWindow;

__attribute__((visibility("hidden")))
@interface PBFPosterSwitcherSceneDelegate : UIResponder
{
    MISSING_TYPE *window;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_sceneSettingsDiffInspector;	// 16 = 0x10
    MISSING_TYPE *_scene;	// 24 = 0x18
    MISSING_TYPE *switcherInUseAssertion;	// 32 = 0x20
    MISSING_TYPE *extensionTestingViewController;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_posterExtensionTestingViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000c0b10
- (void)debugGestureWasTriggered;	// IMP=0x00000000000c0ab0
@property(nonatomic, retain) PBFExtensionTestingViewController *posterExtensionTestingViewController;
- (void)dataStoreDidTearDown;	// IMP=0x00000000000c05c0
- (void)windowDidDetachContext:(id)arg1;	// IMP=0x00000000000c0150
- (void)windowDidAttachContext:(id)arg1;	// IMP=0x00000000000bff60
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;	// IMP=0x00000000000bfca0
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;	// IMP=0x00000000000bfbe0
- (id)_actionHandlersForScene:(id)arg1;	// IMP=0x00000000000bfb40
- (id)_settingsDiffActionsForScene:(id)arg1;	// IMP=0x00000000000bfb20
- (void)_setScene:(id)arg1;	// IMP=0x00000000000bfaf0
@property(nonatomic, retain) UIScene *_scene; // @synthesize _scene;
- (id)initWithScene:(id)arg1;	// IMP=0x00000000000bfa80
- (id)init;	// IMP=0x00000000000bfa60
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x00000000000bf940
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x00000000000bf8f0
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x00000000000bf800
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x00000000000bf7e0
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x00000000000bf760
@property(nonatomic, readonly) PBFPosterRackCollectionViewController *posterRackViewController;
@property(nonatomic, retain) UIWindow *window; // @synthesize window;

@end

