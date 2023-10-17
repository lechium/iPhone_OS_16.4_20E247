//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSApplicationStateMonitor, FBSDisplayLayoutMonitor, NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSXPCListener, UADispatchScheduler, UALocalItemReceiver;

@interface UAUserActivityClientProcessesController
{
    NSXPCListener *_activityManagerListener;	// 8 = 0x8
    NSMutableSet *_clients;	// 16 = 0x10
    NSMutableDictionary *_userActivityClientsByPID;	// 24 = 0x18
    NSMutableSet *_additionalUserActivityAdvertisableItems;	// 32 = 0x20
    NSMutableDictionary *_proxiedClients;	// 40 = 0x28
    NSMutableDictionary *_userActivityClientsByBundleID;	// 48 = 0x30
    NSMutableSet *_visibleUserActivityClients;	// 56 = 0x38
    FBSDisplayLayoutMonitor *_mainDisplayLayoutMonitor;	// 64 = 0x40
    FBSDisplayLayoutMonitor *_carPlayDisplayLayoutMonitor;	// 72 = 0x48
    BKSApplicationStateMonitor *_appStateMonitor;	// 80 = 0x50
    NSString *_frontBundleID;	// 88 = 0x58
    UALocalItemReceiver *_localReceiver;	// 96 = 0x60
    UADispatchScheduler *_layoutUpdateScheduler;	// 104 = 0x68
    NSArray *_mainScreenBundleIdentifiersInOrder;	// 112 = 0x70
    NSArray *_carPlayScreenBundleIdentifiersInOrder;	// 120 = 0x78
    NSDate *_ignoreLockScreenUntil;	// 128 = 0x80
    NSArray *_DEBUG_lastEligibleItems;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0020000000055058
@property(readonly, copy) NSArray *DEBUG_lastEligibleItems; // @synthesize DEBUG_lastEligibleItems=_DEBUG_lastEligibleItems;
@property(copy) NSDate *ignoreLockScreenUntil; // @synthesize ignoreLockScreenUntil=_ignoreLockScreenUntil;
@property(copy) NSArray *carPlayScreenBundleIdentifiersInOrder; // @synthesize carPlayScreenBundleIdentifiersInOrder=_carPlayScreenBundleIdentifiersInOrder;
@property(copy) NSArray *mainScreenBundleIdentifiersInOrder; // @synthesize mainScreenBundleIdentifiersInOrder=_mainScreenBundleIdentifiersInOrder;
@property(readonly, retain) UADispatchScheduler *layoutUpdateScheduler; // @synthesize layoutUpdateScheduler=_layoutUpdateScheduler;
@property(retain) UALocalItemReceiver *localReceiver; // @synthesize localReceiver=_localReceiver;
@property(readonly, retain) NSMutableDictionary *proxiedClients; // @synthesize proxiedClients=_proxiedClients;
@property(copy) NSString *frontBundleID; // @synthesize frontBundleID=_frontBundleID;
@property(retain) BKSApplicationStateMonitor *appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property(readonly, retain) FBSDisplayLayoutMonitor *carPlayDisplayLayoutMonitor; // @synthesize carPlayDisplayLayoutMonitor=_carPlayDisplayLayoutMonitor;
@property(readonly, retain) FBSDisplayLayoutMonitor *mainDisplayLayoutMonitor; // @synthesize mainDisplayLayoutMonitor=_mainDisplayLayoutMonitor;
- (id)statusString;	// IMP=0x0010000000054349
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000541da
- (id)recentEligibleItemsInOrder:(double)arg1;	// IMP=0x0010000000053df9
- (id)eligibleAdvertiseableItemsInOrder;	// IMP=0x0010000000052ac1
- (id)items;	// IMP=0x001000000005280a
- (_Bool)registerAsProxyApplication:(id)arg1 forPid:(int)arg2;	// IMP=0x00100000000524e3
- (id)advertiseableItemForBundleIdentifier:(id)arg1;	// IMP=0x0010000000052480
- (void)handleAppStateMonitorUpdate:(id)arg1;	// IMP=0x00100000000519dc
- (void)removeClientActivityClient:(id)arg1;	// IMP=0x0010000000051254
- (id)userActivityClientForBundleIdentifier:(id)arg1;	// IMP=0x00100000000511b8
- (_Bool)removeAdditionalUserActivityAdvertisableItems:(id)arg1;	// IMP=0x001000000005110b
- (_Bool)addAdditionalUserActivityAdvertisableItems:(id)arg1;	// IMP=0x001000000005105e
@property(readonly, copy) NSSet *additionalUserActivityAdvertisableItems;
- (id)userActivityClientForPID:(int)arg1;	// IMP=0x0010000000050f3c
- (id)userActivityClientForUUID:(id)arg1;	// IMP=0x0010000000050ceb
@property(readonly, copy) NSSet *visibleUserActivityClients; // @dynamic visibleUserActivityClients;
@property(readonly, copy) NSArray *userActivityClients; // @dynamic userActivityClients;
- (id)userActivityInfoForUUID:(id)arg1;	// IMP=0x001000000005061f
- (_Bool)clientIsActive:(id)arg1;	// IMP=0x00100000000503cf
- (void)addUserActivityClient:(id)arg1;	// IMP=0x0010000000050067
- (_Bool)ifLockScreenIsActive:(id)arg1 visibleBundleIdentifiers:(id)arg2;	// IMP=0x001000000004f90d
- (id)determineVisibleOrderingForProcessesWithUserActivities:(id)arg1 previousBundleIDOrdering:(id)arg2;	// IMP=0x001000000004ef98
- (double)intervalToDelaySuspensionOfAdvertisingForItem:(id)arg1;	// IMP=0x001000000004ee71
- (_Bool)updateCarPlayScreenLayout:(id)arg1;	// IMP=0x001000000004ec8d
- (_Bool)updateMainScreenLayout:(id)arg1;	// IMP=0x001000000004e96e
- (_Bool)resume;	// IMP=0x001000000004e61e
- (_Bool)suspend;	// IMP=0x001000000004e592
- (void)dealloc;	// IMP=0x001000000004e42e
- (id)initWithManager:(id)arg1 name:(id)arg2;	// IMP=0x001000000004de02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
