//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountTransfer
{
}

+ (id)_propertySetterForFundingDetailsName;	// IMP=0x00400000002690d5
+ (id)_propertySettersForAccountTransfer;	// IMP=0x001000000026886b
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x0010000000268848
+ (id)_predicateForAccountIdentifier:(id)arg1;	// IMP=0x0010000000268825
+ (id)_predicateForNoEventPID;	// IMP=0x0010000000268805
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x0010000000268792
+ (id)_predicateForTransactionReferenceIdentifier:(id)arg1;	// IMP=0x001000000026876f
+ (id)_predicateForTransactionServiceIdentifier:(id)arg1;	// IMP=0x001000000026863c
+ (id)databaseTable;	// IMP=0x001000000026862f
+ (void)deleteTransfersWithAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002684c6
+ (void)deleteTransferWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000026842d
+ (id)_commonInitWithTransfer:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x00100000002677ec
+ (id)insertTransfer:(id)arg1 accountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000026775d
+ (id)insertTransfer:(id)arg1 forEventPID:(long long)arg2 accountIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x001000000026768a
+ (id)_transfersFromQuery:(id)arg1;	// IMP=0x0010000000267497
+ (id)transfersWithAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002673b1
+ (id)transfersWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002672cb
+ (id)transfersForTransactionReferenceIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000026716e
+ (id)transfersForTransactionServiceIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000267011
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x0010000000266f5d
- (id)transfer;	// IMP=0x0040000000267e83

@end
