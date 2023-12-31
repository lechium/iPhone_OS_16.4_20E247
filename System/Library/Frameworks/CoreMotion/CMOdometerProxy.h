//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMOdometer;
@protocol OS_dispatch_queue;

@interface CMOdometerProxy : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fCallbackQueue;	// 16 = 0x10
    void *fLocationdConnection;	// 24 = 0x18
    CDUnknownBlockType fHandler;	// 32 = 0x20
    long long fGpsAvailability;	// 40 = 0x28
    CMOdometer *_odometer;	// 48 = 0x30
    double _totalDistance;	// 56 = 0x38
    double _averageSpeed;	// 64 = 0x40
    double _startDate;	// 72 = 0x48
    double _totalCyclingDistance;	// 80 = 0x50
    double _cyclingStartDate;	// 88 = 0x58
}

@property double cyclingStartDate; // @synthesize cyclingStartDate=_cyclingStartDate;
@property double totalCyclingDistance; // @synthesize totalCyclingDistance=_totalCyclingDistance;
@property double startDate; // @synthesize startDate=_startDate;
@property double averageSpeed; // @synthesize averageSpeed=_averageSpeed;
@property double totalDistance; // @synthesize totalDistance=_totalDistance;
@property(nonatomic) CMOdometer *odometer; // @synthesize odometer=_odometer;
- (void)_stopCyclingWorkoutDistanceUpdates;	// IMP=0x000000000014009f
- (void)_startCyclingWorkoutDistanceUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000013f89d
- (void)_stopOdometerUpdates;	// IMP=0x000000000013f714
- (void)_startOdometerUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000013f06c
- (void)_startDaemonConnection;	// IMP=0x000000000013ea8e
- (void)_teardown;	// IMP=0x000000000013ea42
- (void)dealloc;	// IMP=0x000000000013e9f8
- (id)initWithOdometer:(id)arg1;	// IMP=0x000000000013e916

@end

