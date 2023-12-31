//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterFinancingOptionInstallment
{
}

+ (id)_propertySettersForPayLaterFinancingOptionInstallment;	// IMP=0x00400000003ec0ef
+ (id)_propertyValuesForPayLaterFinancingOptionInstallment:(id)arg1;	// IMP=0x00100000003ebe88
+ (id)_predicateForFinancingOptionPID:(long long)arg1;	// IMP=0x00100000003ebe15
+ (void)deletePayLaterFinancingOptionInstallmentsForFinancingOptionPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003ebbb6
+ (id)_installmentsForQuery:(id)arg1;	// IMP=0x00100000003eb958
+ (id)payLaterFinancingOptionInstallmentsForFinancingOptionPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003eb7f7
+ (id)insertOrUpdatePayLaterFinancingOptionInstallments:(id)arg1 forFinancingOptionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003eb5ab
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000003eb485
+ (id)databaseTable;	// IMP=0x00100000003eb478
- (id)_dueAmount;	// IMP=0x00400000003ebc4f
- (id)initWithPayLaterFinancingOptionInstallment:(id)arg1 forFinancingOptionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003eb4b4

@end

