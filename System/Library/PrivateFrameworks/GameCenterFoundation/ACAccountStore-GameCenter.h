//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (GameCenter)
- (void)_gkDeleteCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000000b587b
- (void)_gkSaveCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000000b4ab1
- (void)_getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000000b4252
- (id)_gkAccountForAppleID:(id)arg1;	// IMP=0x00900000000b3f6f
- (id)_gkPrimaryCredentialForEnvironment:(long long)arg1;	// IMP=0x00900000000b3c96
- (id)_gkAllCredentialsForEnvironment:(long long)arg1;	// IMP=0x00900000000b3c1c
- (id)_gkAllCredentials;	// IMP=0x00900000000b3bee
- (void)_gkSetScope:(unsigned int)arg1 forCredential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00900000000b3638
- (id)_gkCredentialForUsername:(id)arg1 environment:(long long)arg2;	// IMP=0x00900000000b35d9
- (id)_gkMapAccountsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00900000000b1a5f
@end

