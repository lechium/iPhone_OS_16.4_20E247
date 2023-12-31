//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface BarcodeCredential
{
}

+ (id)_barcodeCredentialsForQuery:(id)arg1;	// IMP=0x0040000000404beb
+ (id)_propertySettersForBarcodeCredential;	// IMP=0x00100000004049ac
+ (id)databaseTable;	// IMP=0x001000000040499f
+ (id)_queryForNumberOfBarcodeCredentialsDisplayedAfterDate:(id)arg1 paymentApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000404846
+ (id)_queryForLastUsedBarcodeIdentifierForPaymentApplicationPID:(long long)arg1 database:(id)arg2;	// IMP=0x001000000040467f
+ (id)_queryForValidBarcodeCredeitialsWithLimit:(long long)arg1 paymentApplicationPID:(long long)arg2 database:(id)arg3;	// IMP=0x0010000000404441
+ (id)_predicateForDisplayedAfterDate:(id)arg1;	// IMP=0x00100000004043d9
+ (id)_predicateForBarcodeIdentifier:(id)arg1;	// IMP=0x0010000000404371
+ (id)_predicateForBarcodeCredentialWithValue:(_Bool)arg1;	// IMP=0x0010000000404323
+ (id)_predicateForPaymentApplicationPersistentID:(long long)arg1;	// IMP=0x00100000004042b0
+ (id)_predicateForDisplayedBarcodeCredential;	// IMP=0x0010000000404290
+ (id)_predicateForUndisplayedBarcodeCredential;	// IMP=0x0010000000404270
+ (id)_predicateForUnexpiredBarcodeCredential;	// IMP=0x00100000004041df
+ (id)insertBarcodeCredentials:(id)arg1 forPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000403ac2
+ (_Bool)removeAllBarcodeCredentialsForPaymentApplication:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004038aa
+ (_Bool)removeAllBarcodeCredentialValuesForPaymentApplication:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000403684
+ (unsigned long long)numberOfBarcodeCredentialsDisplayedAfterDate:(id)arg1 paymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004035e5
+ (unsigned long long)numberOfValidCredentialsForPaymentApplication:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000403550
+ (id)lastUsedBarcodeIdentifierForPaymentApplication:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000403470
+ (id)firstValidBarcodeCredentialForPaymentApplication:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004033b0
+ (id)anyInDatabase:(id)arg1 withBarcodeIdentifier:(id)arg2;	// IMP=0x0010000000403324
- (_Bool)updateWithDisplayTimestamp:(id)arg1;	// IMP=0x0040000000404194
- (id)barcodeCredential;	// IMP=0x001000000040405c
- (MISSING_TYPE *)initWithBarcodeCredential:withPaymentApplication:inDatabase: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000403ddd

@end

