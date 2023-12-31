//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSSet;
@protocol UITapRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UITapRecognizer : NSObject
{
    unsigned long long _numberOfTouchesRequired;	// 8 = 0x8
    unsigned long long _numberOfTapsRequired;	// 16 = 0x10
    long long _buttonMaskRequired;	// 24 = 0x18
    NSMutableSet *_activeTouches;	// 32 = 0x20
    struct CGPoint _location;	// 40 = 0x28
    struct CGPoint _startPoint;	// 56 = 0x38
    struct CGPoint _digitizerLocation;	// 72 = 0x48
    double _allowableMovement;	// 88 = 0x58
    double _allowableSeparation;	// 96 = 0x60
    double _allowableTouchTimeSeparation;	// 104 = 0x68
    double _maximumSingleTapDuration;	// 112 = 0x70
    double _maximumTapDuration;	// 120 = 0x78
    double _minimumTapDuration;	// 128 = 0x80
    double _startTime;	// 136 = 0x88
    double _maximumIntervalBetweenSuccessiveTaps;	// 144 = 0x90
    NSMutableArray *_touches;	// 152 = 0x98
    long long _strongestDirectionalAxis;	// 160 = 0xa0
    double _strongestDirectionalForce;	// 168 = 0xa8
    int _currentNumberOfTouches;	// 176 = 0xb0
    int _currentNumberOfTaps;	// 180 = 0xb4
    int _numberOfTouchesForCurrentTap;	// 184 = 0xb8
    unsigned int _timerOn:1;	// 188 = 0xbc
    unsigned int _multitouchTimerOn:1;	// 188 = 0xbc
    unsigned int _noNewTouches:1;	// 188 = 0xbc
    unsigned int _hasPointerTouch:1;	// 188 = 0xbc
    _Bool _countsOnlyActiveTouches;	// 189 = 0xbd
    _Bool _continuousTapRecognition;	// 190 = 0xbe
    id <UITapRecognizerDelegate> _delegate;	// 192 = 0xc0
    long long _exclusiveDirectionalAxis;	// 200 = 0xc8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000878c3a
- (void).cxx_destruct;	// IMP=0x000000000087a5d4
@property(nonatomic) long long exclusiveDirectionalAxis; // @synthesize exclusiveDirectionalAxis=_exclusiveDirectionalAxis;
@property(nonatomic) _Bool countsOnlyActiveTouches; // @synthesize countsOnlyActiveTouches=_countsOnlyActiveTouches;
@property(nonatomic) double minimumTapDuration; // @synthesize minimumTapDuration=_minimumTapDuration;
@property(nonatomic) double allowableTouchTimeSeparation; // @synthesize allowableTouchTimeSeparation=_allowableTouchTimeSeparation;
@property(nonatomic) double maximumTapDuration; // @synthesize maximumTapDuration=_maximumTapDuration;
@property(nonatomic) long long buttonMaskRequired; // @synthesize buttonMaskRequired=_buttonMaskRequired;
@property(nonatomic) __weak id <UITapRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *touches; // @synthesize touches=_touches;
@property(nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property(nonatomic) unsigned long long numberOfTapsRequired; // @synthesize numberOfTapsRequired=_numberOfTapsRequired;
- (void)_updateDigitizerLocationForEvent:(id)arg1;	// IMP=0x000000000087a4ba
- (struct CGPoint)_digitizerLocation;	// IMP=0x000000000087a4aa
@property(readonly, nonatomic) NSSet *activeTouches;
- (struct CGPoint)locationInView:(id)arg1 focusSystem:(id)arg2;	// IMP=0x000000000087a39b
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x000000000087a306
- (struct CGPoint)_locationInSceneReferenceSpace;	// IMP=0x000000000087a2f3
@property(nonatomic) double maximumIntervalBetweenSuccessiveTaps;
@property(nonatomic) double maximumSingleTapDuration;
@property(nonatomic) double allowableSeparation;
@property(nonatomic) double allowableMovement;
@property(nonatomic) _Bool continuousTapRecognition;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000087a244
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000087a1dd
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000087a14d
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000087a0e8
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000087a07b
- (void)_interactionEndedTouch:(_Bool)arg1;	// IMP=0x0000000000879f61
- (void)_beginInteraction;	// IMP=0x0000000000879ebc
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000879dd6
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000879b40
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000087942e
- (_Bool)activeTouchesExceedAllowableSeparation;	// IMP=0x000000000087937a
- (double)_effectiveAllowableMovement;	// IMP=0x000000000087931b
- (void)multitouchExpired:(id)arg1;	// IMP=0x0000000000879297
- (void)startMultitouchTimer:(double)arg1;	// IMP=0x0000000000879247
- (void)clearMultitouchTimer;	// IMP=0x00000000008791fe
- (void)tooSlow:(id)arg1;	// IMP=0x00000000008791a1
- (void)startTapTimer:(double)arg1;	// IMP=0x0000000000879151
- (void)clearTapTimer;	// IMP=0x0000000000879108
- (void)_reset;	// IMP=0x0000000000879075
- (void)dealloc;	// IMP=0x0000000000879022
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000878ed1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000878c42
- (id)init;	// IMP=0x0000000000878b80

@end

