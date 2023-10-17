//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUCoalescer, IDSDevice, IDSService, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSObject, NSString, RPCompanionLinkClient, SFBLEPipe, SFPowerSource, SFPowerSourceMonitor;
@protocol OS_dispatch_source;

@interface SDPairedDeviceAgent
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    NSDate *;	// 16 = 0x10
    NSDate *_animationDateForIDS;	// 24 = 0x18
    NSDate *_animationDateToSend;	// 32 = 0x20
    _Bool _animationDateSupported;	// 40 = 0x28
    NSNumber *_animationMessageID;	// 48 = 0x30
    SFBLEPipe *_blePipe;	// 56 = 0x38
    RPCompanionLinkClient *_companionLinkClient;	// 64 = 0x40
    CDUnknownBlockType _chargingUIHandler;	// 72 = 0x48
    CUCoalescer *_idsConnectionCoalescer;	// 80 = 0x50
    IDSDevice *_idsConnectedDevice;	// 88 = 0x58
    IDSService *_idsService;	// 96 = 0x60
    CUCoalescer *_idsSyncCoalescer;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_idsInfoTimer;	// 112 = 0x70
    _Bool _infoRequestForced;	// 120 = 0x78
    int _lockStatePairedDevice;	// 124 = 0x7c
    _Bool _lowPowerModeLocal;	// 128 = 0x80
    NSMutableArray *_messageIDs;	// 136 = 0x88
    NSMutableDictionary *_nrRegisteredDevices;	// 144 = 0x90
    SFPowerSource *_powerSourceLocal;	// 152 = 0x98
    NSDictionary *_powerSourceMessage;	// 160 = 0xa0
    SFPowerSourceMonitor *_powerSourceMonitor;	// 168 = 0xa8
    SFPowerSource *_powerSourcePairedDevice;	// 176 = 0xb0
    _Bool _powerSourceWasCharging;	// 184 = 0xb8
    int _testingChargingToken;	// 188 = 0xbc
    _Bool _uiShowing;	// 192 = 0xc0
    long long _wristStateLocal;	// 200 = 0xc8
    long long _wristStatePairedDevice;	// 208 = 0xd0
    _Bool _hasLongPasscode;	// 216 = 0xd8
    SFPowerSource *_powerSource;	// 224 = 0xe0
}

