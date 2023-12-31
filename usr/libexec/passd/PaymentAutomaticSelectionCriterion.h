//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentAutomaticSelectionCriterion
{
}

+ (id)_propertySettersForCriterion;	// IMP=0x0040000000412117
+ (id)_predicateForPaymentApplicationPID:(long long)arg1;	// IMP=0x00100000004120a4
+ (id)_predicateForPaymentApplication:(id)arg1;	// IMP=0x001000000041203f
+ (id)insertCriteria:(id)arg1 withPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000411813
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x001000000041177a
+ (id)_criteriaInDatabase:(id)arg1 forPredicate:(id)arg2;	// IMP=0x001000000041142d
+ (id)criteriaInDatabase:(id)arg1 forPaymentApplicationPID:(long long)arg2;	// IMP=0x00100000004113a1
+ (id)criteriaInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x0010000000411315
+ (id)databaseTable;	// IMP=0x0010000000411308
- (_Bool)deleteFromDatabase;	// IMP=0x0040000000411f81
- (id)initWithCriterion:(id)arg1 forPaymentApplication:(id)arg2 database:(id)arg3;	// IMP=0x0010000000411d0f

@end

