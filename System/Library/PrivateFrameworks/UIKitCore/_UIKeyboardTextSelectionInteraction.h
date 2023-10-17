//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class NSMapTable, NSString, NSTimer, _UIKeyboardTextSelectionGestureController, _UIPanOrFlickGestureRecognizer, _UITouchesObservingGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIKeyboardTextSelectionInteraction : UITextInteraction
{
    _UIKeyboardTextSelectionGestureController *_owner;	// 8 = 0x8
    NSMapTable *_weakMap;	// 16 = 0x10
    id _deallocToken;	// 24 = 0x18
    _UITouchesObservingGestureRecognizer *_addedTouchRecognizer;	// 32 = 0x20
    NSTimer *_touchPadTimer;	// 40 = 0x28
    CDUnknownBlockType _touchPadTimerCompletion;	// 48 = 0x30
    _UIPanOrFlickGestureRecognizer *_activePress;	// 56 = 0x38
}

+ (void)attachToExistingRecogniser:(id)arg1 owner:(id)arg2 forType:(long long)arg3;	// IMP=0x0010000000cc07e2
- (void).cxx_destruct;	// IMP=0x0000000000cc880d
- (void)removeTemporaryGesture;	// IMP=0x0000000000cc8735
- (void)oneFingerForcePress:(id)arg1;	// IMP=0x0000000000cc7cfd
- (void)_clearTouchPadCallback;	// IMP=0x0000000000cc7cdc
- (void)_cancelTouchPadTimer;	// IMP=0x0000000000cc7ca4
- (void)_startTouchPadTimerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000cc7b64
- (void)panningGesture:(id)arg1;	// IMP=0x0000000000cc682c
- (void)panningGestureAddedTouch:(id)arg1;	// IMP=0x0000000000cc66f5
- (void)twoFingerTap:(id)arg1;	// IMP=0x0000000000cc62eb
- (void)oneFingerForcePan:(id)arg1;	// IMP=0x0000000000cc5a0a
- (void)_logTapCounts:(id)arg1;	// IMP=0x0000000000cc58e2
- (void)_longForcePressDetected:(id)arg1;	// IMP=0x0000000000cc584f
- (void)_beginLongForcePressTimerForGesture:(id)arg1;	// IMP=0x0000000000cc5752
- (void)indirectPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 withFlickDirection:(unsigned long long)arg3 isShiftKeyBeingHeld:(_Bool)arg4;	// IMP=0x0000000000cc53ae
- (void)handleRemoteIndirectGestureWithState:(id)arg1;	// IMP=0x0000000000cc509b
- (void)forwardIndirectGestureWithType:(long long)arg1 state:(long long)arg2 translation:(struct CGPoint)arg3 flickDirection:(unsigned long long)arg4 touchCount:(unsigned long long)arg5;	// IMP=0x0000000000cc4efa
- (void)cancelLongPressWithExecutionContext:(id)arg1;	// IMP=0x0000000000cc4ee8
- (void)endLongPressWithExecutionContext:(id)arg1;	// IMP=0x0000000000cc4ed6
- (void)finishLongPressWithExecutionContext:(id)arg1;	// IMP=0x0000000000cc4e2f
- (void)updateLongPressWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000cc4d50
- (void)beginLongPressWithTranslation:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2 executionContext:(id)arg3;	// IMP=0x0000000000cc4b4e
- (void)longPressGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3;	// IMP=0x0000000000cc4966
- (void)disableEnclosingScrollViewScrolling;	// IMP=0x0000000000cc480f
- (void)_granularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(_Bool)arg3;	// IMP=0x0000000000cc4230
- (void)clearKeyboardTouchesForGesture:(id)arg1;	// IMP=0x0000000000cc4020
- (void)_cancelLongForcePressTimer;	// IMP=0x0000000000cc3fa8
- (struct CGPoint)cursorLocationForTranslation:(struct CGPoint)arg1;	// IMP=0x0000000000cc3f3a
- (void)beginCursorManipulationFromRect:(struct CGRect)arg1;	// IMP=0x0000000000cc3e47
- (long long)layoutDirectionFromFlickDirection:(unsigned long long)arg1;	// IMP=0x0000000000cc3e1e
- (void)cancelTwoFingerPanWithExecutionContext:(id)arg1;	// IMP=0x0000000000cc3e0c
- (void)handleTwoFingerFlickInDirection:(long long)arg1 executionContext:(id)arg2;	// IMP=0x0000000000cc3bc2
- (void)endTwoFingerPanWithExecutionContext:(id)arg1;	// IMP=0x0000000000cc3aee
- (void)updateTwoFingerPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000cc39cc
- (void)beginTwoFingerPanWithTranslation:(struct CGPoint)arg1 isShiftKeyBeingHeld:(_Bool)arg2 executionContext:(id)arg3;	// IMP=0x0000000000cc34e7
- (void)beginTwoFingerCursorPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000cc3314
- (void)endIndirectBlockPanWithExecutionContext:(id)arg1;	// IMP=0x0000000000cc326d
- (void)updateIndirectBlockPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000cc30da
- (void)beginIndirectBlockPanWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000cc2e90
- (void)indirectBlockPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2;	// IMP=0x0000000000cc2c74
- (void)indirectCursorPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint)arg2 withFlickDirection:(unsigned long long)arg3;	// IMP=0x0000000000cc29a4
- (_Bool)isPlacedCarefully;	// IMP=0x0000000000cc2936
- (void)_tidyUpGesture;	// IMP=0x0000000000cc2892
- (void)_prepareForGesture;	// IMP=0x0000000000cc27ec
- (void)_willBeginIndirectSelectionGesture:(id)arg1;	// IMP=0x0000000000cc268d
- (struct CGPoint)boundedTranslation:(struct CGPoint)arg1;	// IMP=0x0000000000cc24eb
- (_Bool)forceTouchGestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000cc2316
- (struct CGPoint)acceleratedTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 isActive:(_Bool)arg3;	// IMP=0x0000000000cc21c8
- (void)_didEndIndirectSelectionGesture:(id)arg1;	// IMP=0x0000000000cc20e8
- (id)selectionController;	// IMP=0x0000000000cc2098
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000000cc1de1
- (double)additionalPressDurationForTypingCadence:(id)arg1;	// IMP=0x0000000000cc1cb3
- (void)gestureRecognizerShouldBeginResponse:(id)arg1;	// IMP=0x0000000000cc1c66
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000cc1a7e
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000cc151b
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000cc1271
- (id)owner;	// IMP=0x0000000000cc125c
- (void)_configureLongPressRecognizer:(id)arg1;	// IMP=0x0000000000cc1175
- (void)_configureLongPressAddedTouchRecognizer:(id)arg1;	// IMP=0x0000000000cc112b
- (void)_configureTwoFingerTapGestureRecognizer:(id)arg1;	// IMP=0x0000000000cc1023
- (void)_configureTwoFingerPanGestureRecognizer:(id)arg1;	// IMP=0x0000000000cc0e5c
- (void)_configureOneFingerForcePressRecognizer:(id)arg1;	// IMP=0x0000000000cc0d6c
- (id)initWithView:(id)arg1 owner:(id)arg2 forTypes:(long long)arg3;	// IMP=0x0000000000cc08f1
- (id)gestures;	// IMP=0x0000000000cc0721
- (void)registerOwner:(id)arg1;	// IMP=0x0000000000cc0641
- (void)dealloc;	// IMP=0x0000000000cc05ee
- (void)detach;	// IMP=0x0000000000cc058f
- (void)_clearHiding;	// IMP=0x0000000000cc0557
- (void)hideInsideRecogniser:(id)arg1;	// IMP=0x0000000000cc031e
- (void)hideRecogniser:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000cc021c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
