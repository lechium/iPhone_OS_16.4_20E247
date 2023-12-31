//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRDAVHostedRoutingService, MRDAVLocalDeviceCommitManager, MRDAVRoutingDataSource, MRDAVSystemEndpointController, MRDAutoConnectionController, MRDExternalDeviceHomeServer, MRDIdleTopologySimplifier, MRDProactivePrepareForSetQueueSender, MROSTransaction, MSVSystemDialog, NSDate, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;

@interface MRDAVRoutingServer : NSObject
{
    MRDAutoConnectionController *_autoConnectionController;	// 8 = 0x8
    NSMutableSet *_routeUIDsToIgnorePortStatusFailures;	// 16 = 0x10
    NSDate *_lastClusterConnectionFailureDate;	// 24 = 0x18
    NSMutableSet *_reconnaissanceSessions;	// 32 = 0x20
    NSMutableArray *_mostRecentlyPickedDevices;	// 40 = 0x28
    int _mostRecentStatus;	// 48 = 0x30
    MRDExternalDeviceHomeServer *_homeServer;	// 56 = 0x38
    NSOperationQueue *_workerOperationQueue;	// 64 = 0x40
    MRDAVLocalDeviceCommitManager *_localDeviceCommitManager;	// 72 = 0x48
    MRDIdleTopologySimplifier *_topologySimplifier;	// 80 = 0x50
    MRDProactivePrepareForSetQueueSender *_proactivePrepareForSetQueueSender;	// 88 = 0x58
    _Bool _airplayActive;	// 96 = 0x60
    MRDAVRoutingDataSource *_routingDataSource;	// 104 = 0x68
    MRDAVHostedRoutingService *_hostedRoutingService;	// 112 = 0x70
    MRDAVSystemEndpointController *_systemEndpointController;	// 120 = 0x78
    MSVSystemDialog *_activePasswordDialog;	// 128 = 0x80
    MISSING_TYPE *_activeDialog;	// 136 = 0x88
    MROSTransaction *_discoveryTransaction;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00200000000ee45a
@property(retain, nonatomic) MROSTransaction *discoveryTransaction; // @synthesize discoveryTransaction=_discoveryTransaction;
@property(nonatomic) __weak MSVSystemDialog *activeDialog; // @synthesize activeDialog=_activeDialog;
@property(retain, nonatomic) MSVSystemDialog *activePasswordDialog; // @synthesize activePasswordDialog=_activePasswordDialog;
@property(readonly, nonatomic) _Bool airplayActive; // @synthesize airplayActive=_airplayActive;
@property(readonly, nonatomic) MRDAVSystemEndpointController *systemEndpointController; // @synthesize systemEndpointController=_systemEndpointController;
@property(readonly, nonatomic) MRDAVHostedRoutingService *hostedRoutingService; // @synthesize hostedRoutingService=_hostedRoutingService;
@property(readonly, nonatomic) MRDAVRoutingDataSource *routingDataSource; // @synthesize routingDataSource=_routingDataSource;
- (void)_reevaluateAirplayActive;	// IMP=0x00100000000ee328
- (void)_predictGroupLeaderForOutputDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ee02f
- (void)_createEndpointForOutputDeviceIDsLegacy:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ed787
- (void)createHostedEndpointForOutputDeviceUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000eb907
- (void)_createEndpointForOutputDeviceIDs:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000eb8f5
- (void)_createEndpointForOutputDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000eb8de
- (id)_createAirPlaySecuritySettings;	// IMP=0x00100000000eb7ba
- (void)_setApplicationPickedRoutes:(id)arg1 updateRoutes:(_Bool)arg2 forClient:(id)arg3;	// IMP=0x00100000000eb7b4
- (id)_preferredIdentifierForMACAddress:(id)arg1 identifier:(id)arg2 name:(id)arg3;	// IMP=0x00100000000eb6b2
- (void)_storePassword:(id)arg1 forOutputDevice:(id)arg2;	// IMP=0x00100000000eb5b6
- (void)_storePassword:(id)arg1 forRoute:(id)arg2;	// IMP=0x00100000000eb4ba
- (void)_presentPasswordDialogForRoute:(id)arg1 withOptions:(unsigned int)arg2;	// IMP=0x00100000000eb210
- (void)_postExternalScreenDidChange;	// IMP=0x00100000000eb108
- (_Bool)_setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned int)arg3;	// IMP=0x00100000000eb003
- (void)_loadMostRecentlyPicked;	// IMP=0x00100000000eafb3
- (void)_saveMostRecentlyPicked;	// IMP=0x00100000000eaf85
- (void)_clearPasswordForOutputDevice:(id)arg1;	// IMP=0x00100000000eaf40
- (id)_savedPasswordForOutputDevice:(id)arg1;	// IMP=0x00100000000eaf00
- (id)_existingKeychainAccountForOutputDevice:(id)arg1 password:(id *)arg2;	// IMP=0x00100000000ead00
- (void)_handleAuthenticationFailureForRoute:(id)arg1 withOptions:(unsigned int)arg2;	// IMP=0x00100000000eac7d
- (id)_presentDialogWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000ea7c4
- (void)_handleErrorStatus:(int)arg1 forRoute:(id)arg2;	// IMP=0x00100000000ea38a
- (void)_launchTVClusterSettings;	// IMP=0x00100000000ea204
- (void)_handleClusterErrorStatus:(int)arg1 forRoute:(id)arg2;	// IMP=0x00100000000e9d0b
- (_Bool)_shouldIgnorePortStatusFailureForRouteWithUID:(id)arg1 previouslyCachedRouteUID:(id *)arg2;	// IMP=0x00100000000e9a7e
- (void)_updateSystemRouteDiscoveryMode;	// IMP=0x00100000000e96a0
- (id)_passwordDialogForRouteWithName:(id)arg1 usingInputType:(long long)arg2;	// IMP=0x00100000000e943f
- (id)_descriptionForDiscoveryMode:(unsigned int)arg1;	// IMP=0x00100000000e941d
- (void)_unregisterNotifications;	// IMP=0x00100000000e93ca
- (void)_registerNotifications;	// IMP=0x00100000000e9176
- (void)_handleAuthorizationRequest:(id)arg1;	// IMP=0x00100000000e8962
- (void)_postRouteStatusDidChangeNotificationForRoute:(id)arg1 newStatus:(int)arg2;	// IMP=0x00100000000e87ff
- (void)_failedToConnectToOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000e8438
- (void)_routingDataSourceRouteStatusDidChangeNotification:(id)arg1;	// IMP=0x00100000000e8257
- (void)_routingDataSourceExternalScreenDidChangeNotification:(id)arg1;	// IMP=0x00100000000e8245
- (void)_routingDataSourcePickableRoutesDidChangeNotification:(id)arg1;	// IMP=0x00100000000e81f7
- (void)_clientInvalidatedNotification:(id)arg1;	// IMP=0x00100000000e8194
- (void)postSystemEndpointDeviceChange:(id)arg1 type:(long long)arg2 originClient:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e7e3a
- (void)systemEndpointController:(id)arg1 activeSystemEndpointDidChangeForRequest:(id)arg2 type:(long long)arg3;	// IMP=0x00100000000e7d92
- (void)_handleWillStartPlayingInterruptMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e7c85
- (void)_handleModifyOutputContextMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e738a
- (void)_handleGetExternalDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e6fee
- (void)_handleRemoveFromParentGroup:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e6817
- (void)_handlePredictGroupLeader:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e667a
- (void)_handleCreateHostedEndpointForDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e621c
- (void)_handleGroupDevicesAndSendCommand:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e5b38
- (void)_handleCreateDirectEndpointForDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e58b6
- (void)_handleCreateEndpointWithDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e58a4
- (void)_handleMigrateFromEndpointToEndpointMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e5275
- (void)_handleMigrateFromEndpointToOutputDevicesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e4cab
- (void)_handleGetOutputContextUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e4a8f
- (void)_handleResumeNowPlayingSession:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e46c5
- (void)_handleStopNowPlayingSession:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e42fe
- (void)_handleStartNowPlayingSession:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e26f0
- (void)_handleCreateGroupWithDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e24e0
- (void)_handleGetVirtualOutputDevicesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e243e
- (void)_handleAddVirtualOutputDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e239c
- (void)_handleResetOutputContextMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e2195
- (void)_handleSetNearbyDevice:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e210a
- (void)_handleGetAirplayStatus:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e2026
- (void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e1f54
- (void)_handlePromptForRouteAuthorizationMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e1ca5
- (void)_handleGetHostedEndpointForDeviceUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e1b00
- (void)_handleGetActiveSystemEndpointUIDsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e19a6
- (void)_handleUpdateActiveSystemEndpointUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e17de
- (void)_handleGetRecentAVOutputDeviceUIDsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e1756
- (void)_handleSetRecentAVOutputDeviceUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e1621
- (void)_handleGetHostedRoutingXPCEndpointMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e148d
- (void)_handleGetAirPlaySecuritySettingsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e1390
- (void)_handleSetApplicationPickedRoutes:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e10fa
- (void)_handleUnpickAirPlayRoutesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e104c
- (void)_handleClearAllAVRoutePasswordsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e0c8a
- (void)_handleSetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e0bf4
- (void)_handleGetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e0b55
- (void)_handleGetExternalScreenTypeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e0afc
- (void)_handleSetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e097d
- (void)_handleGetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e0833
- (void)_handleSetPickedRouteMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e0103
- (void)_handleGetPickableRoutesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e001e
- (void)_handleSetRouteDiscoveryModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000dfecb
- (_Bool)outputDeviceAuthorizationSession:(id)arg1 shouldRetryAuthorizationRequest:(id)arg2 reason:(id)arg3;	// IMP=0x00100000000dfeba
- (void)outputDeviceAuthorizationSession:(id)arg1 didProvideAuthorizationRequest:(id)arg2;	// IMP=0x00100000000df574
- (void)collectDiagnostic:(id)arg1;	// IMP=0x00100000000df424
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000df125
- (void)restoreClientState:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000defe7
- (id)clientsWithApplicationPickedRoutes;	// IMP=0x00100000000ded9d
- (id)clientsForApplicationPickedRoute:(id)arg1;	// IMP=0x00100000000dea08
- (id)applicationPickedRoutes;	// IMP=0x00100000000de806
- (_Bool)routeIsActiveWithUID:(id)arg1;	// IMP=0x00100000000de770
- (void)pickCachedRouteWithUID:(id)arg1;	// IMP=0x00100000000de33c
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned int)arg3;	// IMP=0x00100000000de2a0
- (id)pickableRoutesForCategory:(id)arg1;	// IMP=0x00100000000de0c6
@property(readonly, nonatomic, getter=isSilentPrimary) _Bool silentPrimary;
- (void)setAirplayActive:(_Bool)arg1;	// IMP=0x00100000000ddf81
- (void)dealloc;	// IMP=0x00100000000ddefe
- (id)initWithRoutingDataSource:(id)arg1 hostedRoutingService:(id)arg2 systemEndpointController:(id)arg3 autoConnectionController:(id)arg4 homeServer:(id)arg5 avOutputDeviceAuthorizationSession:(id)arg6;	// IMP=0x00100000000ddb0d
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x00100000000dd9d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

