//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (ESExtensions)
- (id)es_accountsWithAccountTypeIdentifiers:(id)arg1 outError:(id *)arg2;	// IMP=0x00900000000089e4
- (void)es_loadESAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00900000000089c9
- (void)es_loadESAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00900000000089af
- (void)es_loadESAccountsEnabledForDADataclasses:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0090000000008907
- (void)es_loadESAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0090000000008868
- (void)_esAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 filterOnDataclasses:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x009000000000775e
@end
