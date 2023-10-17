//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIGestureRecognizer, UIView;
@protocol UISwitchMVEGestureTrackingSessionElement;

__attribute__((visibility("hidden")))
@interface UISwitchMVEGestureTrackingSession : NSObject
{
    _Bool _displayedOnValue;	// 8 = 0x8
    _Bool _pendingDisplayedOnValue;	// 9 = 0x9
    _Bool _lastCommitedOnValue;	// 10 = 0xa
    UIView<UISwitchMVEGestureTrackingSessionElement> *_visualElement;	// 16 = 0x10
    double _naturalLayoutDirection;	// 24 = 0x18
    double _movementVectorForPanInitiatedChangeY;	// 32 = 0x20
    double _movementVectorForPanInitiatedChangeTargetOnValue;	// 40 = 0x28
    UIGestureRecognizer *_pendingDisplayedOnValueInitiatingGesture;	// 48 = 0x30
}

+ (_Bool)gestureIsInEndState:(long long)arg1;	// IMP=0x00600000005e6f85
- (void).cxx_destruct;	// IMP=0x00000000005e700f
@property(readonly, nonatomic) _Bool lastCommitedOnValue; // @synthesize lastCommitedOnValue=_lastCommitedOnValue;
@property(readonly, nonatomic) _Bool pendingDisplayedOnValue; // @synthesize pendingDisplayedOnValue=_pendingDisplayedOnValue;
@property(readonly, nonatomic) UIGestureRecognizer *pendingDisplayedOnValueInitiatingGesture; // @synthesize pendingDisplayedOnValueInitiatingGesture=_pendingDisplayedOnValueInitiatingGesture;
@property(readonly, nonatomic) double movementVectorForPanInitiatedChangeTargetOnValue; // @synthesize movementVectorForPanInitiatedChangeTargetOnValue=_movementVectorForPanInitiatedChangeTargetOnValue;
@property(readonly, nonatomic) double movementVectorForPanInitiatedChangeY; // @synthesize movementVectorForPanInitiatedChangeY=_movementVectorForPanInitiatedChangeY;
@property(readonly, nonatomic) double naturalLayoutDirection; // @synthesize naturalLayoutDirection=_naturalLayoutDirection;
@property(nonatomic) _Bool displayedOnValue; // @synthesize displayedOnValue=_displayedOnValue;
@property(nonatomic) __weak UIView<UISwitchMVEGestureTrackingSessionElement> *visualElement; // @synthesize visualElement=_visualElement;
- (void)_updateMovementVectorForPanInitiatedChanges;	// IMP=0x00000000005e6f4d
- (_Bool)_isMovementDirectionAndMagnitudeEnoughToPerformOnOffChange:(double)arg1;	// IMP=0x00000000005e6eff
- (_Bool)_isMovementDirectionTrackableForPossibleOnOffChange:(double)arg1;	// IMP=0x00000000005e6ed8
- (void)_sendStateChangeActionsIfNecessary;	// IMP=0x00000000005e6e95
- (void)_applyPendingChangesIfNecessary;	// IMP=0x00000000005e6de8
- (void)applyPendingDisplayedOnValueWithoutSendingActions;	// IMP=0x00000000005e6dd6
- (void)applyPendingDisplayedOnValueAndSendActions;	// IMP=0x00000000005e6da8
- (_Bool)canApplyPendingOnValueForGesture:(id)arg1;	// IMP=0x00000000005e6d9b
- (_Bool)updatePendingDisplayedOnValueIfMovementIsEnoughToInitiateChange:(double)arg1 forGesture:(id)arg2;	// IMP=0x00000000005e6d26
- (_Bool)pendingDisplayedOnValueIsValid;	// IMP=0x00000000005e6d18
- (void)invalidatePendingOnValue;	// IMP=0x00000000005e6d00
- (void)setPendingDisplayedOnValue:(_Bool)arg1 forGesture:(id)arg2;	// IMP=0x00000000005e6cbb
- (void)reset;	// IMP=0x00000000005e6c13
- (id)initWithVisualElement:(id)arg1;	// IMP=0x00000000005e6b5e

@end
