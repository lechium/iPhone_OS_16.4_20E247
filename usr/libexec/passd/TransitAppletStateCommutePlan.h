//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TransitAppletStateCommutePlan
{
}

+ (id)_propertySettersForCommutePlanItem;	// IMP=0x00400000004166f5
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x00100000004166d2
+ (id)_predicateForTransitAppletStatePID:(long long)arg1;	// IMP=0x001000000041665f
+ (id)_predicateForPaymentPassPID:(long long)arg1;	// IMP=0x00100000004165ec
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00100000004165c9
+ (id)transitAppletCommutePlansInDatabase:(id)arg1 forPaymentPassPID:(long long)arg2 andTransitAppletStatePID:(long long)arg3;	// IMP=0x00100000004160c6
+ (id)transitAppletStateCommutePlansInDatabase:(id)arg1 forPaymentPassPID:(long long)arg2 andTransitAppletStatePID:(long long)arg3;	// IMP=0x0010000000415e36
+ (in id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2 forPassWithUniqueIdentifier:(id)arg3 andTransitAppletStatePID:(long long)arg4;	// IMP=0x0010000000415cab
+ (void)deleteEntitiesForPaymentPassPID:(long long)arg1 andTransitAppletStatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000415b5a
+ (void)updateWithTransitAppletCommutePlans:(id)arg1 forPaymentPassPID:(long long)arg2 andTransitAppletStatePID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x0010000000415aaa
+ (id)insertTransitAppletCommutePlans:(id)arg1 withPaymentPassPID:(long long)arg2 withTransitAppletStatePID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x0010000000415893
+ (id)insertTransitAppletCommutePlan:(id)arg1 withPaymentPassPID:(long long)arg2 withTransitAppletStatePID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x0010000000415810
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x001000000041573c
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000004156f3
+ (id)databaseTable;	// IMP=0x00100000004156e6
- (id)_valuesDictionaryForTransitAppletCommutePlan:(id)arg1 paymentPassPID:(long long)arg2 transitAppletStatePID:(long long)arg3;	// IMP=0x00400000004163c7
- (id)commutePlan;	// IMP=0x001000000041628f
- (id)initWithTransitAppletCommutePlan:(id)arg1 withPaymentPassPID:(long long)arg2 withTransitAppletStatePID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x001000000041565b

@end

