//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface PassShareTimeConfiguration
{
}

+ (id)_propertySetters;	// IMP=0x00400000000f6cda
+ (MISSING_TYPE *)_propertyValuesForObject: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000f6b97
+ (id)_predicateForPassEntitlementPID:(long long)arg1;	// IMP=0x00100000000f6b24
+ (id)_predicateForPassSharedEntitlementPID:(long long)arg1;	// IMP=0x00100000000f6ab1
+ (id)_passShareTimeConfigurationsWithQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000f66a4
+ (void)_deletePassShareTimeConfigurationsForQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000f65ce
+ (void)deletePassShareTimeConfigurationsForPassEntitlementPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000f6531
+ (void)deletePassShareTimeConfigurationsForPassSharedEntitlementPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000f6494
+ (id)passShareTimeConfigurationsForPassEntitlementPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000f63e7
+ (id)passShareTimeConfigurationsForPassSharedEntitlementPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000f633a
+ (void)_insertOrUpdatePassShareTimeConfigurations:(id)arg1 forPassSharedEntitlementPID:(long long)arg2 forPassEntitlementPID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x00100000000f60a6
+ (void)insertOrUpdatePassShareTimeConfiguration:(id)arg1 forPassEntitlementPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000f5fcd
+ (void)insertOrUpdatePassShareTimeConfiguration:(id)arg1 forPassSharedEntitlementPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000f5ef3
+ (id)databaseTable;	// IMP=0x00100000000f5d29
- (id)passShareTimeConfiguration;	// IMP=0x00400000000f68e5
- (void)updateWithPassShareTimeConfiguration:(id)arg1;	// IMP=0x00100000000f5e79
- (id)initWithPassShareTimeConfiguration:(id)arg1 forPassSharedEntitlementPID:(long long)arg2 forPassEntitlementPID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x00100000000f5d36

@end
