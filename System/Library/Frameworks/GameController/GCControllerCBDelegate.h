//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GCControllerCBDelegate : NSObject
{
    NSMutableArray *_foundPeripherals;	// 8 = 0x8
    NSMutableArray *_connectedPeripherals;	// 16 = 0x10
    CBCentralManager *_centralManager;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000094b35
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x0000000000094a0d
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x0000000000094919
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;	// IMP=0x000000000009453b
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x000000000009417c
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x0000000000093f76
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x000000000009351c
- (void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3;	// IMP=0x0000000000093310
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x00000000000930db
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x0000000000092efb
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x0000000000092d46
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;	// IMP=0x0000000000092c9b
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;	// IMP=0x0000000000092bf0
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x00000000000929c6
- (void)startScanWithTimeout:(double)arg1;	// IMP=0x0000000000092612
- (void)startScan;	// IMP=0x00000000000925f8
- (void)stopScan;	// IMP=0x0000000000092573
- (void)fireCompletionHandler;	// IMP=0x00000000000924c2
- (id)init;	// IMP=0x000000000009244d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
