//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol CRLCanvasAutoscrollDelegate;

@interface CRLCanvasAutoscroll : NSObject
{
    NSTimer *_timer;	// 8 = 0x8
    double _lastFired;	// 16 = 0x10
    int _directions;	// 24 = 0x18
    NSObject<CRLCanvasAutoscrollDelegate> *_target;	// 32 = 0x20
    double _repeatInterval;	// 40 = 0x28
    unsigned long long _count;	// 48 = 0x30
    double _unscaledDistancePastVisibleRect;	// 56 = 0x38
    double _unscaledInset;	// 64 = 0x40
    struct CGPoint _unscaledAutoscrollPoint;	// 72 = 0x48
    struct CGPoint _adjustedUnscaledAutoscrollPoint;	// 88 = 0x58
    struct CGPoint _lastAutoscrollDelta;	// 104 = 0x68
}

+ (void)startAutoscroll:(id)arg1 unscaledPoint:(struct CGPoint)arg2;	// IMP=0x00400000001e5efe
- (void).cxx_destruct;	// IMP=0x00200000001e77f8
@property(nonatomic) double unscaledInset; // @synthesize unscaledInset=_unscaledInset;
@property(nonatomic) struct CGPoint lastAutoscrollDelta; // @synthesize lastAutoscrollDelta=_lastAutoscrollDelta;
@property(nonatomic) double unscaledDistancePastVisibleRect; // @synthesize unscaledDistancePastVisibleRect=_unscaledDistancePastVisibleRect;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) double repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property(nonatomic) int directions; // @synthesize directions=_directions;
- (int);	// IMP=0x00100000001e7770
@property(nonatomic) struct CGPoint adjustedUnscaledAutoscrollPoint; // @synthesize adjustedUnscaledAutoscrollPoint=_adjustedUnscaledAutoscrollPoint;
@property(nonatomic) struct CGPoint unscaledAutoscrollPoint; // @synthesize unscaledAutoscrollPoint=_unscaledAutoscrollPoint;
@property(retain, nonatomic) NSObject<CRLCanvasAutoscrollDelegate> *target; // @synthesize target=_target;
- (void)p_autoscrollIfPossibleWithDelta:(unsigned long long)arg1;	// IMP=0x00100000001e6fbc
- (void)timerFired:(id)arg1;	// IMP=0x00100000001e6e5e
- (unsigned long long)p_unscaledDeltaForCount:(unsigned long long)arg1;	// IMP=0x00100000001e6c86
- (void)invalidate;	// IMP=0x00100000001e6ae5
- (_Bool)p_startAutoscroll:(id)arg1 unscaledPoint:(struct CGPoint)arg2 unscaledDistancePastVisibleRect:(double)arg3 unscaledInset:(double)arg4 directions:(int)arg5 repeatInterval:(double)arg6;	// IMP=0x00100000001e6613
- (void)dealloc;	// IMP=0x00100000001e5ec0

@end
