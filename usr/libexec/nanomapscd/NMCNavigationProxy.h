//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARSessionStatus, GEOCompanionRouteContext, GEOCompanionRouteDetails, GEOCompanionRouteStatus, GEOCompanionRouteUpdate, MNCompanionNavigationAdapter, MapsDistanceUnitUpdater, NSLock, NSString, NavigationSettingsMonitor;

@interface NMCNavigationProxy : NSObject
{
    _Bool _activeDeviceSupportsNavigation;	// 8 = 0x8
    _Bool _activeDeviceNeedsUnpackedPointsRemoved;	// 9 = 0x9
    _Bool _sendAllUpdates;	// 10 = 0xa
    _Bool _isNavigating;	// 11 = 0xb
    NSLock *_routeLock;	// 16 = 0x10
    GEOCompanionRouteDetails *_companionRouteDetails;	// 24 = 0x18
    GEOCompanionRouteStatus *_companionRouteStatus;	// 32 = 0x20
    GEOCompanionRouteStatus *_lastSentCompanionRouteStatus;	// 40 = 0x28
    GEOCompanionRouteUpdate *_companionRouteUpdate;	// 48 = 0x30
    GEOCompanionRouteContext *_companionRouteContext;	// 56 = 0x38
    MNCompanionNavigationAdapter *_adapter;	// 64 = 0x40
    MapsDistanceUnitUpdater *_distanceUnitUpdater;	// 72 = 0x48
    NavigationSettingsMonitor *_settingsMonitor;	// 80 = 0x50
    CARSessionStatus *_carSessionStatus;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x0020000000004df9
- (void).cxx_destruct;	// IMP=0x0020000000008faf
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x0010000000008e96
- (void)sessionDidConnect:(id)arg1;	// IMP=0x0010000000008d7d
- (_Bool)_isCarPlayConnected;	// IMP=0x0010000000008d46
- (void)_legacy_sendPreviewRouteDetails:(id)arg1 context:(id)arg2;	// IMP=0x0010000000008b5d
- (void)_sendRouteUpdate:(id)arg1 routeContext:(id)arg2;	// IMP=0x00100000000089c2
- (_Bool)_shouldSendRouteStatus:(id)arg1 previousRouteStatus:(id)arg2;	// IMP=0x0010000000008630
- (void)_sendRouteStatus:(id)arg1 routeContext:(id)arg2;	// IMP=0x0010000000008446
- (void)_sendRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3;	// IMP=0x00100000000080e7
- (void)_cleanupNavigation;	// IMP=0x0010000000008007
- (void)_setupForNavigationWithRouteID:(id)arg1 context:(id)arg2;	// IMP=0x0010000000007d79
- (void)_updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2 routeUpdated:(_Bool)arg3;	// IMP=0x0010000000007a57
- (void)updateNavigationRouteWithUpdate:(id)arg1;	// IMP=0x00100000000079b4
- (void)updateNavigationRouteStatus:(id)arg1;	// IMP=0x001000000000799a
- (void)updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2;	// IMP=0x0010000000007982
- (void)_openOrCloseNavigationService;	// IMP=0x0010000000007735
- (void)_updateForActiveDevice;	// IMP=0x0010000000007568
- (void)connectionNeedsStateSynchronization:(id)arg1;	// IMP=0x0010000000007556
- (void)connection:(id)arg1 didChangeDeviceNearby:(_Bool)arg2;	// IMP=0x0010000000007544
- (void)_handleMessage:(id)arg1;	// IMP=0x0010000000006421
- (void)_registerMessageObservers;	// IMP=0x0010000000006074
- (int)currentUITargetForAnalytics:(long long)arg1;	// IMP=0x0010000000006057
- (void)stopNavigation;	// IMP=0x0010000000005f12
- (void)resumeNavigation;	// IMP=0x0010000000005e2c
- (void)pauseNavigation;	// IMP=0x0010000000005d41
- (void)_launchMapsForNavigation;	// IMP=0x00100000000059b3
- (_Bool)_prepareToStartNavigationWithStartDetails:(id)arg1;	// IMP=0x00100000000056cd
- (void)startNavigationWithDetails:(id)arg1;	// IMP=0x0010000000005584
- (void)startNavigationWithRouteID:(id)arg1 routeIndex:(unsigned long long)arg2 companionRouteContext:(id)arg3;	// IMP=0x0010000000005151
- (void)dealloc;	// IMP=0x00100000000050ce
- (id)init;	// IMP=0x0010000000004e7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

