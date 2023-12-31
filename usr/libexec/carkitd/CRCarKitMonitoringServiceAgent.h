//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CRCarKitMonitoringServiceAgent : NSObject
{
    NSMutableSet *_connections;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionsQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000032445
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionsQueue; // @synthesize connectionsQueue=_connectionsQueue;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
- (void)_removeConnection:(id)arg1;	// IMP=0x0010000000032289
- (void)_addConnection:(id)arg1 forCertificateSerial:(id)arg2;	// IMP=0x00100000000321ca
- (void)handleUpdatedVehicle:(id)arg1 enabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031ae7
- (void)stopMonitoringCertificateSerial:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000319e7
- (void)startMonitoringCertificateSerial:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003179f
- (_Bool)connection:(id)arg1 isMonitoringSerial:(id)arg2;	// IMP=0x00100000000316fb
- (id)userInfoDictionaryForConnection:(id)arg1;	// IMP=0x00100000000315be
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000310eb
- (id)init;	// IMP=0x001000000003103c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

