//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HIDConnection, HIDDevice, HIDUserDevice, MISSING_TYPE, NSArray, NSNumber, NSString, NSXPCConnection;
@protocol GCBatteryServiceClientInterface, HIDEventDispatcher, OS_dispatch_queue, OS_dispatch_source;

@interface GCGamepadHIDServicePlugin : NSObject
{
    CDUnknownBlockType _cancelHandler;	// 8 = 0x8
    NSNumber *_prop;	// 16 = 0x10
    _Bool _activated;	// 24 = 0x18
    _Bool _clientAdded;	// 25 = 0x19
    NSObject<OS_dispatch_source> *_idleDispatchSource;	// 32 = 0x20
    struct BTSessionImpl *_session;	// 40 = 0x28
    _Bool _buttonHome;	// 48 = 0x30
    _Bool _buttonMenu;	// 49 = 0x31
    _Bool _buttonOptions;	// 50 = 0x32
    _Bool _buttonShare;	// 51 = 0x33
    struct {
        double directionPadUp;
        double directionPadDown;
        double directionPadLeft;
        double directionPadRight;
        double buttonA;
        double buttonB;
        double buttonX;
        double buttonY;
        double buttonL1;
        double buttonR1;
        double buttonL2;
        double buttonR2;
        _Bool leftThumbstick__rightThumbstick__buttonL3;
        _Bool buttonR3;
        unsigned int controllerType;
    } _gameControllerState;	// 56 = 0x38
    CDStruct_cd435f0f _gameControllerExtendedState;	// 176 = 0xb0
    unsigned int _motionSequenceNumber;	// 368 = 0x170
    CDStruct_06597ee6 _motionState;	// 376 = 0x178
    _Bool _hapticsActive;	// 480 = 0x1e0
    int _pendingHapticZeroReports;	// 484 = 0x1e4
    float _hapticDispatchFrequency;	// 488 = 0x1e8
    double _currentHapticClipTime;	// 496 = 0x1f0
    struct timespec _currentHapticDispatchTime;	// 504 = 0x1f8
    _Bool _loopHapticEvent;	// 520 = 0x208
    NSObject<OS_dispatch_source> *_hapticDispatchSource;	// 528 = 0x210
    NSXPCConnection *_daemonConnection;	// 536 = 0x218
    id <GCBatteryServiceClientInterface> _batteryClient;	// 544 = 0x220
    NSObject<OS_dispatch_queue> *_internalQueue;	// 552 = 0x228
    _Bool _bluetoothClassic;	// 560 = 0x230
    _Bool _usb;	// 561 = 0x231
    _Bool _bluetoothLE;	// 562 = 0x232
    _Bool _virtualDevice;	// 563 = 0x233
    unsigned int _service;	// 564 = 0x234
    float _idleTimeoutDuration;	// 568 = 0x238
    float _leftThumbstickNoiseBuffer;	// 572 = 0x23c
    float _rightThumbstickNoiseBuffer;	// 576 = 0x240
    float _leftThumbstickDeadzoneRadius;	// 580 = 0x244
    float _leftThumbstickAxisSnapRadius;	// 584 = 0x248
    float _rightThumbstickDeadzoneRadius;	// 588 = 0x24c
    float _rightThumbstickAxisSnapRadius;	// 592 = 0x250
    HIDConnection *_client;	// 600 = 0x258
    id <HIDEventDispatcher> _dispatcher;	// 608 = 0x260
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 616 = 0x268
    HIDDevice *_device;	// 624 = 0x270
    HIDUserDevice *_batteryUserDevice;	// 632 = 0x278
    unsigned long long _regID;	// 640 = 0x280
    unsigned long long _lastEventTime;	// 648 = 0x288
    NSString *_uniqueIdentifier;	// 656 = 0x290
    CDStruct_f4b747e6 *_batteryReport;	// 664 = 0x298
    NSArray *_hapticMotors;	// 672 = 0x2a0
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x001000000000274a
- (void).cxx_destruct;	// IMP=0x000000000000688e
@property(nonatomic) float rightThumbstickAxisSnapRadius; // @synthesize rightThumbstickAxisSnapRadius=_rightThumbstickAxisSnapRadius;
@property(nonatomic) float rightThumbstickDeadzoneRadius; // @synthesize rightThumbstickDeadzoneRadius=_rightThumbstickDeadzoneRadius;
@property(nonatomic) float leftThumbstickAxisSnapRadius; // @synthesize leftThumbstickAxisSnapRadius=_leftThumbstickAxisSnapRadius;
@property(nonatomic) float leftThumbstickDeadzoneRadius; // @synthesize leftThumbstickDeadzoneRadius=_leftThumbstickDeadzoneRadius;
@property(retain, nonatomic) NSArray *hapticMotors; // @synthesize hapticMotors=_hapticMotors;
@property(nonatomic) float hapticDispatchFrequency; // @synthesize hapticDispatchFrequency=_hapticDispatchFrequency;
@property(nonatomic) float rightThumbstickNoiseBuffer; // @synthesize rightThumbstickNoiseBuffer=_rightThumbstickNoiseBuffer;
@property(nonatomic) float leftThumbstickNoiseBuffer; // @synthesize leftThumbstickNoiseBuffer=_leftThumbstickNoiseBuffer;
@property(nonatomic) float idleTimeoutDuration; // @synthesize idleTimeoutDuration=_idleTimeoutDuration;
@property(readonly, nonatomic, getter=isVirtualDevice) _Bool virtualDevice; // @synthesize virtualDevice=_virtualDevice;
@property(readonly, nonatomic, getter=isBluetoothLE) _Bool bluetoothLE; // @synthesize bluetoothLE=_bluetoothLE;
@property(readonly, nonatomic, getter=isUSB) _Bool usb; // @synthesize usb=_usb;
@property(readonly, nonatomic, getter=isBluetoothClassic) _Bool bluetoothClassic; // @synthesize bluetoothClassic=_bluetoothClassic;
@property(readonly, nonatomic) CDStruct_f4b747e6 *batteryReport; // @synthesize batteryReport=_batteryReport;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long lastEventTime; // @synthesize lastEventTime=_lastEventTime;
@property(readonly, nonatomic) HIDUserDevice *batteryUserDevice; // @synthesize batteryUserDevice=_batteryUserDevice;
@property(readonly, nonatomic) HIDDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) unsigned int service; // @synthesize service=_service;
@property(nonatomic) __weak id <HIDEventDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) __weak HIDConnection *client; // @synthesize client=_client;
- (void)readBatteryWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006613
- (void)connectToGenericDeviceDriverConfigurationServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006601
- (void)connectToGameIntentServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000065ef
- (void)connectToBatteryServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000650b
- (void)connectToMotionServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000064f9
- (void)connectToAdaptiveTriggersServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000064e7
- (void)connectToLightServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000064d5
- (void)connectToNintendoJoyConFusionGestureServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000064c3
- (void)enqueueTransient:(id)arg1 hapticMotor:(unsigned long long)arg2;	// IMP=0x00000000000063f6
- (void)setHapticMotor:(unsigned long long)arg1 frequency:(float)arg2 amplitude:(float)arg3;	// IMP=0x0000000000006382
- (void)fetchDeviceRegistryIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000062fd
- (void)requestServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000623e
- (void)ping;	// IMP=0x00000000000061e2
- (float)defaultHapticDispatchFrequency;	// IMP=0x00000000000061d4
- (id)defaultHapticMotors;	// IMP=0x00000000000061bb
- (float)defaultRightAxisSnapRadius;	// IMP=0x00000000000061b2
- (float)defaultLeftAxisSnapRadius;	// IMP=0x00000000000061a9
- (float)defaultRightThumbstickDeadzoneRadius;	// IMP=0x000000000000619b
- (float)defaultLeftThumbstickDeadzoneRadius;	// IMP=0x000000000000618d
- (float)defaultIdleTimeoutDuration;	// IMP=0x000000000000617f
- (float)defaultRightThumbstickNoiseBuffer;	// IMP=0x0000000000006176
- (float)defaultLeftThumbstickNoiseBuffer;	// IMP=0x000000000000616d
- (void)enableHaptics;	// IMP=0x0000000000005ea4
- (_Bool)updateHapticMotor:(id)arg1;	// IMP=0x0000000000005d9c
- (void)stopHaptics;	// IMP=0x0000000000005bb2
- (unsigned int)numberOfTimesToSendZeroHapticReport;	// IMP=0x0000000000005ba7
- (_Bool)isHapticsActive;	// IMP=0x0000000000005b9b
- (void)updateHaptics:(_Bool)arg1;	// IMP=0x0000000000005b95
- (void)dispatchHapticEvent;	// IMP=0x0000000000005b8f
- (_Bool)isAnyHapticMotorEnabled;	// IMP=0x000000000000597b
- (void)dispatchShareButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000058a7
- (void)dispatchOptionsButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000057d3
- (void)dispatchMenuButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000056ff
- (void)dispatchHomeButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x000000000000562b
- (void)dispatchGameControllerExtendedEventWithState:(CDStruct_cd435f0f)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000005116
- (void)dispatchMotionEventWithState:(CDStruct_06597ee6)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000004e7b
- (_Bool)isTwoAxisInputIdle:(MISSING_TYPE **)arg1 prevInput:(MISSING_TYPE **)arg2 noiseBuffer:(float)arg3;	// IMP=0x0000000000004e22
- (void)applyDeadzone:(float)arg1 axisSnapRadius:(float)arg2 input:(MISSING_TYPE **)arg3;	// IMP=0x0000000000004d21
- (void)dispatchEvent:(id)arg1;	// IMP=0x0000000000004d0a
- (void)dispatchEvent:(id)arg1 updateLastEventTime:(_Bool)arg2;	// IMP=0x0000000000004c21
- (id)createEvent:(unsigned int)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000004bd3
- (_Bool)shouldDisconnectWhenIdle;	// IMP=0x0000000000004bcb
- (_Bool)isIdle;	// IMP=0x0000000000004a59
- (void)updateIdleState;	// IMP=0x000000000000499f
- (void)scheduleIdleTimer;	// IMP=0x0000000000004869
- (_Bool)shouldCreateBatteryDevice;	// IMP=0x0000000000004861
- (void)sendBatteryReport;	// IMP=0x0000000000004754
- (void)updateClientBattery;	// IMP=0x0000000000004687
- (void)createVirtualHIDDeviceForBattery;	// IMP=0x0000000000004346
- (void)disconnect;	// IMP=0x00000000000040e4
- (void)setupRawReportHandling;	// IMP=0x00000000000040de
- (id)createHIDDeviceForService:(unsigned int)arg1;	// IMP=0x00000000000040aa
- (void)clientNotification:(id)arg1 added:(_Bool)arg2;	// IMP=0x0000000000003fb6
- (void)setDispatchQueue:(id)arg1;	// IMP=0x0000000000003ec9
- (void)cancel;	// IMP=0x0000000000003d6e
- (void)activate;	// IMP=0x0000000000003cef
- (void)setCancelHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003af1
- (void)setEventDispatcher:(id)arg1;	// IMP=0x0000000000003a33
- (id)eventMatching:(id)arg1 forClient:(id)arg2;	// IMP=0x00000000000038c2
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;	// IMP=0x00000000000037ed
- (id)propertyForKey:(id)arg1 client:(id)arg2;	// IMP=0x00000000000034b4
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000003179
- (id)initWithService:(unsigned int)arg1;	// IMP=0x0000000000002b06
- (void)initGameControllerDaemonXPC;	// IMP=0x0000000000002752

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

