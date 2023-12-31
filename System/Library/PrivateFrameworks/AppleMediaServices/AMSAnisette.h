//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSAnisette : NSObject
{
}

+ (id)bagKeySet;	// IMP=0x00100000001637fd
+ (_Bool)_shouldRetryAfterError:(id)arg1;	// IMP=0x00100000001637ac
+ (id)_syncMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;	// IMP=0x0010000000163465
+ (id)_provisionMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;	// IMP=0x0010000000163127
+ (id)_headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3;	// IMP=0x001000000016311f
+ (id)_handleActionName:(id)arg1 actionData:(id)arg2 account:(id)arg3 type:(long long)arg4 bag:(id)arg5;	// IMP=0x0010000000162e8b
+ (id)_eraseProvisioningForType:(long long)arg1 account:(id)arg2;	// IMP=0x0010000000162e83
+ (void)_bagDomainExistsForURL:(id)arg1 type:(long long)arg2 bag:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000162a85
+ (unsigned long long)_accountIDForType:(long long)arg1 account:(id)arg2;	// IMP=0x0010000000162a7d
+ (id)createBagForSubProfile;	// IMP=0x00100000001629e3
+ (id)bagSubProfileVersion;	// IMP=0x0010000000162993
+ (id)bagSubProfile;	// IMP=0x0010000000162943
+ (id)headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4;	// IMP=0x00100000001628dd
+ (id)handleResponse:(id)arg1 type:(long long)arg2 bag:(id)arg3 account:(id)arg4;	// IMP=0x00100000001626d6
+ (_Bool)handleResponse:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4;	// IMP=0x0010000000162681

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

