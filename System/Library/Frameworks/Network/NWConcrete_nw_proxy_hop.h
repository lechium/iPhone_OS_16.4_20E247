//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_endpoint, OS_nw_protocol_options;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_proxy_hop : NSObject
{
    NSObject<OS_nw_endpoint> *endpoint;	// 8 = 0x8
    NSObject<OS_nw_protocol_options> *options;	// 16 = 0x10
    struct __CFArray *raw_public_keys;	// 24 = 0x18
    _Bool supports_raw_ip;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000063d9c0
- (void)dealloc;	// IMP=0x000000000063d970
- (id)init;	// IMP=0x000000000063d6f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
