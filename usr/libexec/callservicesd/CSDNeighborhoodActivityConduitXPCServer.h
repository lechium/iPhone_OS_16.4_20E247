//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDClient, CSDClientManager, CSDNeighborhoodActivityConduit, NSString;
@protocol OS_dispatch_queue;

@interface CSDNeighborhoodActivityConduitXPCServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CSDNeighborhoodActivityConduit *_conduit;	// 16 = 0x10
    CSDClientManager *_clientManager;	// 24 = 0x18
    CSDClient *_sessionApprovalClient;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000063267
@property(nonatomic) __weak CSDClient *sessionApprovalClient; // @synthesize sessionApprovalClient=_sessionApprovalClient;
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
@property(readonly, nonatomic) CSDNeighborhoodActivityConduit *conduit; // @synthesize conduit=_conduit;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)cancelSplitSessionApproval;	// IMP=0x00100000000631c7
- (void)approveSplitSessionFor:(id)arg1 from:(id)arg2 pullContext:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000063027
- (_Bool)canApproveSessions;	// IMP=0x0010000000062f3c
- (void)splitSessionEnded:(id)arg1;	// IMP=0x0010000000062e92
- (void)splitSessionStarted:(id)arg1;	// IMP=0x0010000000062de8
- (void)tvDeviceDisappeared:(id)arg1;	// IMP=0x0010000000062d3e
- (void)tvDeviceAppeared:(id)arg1;	// IMP=0x0010000000062c94
- (void)performBlockWithClients:(CDUnknownBlockType)arg1;	// IMP=0x0010000000062b9f
- (void)registerSplitSessionApprovalEnabled:(_Bool)arg1;	// IMP=0x00100000000629c8
- (void)disconnectTVDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000062942
- (void)inviteTVDevice:(id)arg1 toConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000628ad
- (void)activeSplitSessionTVDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006276b
- (void)nearbyTVDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000062629
- (void)unregisterClient:(id)arg1;	// IMP=0x0010000000062527
- (void)registerClient:(id)arg1;	// IMP=0x0010000000062425
- (void)invalidate;	// IMP=0x0010000000062373
- (id)initWithConduit:(id)arg1;	// IMP=0x0010000000061e64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
