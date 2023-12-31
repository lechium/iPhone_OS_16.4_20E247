//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CreditAccountSummary
{
}

+ (id)_propertySettersForCreditAccountSummary;	// IMP=0x004000000016be86
+ (id)_predicateForCreditAccountDetailsPID:(long long)arg1;	// IMP=0x001000000016be13
+ (void)updateCreditAccountSummary:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000016b38b
+ (id)creditAccountSummaryForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000016b2e1
+ (void)deleteCreditAccountSummaryForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000016b10b
+ (id)insertAccountSummary:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000016b090
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000016a660
+ (id)databaseTable;	// IMP=0x001000000016a653
- (id)creditAccountSummary;	// IMP=0x004000000016ca53
- (void)updateWithCreditAccountSummary:(id)arg1;	// IMP=0x001000000016b47b
- (_Bool)deleteFromDatabase;	// IMP=0x001000000016b1a4
- (id)initWithCreditAccountSummary:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000016a68f

@end

