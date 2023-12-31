//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VirtualCard
{
}

+ (id)_propertySettersForVirtualCard;	// IMP=0x004000000041486d
+ (void)deleteVirtualCardsForVirtualCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004147d4
+ (id)insertVirtualCards:(id)arg1 forVirtualCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004145be
+ (id)virtualCardsForVirtualCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004143a2
+ (id)_predicateForVirtualCardStatusUpdatePID:(long long)arg1;	// IMP=0x0010000000413cc5
+ (id)_predicateForCreditAccountDetailsPID:(long long)arg1;	// IMP=0x0010000000413c52
+ (id)_predicateForVirtualCardIdentifier:(id)arg1;	// IMP=0x0000000000413c2f
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000413c00
+ (id)databaseTable;	// IMP=0x0010000000413bf3
+ (void)deleteVirtualCardEncryptedDataForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000413a2d
+ (void)deleteVirtualCardsForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000413994
+ (id)insertOrUpdateVirtualCards:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000412b68
+ (id)virtualCardsForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000041294c
+ (id)virtualCardForIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004128c0
+ (id)insertOrUpdateVirtualCard:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004127e3
- (id)initWithVirtualCard:(id)arg1 forVirtualCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0040000000413ea1
- (id)virtualCard;	// IMP=0x0010000000413d38
- (void)removeVirtualCardEncryptedData;	// IMP=0x00100000004138b9
- (void)updateWithVirtualCard:(id)arg1;	// IMP=0x00100000004131e8
- (id)initWithVirtualCard:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000041229d

@end

