//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (AppleIDAuthentication)
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0090000000002d80
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0090000000002d68
- (id)aida_iCloudAccountMatchingAppleIDAuthAccount:(id)arg1;	// IMP=0x0090000000002adf
- (id)aida_accountForAltDSID:(id)arg1;	// IMP=0x0090000000002876
- (id)aida_accountForPrimaryiCloudAccount;	// IMP=0x0090000000002817
- (id)aida_accountForiCloudAccount:(id)arg1;	// IMP=0x00900000000024ef
- (id)aida_AppleIDAuthenticationAccounts;	// IMP=0x0090000000002490
- (id)aida_AppleIDAuthenticationAccountType;	// IMP=0x0090000000002474
- (id)_primaryiCloudAccount;	// IMP=0x009000000000225b
@end

