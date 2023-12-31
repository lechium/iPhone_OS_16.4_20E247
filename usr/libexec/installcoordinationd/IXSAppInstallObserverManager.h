//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSHashTable, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface IXSAppInstallObserverManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSMutableDictionary *_clientToObserverServiceNameMap;	// 16 = 0x10
    NSMutableDictionary *_serviceRespondsToMap;	// 24 = 0x18
    NSMutableDictionary *_serviceToConnectionMap;	// 32 = 0x20
    NSMutableDictionary *_clientToObserverEndpointMap;	// 40 = 0x28
    NSMutableDictionary *_listenerRespondsToMap;	// 48 = 0x30
    NSHashTable *_clientConnections;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x0040000000024bbd
- (void).cxx_destruct;	// IMP=0x002000000002a116
@property(readonly, nonatomic) NSHashTable *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(readonly, nonatomic) NSMutableDictionary *listenerRespondsToMap; // @synthesize listenerRespondsToMap=_listenerRespondsToMap;
@property(readonly, nonatomic) NSMutableDictionary *clientToObserverEndpointMap; // @synthesize clientToObserverEndpointMap=_clientToObserverEndpointMap;
@property(readonly, nonatomic) NSMutableDictionary *serviceToConnectionMap; // @synthesize serviceToConnectionMap=_serviceToConnectionMap;
@property(readonly, nonatomic) NSMutableDictionary *serviceRespondsToMap; // @synthesize serviceRespondsToMap=_serviceRespondsToMap;
@property(readonly, nonatomic) NSMutableDictionary *clientToObserverServiceNameMap; // @synthesize clientToObserverServiceNameMap=_clientToObserverServiceNameMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void)promise:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0010000000029fd1
- (void)promiseDidCompleteSuccessfully:(id)arg1;	// IMP=0x0010000000029f14
- (void)coordinator:(id)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;	// IMP=0x0010000000029e24
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0010000000029b4a
- (void)coordinatorDidCompleteSuccessfully:(id)arg1 forRecordPromise:(id)arg2;	// IMP=0x0010000000029895
- (void)coordinatorShouldBeginPostProcessing:(id)arg1 forRecordPromise:(id)arg2;	// IMP=0x0010000000029621
- (MISSING_TYPE *)coordinatorDidInstallPlaceholder:forRecordPromise: /* Error: Ran out of types for this method. */;	// IMP=0x001000000002936c
- (void)coordinatorShouldBeginRestoringUserData:(id)arg1;	// IMP=0x001000000002914d
- (void)coordinator:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;	// IMP=0x0010000000028ed2
- (void)coordinatorShouldPause:(id)arg1;	// IMP=0x0010000000028c73
- (void)coordinatorShouldResume:(id)arg1;	// IMP=0x0010000000028a14
- (void)shouldPrioritizeAppWithIdentity:(id)arg1 forClientIDs:(id)arg2;	// IMP=0x0010000000028876
- (void)coordinatorShouldPrioritize:(id)arg1;	// IMP=0x0010000000028617
- (void)_callHandlerForClientConnections:(CDUnknownBlockType)arg1;	// IMP=0x0010000000028447
- (void)_messageInterestedServicesForClientIDs:(id)arg1 forMethod:(unsigned long long)arg2 callMethodOnProxy:(CDUnknownBlockType)arg3;	// IMP=0x0010000000027733
- (void)_onQueue_callRemoteObjectProxyForServiceEndpoint:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 callHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000275e3
- (id)_onQueue_connectionForObserverEndpoint:(id)arg1;	// IMP=0x00100000000272d8
- (void)_onQueue_callRemoteObjectProxyForServiceName:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 callHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000027198
- (id)_onQueue_connectionForServiceName:(id)arg1;	// IMP=0x0010000000026b84
- (void)unregisterClientConnection:(id)arg1;	// IMP=0x00100000000269e2
- (void)registerClientConnection:(id)arg1;	// IMP=0x001000000002683f
- (void)registerListenerEndpoint:(id)arg1 forClientIDs:(id)arg2 respondingToSelectors:(unsigned long long)arg3;	// IMP=0x00100000000263ee
- (void)registerMachServiceName:(id)arg1 forClientIDs:(id)arg2 respondingToSelectors:(unsigned long long)arg3;	// IMP=0x0010000000025efb
- (void)_saveMapping;	// IMP=0x0010000000025c0e
- (id)init;	// IMP=0x0010000000024cd4
@property(readonly, nonatomic) NSURL *saveURL; // @dynamic saveURL;

@end

