//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, GKApplicationStateMonitor, GKNATObserver, GKReachability, GKWidgetEventListener, NSCountedSet, NSData, NSDate, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface GKDataRequestManager : NSObject
{
    NSXPCListener *_publicListener;	// 8 = 0x8
    long long _currentEnvironment;	// 16 = 0x10
    int _natType;	// 24 = 0x18
    GKNATObserver *_natObserver;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_natSemaphore;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_natQueue;	// 48 = 0x30
    NSData *_pushToken;	// 56 = 0x38
    _Bool _receivesMemoryWarnings;	// 64 = 0x40
    long long _activePushEnvironment;	// 72 = 0x48
    NSDate *_nearbyQueryLastCheckDate;	// 80 = 0x50
    double _nearbyQueryAllowance;	// 88 = 0x58
    APSConnection *_apsConnection;	// 96 = 0x60
    APSConnection *_pushConnectionProd;	// 104 = 0x68
    APSConnection *_pushConnectionDev;	// 112 = 0x70
    NSMutableDictionary *_transactionBag;	// 120 = 0x78
    NSCountedSet *_transactionCounts;	// 128 = 0x80
    GKApplicationStateMonitor *_applicationStateMonitor;	// 136 = 0x88
    NSString *_authenticatingWithSettingsBundleID;	// 144 = 0x90
    GKReachability *_reachability;	// 152 = 0x98
    GKWidgetEventListener *_widgetEventListner;	// 160 = 0xa0
}

