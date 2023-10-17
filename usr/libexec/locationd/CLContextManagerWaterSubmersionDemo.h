//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLTimer;

@interface CLContextManagerWaterSubmersionDemo
{
    CLTimer *_measurementTimer;	// 160 = 0xa0
}

+ (double)boundedIncrementBetweenStart:(double)arg1 andStop:(double)arg2 withCurrent:(double)arg3 withIncrement:(double *)arg4;	// IMP=0x00400000004d23b5
+ (double)settleToTemperatureFromStart:(double)arg1 toStop:(double)arg2 withCurrent:(double)arg3 withDecrement:(double)arg4;	// IMP=0x00100000004d2375
- (void)stopUpdates;	// IMP=0x00200000004d2424
- (void)startUpdates;	// IMP=0x00100000004d23f7
- (void)retrieveCachedSubmersionState;	// IMP=0x00100000004d22cf
- (void)resumeEvent_bounce;	// IMP=0x00100000004d2245
- (void)pauseEvent_bounce;	// IMP=0x00100000004d21bb
- (void)updateEvent_bounce:(shared_ptr_85043445)arg1;	// IMP=0x00100000004d2002
- (void)dealloc;	// IMP=0x00100000004d1fb0
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x00100000004d1258

@end
