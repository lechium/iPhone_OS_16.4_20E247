//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEONavdServerProxy.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSXPCConnection;
@protocol GEONavdXPCInterface, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEONavdRemoteProxy : GEONavdServerProxy
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    NSMutableDictionary *_handlers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000012f9494
- (void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2;	// IMP=0x00000000012f9255
- (void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2;	// IMP=0x00000000012f8eea
- (void)dealloc;	// IMP=0x00000000012f8e43
- (void)forceCacheRefresh;	// IMP=0x00000000012f8db0
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;	// IMP=0x00000000012f8d22
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;	// IMP=0x00000000012f8bbf
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;	// IMP=0x00000000012f8a56
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;	// IMP=0x00000000012f8942
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012f86a5
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;	// IMP=0x00000000012f869f
- (void)statusWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000012f855e
@property(readonly, nonatomic) id <GEONavdXPCInterface> remoteObjectProxyThreadUnsafe;
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000000012f846f
- (void)registerObserver:(id)arg1;	// IMP=0x00000000012f83b6
- (void)_connectToDaemonIfNeededThreadUnsafe;	// IMP=0x00000000012f7913
- (void)close;	// IMP=0x00000000012f776d
- (void)open;	// IMP=0x00000000012f7705
- (id)init;	// IMP=0x00000000012f754e

@end
