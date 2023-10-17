//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray;
@protocol MediaSocialStatusPollingDelegate, OS_dispatch_queue;

@interface MediaSocialStatusPollingCoordinator : NSObject
{
    id _btaObserver;	// 8 = 0x8
    id <MediaSocialStatusPollingDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    double _nextScheduledPoll;	// 32 = 0x20
    ISOperationQueue *_operationQueue;	// 40 = 0x28
    double _pollingInterval;	// 48 = 0x30
    NSMutableArray *_requests;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001dd06d
@property(nonatomic) __weak id <MediaSocialStatusPollingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_finishRequests:(id)arg1 withResponses:(id)arg2;	// IMP=0x00100000001dc9b3
- (void)_addBackgroundTaskJob;	// IMP=0x00100000001dc9ad
- (void)_handleBackgroundTaskEvent:(id)arg1;	// IMP=0x00100000001dc9a7
@property(readonly, nonatomic) long long numberOfPollRequests;
- (void)addPollRequest:(id)arg1;	// IMP=0x00100000001dc98b
- (void)dealloc;	// IMP=0x00100000001dc95c
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x00100000001dc88d

@end
