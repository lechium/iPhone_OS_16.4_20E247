//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CreditAccountDetails
{
}

+ (id)_propertySettersForCreditAccountDetails;	// IMP=0x00400000003a2010
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x00100000003a1f9d
+ (void)updateCreditAccountDetails:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003a18fe
+ (id)anyInDatabase:(id)arg1 withAccountPID:(long long)arg2;	// IMP=0x00100000003a1872
+ (id)creditAccountDetailsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003a17c8
+ (void)deleteVirtualCardEncryptedDataForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003a1613
+ (void)deleteCreditAccountDetailsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003a157a
+ (id)insertCreditAccountDetails:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003a14ff
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000003a0ed4
+ (id)databaseTable;	// IMP=0x00100000003a0ec7
- (id)accountDetails;	// IMP=0x00400000003a25a0
- (void)updateWithCreditAccountDetails:(id)arg1;	// IMP=0x00100000003a19ee
- (_Bool)deleteFromDatabase;	// IMP=0x00100000003a16c6
- (id)initWithCreditAccountDetails:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003a0f03

@end
