//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountStatementMetadata
{
}

+ (id)_commonDictionaryForStatementMetadata:(id)arg1;	// IMP=0x0040000000122d49
+ (id)_propertySettersForAccountStatementTransactionMetadata;	// IMP=0x0010000000122ae7
+ (id)_predicateForStatementIdentifier:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x00100000001229c4
+ (id)_predicateForPID:(long long)arg1;	// IMP=0x0010000000122951
+ (id)_predicateForAccountIdentifier:(id)arg1;	// IMP=0x001000000012292e
+ (id)_predicateForStatementIdentifier:(id)arg1;	// IMP=0x001000000012290b
+ (id)_statementMetadataWithQuery:(id)arg1;	// IMP=0x0010000000122032
+ (id)accountStatementMetadataForAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000121f7e
+ (id)anyInDatabase:(id)arg1 forPID:(long long)arg2;	// IMP=0x0010000000121ef2
+ (id)anyInDatabase:(id)arg1 forStatementIdentifier:(id)arg2 accountIdentifier:(id)arg3;	// IMP=0x0010000000121e61
+ (void)deleteAccountStatementMetadataForStatementIdentifier:(id)arg1 accountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000121d35
+ (id)insertOrUpdateAccountStatementMetadata:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000121bc0
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x0010000000121a72
+ (id)databaseTable;	// IMP=0x0010000000121a65
- (void)openingDate:(id *)arg1 closingDate:(id *)arg2;	// IMP=0x0040000000122723
- (id)accountIdentifier;	// IMP=0x001000000012270a
- (id)statementIdentifier;	// IMP=0x00100000001226f1
- (unsigned long long)accountType;	// IMP=0x00100000001226a6
- (id)accountStatementMetadata;	// IMP=0x001000000012244a
- (void)markStatementMetadataAsProcessed:(_Bool)arg1;	// IMP=0x0010000000122246
- (void)updateWithAccountStatementMetadata:(id)arg1;	// IMP=0x00100000001221cc
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000121dd1
- (id)initWithStatementMetadata:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000121b26

@end
