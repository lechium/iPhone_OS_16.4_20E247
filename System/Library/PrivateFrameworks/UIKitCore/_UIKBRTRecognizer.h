//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue, _UIKBRTRecognizerDelegate, _UIKBRTRecognizerTouchLoggingProtocol, _UIKBRTRecognizerTouchPointTrackingProtocol;

__attribute__((visibility("hidden")))
@interface _UIKBRTRecognizer : NSObject
{
    _Bool _isWaiting;	// 8 = 0x8
    _Bool _disableHomeRowReturn;	// 9 = 0x9
    id <_UIKBRTRecognizerDelegate> _delegate;	// 16 = 0x10
    id <_UIKBRTRecognizerTouchLoggingProtocol> _touchLogger;	// 24 = 0x18
    id <_UIKBRTRecognizerTouchPointTrackingProtocol> _touchTracker;	// 32 = 0x20
    NSMutableSet *_definitiveRules;	// 40 = 0x28
    NSMutableSet *_averagingRules;	// 48 = 0x30
    double _maximumNonRestMoveDistance;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_touchQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 72 = 0x48
    NSMutableArray *_touchInfos;	// 80 = 0x50
    NSMutableSet *_activeTouches;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_activeTouchesQueue;	// 96 = 0x60
    NSMutableArray *_ignoredTouches;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_ignoredTouchesQueue;	// 112 = 0x70
    unsigned long long _numProlongedTouches;	// 120 = 0x78
    double _touchIntervalAverage;	// 128 = 0x80
    struct CGSize _clusterRestHaloSize;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000c9b6f4
@property(nonatomic) double touchIntervalAverage; // @synthesize touchIntervalAverage=_touchIntervalAverage;
@property(nonatomic) unsigned long long numProlongedTouches; // @synthesize numProlongedTouches=_numProlongedTouches;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ignoredTouchesQueue; // @synthesize ignoredTouchesQueue=_ignoredTouchesQueue;
@property(retain, nonatomic) NSMutableArray *ignoredTouches; // @synthesize ignoredTouches=_ignoredTouches;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *activeTouchesQueue; // @synthesize activeTouchesQueue=_activeTouchesQueue;
@property(retain, nonatomic) NSMutableSet *activeTouches; // @synthesize activeTouches=_activeTouches;
@property(retain, nonatomic) NSMutableArray *touchInfos; // @synthesize touchInfos=_touchInfos;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *touchQueue; // @synthesize touchQueue=_touchQueue;
@property(nonatomic) double maximumNonRestMoveDistance; // @synthesize maximumNonRestMoveDistance=_maximumNonRestMoveDistance;
@property(nonatomic) struct CGSize clusterRestHaloSize; // @synthesize clusterRestHaloSize=_clusterRestHaloSize;
@property(nonatomic) _Bool disableHomeRowReturn; // @synthesize disableHomeRowReturn=_disableHomeRowReturn;
@property(readonly, nonatomic) NSMutableSet *averagingRules; // @synthesize averagingRules=_averagingRules;
@property(readonly, nonatomic) NSMutableSet *definitiveRules; // @synthesize definitiveRules=_definitiveRules;
@property(retain, nonatomic) id <_UIKBRTRecognizerTouchPointTrackingProtocol> touchTracker; // @synthesize touchTracker=_touchTracker;
@property(retain, nonatomic) id <_UIKBRTRecognizerTouchLoggingProtocol> touchLogger; // @synthesize touchLogger=_touchLogger;
@property(nonatomic) id <_UIKBRTRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)kbStatusMessage:(id)arg1;	// IMP=0x0000000000c9b558
- (void)makeTouchIgnored:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000000c9b53f
- (void)makeTouchIgnored:(id)arg1 force:(_Bool)arg2 withMessage:(id)arg3;	// IMP=0x0000000000c9b2ef
- (void)makeTouchIgnored:(id)arg1 force:(_Bool)arg2 because:(id)arg3;	// IMP=0x0000000000c9b1c3
- (_Bool)makeTouchActive:(id)arg1;	// IMP=0x0000000000c9ae23
- (void)cancelTouchOnLayoutWithTouchInfo:(id)arg1;	// IMP=0x0000000000c9ac1b
- (void)notifyDelegateOfRestingTouch:(id)arg1;	// IMP=0x0000000000c9ab45
- (void)notifyDelegateOfIgnoringTouch:(id)arg1;	// IMP=0x0000000000c9a915
- (_Bool)queryDelegateOfRestingTouch:(id)arg1;	// IMP=0x0000000000c9a901
- (_Bool)queryDelegateOfIgnoringTouch:(id)arg1 forOtherTouch:(_Bool)arg2;	// IMP=0x0000000000c9a5b3
- (void)notifyDelegateOfMovedIgnoredTouch:(id)arg1;	// IMP=0x0000000000c9a3c0
- (_Bool)notifyDelegateOfMovedTouch:(id)arg1;	// IMP=0x0000000000c9a091
- (void)notifyDelegateOfCancelledTouch:(id)arg1;	// IMP=0x0000000000c99d9f
- (void)notifyDelegateOfSuccessfulTouch:(id)arg1;	// IMP=0x0000000000c999d1
- (_Bool)queryDelegateToBeginTouch:(id)arg1 forBeginState:(unsigned long long)arg2 restartIfNecessary:(_Bool)arg3;	// IMP=0x0000000000c994f6
- (_Bool)removedFromActiveTouches:(id)arg1;	// IMP=0x0000000000c993c7
- (_Bool)addedToActiveTouches:(id)arg1;	// IMP=0x0000000000c99296
- (void)processTouchInfo:(id)arg1;	// IMP=0x0000000000c9910b
- (void)updateIgnoredTouchesForTouchInfo:(id)arg1 whenTouchInfo:(id)arg2 changesStateTo:(BOOL)arg3;	// IMP=0x0000000000c98fcc
- (void)explicitlyIgnoreTouch:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000c98f16
- (void)_doIgnoreTouchWithTouchInfo:(id)arg1;	// IMP=0x0000000000c98e89
- (void)markTouchProcessed:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000c98dd3
- (void)_doMarkTouchProcessedWithTouchInfo:(id)arg1;	// IMP=0x0000000000c98cd0
- (void)touchCancelled:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000c98be8
- (void)_doCancelledTouchWithTouchInfo:(id)arg1;	// IMP=0x0000000000c98a13
- (void)touchUp:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000c9892b
- (void)_doEndedTouchWithTouchInfo:(id)arg1;	// IMP=0x0000000000c98404
- (void)touchDragged:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000c9832b
- (void)_doMovedTouchWithTouchInfo:(id)arg1;	// IMP=0x0000000000c98260
- (void)touchDown:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(_Bool)arg3;	// IMP=0x0000000000c9818e
- (void)_doBeginTouchWithTouchInfo:(id)arg1;	// IMP=0x0000000000c96f93
- (void)letRulesModifyPendingTouchInfo:(id)arg1;	// IMP=0x0000000000c96ad7
- (float)letRulesModifyNewTouchInfo:(id)arg1;	// IMP=0x0000000000c96617
- (void)setStandardKeyPixelSize:(struct CGSize)arg1;	// IMP=0x0000000000c96470
- (void)reset;	// IMP=0x0000000000c961a9
- (id)init;	// IMP=0x0000000000c96050

@end

