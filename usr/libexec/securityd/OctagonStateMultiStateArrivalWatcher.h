//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSResultOperation, MISSING_TYPE, NSDictionary, NSOperationQueue, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface OctagonStateMultiStateArrivalWatcher : NSObject
{
    _Bool _completed;	// 8 = 0x8
    _Bool _timeoutCanOccur;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    CKKSResultOperation *_result;	// 24 = 0x18
    NSSet *_states;	// 32 = 0x20
    NSDictionary *_failStates;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    CKKSResultOperation *_initialTimeoutListenerOp;	// 56 = 0x38
    MISSING_TYPE *_queue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000cd098
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool timeoutCanOccur; // @synthesize timeoutCanOccur=_timeoutCanOccur;
@property(retain) CKKSResultOperation *initialTimeoutListenerOp; // @synthesize initialTimeoutListenerOp=_initialTimeoutListenerOp;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property _Bool completed; // @synthesize completed=_completed;
@property(readonly) NSDictionary *failStates; // @synthesize failStates=_failStates;
@property(readonly) NSSet *states; // @synthesize states=_states;
@property(readonly) CKKSResultOperation *result; // @synthesize result=_result;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void)completeWithErrorIfPending:(id)arg1;	// IMP=0x00100000000ccf05
- (void)onqueueStartFinishOperation:(id)arg1;	// IMP=0x00100000000cce00
- (id)timeout:(unsigned long long)arg1;	// IMP=0x00100000000ccd1d
- (void)_onqueuePerformTimeoutWithUnderlyingError;	// IMP=0x00100000000ccbde
- (void)onqueueEnterState:(id)arg1;	// IMP=0x00100000000ccafd
- (void)onqueueHandleTransition:(id)arg1;	// IMP=0x00100000000cca65
- (id)description;	// IMP=0x00100000000cc9a8
- (id)initNamed:(id)arg1 serialQueue:(id)arg2 states:(id)arg3 failStates:(id)arg4;	// IMP=0x00100000000cc7ef
- (id)initNamed:(id)arg1 serialQueue:(id)arg2 states:(id)arg3;	// IMP=0x00100000000cc7d6

@end
