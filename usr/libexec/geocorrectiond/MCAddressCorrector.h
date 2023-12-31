//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCRoutineHelper, NSLock;
@protocol OS_dispatch_queue;

@interface MCAddressCorrector : NSObject
{
    NSLock *_processingLock;	// 8 = 0x8
    double _lastRunTime;	// 16 = 0x10
    long long _daysToNextRun;	// 24 = 0x18
    MCRoutineHelper *_routineHelper;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_completionQueue;	// 40 = 0x28
    CDUnknownBlockType _completionBlock;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000004b7d
- (void)_sendUpdateRequest:(id)arg1;	// IMP=0x001000000000475b
- (void)_startAddressCorrectionWithToken:(id)arg1 personId:(id)arg2;	// IMP=0x0010000000003beb
- (void)_finishProcessing;	// IMP=0x0010000000003b5b
- (void)startProcessingWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000343f
- (id)init;	// IMP=0x0010000000003390

@end

