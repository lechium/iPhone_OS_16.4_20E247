//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_activity;

__attribute__((visibility("hidden")))
@interface SKAPresenceSubscriptionAssertion : NSObject
{
    NSString *_subscriptionIdentifier;	// 8 = 0x8
    NSObject<OS_os_activity> *_osActivity;	// 16 = 0x10
}

+ (id)logger;	// IMP=0x006000000000eaec
- (void).cxx_destruct;	// IMP=0x000000000000eb5c
@property(readonly, nonatomic) NSObject<OS_os_activity> *osActivity; // @synthesize osActivity=_osActivity;
@property(readonly, copy, nonatomic) NSString *subscriptionIdentifier; // @synthesize subscriptionIdentifier=_subscriptionIdentifier;
- (void)dealloc;	// IMP=0x000000000000ea2d
- (unsigned long long)hash;	// IMP=0x000000000000e9e9
- (_Bool)isEqualToPresenceSubscription:(id)arg1;	// IMP=0x000000000000e937
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e8da
- (id)description;	// IMP=0x000000000000e852
- (id)initWithSubscriptionIdentifier:(id)arg1;	// IMP=0x000000000000e725

@end

