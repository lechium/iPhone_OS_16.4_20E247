//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPromise, ASCJitterBackoff, ASCPendingPromises, ASCWorkspace, NSMapTable, NSString;
@protocol ASCServices;

__attribute__((visibility("hidden")))
@interface ASCAppOfferStateCenter : NSObject
{
    id <ASCServices> _connection;	// 8 = 0x8
    ASCWorkspace *_workspace;	// 16 = 0x10
    NSMapTable *_stateMachines;	// 24 = 0x18
    ASCJitterBackoff *_reconnectBackoff;	// 32 = 0x20
    ASCPendingPromises *_pendingActionPromises;	// 40 = 0x28
    AMSPromise *_service;	// 48 = 0x30
}

+ (id)sharedCenter;	// IMP=0x00100000000115d7
+ (id)log;	// IMP=0x001000000001157b
- (void).cxx_destruct;	// IMP=0x0000000000013d1d
@property(retain, nonatomic) AMSPromise *service; // @synthesize service=_service;
@property(readonly, nonatomic) ASCPendingPromises *pendingActionPromises; // @synthesize pendingActionPromises=_pendingActionPromises;
@property(readonly, nonatomic) ASCJitterBackoff *reconnectBackoff; // @synthesize reconnectBackoff=_reconnectBackoff;
@property(readonly, nonatomic) NSMapTable *stateMachines; // @synthesize stateMachines=_stateMachines;
@property(readonly, nonatomic) ASCWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly, nonatomic) id <ASCServices> connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *description;
- (void)offer:(id)arg1 didChangeStatusText:(id)arg2;	// IMP=0x0000000000013a43
- (void)offer:(id)arg1 didChangeState:(id)arg2 withMetadata:(id)arg3 flags:(long long)arg4;	// IMP=0x00000000000138a0
- (id)reinstallWatchSystemAppWithBundleID:(id)arg1;	// IMP=0x00000000000135fb
- (id)reinstallWatchAppWithID:(id)arg1;	// IMP=0x0000000000013356
- (id)performActionOfOffer:(id)arg1 withActivity:(id)arg2 inContext:(id)arg3;	// IMP=0x000000000001326e
- (id)performFallbackActionForOffer:(id)arg1;	// IMP=0x0000000000013111
- (id)performActionOfOffer:(id)arg1 withActivity:(id)arg2 inContext:(id)arg3 usingService:(id)arg4;	// IMP=0x0000000000012c8d
- (void)stopObservingStateForOffer:(id)arg1;	// IMP=0x000000000001297e
- (id)stateMachineForOffer:(id)arg1;	// IMP=0x00000000000125a1
- (void)daemonDidRebootstrap:(id)arg1;	// IMP=0x0000000000012544
- (void)daemonConnectionWasLost:(id)arg1;	// IMP=0x0000000000012443
- (void)tryReconnect;	// IMP=0x0000000000012074
- (void)scheduleTryReconnect;	// IMP=0x0000000000011fc7
- (void)useOfferStateMachineFallback;	// IMP=0x0000000000011db2
- (void)connectToService;	// IMP=0x0000000000011938
- (void)dealloc;	// IMP=0x00000000000118c3
- (id)initWithConnection:(id)arg1 workspace:(id)arg2;	// IMP=0x00000000000116a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
