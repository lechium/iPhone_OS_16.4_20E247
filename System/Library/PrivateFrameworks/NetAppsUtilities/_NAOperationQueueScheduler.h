//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface _NAOperationQueueScheduler : NSObject
{
    NSOperationQueue *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000017b62
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017a0c
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017837
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017821
- (id)initWithMaxConcurrentOperationCount:(unsigned long long)arg1;	// IMP=0x000000000001779e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
