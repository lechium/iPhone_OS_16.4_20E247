//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountPaymentFundingSource
{
}

+ (id)_propertySettersForPaymentFundingSource;	// IMP=0x004000000026ab3f
+ (id)_propertyValuesForPaymentFundingSource:(id)arg1;	// IMP=0x001000000026a98e
+ (id)_fundingSourcesWithQuery:(id)arg1;	// IMP=0x001000000026a793
+ (id)_predicateForPersistentID:(id)arg1;	// IMP=0x001000000026a49e
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x001000000026a47b
+ (id)_predicateForAccountPID:(id)arg1;	// IMP=0x001000000026a458
+ (_Bool)deletePaymentFundingSourcesForAccountPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000026a3bc
+ (id)paymentFundingSourceForAccountPID:(id)arg1 identifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000026a238
+ (id)paymentFundingSourcesForAccountPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000026a185
+ (id)insertOrUpdatePaymentFundingSources:(id)arg1 forAccountPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000269c2d
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000269bfe
+ (id)databaseTable;	// IMP=0x0010000000269bf1
- (id)fundingSource;	// IMP=0x004000000026a4c1
- (void)updatePaymentFundingSource:(id)arg1;	// IMP=0x001000000026a10b
- (id)initWitePaymentFundingSource:(id)arg1 forAccountPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000026a040

@end

