//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PassSharedEntitlement
{
}

+ (id)_propertySettersForPassSharedEntitlement;	// IMP=0x004000000027780b
+ (id)_propertyValuesForPassSharedEntitlement:(id)arg1;	// IMP=0x001000000027766b
+ (id)_predicateForEntitlementIdentifier:(id)arg1;	// IMP=0x0010000000277648
+ (id)_predicateForPassSharePID:(long long)arg1;	// IMP=0x00100000002775d5
+ (id)_passSharedEntitlementsWithQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000277169
+ (void)deletePassSharedEntitlementForPassSharePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000027705c
+ (id)passSharedEntitlementsForPassSharePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000276faf
+ (void)insertOrUpdatePassSharedEntitlements:(id)arg1 forPassSharePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000276a3d
+ (id)databaseTable;	// IMP=0x00100000002768d5
- (id)passSharedEntitlement;	// IMP=0x00400000002773cf
- (void)updateWithPassSharedEntitlement:(id)arg1;	// IMP=0x00100000002769c3
- (id)initWithPassSharedEntitlement:(id)arg1 forPassSharePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002768e2

@end

