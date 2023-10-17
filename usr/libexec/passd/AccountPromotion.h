//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountPromotion
{
}

+ (id)_propertyValuesForPromotion:(id)arg1 accountPID:(long long)arg2;	// IMP=0x0040000000042977
+ (void)populateAssociatedCompletionStepsForPromotion:(id)arg1 promotionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000428d2
+ (id)_propertySettersForAccountPromotion;	// IMP=0x00100000000423d6
+ (id)_queryForPredicate:(id)arg1 database:(id)arg2;	// IMP=0x00100000000422b3
+ (id)_predicateForProgramIdentifier:(id)arg1 accountPID:(long long)arg2;	// IMP=0x00100000000421b5
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x0010000000042142
+ (id)_predicateForProgramIdentifier:(id)arg1;	// IMP=0x0010000000042103
+ (void)updateImpressionCount:(long long)arg1 promotionProgramIdentifier:(id)arg2 accountPID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x0010000000041fd3
+ (void)updateImpressionCountsForPromotions:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000041df3
+ (void)deleteAccountPromotion:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000041cc9
+ (void)deleteAccountPromotionsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000041c30
+ (id)_insertAccountPromotion:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000041bb5
+ (void)insertOrUpdateAccountPromotion:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000041aca
+ (void)insertOrUpdateAccountPromotions:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000004192f
+ (id)accountPromotionForProgramIdentifier:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000418d3
+ (id)_anyInDatabase:(id)arg1 withProgramIdentifier:(id)arg2 accountPID:(long long)arg3;	// IMP=0x0010000000041844
+ (id)_promotionsWithPredicate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000041626
+ (id)promotionPIDsForProgramIdentifier:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000004147d
+ (id)accountPromotionsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000413f4
+ (id)databaseTable;	// IMP=0x00100000000412e9
- (void)updateWithPromotionCompletionSteps:(id)arg1;	// IMP=0x0040000000042843
- (id)accountPromotion;	// IMP=0x0010000000042675
- (void)_updateWithAccountPromotion:(id)arg1 accountPID:(long long)arg2;	// IMP=0x0010000000042053
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000041d63
- (id)initWithAccountPromotion:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000412f6

@end
