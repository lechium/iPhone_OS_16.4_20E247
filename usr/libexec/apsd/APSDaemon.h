//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSIDSProxyManager, APSTaskListener, NSDate, NSMutableDictionary, NSString, NSTimer, PCSimpleTimer;
@protocol OS_dispatch_source, OS_xpc_object;

@interface APSDaemon : NSObject
{
    NSMutableDictionary *_environmentsToCouriers;	// 8 = 0x8
    PCSimpleTimer *_courierConnectTimer;	// 16 = 0x10
    void *_courierConnectTimerPowerAssertion;	// 24 = 0x18
    NSTimer *_inactivityTerminationTimer;	// 32 = 0x20
    APSIDSProxyManager *_proxyManager;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_sigTERMSource;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_sigUSR1Source;	// 56 = 0x38
    int _isConnectedToken;	// 64 = 0x40
    int _systemReadyToken;	// 68 = 0x44
    _Bool _systemReady;	// 72 = 0x48
    NSDate *_lastClientConnection;	// 80 = 0x50
    _Bool _hasEnabledCouriers;	// 88 = 0x58
    _Bool _systemIsShuttingDown;	// 89 = 0x59
    NSObject<OS_xpc_object> *_connection;	// 96 = 0x60
    NSString *_networkGuidanceString;	// 104 = 0x68
    APSTaskListener *_taskListener;	// 112 = 0x70
}

+ (void)setLaunchdLaunchSemaphoreEnabled:(_Bool)arg1;	// IMP=0x002000000004c3ed
- (void).cxx_destruct;	// IMP=0x002000000004e726
@property(retain, nonatomic) NSString *networkGuidanceString; // @synthesize networkGuidanceString=_networkGuidanceString;
- (double)keepAliveIntervalForEnvironment:(id)arg1;	// IMP=0x001000000004e672
- (id)getConnectionServerForEnvironment:(id)arg1 connectionPortName:(id)arg2 processName:(id)arg3 peerConnection:(id)arg4 isNewConnection:(_Bool *)arg5;	// IMP=0x001000000004de1d
- (void)courierHasNoConnections:(id)arg1;	// IMP=0x001000000004dcdf
- (void)shouldUseInternetDidChange:(id)arg1;	// IMP=0x001000000004dc09
- (void)courierConnectionStatusDidChange:(id)arg1;	// IMP=0x001000000004db33
@property(readonly, retain, nonatomic) APSIDSProxyManager *proxyManager;
- (void)proxyManager:(id)arg1 incomingPresenceWithGuid:(id)arg2 token:(id)arg3 hwVersion:(id)arg4 swVersion:(id)arg5 swBuild:(id)arg6 certificate:(id)arg7 nonce:(id)arg8 signature:(id)arg9 environmentName:(id)arg10;	// IMP=0x001000000004d776
- (void)proxyManager:(id)arg1 canUseProxyChanged:(_Bool)arg2;	// IMP=0x001000000004d573
- (void)_updateNetworkGuidance;	// IMP=0x001000000004cf29
- (void)invalidateDeviceIdentity;	// IMP=0x001000000004ccb3
- (void)requestCourierConnections;	// IMP=0x001000000004c9cc
- (id)courierForEnvironmentName:(id)arg1;	// IMP=0x001000000004c8b9
- (id)courierForEnvironment:(id)arg1;	// IMP=0x001000000004c8a3
- (void)_setCourier:(id)arg1 forEnvironment:(id)arg2;	// IMP=0x001000000004c88d
- (void)_removeCourierForEnvironment:(id)arg1;	// IMP=0x001000000004c877
- (void)_loadConnections;	// IMP=0x001000000004c3f3
- (void)_inactivityTerminationTimerFired:(id)arg1;	// IMP=0x001000000004c34d
- (void)_clearInactivityTerminationTimer;	// IMP=0x001000000004c2a8
- (void)_startInactivityTerminationTimerIfNecessary;	// IMP=0x001000000004c196
- (void)_enableAllCouriers;	// IMP=0x001000000004beed
- (void)_connectCouriersTimerFired;	// IMP=0x001000000004bdf8
- (void)_clearCourierConnectTimerAndPowerAssertion;	// IMP=0x001000000004bdaf
- (void)_updateCourierConnectTimerAndPowerAssertion;	// IMP=0x001000000004ba56
- (void)receivedClientConnection;	// IMP=0x001000000004b93a
- (void)updateSafeToSendFilterForce:(_Bool)arg1;	// IMP=0x001000000004b76a
- (_Bool)_systemIsReady;	// IMP=0x001000000004b719
- (void)_setupNotifyToken;	// IMP=0x001000000004b517
- (void)_performPeriodicSignal;	// IMP=0x001000000004b1ad
- (void)_schedulePeriodicSignal;	// IMP=0x001000000004b0ae
- (void)_receivedShutdownNotification;	// IMP=0x001000000004aec2
- (id)_connectionsDebuggingState;	// IMP=0x001000000004adc4
- (void)dealloc;	// IMP=0x001000000004acd4
- (id)init;	// IMP=0x001000000004a5c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

