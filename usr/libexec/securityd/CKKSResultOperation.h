//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBlockOperation.h>

@class CKKSCondition, NSDate, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKKSResultOperation : NSBlockOperation
{
    _Bool _timeoutCanOccur;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSDate *_finishDate;	// 24 = 0x18
    CKKSCondition *_completionHandlerDidRunCondition;	// 32 = 0x20
    long long _descriptionErrorCode;	// 40 = 0x28
    NSMutableArray *_successDependencies;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_timeoutQueue;	// 56 = 0x38
    CDUnknownBlockType _finishingBlock;	// 64 = 0x40
}

+ (id)named:(id)arg1 withBlockTakingSelf:(CDUnknownBlockType)arg2;	// IMP=0x004000000012961b
+ (id)named:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001295a7
+ (id)operationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129555
- (void).cxx_destruct;	// IMP=0x002000000012915e
@property(copy) CDUnknownBlockType finishingBlock; // @synthesize finishingBlock=_finishingBlock;
@property(retain) NSObject<OS_dispatch_queue> *timeoutQueue; // @synthesize timeoutQueue=_timeoutQueue;
@property _Bool timeoutCanOccur; // @synthesize timeoutCanOccur=_timeoutCanOccur;
@property(retain) NSMutableArray *successDependencies; // @synthesize successDependencies=_successDependencies;
@property long long descriptionErrorCode; // @synthesize descriptionErrorCode=_descriptionErrorCode;
@property(retain) CKKSCondition *completionHandlerDidRunCondition; // @synthesize completionHandlerDidRunCondition=_completionHandlerDidRunCondition;
@property(retain) NSDate *finishDate; // @synthesize finishDate=_finishDate;
@property(retain) NSError *error; // @synthesize error=_error;
- (_Bool)allSuccessful:(id)arg1;	// IMP=0x0010000000128a21
- (_Bool)allDependentsSuccessful;	// IMP=0x00100000001289ce
- (void)addNullableSuccessDependency:(id)arg1;	// IMP=0x001000000012891b
- (void)addSuccessDependency:(id)arg1;	// IMP=0x0010000000128909
- (id)timeout:(unsigned long long)arg1;	// IMP=0x0010000000128826
- (id)_onqueueTimeoutError;	// IMP=0x00100000001286f9
- (id)descriptionError;	// IMP=0x0010000000128616
- (id)dependenciesDescriptionError;	// IMP=0x00100000001283c5
- (void)invalidateTimeout;	// IMP=0x0010000000128354
- (void)start;	// IMP=0x00100000001282f1
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001281f8
- (id)debugDescription;	// IMP=0x00100000001281e6
- (id)description;	// IMP=0x0010000000128054
- (id)operationStateString;	// IMP=0x0010000000127f69
- (id)init;	// IMP=0x0010000000127dc5

@end