+ (id)ratingsQueue;	// IMP=0x00200000001b52bc
+ (id)statsQueue;	// IMP=0x00100000001b5265
+ (_Bool)allowSelfSignedCertForEnvironment:(long long)arg1;	// IMP=0x00100000001aee01
+ (id)syncQueue;	// IMP=0x00100000001abf57
+ (id)pushQueue;	// IMP=0x00100000001abf00
+ (id)clientQueue;	// IMP=0x00100000001abeef
+ (id)sharedManager;	// IMP=0x00100000001abede
- (void).cxx_destruct;	// IMP=0x00100000001b5498
@property(retain, nonatomic) GKWidgetEventListener *widgetEventListner; // @synthesize widgetEventListner=_widgetEventListner;
@property(retain, nonatomic) GKReachability *reachability; // @synthesize reachability=_reachability;
@property(retain) NSString *authenticatingWithSettingsBundleID; // @synthesize authenticatingWithSettingsBundleID=_authenticatingWithSettingsBundleID;
@property(retain, nonatomic) GKApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(retain, nonatomic) NSCountedSet *transactionCounts; // @synthesize transactionCounts=_transactionCounts;
@property(retain, nonatomic) NSMutableDictionary *transactionBag; // @synthesize transactionBag=_transactionBag;
@property(retain, nonatomic) APSConnection *pushConnectionDev; // @synthesize pushConnectionDev=_pushConnectionDev;
@property(retain, nonatomic) APSConnection *pushConnectionProd; // @synthesize pushConnectionProd=_pushConnectionProd;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property double nearbyQueryAllowance; // @synthesize nearbyQueryAllowance=_nearbyQueryAllowance;
@property(retain) NSDate *nearbyQueryLastCheckDate; // @synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate;
@property(nonatomic) _Bool receivesMemoryWarnings; // @synthesize receivesMemoryWarnings=_receivesMemoryWarnings;
@property(readonly) long long currentEnvironment; // @synthesize currentEnvironment=_currentEnvironment;
- (id)storeBag;	// IMP=0x00100000001b5313
- (void)terminate;	// IMP=0x00100000001b4fc1
- (void)beginTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b4c72
- (void)beginTransaction:(id)arg1;	// IMP=0x00100000001b4c5e
- (void)endTransaction:(id)arg1;	// IMP=0x00100000001b498c
- (void)processIncomingMessage:(id)arg1;	// IMP=0x00100000001b4720
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00100000001b3c84
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00100000001b378d
- (void)processIncomingiMessageInvite:(id)arg1;	// IMP=0x00100000001b2e3b
- (void)didReceiveIncomingIDSMessage:(id)arg1;	// IMP=0x00100000001b2e29
- (void)gameCenterDidBecomeRestricted;	// IMP=0x00100000001b2cb1
- (void)loadLocalizedGameNameForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b2982
- (void)appStateChanged:(id)arg1;	// IMP=0x00100000001b23a1
- (void)terminateClient:(id)arg1;	// IMP=0x00100000001b2255
- (void)synchronizeBagWithPreferences;	// IMP=0x00100000001b2017
- (void)sendPushTokenForClient:(id)arg1;	// IMP=0x00100000001b2011
- (void)loadConnectivitySettingsAndStartNATObserver;	// IMP=0x00100000001b1b03
- (void)_resetNATObserverWithSettings:(id)arg1;	// IMP=0x00100000001b18f8
- (void)updateActivePushEnvironment;	// IMP=0x00100000001b1493
- (void)_updatePushEnvironmentWithStoreBag:(id)arg1;	// IMP=0x00100000001b1118
@property(retain) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)_setPushToken:(id)arg1;	// IMP=0x00100000001b0e1c
@property long long activePushEnvironment; // @synthesize activePushEnvironment=_activePushEnvironment;
- (void)_setActivePushEnvironment:(long long)arg1;	// IMP=0x00100000001b0a9e
- (void)getValidNATTypeWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b0678
- (void)NATTypeDidChange:(int)arg1;	// IMP=0x00100000001b04fc
@property int natType; // @synthesize natType=_natType;
- (void)_waitForValidNATType;	// IMP=0x00100000001b02cd
- (void)_setConnectivitySettings:(id)arg1;	// IMP=0x00100000001b0020
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000001af02c
- (void)resetEnvironment;	// IMP=0x00100000001aee1e
@property(readonly, nonatomic) long long preferredEnvironment;
- (void)dealloc;	// IMP=0x00100000001aecc7
- (void)clearPushEnvironment;	// IMP=0x00100000001aebee
- (void)_clearPushConnections;	// IMP=0x00100000001ae8e1
- (void)updateNotificationTopics;	// IMP=0x00100000001ae87f
- (void)setUpCloudKitNotificationTopics;	// IMP=0x00100000001ae879
- (void)_updateNotificationTopics;	// IMP=0x00100000001adf20
@property(readonly, nonatomic) APSConnection *activePushConnection; // @dynamic activePushConnection;
- (id)pushConnectionForEnvironment:(long long)arg1;	// IMP=0x00100000001aded7
- (void)storeBagChanged:(id)arg1;	// IMP=0x00100000001adadf
- (void)finishStartup;	// IMP=0x00100000001ac507
- (void)clientProxy:(id)arg1 didRefreshContentsForDataType:(unsigned int)arg2 userInfo:(id)arg3;	// IMP=0x00100000001ac501
- (void)reachabilityDidChange:(id)arg1;	// IMP=0x00100000001ac4bb
- (void)iCloudAccountAvailabilityChanged:(id)arg1;	// IMP=0x00100000001ac4a0
- (id)init;	// IMP=0x00100000001ac1f0
- (void)lockStatusDidChange;	// IMP=0x00100000001ac1ea
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ac184
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001abfae
- (id)updateRequestWithPushToken:(id)arg1;	// IMP=0x00100000000a62c3
- (void)clearAllNearbyInvites;	// IMP=0x00100000001ab91a
- (void)handleNearbyInviteResponse:(id)arg1;	// IMP=0x00100000001ab2a5
- (void)nearbyInviteWasCancelled:(id)arg1;	// IMP=0x00100000001aaef8
- (void)presentNearbyInvite:(id)arg1;	// IMP=0x00100000001aa220
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00100000001b58e3
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x00100000001b5585
@property(retain, nonatomic) NSMutableSet *removedApp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

