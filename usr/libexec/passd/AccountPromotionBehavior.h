//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountPromotionBehavior
{
}

+ (id)_propertyValuesForPromotionBehavior:(id)arg1 accountPID:(long long)arg2;	// IMP=0x004000000041552c
+ (id)_propertySettersForAccountPromotionBehavior;	// IMP=0x001000000041522d
+ (id)_queryForPredicate:(id)arg1 database:(id)arg2;	// IMP=0x0010000000415212
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x001000000041519f
+ (void)deleteAccountPromotionBehaviorForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004150b3
+ (id)_insertAccountPromotionBehavior:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000415038
+ (void)insertOrUpdateAccountPromotionBehavior:(id)arg1 accountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000414f80
+ (id)_anyInDatabase:(id)arg1 withAccountPID:(long long)arg2;	// IMP=0x0010000000414ef7
+ (id)accountPromotionBehaviorForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000414e9e
+ (id)databaseTable;	// IMP=0x0010000000414e05
- (id)accountPromotionBehavior;	// IMP=0x00400000004153bf
- (void)_updateWithAccountPromotionBehavior:(id)arg1 accountPID:(long long)arg2;	// IMP=0x001000000041514c
- (id)initWithAccountPromotionBehavior:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000414e12

@end
