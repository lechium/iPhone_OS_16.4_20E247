//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountStatementTransactionMetadata
{
}

+ (id)_commonDictionaryForStatementTranscationMetadata:(id)arg1;	// IMP=0x0040000000279846
+ (id)_propertySettersForAccountStatementTransactionMetadata;	// IMP=0x0010000000279765
+ (id)_predicateForTransactionIdentifier:(id)arg1;	// IMP=0x0010000000279742
+ (id)_predicateForStatementMetadataPID:(long long)arg1;	// IMP=0x00100000002796cf
+ (id)_transactionMetadataWithQuery:(id)arg1;	// IMP=0x0010000000279248
+ (id)accountStatementTransactionMetadataForStatementMetadataPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000279194
+ (id)anyInDatabase:(id)arg1 forStatementMetadataPID:(long long)arg2 transactionIdentifier:(id)arg3;	// IMP=0x0010000000279037
+ (void)deleteAccountStatementTransactionMetadataForStatementMetadataPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000278f6f
+ (id)insertOrUpdateAccountStatementTransactionMetadata:(id)arg1 forStatementMetadataPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000278a8d
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x001000000027891d
+ (id)databaseTable;	// IMP=0x0010000000278910
- (unsigned long long)accountType;	// IMP=0x0040000000279611
- (id)accountIdentifier;	// IMP=0x00100000002795f8
- (id)transactionIdentifier;	// IMP=0x00100000002795df
- (void)updateWithStatementTransactionMetadata:(id)arg1;	// IMP=0x0010000000279565
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000279008
- (id)initWithStatementTransactionMetadata:(id)arg1 forStatementMetadataPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002789d1

@end

