//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSRBSKeepAlive, NSString;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface AMSKeepAlive : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    AMSRBSKeepAlive *_rbsKeepAlive;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    long long _style;	// 40 = 0x28
}

+ (void)_handleAssertionExpiration;	// IMP=0x006000000025ab57
+ (void)_accessAssertionCache:(CDUnknownBlockType)arg1;	// IMP=0x006000000025a83a
+ (_Bool)_isRBSAssertionsEnabled;	// IMP=0x006000000025a822
+ (void)rbs_keepAliveWithName:(id)arg1 style:(long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x006000000025a320
+ (id)rbs_keepAliveWithName:(id)arg1 style:(long long)arg2;	// IMP=0x006000000025a2c4
+ (id)rbs_keepAliveWithName:(id)arg1;	// IMP=0x006000000025a277
+ (void)keepAliveWithName:(id)arg1 style:(long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x006000000025a1f5
+ (id)keepAliveWithName:(id)arg1 style:(long long)arg2;	// IMP=0x006000000025a199
+ (id)keepAliveWithName:(id)arg1;	// IMP=0x006000000025a14c
+ (id)keepAliveWithFormat:(id)arg1;	// IMP=0x006000000025a02d
- (void).cxx_destruct;	// IMP=0x000000000025bbfa
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_takeProcessAssertion;	// IMP=0x000000000025b5fb
- (void)_takeOSTransaction;	// IMP=0x000000000025b592
- (void)_startLogTimer;	// IMP=0x000000000025b1d4
- (void)_removeProcessAssertion;	// IMP=0x000000000025af3c
- (void)_removeOSTransaction;	// IMP=0x000000000025ad45
- (id)_cacheKey;	// IMP=0x000000000025aad9
- (id)_assertionName;	// IMP=0x000000000025aa67
- (void)rbs_invalidate;	// IMP=0x000000000025a80c
- (void)invalidate;	// IMP=0x000000000025a7b5
- (void)dealloc;	// IMP=0x000000000025a645
- (id)initRBSWithName:(id)arg1 style:(long long)arg2;	// IMP=0x000000000025a5b9
- (id)initRBSWithName:(id)arg1;	// IMP=0x000000000025a5a5
- (id)initWithName:(id)arg1 style:(long long)arg2;	// IMP=0x000000000025a34d
- (id)initWithName:(id)arg1;	// IMP=0x000000000025a339

@end

