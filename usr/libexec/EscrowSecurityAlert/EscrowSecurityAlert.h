//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ESAHealthSampleAnalyticsStore, NSDictionary, SecTapToRadar;
@protocol EscrowSecurityAlertDelegateProtocol, OS_dispatch_queue;

@interface EscrowSecurityAlert : NSObject
{
    id <EscrowSecurityAlertDelegateProtocol> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 16 = 0x10
    ESAHealthSampleAnalyticsStore *_analyticsStore;	// 24 = 0x18
    NSDictionary *_results;	// 32 = 0x20
    SecTapToRadar *_tapToRadar;	// 40 = 0x28
}

+ (id)tlkRecoverabilityRetryWithClique:(id)arg1 record:(id)arg2 error:(id *)arg3;	// IMP=0x004000000000406b
- (void).cxx_destruct;	// IMP=0x00200000000065bd
@property(retain) SecTapToRadar *tapToRadar; // @synthesize tapToRadar=_tapToRadar;
@property(retain) NSDictionary *results; // @synthesize results=_results;
@property(readonly) ESAHealthSampleAnalyticsStore *analyticsStore; // @synthesize analyticsStore=_analyticsStore;
@property(readonly, retain) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain) id <EscrowSecurityAlertDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)handleNotification:(id)arg1;	// IMP=0x0010000000006189
- (void)handleTimerEvent;	// IMP=0x0010000000005a8c
- (id)checkStingrayMetrics:(id)arg1 walrus:(long long)arg2 tapToRadar:(_Bool *)arg3;	// IMP=0x0010000000005392
- (id)pcsRecoverabilityMetrics:(id)arg1 tapToRadar:(_Bool *)arg2;	// IMP=0x0010000000004a4f
- (void)foreachStingrayService:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004923
- (id)tLKRecoverabilityMetrics:(id)arg1 tapToRadar:(_Bool *)arg2;	// IMP=0x00100000000042d2
- (id)init;	// IMP=0x0010000000003c07
- (id)metrics;	// IMP=0x00100000000036ba
- (_Bool)inCircle;	// IMP=0x001000000000367d

@end
