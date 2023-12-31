//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLCloudKitOperationCounter, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CPLCloudKitOperationsTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_tasks;	// 16 = 0x10
    CPLCloudKitOperationCounter *_operationCounter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000d9f53
- (id)statusDictionary;	// IMP=0x00100000000d9bea
- (id)status;	// IMP=0x00100000000d9a03
- (void)cancelBlockedTasksIncludingBackground:(_Bool)arg1;	// IMP=0x00100000000d969d
- (void)cancelAllOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d9336
- (void)taskDidFinish:(id)arg1;	// IMP=0x00100000000d9114
- (void)taskHasBeenCancelled:(id)arg1;	// IMP=0x00100000000d8f89
- (void)operationHasBeenCancelled:(id)arg1;	// IMP=0x00100000000d8df6
- (void)operationDidFinish:(id)arg1;	// IMP=0x00100000000d8b2e
- (void)operation:(id)arg1 updateContextWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d8a7c
- (void)operation:(id)arg1 updateProgress:(double)arg2;	// IMP=0x00100000000d88ef
- (_Bool)isOperationBlocked:(id)arg1;	// IMP=0x00100000000d87ab
- (void)operationDidProgressOneBatch:(id)arg1;	// IMP=0x00100000000d85fb
- (id)_contextForOperation:(id)arg1;	// IMP=0x00100000000d8533
- (void)operationWillStart:(id)arg1 forTask:(id)arg2 withContext:(id)arg3 bundleIdentifiers:(id)arg4;	// IMP=0x00100000000d813b
- (void)operationWillStart:(id)arg1 forTask:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000d803b
- (id)_bundleIdentifierFromCKOperation:(id)arg1;	// IMP=0x00100000000d7dfb
- (void)taskWillStart:(id)arg1;	// IMP=0x00100000000d7bda
- (void)_emitLogForCurrentTasks;	// IMP=0x00100000000d7ab0
- (id)_pendingTaskStatus;	// IMP=0x00100000000d7685
- (id)init;	// IMP=0x00100000000d75dc

@end

