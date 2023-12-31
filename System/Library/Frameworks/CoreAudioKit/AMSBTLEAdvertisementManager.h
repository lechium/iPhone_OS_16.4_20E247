//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBPeripheralManager, NSString;

__attribute__((visibility("hidden")))
@interface AMSBTLEAdvertisementManager : NSObject
{
    CBPeripheralManager *peripheralManager;	// 8 = 0x8
}

- (void)stopAdvertisingMIDIService;	// IMP=0x0000000000003e2a
- (void)advertiseMIDIService;	// IMP=0x0000000000003c88
- (_Bool)isLECapableHardware;	// IMP=0x0000000000003bf8
- (_Bool)isAdvertising;	// IMP=0x0000000000003be2
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;	// IMP=0x0000000000003bc8
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;	// IMP=0x0000000000003b5f
- (void)peripheralManagerDidUpdateState:(id)arg1;	// IMP=0x0000000000003b59
- (void)dealloc;	// IMP=0x0000000000003b11
- (id)init;	// IMP=0x0000000000003ab0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

