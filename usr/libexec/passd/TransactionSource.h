//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TransactionSource
{
}

+ (id)_predicateForPIDs:(id)arg1;	// IMP=0x004000000006ce30
+ (id)_predicateForPersistentID:(long long)arg1;	// IMP=0x001000000006cdbd
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x001000000006cd9a
+ (id)_predicateForAccountPersistentID:(long long)arg1;	// IMP=0x001000000006cc66
+ (id)_predicateForAccountUserPersistentID:(long long)arg1;	// IMP=0x001000000006cb32
+ (id)_predicateForPeerPaymentAccountPersistentID:(long long)arg1;	// IMP=0x001000000006c9fe
+ (id)_predicateForPaymentApplicationPersistentID:(long long)arg1;	// IMP=0x001000000006c8cd
+ (id)_predicateForType:(unsigned long long)arg1;	// IMP=0x001000000006c85a
+ (void)deleteEntitiesInDatabase:(id)arg1 forAccount:(id)arg2;	// IMP=0x001000000006c738
+ (void)deleteEntitiesInDatabase:(id)arg1 forAccountUser:(id)arg2;	// IMP=0x001000000006c692
+ (void)deleteEntitiesInDatabase:(id)arg1 forPeerPaymentAccount:(id)arg2;	// IMP=0x001000000006c5ec
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x001000000006c546
+ (void)updateTransactionSourceIdentifier:(id)arg1 toNewTransactionSourceIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000006c297
+ (void)associateTransactionSourcesToPaymentTransactions:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000006bea3
+ (id)anyInDatabase:(id)arg1 withPersistentID:(long long)arg2;	// IMP=0x001000000006be17
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x001000000006bd8b
+ (id)insertTransactionSourceWithType:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000006bc9b
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x001000000006ba82
+ (id)databaseTable;	// IMP=0x001000000006ba75
- (unsigned long long)type;	// IMP=0x004000000006ce6c
- (id)identifier;	// IMP=0x001000000006ce53
- (_Bool)deleteFromDatabase;	// IMP=0x001000000006c7de
- (id)_commonDictionary;	// IMP=0x001000000006bcf3
- (id)initWithTransactionSourceType:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000006bbde

@end

