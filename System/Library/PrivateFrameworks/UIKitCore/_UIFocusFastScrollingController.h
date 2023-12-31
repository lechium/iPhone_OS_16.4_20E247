//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSArray, NSMutableArray, NSTimer, UIPanGestureRecognizer, UIScrollView, _UIDynamicAnimationGroup, _UIDynamicValueAnimation, _UIFocusEngineJoystickGestureRecognizer, _UIFocusFastScrollingIndexBarEntry, _UIFocusFastScrollingIndexBarView, _UIFocusMovementPressGestureRecognizer, _UIRotaryGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingController : NSObject
{
    UIScrollView *_scrollView;	// 8 = 0x8
    UIPanGestureRecognizer *_panGesture;	// 16 = 0x10
    _UIFocusMovementPressGestureRecognizer *_arrowButtonGesture;	// 24 = 0x18
    _UIFocusMovementPressGestureRecognizer *_pageButtonGesture;	// 32 = 0x20
    _UIFocusEngineJoystickGestureRecognizer *_joystickGesture;	// 40 = 0x28
    _UIRotaryGestureRecognizer *_rotaryGesture;	// 48 = 0x30
    double _lastRotaryMilestoneAccumulatedDistance;	// 56 = 0x38
    double _rotaryAccelerationMultiplier;	// 64 = 0x40
    _Bool _rotaryModeIsFullContent;	// 72 = 0x48
    double _currentRotaryDirection;	// 80 = 0x50
    NSMutableArray *_rotaryDeltaBufferArray;	// 88 = 0x58
    double _rotaryDeltaBufferAverage;	// 96 = 0x60
    double _rotaryDeltaBufferPendingValue;	// 104 = 0x68
    long long _rotaryDeltaBufferCurrentIndex;	// 112 = 0x70
    CADisplayLink *_rotaryDeltaBufferDisplayLink;	// 120 = 0x78
    _UIDynamicValueAnimation *_animationX;	// 128 = 0x80
    _UIDynamicValueAnimation *_animationY;	// 136 = 0x88
    _UIDynamicAnimationGroup *_animationGroup;	// 144 = 0x90
    long long _style;	// 152 = 0x98
    long long _userStyle;	// 160 = 0xa0
    struct CGPoint _offsetWhenPanStarted;	// 168 = 0xa8
    CDStruct_5e2aa800 _previousPanVelocity;	// 184 = 0xb8
    double _panDeadBand;	// 200 = 0xc8
    struct CGPoint _panDeadBandTranslationAdjustment;	// 208 = 0xd0
    unsigned long long _accelerationSwipeCount;	// 224 = 0xe0
    double _accelerationMultiplier;	// 232 = 0xe8
    double _accelerationStartMultiplier;	// 240 = 0xf0
    double _accelerationLastSwipeTime;	// 248 = 0xf8
    NSArray *_displayedEntries;	// 256 = 0x100
    double _initialEdgeDigitizerLocation;	// 264 = 0x108
    long long _initialIndexEntry;	// 272 = 0x110
    long long _highlightedIndexEntry;	// 280 = 0x118
    CDStruct_5e2aa800 _initialVelocity;	// 288 = 0x120
    struct CGPoint _initialContentOffset;	// 304 = 0x130
    unsigned long long _heading;	// 320 = 0x140
    unsigned long long _allowedHeadings;	// 328 = 0x148
    CADisplayLink *_discreteButtonScrollDisplayLink;	// 336 = 0x150
    double _discreteButtonScrollProgress;	// 344 = 0x158
    CADisplayLink *_continuousButtonScrollDisplayLink;	// 352 = 0x160
    CDStruct_5e2aa800 _continuousButtonScrollAnimationVelocity;	// 360 = 0x168
    struct CGVector _pressForce;	// 376 = 0x178
    double _scrollHighlight;	// 392 = 0x188
    NSTimer *_cooldownTimer;	// 400 = 0x190
    NSTimer *_buttonScrollDelayTimer;	// 408 = 0x198
    struct {
        unsigned int isDragging:1;
        unsigned int isDecelerating:1;
        unsigned int isInTrackingMode:1;
        unsigned int isIndicatingDestination:1;
        unsigned int isAttemptingToStop:1;
        unsigned int isCancellingScrollAnimation:1;
    } _flags;	// 416 = 0x1a0
    NSArray *_indexEntries;	// 424 = 0x1a8
    _UIFocusFastScrollingIndexBarView *_indexBarView;	// 432 = 0x1b0
}

