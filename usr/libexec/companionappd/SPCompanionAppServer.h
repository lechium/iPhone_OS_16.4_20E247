//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NRDevice, NSDate, NSDictionary, NSMutableDictionary, NSString, NSXPCListener, SPUsageTrack;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SPCompanionAppServer : NSObject
{
    _Bool _paired;	// 8 = 0x8
    unsigned int _nextTransactionID;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queueRemote;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_gizmoApplicationsUpdateTimer;	// 32 = 0x20
    NSXPCListener *_localListener;	// 40 = 0x28
    NSMutableDictionary *_localConnections;	// 48 = 0x30
    NRDevice *_pairedDevice;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 64 = 0x40
    NSMutableDictionary *_outstandingtransactions;	// 72 = 0x48
    SPUsageTrack *_usageTrack;	// 80 = 0x50
    NSMutableDictionary *_dateOfFirstAttemptToLaunchGizmoAppsByBundleID;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_processAssertionQueue;	// 96 = 0x60
    BKSProcessAssertion *_processAssertion;	// 104 = 0x68
    NSString *_activeApplication;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_processAssertionForXcodeQueue;	// 120 = 0x78
    BKSProcessAssertion *_processAssertionForXcode;	// 128 = 0x80
    NSString *_plugInIdentifierForXcodeProcessAssertion;	// 136 = 0x88
    id _batteryStateObserver;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_remoteInterfaceProcessAssertionsQueue;	// 152 = 0x98
    NSMutableDictionary *_remoteInterfaceProcessAssertions;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_launchSockPuppetAppQueue;	// 168 = 0xa8
    NSString *_launchSockPuppetAppCompanionAppIdentifer;	// 176 = 0xb0
    NSDictionary *_launchSockPuppetAppOptions;	// 184 = 0xb8
    CDUnknownBlockType _launchSockPuppetAppCompletion;	// 192 = 0xc0
    NSObject<OS_dispatch_source> *_launchSockPuppetCancelLaunchTimer;	// 200 = 0xc8
    NSDate *_dateOfFirstUnlock;	// 208 = 0xd0
    NSMutableDictionary *_extensionsDoingSnapshot;	// 216 = 0xd8
    NSObject<OS_dispatch_queue> *_extensionsDoingSnapshotQueue;	// 224 = 0xe0
    NSMutableDictionary *_lastExtensionKilledDates;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_lastExtensionKilledDatesQueue;	// 240 = 0xf0
    double _timingTest_IDSReceiveTime;	// 248 = 0xf8
    double _timingTest_IDSSendTime;	// 256 = 0x100
    unsigned long long _timingTest_IDSSendSize;	// 264 = 0x108
    NSObject<OS_dispatch_queue> *_timingTest_queue;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0020000000017197
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timingTest_queue; // @synthesize timingTest_queue=_timingTest_queue;
@property(nonatomic) unsigned long long timingTest_IDSSendSize; // @synthesize timingTest_IDSSendSize=_timingTest_IDSSendSize;
@property(nonatomic) double timingTest_IDSSendTime; // @synthesize timingTest_IDSSendTime=_timingTest_IDSSendTime;
@property(nonatomic) double timingTest_IDSReceiveTime; // @synthesize timingTest_IDSReceiveTime=_timingTest_IDSReceiveTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lastExtensionKilledDatesQueue; // @synthesize lastExtensionKilledDatesQueue=_lastExtensionKilledDatesQueue;
@property(retain, nonatomic) NSMutableDictionary *lastExtensionKilledDates; // @synthesize lastExtensionKilledDates=_lastExtensionKilledDates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *extensionsDoingSnapshotQueue; // @synthesize extensionsDoingSnapshotQueue=_extensionsDoingSnapshotQueue;
@property(retain) NSMutableDictionary *extensionsDoingSnapshot; // @synthesize extensionsDoingSnapshot=_extensionsDoingSnapshot;
@property(retain, nonatomic) NSDate *dateOfFirstUnlock; // @synthesize dateOfFirstUnlock=_dateOfFirstUnlock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *launchSockPuppetCancelLaunchTimer; // @synthesize launchSockPuppetCancelLaunchTimer=_launchSockPuppetCancelLaunchTimer;
@property(copy, nonatomic) CDUnknownBlockType launchSockPuppetAppCompletion; // @synthesize launchSockPuppetAppCompletion=_launchSockPuppetAppCompletion;
@property(retain, nonatomic) NSDictionary *launchSockPuppetAppOptions; // @synthesize launchSockPuppetAppOptions=_launchSockPuppetAppOptions;
@property(retain, nonatomic) NSString *launchSockPuppetAppCompanionAppIdentifer; // @synthesize launchSockPuppetAppCompanionAppIdentifer=_launchSockPuppetAppCompanionAppIdentifer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *launchSockPuppetAppQueue; // @synthesize launchSockPuppetAppQueue=_launchSockPuppetAppQueue;
@property(retain, nonatomic) NSMutableDictionary *remoteInterfaceProcessAssertions; // @synthesize remoteInterfaceProcessAssertions=_remoteInterfaceProcessAssertions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *remoteInterfaceProcessAssertionsQueue; // @synthesize remoteInterfaceProcessAssertionsQueue=_remoteInterfaceProcessAssertionsQueue;
@property(retain, nonatomic) id batteryStateObserver; // @synthesize batteryStateObserver=_batteryStateObserver;
@property(retain, nonatomic) NSString *plugInIdentifierForXcodeProcessAssertion; // @synthesize plugInIdentifierForXcodeProcessAssertion=_plugInIdentifierForXcodeProcessAssertion;
@property(retain) BKSProcessAssertion *processAssertionForXcode; // @synthesize processAssertionForXcode=_processAssertionForXcode;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processAssertionForXcodeQueue; // @synthesize processAssertionForXcodeQueue=_processAssertionForXcodeQueue;
@property(retain, nonatomic) NSString *activeApplication; // @synthesize activeApplication=_activeApplication;
@property(retain) BKSProcessAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processAssertionQueue; // @synthesize processAssertionQueue=_processAssertionQueue;
@property(retain, nonatomic) NSMutableDictionary *dateOfFirstAttemptToLaunchGizmoAppsByBundleID; // @synthesize dateOfFirstAttemptToLaunchGizmoAppsByBundleID=_dateOfFirstAttemptToLaunchGizmoAppsByBundleID;
@property(retain, nonatomic) SPUsageTrack *usageTrack; // @synthesize usageTrack=_usageTrack;
@property(nonatomic) unsigned int nextTransactionID; // @synthesize nextTransactionID=_nextTransactionID;
@property(retain, nonatomic) NSMutableDictionary *outstandingtransactions; // @synthesize outstandingtransactions=_outstandingtransactions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(retain, nonatomic) NRDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property _Bool paired; // @synthesize paired=_paired;
@property(retain) NSMutableDictionary *localConnections; // @synthesize localConnections=_localConnections;
@property(retain) NSXPCListener *localListener; // @synthesize localListener=_localListener;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *gizmoApplicationsUpdateTimer; // @synthesize gizmoApplicationsUpdateTimer=_gizmoApplicationsUpdateTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queueRemote; // @synthesize queueRemote=_queueRemote;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)connection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x0010000000016c6f
- (id)applicationIdentifierFromXPCConnection:(id)arg1;	// IMP=0x0010000000016bab
- (void)activeComplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000016a1c
- (_Bool)_isApplicationViewControllerActivate:(id)arg1;	// IMP=0x0010000000016886
- (void)_sendTextSizeToApplication:(id)arg1 onlyIfChanged:(_Bool)arg2;	// IMP=0x001000000001670a
- (id)_textSize;	// IMP=0x0010000000016648
- (id)_textSizeChanged;	// IMP=0x00100000000165d0
- (_Bool)isExtensionDoingSnapshot:(id)arg1;	// IMP=0x0010000000016488
- (void)extensionDidEndSnapshot:(id)arg1;	// IMP=0x0010000000016266
- (void)extensionDidBeginSnapshot:(id)arg1;	// IMP=0x0010000000015eca
- (id)logStringArray:(id)arg1;	// IMP=0x0010000000015e40
- (id)logDictionary:(id)arg1;	// IMP=0x0010000000015969
- (id)decodeInData:(id)arg1;	// IMP=0x00100000000156e6
- (id)decodeOutData:(id)arg1;	// IMP=0x0010000000014efb
- (id)decodeProtoData:(id)arg1;	// IMP=0x0010000000014dd2
- (id)transactionDictForID:(id)arg1 removeFromOutstanding:(_Bool)arg2;	// IMP=0x0010000000014a6f
- (void)sendAndTrackTransactionDict:(id)arg1 withCompletion:(id)arg2;	// IMP=0x001000000001458a
- (_Bool)isPaired;	// IMP=0x0010000000014582
- (void)nanoRegistryChanged:(id)arg1;	// IMP=0x001000000001449f
- (_Bool)showUserNotificationWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x0010000000014323
- (void)releaseRemoteInterfaceAssertionsForPluginIdentifer:(id)arg1;	// IMP=0x0010000000013f07
- (void)releaseProcessAssertionForXcode;	// IMP=0x0010000000013c10
- (void)takeProcessAssertionForXcode:(id)arg1;	// IMP=0x001000000001313d
- (void)setApplicationIDForXcodeProcessAssertion:(id)arg1;	// IMP=0x0010000000012c72
- (void)releaseProcessAssertion:(id)arg1;	// IMP=0x00100000000129f4
- (void)_applicationDeactivated:(id)arg1;	// IMP=0x0010000000012818
- (void)_applicationActivated:(id)arg1;	// IMP=0x00100000000127b7
- (void)handleIncomingPlist:(id)arg1;	// IMP=0x0010000000010e83
- (id)appBundleIDFromPlist:(id)arg1;	// IMP=0x0010000000010e49
- (void)handleIncomingData:(id)arg1;	// IMP=0x0010000000010bb4
- (_Bool)unlockedSinceBoot;	// IMP=0x0010000000010ba2
- (void)incomingData:(id)arg1;	// IMP=0x0010000000010b3f
- (void)_saveReceiveTime;	// IMP=0x0010000000010a9b
- (void)_saveSendTimeAndSize:(unsigned long long)arg1;	// IMP=0x00100000000109c9
- (void)handleIncomingProtoPlist:(id)arg1;	// IMP=0x00100000000106a4
- (void)incomingProtobuf:(id)arg1;	// IMP=0x001000000001058e
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000104f5
- (void)requestTimingData:(id)arg1 timingMetaData:(id)arg2;	// IMP=0x001000000001029b
- (void)sendCacheRequest:(id)arg1 identifier:(id)arg2;	// IMP=0x001000000001020e
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000010146
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3;	// IMP=0x001000000000fefa
- (void)extensionWithIdentifier:(id)arg1 gotUnknownInterfaceController:(id)arg2;	// IMP=0x001000000000fdec
- (void)wakeExtensionForWatchApp:(id)arg1;	// IMP=0x001000000000fcf4
- (void)hideUserNotification;	// IMP=0x001000000000fc4d
- (void)showUserNotification:(long long)arg1 applicationName:(id)arg2;	// IMP=0x001000000000fb2b
- (void)xcodeWillInstallSockPuppetAppWithCompanionAppIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000fa5b
- (void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f50c
- (void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f05a
- (void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e7cb
- (void)_cancelLaunchSockPuppetAppTimeout;	// IMP=0x001000000000e683
- (void)_sockPuppetAppListUpdatedToLaunchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 acxRetryGeneration:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000d3a7
- (void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000cc49
- (void)fetchInstalledApplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000cbd3
- (void)killExtensionForAppIdentifier:(id)arg1;	// IMP=0x001000000000ca69
- (void)sendData:(id)arg1 toApplication:(id)arg2;	// IMP=0x001000000000c725
- (void)sendProtoData:(id)arg1 toCompanionApplication:(id)arg2 fromIdentifier:(id)arg3;	// IMP=0x001000000000c466
- (void)sendData:(id)arg1 toCompanionApplication:(id)arg2 fromIdentifier:(id)arg3;	// IMP=0x001000000000c1a5
- (void)sendToRemoteInterface:(id)arg1 call:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b76d
- (void)sendPlist:(id)arg1 securityType:(long long)arg2;	// IMP=0x001000000000b753
- (_Bool)shouldKillExtensionOnError:(id)arg1;	// IMP=0x001000000000b566
- (void)clearLastResetDateForPluginIdentifier:(id)arg1;	// IMP=0x001000000000b482
- (void)setLastExtensionKilledDateForPluginIdentifier:(id)arg1;	// IMP=0x001000000000b2f7
- (void)sendProtobuf:(id)arg1 sender:(id)arg2 timeOut:(double)arg3 securityType:(long long)arg4;	// IMP=0x001000000000ae53
- (void)sendPlist:(id)arg1 timeOut:(double)arg2 securityType:(long long)arg3;	// IMP=0x001000000000ad19
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000a6ca
- (void)sendFirstUnlockStatusToGizmo;	// IMP=0x001000000000a52e
- (_Bool)_checkUnlockedSinceBoot;	// IMP=0x001000000000a526
- (_Bool)_unlockedSinceBoot;	// IMP=0x001000000000a502
- (void)cancelGizmoApplicationsUpdateTimer;	// IMP=0x001000000000a4cc
- (void)setup;	// IMP=0x001000000000a48f
- (void)logDataSent:(unsigned long long)arg1 application:(id)arg2;	// IMP=0x001000000000a407
- (id)_setupSignal:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a2e1
- (void)_setupSignalHandlers;	// IMP=0x0010000000009d6f
- (id)init;	// IMP=0x001000000000947d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

