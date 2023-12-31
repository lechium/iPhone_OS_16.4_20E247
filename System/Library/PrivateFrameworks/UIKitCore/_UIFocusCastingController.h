//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFocusSystem, UIView;

__attribute__((visibility("hidden")))
@interface _UIFocusCastingController : NSObject
{
    _Bool _isRememberingEntryPoint;	// 8 = 0x8
    UIFocusSystem *_focusSystem;	// 16 = 0x10
    double _entryPointMemorizationTimeout;	// 24 = 0x18
    unsigned long long _entryPointAxis;	// 32 = 0x20
    UIView *_focusMovementIndicator;	// 40 = 0x28
    UIView *_focusEntryIndicator;	// 48 = 0x30
    UIView *_focusCastingIndicator;	// 56 = 0x38
    struct CGPoint _screenEntryPoint;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000ebd29e
@property(retain, nonatomic) UIView *focusCastingIndicator; // @synthesize focusCastingIndicator=_focusCastingIndicator;
@property(retain, nonatomic) UIView *focusEntryIndicator; // @synthesize focusEntryIndicator=_focusEntryIndicator;
@property(retain, nonatomic) UIView *focusMovementIndicator; // @synthesize focusMovementIndicator=_focusMovementIndicator;
@property(nonatomic) _Bool isRememberingEntryPoint; // @synthesize isRememberingEntryPoint=_isRememberingEntryPoint;
@property(nonatomic) unsigned long long entryPointAxis; // @synthesize entryPointAxis=_entryPointAxis;
@property(nonatomic) struct CGPoint screenEntryPoint; // @synthesize screenEntryPoint=_screenEntryPoint;
@property(nonatomic) double entryPointMemorizationTimeout; // @synthesize entryPointMemorizationTimeout=_entryPointMemorizationTimeout;
@property(nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (void)_destroyFocusMovementIndicator;	// IMP=0x0000000000ebd073
- (void)_positionFocusMovementIndicators;	// IMP=0x0000000000ebcb43
- (void)_createFocusMovementIndicator;	// IMP=0x0000000000ebc54d
- (void)_updateFocusMovementIndicatorDisplay;	// IMP=0x0000000000ebc51f
- (void)focusEffectsController:(id)arg1 updateMovementDirection:(struct CGVector)arg2;	// IMP=0x0000000000ebc50d
- (id)_focusEffectsControllerForFocusedItem;	// IMP=0x0000000000ebc445
- (struct CGPoint)_movementPointInNormalizedFrame:(struct CGRect)arg1;	// IMP=0x0000000000ebc3b6
- (struct CGPoint)_entryPointInNormalizedFrame:(struct CGRect)arg1 forHeading:(unsigned long long)arg2;	// IMP=0x0000000000ebc28e
- (void)forgetEntryPoint;	// IMP=0x0000000000ebc1b0
- (void)_startRememberingEntryPoint;	// IMP=0x0000000000ebc14a
- (void)_stopRememberingEntryPoint;	// IMP=0x0000000000ebc105
- (struct CGPoint)_castingPointInNormalizedFrame:(struct CGRect)arg1 forHeading:(unsigned long long)arg2;	// IMP=0x0000000000ebc0bc
- (unsigned long long)_axisForHeading:(unsigned long long)arg1;	// IMP=0x0000000000ebc0a2
- (void)_updateFocusItemFromNormalizedFrame:(struct CGRect)arg1 toNormalizedFrame:(struct CGRect)arg2 withHeading:(unsigned long long)arg3;	// IMP=0x0000000000ebbc50
- (struct CGRect)_castingFrameForFocusedNormalizedFrame:(struct CGRect)arg1 heading:(unsigned long long)arg2;	// IMP=0x0000000000ebb9db
- (struct CGRect)castingFrameForFocusedItem:(id)arg1 heading:(unsigned long long)arg2 inCoordinateSpace:(id)arg3;	// IMP=0x0000000000ebb87d
- (void)updateFocusCastingWithContext:(id)arg1;	// IMP=0x0000000000ebb5f9
- (void)teardown;	// IMP=0x0000000000ebb5e7
- (id)init;	// IMP=0x0000000000ebb58e

@end

