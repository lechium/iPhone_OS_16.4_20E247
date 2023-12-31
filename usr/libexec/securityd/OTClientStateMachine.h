//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSResultOperation, NSMutableArray, NSMutableDictionary, NSOperation, NSOperationQueue, NSString;
@protocol NSXPCProxyCreating, OS_dispatch_queue, OctagonStateString;

@interface OTClientStateMachine : NSObject
{
    NSString<OctagonStateString> *_currentState;	// 8 = 0x8
    id <NSXPCProxyCreating> _cuttlefishXPCConnection;	// 16 = 0x10
    NSString *_containerName;	// 24 = 0x18
    NSString *_contextID;	// 32 = 0x20
    NSString *_clientName;	// 40 = 0x28
    NSMutableDictionary *_stateConditions;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSOperationQueue *_operationQueue;	// 64 = 0x40
    NSString *_clientScope;	// 72 = 0x48
    NSOperation *_holdStateMachineOperation;	// 80 = 0x50
    CKKSResultOperation *_nextClientStateMachineCycleOperation;	// 88 = 0x58
    NSMutableArray *_stateMachineClientRequests;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000001c813e
@property(retain) NSMutableArray *stateMachineClientRequests; // @synthesize stateMachineClientRequests=_stateMachineClientRequests;
@property(retain) CKKSResultOperation *nextClientStateMachineCycleOperation; // @synthesize nextClientStateMachineCycleOperation=_nextClientStateMachineCycleOperation;
@property(retain) NSOperation *holdStateMachineOperation; // @synthesize holdStateMachineOperation=_holdStateMachineOperation;
@property(retain) NSString *clientScope; // @synthesize clientScope=_clientScope;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *stateConditions; // @synthesize stateConditions=_stateConditions;
@property(readonly) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly) NSString *contextID; // @synthesize contextID=_contextID;
@property(readonly) NSString *containerName; // @synthesize containerName=_containerName;
@property(readonly) id <NSXPCProxyCreating> cuttlefishXPCConnection; // @synthesize cuttlefishXPCConnection=_cuttlefishXPCConnection;
- (void)rpcVoucher:(id)arg1 peerID:(id)arg2 permanentInfo:(id)arg3 permanentInfoSig:(id)arg4 stableInfo:(id)arg5 stableInfoSig:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x00100000001c7c95
- (void)rpcEpoch:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c7992
- (id)_onqueueNextClientStateMachineTransition:(id)arg1;	// IMP=0x00100000001c74af
- (_Bool)isAcceptorWaitingForFirstMessage;	// IMP=0x00100000001c7418
- (void)handleExternalClientStateMachineRequest:(id)arg1 client:(id)arg2;	// IMP=0x00100000001c733b
- (void)_onqueueStartNextClientStateMachineOperation:(id)arg1;	// IMP=0x00100000001c710a
- (void)_onqueuePokeClientStateMachine:(id)arg1;	// IMP=0x00100000001c706c
- (id)createOperationToFinishAttemptForClient:(id)arg1 clientName:(id)arg2;	// IMP=0x00100000001c6ee8
- (void)startOctagonStateMachine;	// IMP=0x00100000001c6e77
@property(retain) NSString<OctagonStateString> *currentState;
- (void)dealloc;	// IMP=0x00100000001c6d0e
- (id)initWithContainerName:(id)arg1 contextID:(id)arg2 clientName:(id)arg3 cuttlefish:(id)arg4;	// IMP=0x00100000001c6a04

@end

