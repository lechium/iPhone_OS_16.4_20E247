//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSBacklightFBSSceneEnvironmentDiffAction, NSString;

__attribute__((visibility("hidden")))
@interface _UIBacklightUISceneEnvironmentDiffAction : NSObject
{
    BLSBacklightFBSSceneEnvironmentDiffAction *_fbsSceneEnvironmentDiffAction;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000f4bb88
- (void)performChangesWithTransitionContext:(id)arg1 environmentDelta:(CDStruct_d3566df9)arg2 performActionsBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000f4bab7
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;	// IMP=0x0000000000f4ba91
- (id)init;	// IMP=0x0000000000f4b99c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

