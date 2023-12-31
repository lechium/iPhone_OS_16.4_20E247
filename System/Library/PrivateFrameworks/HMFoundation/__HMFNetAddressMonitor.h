//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFNetMonitor.h"

@class HMFNetAddress, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFNetAddressMonitor : HMFNetMonitor
{
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned int _currentNetworkFlags;	// 24 = 0x18
    HMFNetAddress *_netAddress;	// 32 = 0x20
    struct __SCNetworkReachability *_networkReachabilityRef;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004e651
@property(nonatomic) unsigned int currentNetworkFlags; // @synthesize currentNetworkFlags=_currentNetworkFlags;
@property(readonly, nonatomic) struct __SCNetworkReachability *networkReachabilityRef; // @synthesize networkReachabilityRef=_networkReachabilityRef;
- (id)netAddress;	// IMP=0x000000000004e60f
- (id)logIdentifier;	// IMP=0x000000000004e583
- (void)handleNetworkReachabilityChange:(unsigned int)arg1;	// IMP=0x000000000004e392
- (unsigned long long)reachabilityPath;	// IMP=0x000000000004e33b
- (id)attributeDescriptions;	// IMP=0x000000000004e26f
- (id)shortDescription;	// IMP=0x000000000004e16d
- (void)dealloc;	// IMP=0x000000000004e103
- (id)initWithNetAddress:(id)arg1;	// IMP=0x000000000004da76
- (id)init;	// IMP=0x000000000004da62
- (id)initWithNetService:(id)arg1;	// IMP=0x000000000004d9ac

@end

