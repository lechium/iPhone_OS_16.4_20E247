//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/NAScheduler-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol HKSPQueueBackedScheduler <NAScheduler>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)resume;
- (void)suspend;
@end

