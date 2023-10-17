//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BluetoothManager;

@interface DMDBluetoothManager : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _stillNeedsUpdate;	// 9 = 0x9
    BluetoothManager *_bluetoothManager;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x000000000002a903
- (void).cxx_destruct;	// IMP=0x002000000002ac5b
@property(nonatomic) _Bool stillNeedsUpdate; // @synthesize stillNeedsUpdate=_stillNeedsUpdate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) BluetoothManager *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
- (void)availabilityChanged:(id)arg1;	// IMP=0x001000000002aade
- (id)init;	// IMP=0x001000000002a958

@end
