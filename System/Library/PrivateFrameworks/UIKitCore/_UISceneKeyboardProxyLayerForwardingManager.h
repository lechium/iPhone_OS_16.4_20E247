//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSSceneClientSettingsDiffInspector, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _UISceneKeyboardProxyLayerForwardingManager : NSObject
{
    NSMapTable *_mapSceneToKeyboardForwardingStateMachine;	// 8 = 0x8
    FBSSceneClientSettingsDiffInspector *_layersChangedClientSettingsDiffInspector;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x001000000024fab2
+ (id)new;	// IMP=0x001000000024f974
+ (_Bool)supportsForwardingKeyboardLayers;	// IMP=0x001000000024f8a1
- (void).cxx_destruct;	// IMP=0x0000000000250200
- (void)_updateKeyboardLayersForScene:(id)arg1;	// IMP=0x000000000024ff9b
- (id)_stateMachineForScene:(id)arg1;	// IMP=0x000000000024ff85
- (id)_newStateMachineWithScene:(id)arg1;	// IMP=0x000000000024ff3c
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x000000000024fea3
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x000000000024fdbd
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000024fd62
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000024fd12
- (id)succinctDescriptionBuilder;	// IMP=0x000000000024fcf6
- (id)succinctDescription;	// IMP=0x000000000024fca6
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)scene:(id)arg1 willPrioritizePresenter:(id)arg2;	// IMP=0x000000000024fc07
- (void)trackScene:(id)arg1;	// IMP=0x000000000024fb4f
- (id)_init;	// IMP=0x000000000024fa05
- (id)init;	// IMP=0x000000000024f8eb

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
