//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BatteryMonitorTokenDelegate, _BatteryMonitorConcreteTokenDelegate;

@interface _BatteryMonitorConcreteToken : NSObject
{
    id <BatteryMonitorTokenDelegate> _delegate;	// 8 = 0x8
    id <_BatteryMonitorConcreteTokenDelegate> _concreteTokenDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000009997b2
@property(nonatomic) __weak id <_BatteryMonitorConcreteTokenDelegate> concreteTokenDelegate; // @synthesize concreteTokenDelegate=_concreteTokenDelegate;
@property(nonatomic) __weak id <BatteryMonitorTokenDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_batteryLevelDidChange:(id)arg1;	// IMP=0x00100000009996ca
- (void)_batteryStateDidChange:(id)arg1;	// IMP=0x0010000000999630
@property(readonly, nonatomic) _Bool batteryIsChargingOrFull;
@property(readonly, nonatomic) float currentBatteryLevel;
@property(readonly, nonatomic) long long currentBatteryState;
- (void)dealloc;	// IMP=0x0010000000999513
- (id)init;	// IMP=0x001000000099942a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

