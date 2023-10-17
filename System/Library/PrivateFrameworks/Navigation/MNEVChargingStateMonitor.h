//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMeasurement, NSString, NSTimer;
@protocol MNEVChargingStateMonitorDelegate;

__attribute__((visibility("hidden")))
@interface MNEVChargingStateMonitor : NSObject
{
    id <MNEVChargingStateMonitorDelegate> _delegate;	// 8 = 0x8
    _Bool _isCharging;	// 16 = 0x10
    _Bool _shouldShowChargingInfo;	// 17 = 0x11
    NSDate *_arrivalDate;	// 24 = 0x18
    NSTimer *_timer;	// 32 = 0x20
    NSMeasurement *_targetBatteryCharge;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000738c
@property(nonatomic) __weak id <MNEVChargingStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMeasurement *targetBatteryCharge; // @synthesize targetBatteryCharge=_targetBatteryCharge;
- (void)_updateForVehicle:(id)arg1 forceDelegateCallback:(_Bool)arg2;	// IMP=0x0000000000006eb2
- (void)virtualGarageManager:(id)arg1 didUpdateSelectedVehicle:(id)arg2;	// IMP=0x0000000000006e9b
- (void)_notifyShouldShowChargingInfo;	// IMP=0x0000000000006e29
- (void)_startTimer;	// IMP=0x0000000000006c14
- (void)updateForArrival;	// IMP=0x0000000000006c02
- (void)updateForLocation:(id)arg1;	// IMP=0x0000000000006abd
- (void)dealloc;	// IMP=0x0000000000006a3a
- (id)initWithTargetBatteryCharge:(id)arg1;	// IMP=0x00000000000067a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
