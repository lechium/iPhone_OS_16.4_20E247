//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FeatureApplicationInvitationDetails
{
}

+ (id)_propertySettersForFeatureApplicationInvitationDetails;	// IMP=0x0040000000091346
+ (id)_propertyValuesForFeatureApplicationInvitationDetails:(id)arg1;	// IMP=0x0010000000091144
+ (id)_predicateForApplicationPID:(id)arg1;	// IMP=0x0010000000091121
+ (void)updateFeatureApplicationInvitationDetails:(id)arg1 forApplicationPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000090fb2
+ (id)featureApplicationInvitationDetailsForApplicationPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000090f08
+ (void)deleteFeatureApplicationInvitationDetailsForApplicationPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000090e6f
+ (id)insertFeatureApplicationInvitationDetails:(id)arg1 forApplicationPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000090de1
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000090cf0
+ (id)databaseTable;	// IMP=0x0010000000090ce3
- (id)featureApplicationInvitationDetails;	// IMP=0x0040000000091516
- (void)updateWithFeatureApplicationInvitationDetails:(id)arg1;	// IMP=0x00100000000910a7
- (id)initWithFeatureApplicationInvitationDetails:(id)arg1 forApplicationPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000090cfd

@end
