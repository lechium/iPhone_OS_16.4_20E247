//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@interface ACAccount (GameCenter)
- (void)_gkSetProperty:(id)arg1 forKey:(id)arg2 environment:(long long)arg3;	// IMP=0x00100000001379b1
- (id)_gkPropertyForKey:(id)arg1 environment:(long long)arg2;	// IMP=0x0010000000137943
- (id)_gkModifiedDateForProperty:(id)arg1 environment:(long long)arg2;	// IMP=0x00100000001378d5
- (id)_gkCredentialForEnvironment:(long long)arg1;	// IMP=0x001000000013774a
- (id)_gkCredentialsForEnvironment:(long long)arg1;	// IMP=0x0010000000136c26
- (id)_gkCredentials;	// IMP=0x0010000000136c12
- (void)_gkSetPlayerInternal:(id)arg1;	// IMP=0x00100000001368cd
- (id)_gkPlayerInternal;	// IMP=0x0010000000136650
- (id)_gkPerEnvironmentTokens;	// IMP=0x0010000000136567
- (void)_gkSetToken:(id)arg1 forEnvironment:(long long)arg2;	// IMP=0x001000000013637a
- (id)_gkTokenForEnvironment:(long long)arg1;	// IMP=0x001000000013623b
- (_Bool)_gkIsPrimaryForEnvironment:(long long)arg1;	// IMP=0x0010000000136183
@end

