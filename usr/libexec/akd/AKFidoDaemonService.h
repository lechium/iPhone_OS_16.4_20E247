//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AAAFoundation/AAFService.h>

@class AKFidoAuthorizationController, AKFidoDaemonServerHandler, NSString;

@interface AKFidoDaemonService : AAFService
{
    AKFidoAuthorizationController *_authorizationController;	// 8 = 0x8
    AKFidoDaemonServerHandler *_serverHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000327b
- (id)serverHandler;	// IMP=0x001000000000323a
- (id)authorizationController;	// IMP=0x00100000000031f9
- (void)_handleGrandSlamFidoAuthorizationResponse:(id)arg1 context:(id)arg2 recoveryToken:(id)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000002f89
- (void)verifyFidoRecoveryWithContext:(id)arg1 recoveryToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002b72
- (void)verifyFidoKeyWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000275c
- (void)verifyFidoKeyWithFidoContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000269f
- (void)registerFidoKeyWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000025e2
- (void)configureExportedInterface:(id)arg1;	// IMP=0x00100000000022fe
- (id)exportedProtocol;	// IMP=0x00100000000022ed
- (id)exportedObject;	// IMP=0x00100000000022e4
- (id)serviceName;	// IMP=0x00100000000022d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
