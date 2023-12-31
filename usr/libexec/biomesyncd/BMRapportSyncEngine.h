//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMDistributedSyncMultiStreamManager, BMRapportManager, BMSyncDatabase, BMSyncDevicePeerStatusTracker, BMSyncSessionMetricsCollector, MISSING_TYPE, NSMutableDictionary, NSString;
@protocol BMAtomBatchChunkerPolicy, OS_dispatch_queue;

@interface BMRapportSyncEngine : NSObject
{
    BMDistributedSyncMultiStreamManager *_syncManager;	// 8 = 0x8
    BMRapportManager *_rapportManager;	// 16 = 0x10
    NSMutableDictionary *_requestQueue;	// 24 = 0x18
    NSString *_localDeviceIdentifier;	// 32 = 0x20
    NSObject<BMAtomBatchChunkerPolicy> *_atomBatchChunkerPolicy;	// 40 = 0x28
    BMSyncDatabase *_database;	// 48 = 0x30
    BMSyncDevicePeerStatusTracker *_peerStatusTracker;	// 56 = 0x38
    BMSyncSessionMetricsCollector *_metricsCollector;	// 64 = 0x40
    CDUnknownBlockType _reciprocalCompletionBlock;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000000bb7e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType reciprocalCompletionBlock; // @synthesize reciprocalCompletionBlock=_reciprocalCompletionBlock;
@property(retain, nonatomic) BMSyncSessionMetricsCollector *metricsCollector; // @synthesize metricsCollector=_metricsCollector;
@property(readonly, nonatomic) BMSyncDevicePeerStatusTracker *peerStatusTracker; // @synthesize peerStatusTracker=_peerStatusTracker;
- (MISSING_TYPE *)siteSuffix;	// IMP=0x001000000000bb29
- (unsigned int)protocolVersion;	// IMP=0x001000000000bb1e
- (id)localDeviceUpdatingIfNecessary;	// IMP=0x001000000000baed
- (void)finishRequest:(id)arg1 toDevice:(id)arg2 withError:(id)arg3 peerInfo:(id)arg4;	// IMP=0x001000000000b9c8
- (void)handleFetchAtomBatchesResponse:(id)arg1 options:(id)arg2 error:(id)arg3 fromDevice:(id)arg4 forRequest:(id)arg5 isReciprocal:(_Bool)arg6;	// IMP=0x001000000000b13d
- (CDUnknownBlockType)fetchAtomBatchesRequestHandler;	// IMP=0x001000000000a557
- (void)rapportManagerDiscoveryTimedOut:(id)arg1;	// IMP=0x001000000000a2ca
- (void)rapportManager:(id)arg1 didLoseNearbyBMRapportDevice:(id)arg2;	// IMP=0x001000000000a2c4
- (void)rapportManager:(id)arg1 localDeviceUpdated:(id)arg2;	// IMP=0x001000000000a2be
- (void)rapportManager:(id)arg1 didDiscoverBMRapportDevice:(id)arg2;	// IMP=0x001000000000a14c
- (_Bool)rapportManager:(id)arg1 isDeviceSupported:(id)arg2;	// IMP=0x0010000000009e4d
- (void)registerRequests;	// IMP=0x0010000000009dea
- (id)buildAtomBatchRequestWithIsReciprocal:(_Bool)arg1 sequenceNumber:(unsigned long long)arg2 transportType:(unsigned long long)arg3 device:(id)arg4;	// IMP=0x0010000000009c9a
- (void)sendFetchAtomBatchesRequest:(id)arg1 toDevice:(id)arg2 forRequest:(id)arg3;	// IMP=0x0010000000009a82
- (void)fetchAtomBatchesIsReciprocal:(_Bool)arg1 reason:(unsigned long long)arg2 activity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000091cf
- (void)runRequest:(id)arg1 onDevice:(id)arg2;	// IMP=0x00100000000090f1
- (void)completeRequest:(id)arg1 deliveredToDevices:(id)arg2 withErrors:(id)arg3;	// IMP=0x0010000000008dac
- (void)completeRequestIfDeliveredToAllNearbyDevices:(id)arg1;	// IMP=0x001000000000882d
- (void)syncNowWithReason:(unsigned long long)arg1 activity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008743
- (void)startServer;	// IMP=0x00100000000086c1
- (void)startClient;	// IMP=0x0010000000008660
- (id)initWithDistributedSyncMultiStreamManager:(id)arg1 rapportManager:(id)arg2 atomBatchChunkerPolicy:(id)arg3 queue:(id)arg4 database:(id)arg5;	// IMP=0x0010000000008484
- (id)initWithDistributedSyncMultiStreamManager:(id)arg1 queue:(id)arg2 database:(id)arg3;	// IMP=0x0010000000008281

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

