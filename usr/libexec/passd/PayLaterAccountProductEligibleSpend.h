//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterAccountProductEligibleSpend
{
}

+ (id)_commonDictionaryForProductEligibleSpend:(id)arg1;	// IMP=0x0040000000068cd6
+ (id)_propertySettersForPayLaterAccountProductEligibleSpend;	// IMP=0x0010000000068927
+ (id)_predicateForProductPID:(long long)arg1;	// IMP=0x00100000000688b4
+ (id)payLaterProductEligibleSpendForProductPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000068689
+ (void)deletePayLaterProductEligibleSpendForPayLaterProductPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000685f0
+ (id)insertOrUpdatePayLaterProductEligibleSpend:(id)arg1 forPayLaterAccountProductPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000068471
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000068351
+ (id)databaseTable;	// IMP=0x0010000000068344
- (id)_availableToSpend;	// IMP=0x0040000000068c0f
- (id)eligbleSpend;	// IMP=0x00100000000689fb
- (void)updateWitProductEligibleSpend:(id)arg1;	// IMP=0x00100000000687b9
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000068733
- (id)initWithAccountProductEligibleSpend:(id)arg1 forPayLaterAccountProductPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000068380

@end

