//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterInstallment
{
}

+ (id)_propertySettersForPayLaterInstallment;	// IMP=0x00400000002a388f
+ (id)_propertyValuesForPayLaterInstallment:(id)arg1;	// IMP=0x00100000002a35b9
+ (id)_predicateForEndDueDate:(id)arg1;	// IMP=0x00100000002a3538
+ (id)_predicateForStartDueDate:(id)arg1;	// IMP=0x00100000002a34b7
+ (id)_predicateForFinancingPlanStates:(id)arg1;	// IMP=0x00100000002a3288
+ (id)_predicateForAccountIdentifier:(id)arg1;	// IMP=0x00100000002a3265
+ (id)_predicateForInstallmentIdentifier:(id)arg1;	// IMP=0x00100000002a3242
+ (id)_predicateForInstallmentStatuses:(id)arg1;	// IMP=0x00100000002a3013
+ (id)_predicateForInstallmentStatus:(unsigned long long)arg1;	// IMP=0x00100000002a2fa0
+ (id)_predicateForScheduleSummaryPID:(long long)arg1;	// IMP=0x00100000002a2f2d
+ (id)_predicateForScheduleSummaryPID:(long long)arg1 installmentIdentifier:(id)arg2;	// IMP=0x00100000002a2e1c
+ (void)deletePayLaterInstallmentWithIdentifier:(id)arg1 forScheduleSummaryPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002a2b49
+ (void)deletePayLaterInstallmentsForScheduleSummaryPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002a2ab0
+ (id)_installmentsForQuery:(id)arg1;	// IMP=0x00100000002a2647
+ (id)upcomingInstallmentsForAccountIdentifier:(id)arg1 limit:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002a20ef
+ (id)financingPlanInstallmentsTotalDueForAccountIdentifier:(id)arg1 fromDaysInFuture:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002a1d25
+ (void)financingPlanInstallmentsDueDateRangeForAccountIdentifier:(id)arg1 financingPlanStates:(id)arg2 startDate:(id *)arg3 endDate:(id *)arg4 inDatabase:(id)arg5;	// IMP=0x00100000002a1723
+ (id)payLaterInstallmentsForScheduleSummaryPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002a15c2
+ (id)financingPlanIdentifiersThatContainInstallmentWithStatus:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002a13fd
+ (id)insertOrUpdatePayLaterInstallments:(id)arg1 forScheduleSummaryPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002a113b
+ (id)insertOrUpdatePayLaterInstallment:(id)arg1 forScheduleSummaryPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002a0fb4
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000002a0d65
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000002a0d36
+ (id)databaseTable;	// IMP=0x00100000002a0d29
- (id)planIdentifier;	// IMP=0x00400000002a2e03
- (id)_currentBalance;	// IMP=0x00100000002a2d3c
- (id)_totalAmount;	// IMP=0x00100000002a2c75
- (_Bool)deleteFromDatabase;	// IMP=0x00100000002a2be5
- (void)updateWithPayLaterInstallment:(id)arg1;	// IMP=0x00100000002a1383
- (id)initWithPayLaterInstallment:(id)arg1 forScheduleSummaryPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002a0ebd

@end