+ (id)sharedAgent;	// IMP=0x002000000002eebb
- (void).cxx_destruct;	// IMP=0x0020000000035270
@property(retain, nonatomic) SFPowerSource *powerSource; // @synthesize powerSource=_powerSource;
@property(readonly, nonatomic) _Bool hasLongPasscode; // @synthesize hasLongPasscode=_hasLongPasscode;
- (void)_postPowerStatusNotificationForPowerSource:(id)arg1;	// IMP=0x001000000003516d
- (void)sendDashboardEntryWithName:(id)arg1 dict:(id)arg2;	// IMP=0x001000000003502d
- (void)sendDismissUIWithReason:(long long)arg1;	// IMP=0x0010000000034ff8
- (void)triggerChargingUIWithDismissHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000034dec
- (void)sendAnimationDate:(id)arg1;	// IMP=0x0010000000034db7
- (void)requestAnimationDateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000034d9c
- (void)initialViewControllerDidDisappear;	// IMP=0x0010000000034d01
- (void)initialViewControllerDidAppear;	// IMP=0x0010000000034c66
- (void)connectionInvalidated:(id)arg1;	// IMP=0x0010000000034b9d
- (void)connectionEstablished:(id)arg1;	// IMP=0x0010000000034ad4
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x0010000000034acc
- (id)remoteObjectInterface;	// IMP=0x0010000000034aac
- (id)exportedInterface;	// IMP=0x0010000000034a8c
- (id)machServiceName;	// IMP=0x0010000000034a7f
- (void)_lowPowerModeChanged;	// IMP=0x00100000000349b1
- (void)lowPowerModeChanged:(id)arg1;	// IMP=0x00100000000348d3
- (void)_wristStateUpdate:(long long)arg1;	// IMP=0x001000000003483a
- (void)_wristStateHandleMessage:(id)arg1;	// IMP=0x001000000003472b
- (void)_wristStateChanged;	// IMP=0x001000000003464f
- (void)wristStateChanged:(id)arg1;	// IMP=0x0010000000034571
@property(readonly, nonatomic) long long wristState;
- (void)_testingOnCharger;	// IMP=0x00100000000344cc
- (void)_testingUnregisterNotifications;	// IMP=0x00100000000344a5
- (void)_testingRegisterNotifications;	// IMP=0x0010000000034470
- (void)_disablePowerStateMonitor;	// IMP=0x0010000000034403
- (void)_setupWristStateMonitor;	// IMP=0x0010000000034374
- (void)_setupPowerSourceMonitor;	// IMP=0x0010000000033da9
- (void)_setupLockStateMonitor;	// IMP=0x0010000000033d1a
- (void)_systemStateUnregisterObservers;	// IMP=0x0010000000033c92
- (void)_systemStateRegisterObservers;	// IMP=0x0010000000033c3f
- (void)_powerSourceUpdatePairedDeviceInfo:(id)arg1;	// IMP=0x00100000000333f3
- (void)_powerSourceLost:(id)arg1;	// IMP=0x00100000000332d2
- (void)_powerSourceChanged:(id)arg1;	// IMP=0x0010000000032f06
- (void)_nanoRegistryUnregisterChanges;	// IMP=0x0010000000032d08
- (void)_nanoRegistryRegisterChangesForDevice:(id)arg1;	// IMP=0x0010000000032815
- (void)_messageIDRemove:(id)arg1;	// IMP=0x00100000000326c5
- (void)_messageIDAdd:(id)arg1;	// IMP=0x0010000000032552
- (id)_messageFromPowerSource:(id)arg1;	// IMP=0x00100000000322a1
- (void)_messageHandleDashboardEntry:(id)arg1;	// IMP=0x0010000000032083
- (void)_messageHandlePowerSourceUpdate:(id)arg1;	// IMP=0x0010000000031f89
- (void)_messageHandleAllUpdate:(id)arg1;	// IMP=0x0010000000031d07
- (void)_messageHandleIncomingData:(id)arg1;	// IMP=0x0010000000031afc
- (void)_lockStateUpdate:(int)arg1;	// IMP=0x0010000000031a63
- (void)_lockStateHandleMessage:(id)arg1;	// IMP=0x0010000000031956
- (void)_lockStateChanged:(id)arg1;	// IMP=0x0010000000031893
@property(readonly, nonatomic) int lockState;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00100000000317bf
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00100000000316fb
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x0010000000031637
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000031463
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x00100000000312df
- (void)_idsUpdateConnectedState;	// IMP=0x0010000000030b56
- (void)_idsTriggerSyncForAnimation:(_Bool)arg1;	// IMP=0x0010000000030ab1
- (void)_idsTriggerSync;	// IMP=0x0010000000030a9d
- (void)_idsTimerInfoInvalidate;	// IMP=0x00100000000309e2
- (void)_idsTimerInfoFired;	// IMP=0x001000000003091d
- (void)_idsTimerInfoRestart;	// IMP=0x0010000000030791
- (void)_idsSendDashboardEntryToCompanion:(id)arg1;	// IMP=0x001000000003078b
- (void)_idsSendStateUpdate:(id)arg1 asWaking:(_Bool)arg2;	// IMP=0x00100000000302d1
- (_Bool)_idsHasDefaultDevice;	// IMP=0x001000000003017f
- (void)_idsEnsureSynced;	// IMP=0x001000000003003f
- (void)_idsEnsureCoalescersStopped;	// IMP=0x001000000002ffcd
- (void)_idsEnsureCoalescersStarted;	// IMP=0x001000000002fce3
- (id)_idsActiveDevice;	// IMP=0x001000000002fb85
- (void)_companionLinkRegisterEvents;	// IMP=0x001000000002fb7f
- (void)_companionLinkDevicesChanged;	// IMP=0x001000000002fa9f
- (_Bool)_companionLinkConnected;	// IMP=0x001000000002f8d7
- (void)_companionLinkDisable;	// IMP=0x001000000002f89f
- (void)_companionLinkEnable;	// IMP=0x001000000002f571
- (id)_queueWithFallbackQOS;	// IMP=0x001000000002f51c
- (void)_invalidate;	// IMP=0x001000000002f384
- (void)invalidate;	// IMP=0x001000000002f2fd
- (void)_activate;	// IMP=0x001000000002f0a8
- (void)activate;	// IMP=0x001000000002f021
- (id)init;	// IMP=0x001000000002ef10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
