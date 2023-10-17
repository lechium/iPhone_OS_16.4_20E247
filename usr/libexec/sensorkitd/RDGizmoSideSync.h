//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, CBPeripheral, NSMutableSet, NSNumber, NSString, RDDefaults, RDFileURLs, RDGizmoSyncService, RDStateCache, SRAuthorizationStore;
@protocol OS_dispatch_queue, RDAnalyticsEventDelegate><RDDatastoreEventListening, RDGizmoSyncDelegate;

@interface RDGizmoSideSync : NSObject
{
    NSObject<OS_dispatch_queue> *_q;	// 8 = 0x8
    void *_powerAssertion;	// 16 = 0x10
    NSNumber *_marshalledCapabilities;	// 24 = 0x18
    id <RDGizmoSyncDelegate> delegate;	// 32 = 0x20
    id <RDAnalyticsEventDelegate><RDDatastoreEventListening> analyticsDelegate;	// 40 = 0x28
    CBCentralManager *_cbManager;	// 48 = 0x30
    CBPeripheral *_connectedPeripheral;	// 56 = 0x38
    RDFileURLs *_fileURLs;	// 64 = 0x40
    RDGizmoSyncService *_gizmoSyncService;	// 72 = 0x48
    RDDefaults *_defaults;	// 80 = 0x50
    RDStateCache *_stateCache;	// 88 = 0x58
    NSMutableSet *_inflightArchives;	// 96 = 0x60
    SRAuthorizationStore *_authStore;	// 104 = 0x68
    unsigned long long _timeSyncRequestTimestampNsecs;	// 112 = 0x70
}

+ (void)initialize;	// IMP=0x0020000000024520
- (void).cxx_destruct;	// IMP=0x00200000000288d0
@property(nonatomic) __weak id <RDAnalyticsEventDelegate><RDDatastoreEventListening> analyticsDelegate; // @synthesize analyticsDelegate;
@property(nonatomic) __weak id <RDGizmoSyncDelegate> delegate; // @synthesize delegate;
- (void)peripheral:(id)arg1 didReceiveTimeSyncWithReferenceTime:(id)arg2 localAbsolute:(id)arg3 remoteAbsolute:(id)arg4 receiveTime:(id)arg5 GMTDelta:(id)arg6 error:(id)arg7;	// IMP=0x0010000000028590
- (void)centralManager:(id)arg1 didUpdatePeripheralConnectionState:(id)arg2;	// IMP=0x00100000000284e0
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x00100000000284d0
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x00100000000284c0
- (void)validatePreferWifiAssertion;	// IMP=0x00100000000284b0
- (void)sendStateToPeer:(id)arg1;	// IMP=0x0010000000028370
- (void)sendSnapshotForSensor:(id)arg1 deviceId:(id)arg2;	// IMP=0x00100000000279c0
- (_Bool)prepareArchivesForSensor:(id)arg1 deviceId:(id)arg2;	// IMP=0x0010000000026bf0
- (void)service:(id)arg1 didRequestToSendIDSMessage:(id)arg2 withIDSIdentifier:(id)arg3;	// IMP=0x0010000000026ae0
- (void)service:(id)arg1 didFailMessageWithIDSIdentifier:(id)arg2 error:(id)arg3;	// IMP=0x00100000000269e0
- (void)service:(id)arg1 didReceiveResourceServiceMessage:(id)arg2 fromID:(id)arg3 incomingResponseIdentifier:(id)arg4 outgoingResponseIdentifier:(id)arg5;	// IMP=0x00100000000247a0
@property(readonly, getter=isRemoteSupported) _Bool remoteSupported;
- (void)dealloc;	// IMP=0x0010000000024570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
