//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSXPCInterface, RBSProcessMonitor;
@protocol NRNSXPCListenerProtocol, NRXPCServerDelegate, OS_dispatch_queue;

@interface NRXPCServer : NSObject
{
    id <NRNSXPCListenerProtocol> _xpcListener;	// 8 = 0x8
    NSXPCInterface *_exportedInterface;	// 16 = 0x10
    NSXPCInterface *_remoteObjectInterface;	// 24 = 0x18
    NSString *_machServiceName;	// 32 = 0x20
    NSMutableArray *_proxies;	// 40 = 0x28
    NSMutableDictionary *_bundleIDToProxy;	// 48 = 0x30
    RBSProcessMonitor *_processMonitor;	// 56 = 0x38
    id <NRXPCServerDelegate> _serverDelegate;	// 64 = 0x40
    id _xpcTarget;	// 72 = 0x48
    NSMutableDictionary *_entitlements;	// 80 = 0x50
    _Bool _entitlementRequired;	// 88 = 0x58
    _Bool _listenerSuspended;	// 89 = 0x59
    _Bool _listenerInvalidated;	// 90 = 0x5a
    Class _proxyClass;	// 96 = 0x60
    id _services;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_xpcIncomingMessageQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_managementQueue;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000007153
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *managementQueue; // @synthesize managementQueue=_managementQueue;
- (void)invalidate;	// IMP=0x0010000000006f71
- (void)_suspend;	// IMP=0x0010000000006f49
- (void)_resume;	// IMP=0x0010000000006f21
- (void)suspend;	// IMP=0x0010000000006ec0
- (void)resume;	// IMP=0x0010000000006e5f
- (void)_proxyDidDisconnect:(id)arg1;	// IMP=0x0010000000006ca0
- (void)enumerateClientProxies:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006b6f
- (void)_updatedFromMonitor:(id)arg1 forProcess:(id)arg2 withUpdate:(id)arg3;	// IMP=0x00100000000066f8
- (id)_currentAppsPredicates;	// IMP=0x0010000000006650
- (void)_removeAppFromMonitorWithProxy:(id)arg1;	// IMP=0x00100000000061b7
- (void)_addAppToMonitorWithProxy:(id)arg1;	// IMP=0x0010000000005c25
- (void)shouldMonitorProxy:(id)arg1 forSuspension:(_Bool)arg2;	// IMP=0x0010000000005b28
- (_Bool)hasEntitlement:(id)arg1 withBitmask:(unsigned int)arg2;	// IMP=0x0010000000005acf
- (unsigned int)scanForEntitlementsWithConnection:(id)arg1;	// IMP=0x0010000000005870
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000005107
- (id)initWithProxyClass:(Class)arg1 xpcListenerClass:(Class)arg2 serverDelegate:(id)arg3 xpcTarget:(id)arg4 services:(id)arg5;	// IMP=0x0010000000004cd3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
