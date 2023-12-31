//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _CATArbitratorRegistrationEntry : NSObject
{
    id mResource;	// 8 = 0x8
    unsigned long long mMaxConcurrentCount;	// 16 = 0x10
    NSMutableArray *mPendingWaits;	// 24 = 0x18
    NSObject<OS_dispatch_source> *mPendingWaitsSource;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *mPendingWaitsQueue;	// 40 = 0x28
    unsigned long long _currentCount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000038df
@property(readonly, nonatomic) unsigned long long currentCount; // @synthesize currentCount=_currentCount;
- (id)makeResourceProxyIfPossibleWithoutLocking:(_Bool)arg1;	// IMP=0x0000000000003822
- (void)servicePendingWaitTokens;	// IMP=0x00000000000036b9
- (void)pendingWaitsNeedServicing;	// IMP=0x000000000000364e
- (void)resourceProxyDidInvalidate:(id)arg1;	// IMP=0x00000000000035ae
- (void)invalidate;	// IMP=0x00000000000034fb
- (id)waitForResourceWithExclusive:(_Bool)arg1 group:(id)arg2;	// IMP=0x0000000000003442
- (id)makeResourceProxyIfPossible:(_Bool)arg1;	// IMP=0x00000000000033ba
- (id)initWithResource:(id)arg1 maxConcurrentCount:(unsigned long long)arg2;	// IMP=0x00000000000030c4

@end

