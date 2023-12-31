//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UIEventDeferringManager;
@protocol _UIEventDeferringSystemShellBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface _UIEventDeferringBehavior_Default : NSObject
{
    struct {
        unsigned int systemShellManagesKeyboardFocus:1;
    } _behaviorFlags;	// 8 = 0x8
    _UIEventDeferringManager *_eventDeferringManager;	// 16 = 0x10
    id <_UIEventDeferringSystemShellBehaviorDelegate> _systemShellBehaviorDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000001569260
@property(readonly, nonatomic) __weak _UIEventDeferringManager *eventDeferringManager; // @synthesize eventDeferringManager=_eventDeferringManager;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000001569238
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000015691e8
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000001569198
- (id)succinctDescriptionBuilder;	// IMP=0x0000000001569130
- (id)succinctDescription;	// IMP=0x00000000015690e0
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)shouldAllowFallbackWindowForEnvironment:(id)arg1;	// IMP=0x00000000015690b2
- (long long)compareRemoteRuleOwningElement:(id)arg1 toElement:(id)arg2 inEnvironment:(id)arg3;	// IMP=0x00000000015690a2
- (_Bool)shouldSuppressRemoteRuleForOwningElement:(id)arg1 inEnvironment:(id)arg2;	// IMP=0x000000000156909a
- (_Bool)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;	// IMP=0x0000000001569092
- (_Bool)shouldDisableRemoteViewControllerEventDeferringForKeyboardSettingsSceneChanges;	// IMP=0x000000000156908a
- (_Bool)shouldConsiderKeyWindowChangesForRemoteViewControllerAutomaticEventDeferring;	// IMP=0x0000000001569082
- (_Bool)shouldEvaluateEventDeferringForAnyRemoteViewControllerWindowMovement;	// IMP=0x000000000156907a
- (_Bool)eligibleForLocalCompatibilityRuleRemoval;	// IMP=0x0000000001569068
- (_Bool)wantsLocalCompatibilityRules;	// IMP=0x0000000001568f64
- (_Bool)wantsLocalIdealRules;	// IMP=0x0000000001568eed
@property(nonatomic) _Bool systemShellManagesKeyboardFocus;
@property(nonatomic) __weak id <_UIEventDeferringSystemShellBehaviorDelegate> systemShellBehaviorDelegate; // @synthesize systemShellBehaviorDelegate=_systemShellBehaviorDelegate;
- (id)initWithEventDeferringManager:(id)arg1;	// IMP=0x0000000001568d13
- (id)init;	// IMP=0x0000000001568c85

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

