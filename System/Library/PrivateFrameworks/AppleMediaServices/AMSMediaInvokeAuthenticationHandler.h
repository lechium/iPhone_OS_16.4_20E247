//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSMediaInvokeAuthenticationHandler : NSObject
{
}

+ (id)_presentAuthRequest:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00800000002782aa
+ (id)_performAuthRequest:(id)arg1 redirectURL:(id)arg2 taskInfo:(id)arg3;	// IMP=0x0080000000277eb9
+ (id)_authenticateRequestWithAuthType:(unsigned long long)arg1 taskInfo:(id)arg2;	// IMP=0x0080000000277caa
+ (unsigned long long)_authenticationTypeForResponse:(id)arg1;	// IMP=0x0080000000277ba8
+ (_Bool)isInvokeAuthenticationEnabled;	// IMP=0x0080000000277b90
+ (id)performAuthFromResponse:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00800000002778ad

@end