+ (id)controllerWithRequest:(id)arg1;	// IMP=0x006000000077056e
+ (long long)_indexOfEntryNearestToScrollViewBounds:(struct CGRect)arg1 inDisplayedEntries:(id)arg2 includePlaceholders:(_Bool)arg3;	// IMP=0x0060000000770157
+ (_Bool)_shouldIncludePlaceholderIndexBarEntriesForScrollStyle:(long long)arg1;	// IMP=0x006000000077014a
+ (long long)indexOfEntryForScrollStyle:(long long)arg1 nearestToScrollViewBounds:(struct CGRect)arg2 inDisplayedEntries:(id)arg3;	// IMP=0x00600000007700cb
+ (id)indexBarViewForScrollView:(id)arg1;	// IMP=0x006000000076fe70
- (void).cxx_destruct;	// IMP=0x0000000000776791
@property(readonly, nonatomic) _UIFocusFastScrollingIndexBarView *indexBarView; // @synthesize indexBarView=_indexBarView;
@property(copy, nonatomic) NSArray *indexEntries; // @synthesize indexEntries=_indexEntries;
- (void)_updateIndexBarIndicator;	// IMP=0x0000000000776728
- (_Bool)_shouldShowEntriesInIndexBar;	// IMP=0x00000000007766df
- (void)_buttonScrollDelayEnded;	// IMP=0x00000000007766b2
- (_Bool)_cancelButtonScrollDelay;	// IMP=0x000000000077664a
- (void)_beginButtonScrollDelayWithDuration:(double)arg1;	// IMP=0x0000000000776588
- (void)_cooldownEnded;	// IMP=0x000000000077655b
- (void)_cancelCooldown;	// IMP=0x0000000000776518
- (void)_beginCooldownWithDuration:(double)arg1;	// IMP=0x0000000000776456
- (void)_stopTrackingMode;	// IMP=0x000000000077640b
- (void)_startTrackingModeIfNecessary;	// IMP=0x00000000007763c0
- (_Bool)_canFastScrollWithStyle:(long long)arg1;	// IMP=0x0000000000776293
- (void)_finishDecelerating;	// IMP=0x0000000000776244
- (void)_attemptToStopDueToExternalEvent:(_Bool)arg1;	// IMP=0x0000000000776102
- (void)_stopDueToExternalEvent;	// IMP=0x00000000007760e0
- (void)_attemptToStop;	// IMP=0x00000000007760cc
- (void)_start;	// IMP=0x0000000000775e0a
- (void)_configureWithRequest:(id)arg1;	// IMP=0x0000000000775c2b
- (void)_hideDestinationIndicators;	// IMP=0x0000000000775bdc
- (void)_showDestinationIndicators;	// IMP=0x0000000000775b8a
- (void)_updateSoftFocusForVelocity:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000775a90
- (void)_stopScrollingAnimation;	// IMP=0x0000000000775a26
- (void)_setContentOffset:(struct CGPoint)arg1 withVelocity:(CDStruct_c3b9c2ee)arg2;	// IMP=0x00000000007759cb
- (CDStruct_c3b9c2ee)_currentScrollViewDecelerationVelocity;	// IMP=0x000000000077597c
- (void)_startScrollingAnimationWithVelocity:(CDStruct_c3b9c2ee)arg1 friction:(struct CGPoint)arg2;	// IMP=0x00000000007754a4
- (void)_handleAnimationGroupScrollingCompletionWithInitialVelocity:(struct CGPoint)arg1 bounces:(_Bool)arg2;	// IMP=0x00000000007751ad
- (void)_handleAnimationGroupScrollingAnimations;	// IMP=0x0000000000775071
- (void)_endDiscreteButtonScrollGesture;	// IMP=0x0000000000775014
- (void)_discreteButtonScrollHeartbeat:(id)arg1;	// IMP=0x0000000000774d9e
- (long long)_nextDiscretePageScrollIndexFromIndex:(long long)arg1 inDirection:(double)arg2;	// IMP=0x0000000000774af5
- (long long)_nextDiscretePageScrollIndexFromIndex:(long long)arg1 forHeading:(unsigned long long)arg2;	// IMP=0x0000000000774ac6
- (void)_stopDiscreteButtonScrollDisplayLink;	// IMP=0x0000000000774a29
- (void)_startDiscreteButtonScrollDisplayLink;	// IMP=0x000000000077495e
- (long long)_advanceToNextEntryFromIndex:(long long)arg1 alongHeading:(unsigned long long)arg2;	// IMP=0x0000000000774762
- (void)_startDiscreteButtonScrollGestureAlongHeading:(unsigned long long)arg1;	// IMP=0x000000000077463f
- (_Bool)_shouldArrowButtonInterruptPanGesture;	// IMP=0x00000000007745f2
- (_Bool)_shouldArrowButtonGestureDiscreteScroll;	// IMP=0x00000000007745ac
- (void)_handlePageButtonGesture:(id)arg1;	// IMP=0x0000000000774458
- (void)_handleJoystickGesture:(id)arg1;	// IMP=0x00000000007741c3
- (void)_resetAllButtonGestures;	// IMP=0x0000000000774166
- (void)_beginDeceleratingAfterContinuousButtonScroll;	// IMP=0x00000000007740df
- (void)_continuousButtonScrollHeartbeat:(id)arg1;	// IMP=0x0000000000773d3e
- (void)_stopContinuousButtonScrollDisplayLink;	// IMP=0x0000000000773ca1
- (void)_startContinuousButtonScrollDisplayLink;	// IMP=0x0000000000773bd6
- (void)_startContinuousButtonScrollAlongHeading:(unsigned long long)arg1 withVelocity:(CDStruct_c3b9c2ee)arg2 delayed:(_Bool)arg3;	// IMP=0x0000000000773b02
- (_Bool)_shouldArrowButtonGestureInstantlyAdvanceToNextEntry;	// IMP=0x0000000000773a8a
- (void)_handleArrowButtonGesture:(id)arg1;	// IMP=0x00000000007737d6
- (void)_rotaryHeartbeat:(id)arg1;	// IMP=0x0000000000773403
- (struct CGPoint)_lerpRotaryGestureAccumulatedDistanceToDigitizerLocation;	// IMP=0x000000000077339c
- (void)_updateFullContentRotaryGesture;	// IMP=0x0000000000773283
- (void)_startFullContentRotaryGesture;	// IMP=0x000000000077319a
- (void)_handleFullContentRotaryEnd:(id)arg1;	// IMP=0x0000000000773146
- (void)_handleFullContentRotaryChanged:(id)arg1;	// IMP=0x0000000000773134
- (void)_handleFullContentRotaryBegin:(id)arg1;	// IMP=0x0000000000773122
- (CDStruct_c3b9c2ee)_velocityOfRotaryGesture:(id)arg1 inView:(id)arg2;	// IMP=0x0000000000773095
- (struct CGPoint)_translationOfRotaryGesture:(id)arg1 inView:(id)arg2;	// IMP=0x0000000000772fcb
- (void)_handleRotaryEnd:(id)arg1;	// IMP=0x0000000000772f6f
- (struct CGPoint)_rotaryRubberbandedOffsetForTranslatedOffset:(struct CGPoint)arg1;	// IMP=0x0000000000772d1f
- (struct CGPoint)_rotaryTranslatedOffsetForCurrentOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;	// IMP=0x0000000000772cf8
- (void)_updateRotaryAcceleration:(id)arg1;	// IMP=0x0000000000772a99
- (void)_handleRotaryChanged:(id)arg1;	// IMP=0x00000000007728e8
- (_Bool)_updateRotaryDirection:(id)arg1;	// IMP=0x000000000077285d
- (void)_handleRotaryBegin:(id)arg1;	// IMP=0x000000000077259a
- (void)_handleCommonRotaryBegin:(id)arg1;	// IMP=0x000000000077255f
- (void)_handleRotaryGesture:(id)arg1;	// IMP=0x0000000000772363
- (void)_resetPanDeadBand;	// IMP=0x00000000007722be
- (_Bool)_isPanDeadBandActive;	// IMP=0x000000000077224c
- (struct CGPoint)_applyPanDeadbandToTranslation:(struct CGPoint)arg1 withVelocity:(CDStruct_c3b9c2ee)arg2 inScrollView:(id)arg3;	// IMP=0x0000000000771f8f
- (void)_resetSwipeAcceleration;	// IMP=0x0000000000771f69
- (void)_endDraggingWithFinalVelocity:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000771795
- (void)_beginInitialSwipeDeceleration;	// IMP=0x000000000077174c
- (void)_handleSwipePanEnd:(id)arg1;	// IMP=0x00000000007716eb
- (void)_handleSwipePanChanged:(id)arg1;	// IMP=0x00000000007711af
- (void)_handleSwipePanBegin:(id)arg1;	// IMP=0x00000000007710ac
- (_Bool)_canFastScrollWithEdgeSwipe;	// IMP=0x0000000000771044
- (void)_interpretDigitzerLocation:(struct CGPoint)arg1 toFindEntryIndex:(long long *)arg2 deflection:(double *)arg3;	// IMP=0x0000000000770e75
- (void)_updateEdgeGesture;	// IMP=0x0000000000770d94
- (void)_startEdgeGesture;	// IMP=0x0000000000770cbc
- (void)_handleEdgePanEnd:(id)arg1;	// IMP=0x0000000000770c68
- (void)_handleEdgePanChanged:(id)arg1;	// IMP=0x0000000000770c56
- (void)_handleEdgePanBegin:(id)arg1;	// IMP=0x0000000000770c44
- (void)_handlePanEnd:(id)arg1;	// IMP=0x0000000000770bf0
- (void)_handlePanChanged:(id)arg1;	// IMP=0x0000000000770b9c
- (long long)_panFastScrollStyleFromGesture:(id)arg1;	// IMP=0x0000000000770b04
- (void)_handlePanBegin:(id)arg1 withStyle:(long long)arg2;	// IMP=0x0000000000770a7a
- (void)_handlePanGesture:(id)arg1;	// IMP=0x00000000007709b1
- (long long)indexOfEntryNearestToScrollViewBounds:(struct CGRect)arg1 inDisplayedEntries:(id)arg2;	// IMP=0x0000000000770924
- (unsigned long long)currentHeading;	// IMP=0x000000000077076e
@property(readonly, nonatomic) struct CGPoint initialContentOffset;
@property(readonly, nonatomic) _UIFocusFastScrollingIndexBarEntry *highlightedEntry;
@property(readonly, nonatomic) long long userScrollingStyle;
@property(readonly, nonatomic) long long scrollingStyle;
@property(readonly, nonatomic, getter=isScrollingY) _Bool scrollingY;
@property(readonly, nonatomic, getter=isScrollingX) _Bool scrollingX;
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging;
- (void)stop;	// IMP=0x0000000000770687
- (void)start;	// IMP=0x0000000000770675
@property(readonly, nonatomic) __weak UIScrollView *scrollView;
- (id)initWithRequest:(id)arg1;	// IMP=0x00000000007704e5

@end

