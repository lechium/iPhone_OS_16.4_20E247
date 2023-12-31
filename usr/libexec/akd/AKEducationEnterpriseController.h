//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKAppleIDAuthenticationContext, AKClient;

@interface AKEducationEnterpriseController : NSObject
{
    AKAppleIDAuthenticationContext *_context;	// 8 = 0x8
    AKAccountManager *_accountManager;	// 16 = 0x10
    AKClient *_client;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000aff28
- (void)_handleIdentityProviderResponsePayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000afbfa
- (void)_showIdentityProviderUIFromResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000af81e
- (void)beginFederatedAuthWithInitialResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000af2f1
- (void)_performTokenUpgradeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000af121
- (void)attemptTokenUpgradeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000aed19
- (id)initWithContext:(id)arg1 client:(id)arg2;	// IMP=0x00100000000aec56

@end

