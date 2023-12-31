//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSString, SBKTransaction;

__attribute__((visibility("hidden")))
@interface SBKStoreError : NSError
{
    SBKTransaction *_transaction;	// 40 = 0x28
}

+ (id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;	// IMP=0x006000000000c538
+ (id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;	// IMP=0x006000000000c37a
+ (id)delegateCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000c35e
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000c342
+ (id)transactionTimeoutErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000c326
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;	// IMP=0x006000000000c28b
+ (id)transactionMissingURLErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000c1eb
+ (id)transactionMissingDomainErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000c14b
+ (id)storeAccountSessionExpiredWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000c0ab
+ (id)noStoreAccountErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000c00b
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000bf6b
+ (id)userCancelledSignInErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000becb
+ (id)storeValidationErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000bdd2
+ (id)storeGenericErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000bcd9
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountName:(id)arg1 currentStoreAccountName:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;	// IMP=0x006000000000bb25
+ (id)storeLoggedOutErrorWithPreviousStoreAccountName:(id)arg1 transaction:(id)arg2 underlyingError:(id)arg3;	// IMP=0x006000000000b999
+ (id)killSwitchErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000b8f9
+ (id)networkingBlockedErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000b859
+ (id)keyValueStoreDisabledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000b7b9
+ (id)unknownErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x006000000000b684
+ (id)keyValueStoreErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;	// IMP=0x006000000000b583
- (void).cxx_destruct;	// IMP=0x000000000000b570
@property(retain, nonatomic) SBKTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) double retrySeconds;
@property(readonly, copy, nonatomic) NSString *currentStoreAccountName;
@property(readonly, copy, nonatomic) NSString *previousStoreAccountName;
@property(readonly, nonatomic) _Bool isTransactionMissingInformationError;
@property(readonly, nonatomic) _Bool isTransactionCancelledError;
@property(readonly, nonatomic) _Bool isClampError;
@property(readonly, nonatomic) _Bool isRecoverableError;
@property(readonly, nonatomic) _Bool isAccountsChangedError;
@property(readonly, nonatomic) _Bool isAuthenticationError;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b298
- (id)description;	// IMP=0x000000000000b1f6

@end

