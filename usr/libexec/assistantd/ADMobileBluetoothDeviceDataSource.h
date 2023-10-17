//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADMobileBluetoothWirelessSplitterSessionProxy, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADMobileBluetoothDeviceDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct BTSessionImpl *_session;	// 16 = 0x10
    struct BTLocalDeviceImpl *_localDevice;	// 24 = 0x18
    struct BTAccessoryManagerImpl *_accessoryManager;	// 32 = 0x20
    _Bool _attachingToSession;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_sessionSetupGroup;	// 48 = 0x30
    struct os_unfair_lock_s _deviceProxiesLock;	// 56 = 0x38
    NSMutableDictionary *_deviceProxiesByAddress;	// 64 = 0x40
    NSMutableDictionary *_deviceProxiesByDeviceUID;	// 72 = 0x48
    struct os_unfair_lock_s _wirelessSplitterSessionProxyLock;	// 80 = 0x50
    ADMobileBluetoothWirelessSplitterSessionProxy *_wirelessSplitterSessionProxy;	// 88 = 0x58
    NSArray *_connectedDeviceAddresses;	// 96 = 0x60
    NSArray *_pairedDeviceAddresses;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000d4404
- (id)_pairedDeviceProxies;	// IMP=0x00100000000d41d4
- (id)_fetchPairedDeviceAddresses;	// IMP=0x00100000000d3e37
- (void)_resetPairedDeviceAddresses;	// IMP=0x00100000000d3d8a
- (id)_connectedDeviceProxies;	// IMP=0x00100000000d3b5a
- (id)_fetchConnectedDeviceAddresses;	// IMP=0x00100000000d37bd
- (void)_resetConnectedDeviceAddresses;	// IMP=0x00100000000d371f
- (id)_deviceProxyWithUID:(id)arg1 createsIfAbsent:(_Bool)arg2;	// IMP=0x00100000000d367f
- (id)_deviceProxyWithAddress:(id)arg1 createsIfAbsent:(_Bool)arg2;	// IMP=0x00100000000d35df
- (id)wirelessSplitterSession;	// IMP=0x00100000000d353c
- (void)getPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d32eb
- (void)getConnectedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d309a
- (id)deviceWithUID:(id)arg1;	// IMP=0x00100000000d302f
- (id)deviceWithAddress:(id)arg1;	// IMP=0x00100000000d2fc4
- (void)getBTLocalDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d2e6e
- (void)getBTDeviceWithDeviceUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d2c0b
- (void)getBTDeviceWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d2964
- (id)_deviceProxies;	// IMP=0x00100000000d2885
- (void)_handleListeningModeChangedForBTDevice:(struct BTDeviceImpl *)arg1 fromAccessoryManager:(struct BTAccessoryManagerImpl *)arg2;	// IMP=0x00100000000d23da
- (void)_handleInEarStatusChangedForBTDevice:(struct BTDeviceImpl *)arg1 fromAccessoryManager:(struct BTAccessoryManagerImpl *)arg2;	// IMP=0x00100000000d1f57
- (void)_reloadForDevice:(struct BTDeviceImpl *)arg1;	// IMP=0x00100000000d1bed
- (void)accessoryManager:(struct BTAccessoryManagerImpl *)arg1 event:(int)arg2 device:(struct BTDeviceImpl *)arg3 state:(int)arg4;	// IMP=0x00100000000d1a2f
- (void)_tearDownAccessoryManager;	// IMP=0x00100000000d1a02
- (void)_setUpAccessoryManager;	// IMP=0x00100000000d18a9
- (void)localDevice:(struct BTLocalDeviceImpl *)arg1 event:(int)arg2 result:(int)arg3;	// IMP=0x00100000000d1733
- (void)_tearDownLocalDevice;	// IMP=0x00100000000d1706
- (void)_setUpLocalDevice;	// IMP=0x00100000000d15ad
- (void)device:(struct BTDeviceImpl *)arg1 serviceMask:(unsigned int)arg2 serviceEventType:(int)arg3 serviceSpecificEvent:(unsigned int)arg4 result:(int)arg5;	// IMP=0x00100000000d1540
- (void)_sessionTerminated:(struct BTSessionImpl *)arg1;	// IMP=0x00100000000d1450
- (void)_sessionDetached:(struct BTSessionImpl *)arg1;	// IMP=0x00100000000d1358
- (void)_sessionAttached:(struct BTSessionImpl *)arg1 result:(int)arg2;	// IMP=0x00100000000d1130
- (void)_attachToSession;	// IMP=0x00100000000d1017
- (void)_detachFromSession;	// IMP=0x00100000000d0f05
- (void)_cleanUpWirelessSplitterProxy;	// IMP=0x00100000000d0e1c
- (void)_cleanUpDeviceProxies;	// IMP=0x00100000000d0b45
- (void)invalidate;	// IMP=0x00100000000d0ab9
- (id)init;	// IMP=0x00100000000d0816

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
