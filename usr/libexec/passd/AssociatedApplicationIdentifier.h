//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AssociatedApplicationIdentifier
{
}

+ (id)_propertySettersForAssociatedApplicationIdentifier;	// IMP=0x00400000003e0344
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003e02ab
+ (id)associatedApplicationIdentifiersInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x00100000003e021f
+ (id)associatedApplicationIdentifiersInDatabase:(id)arg1 forPass:(id)arg2;	// IMP=0x00100000003e0193
+ (id)_predicateForPass:(id)arg1;	// IMP=0x00100000003e015f
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x00100000003e00ec
+ (id)_associatedApplicationIdentifiersInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00100000003dfed0
+ (void)insertAssociatedApplicationIdentifiers:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003dfd3d
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000003dfbf2
+ (id)databaseTable;	// IMP=0x00100000003dfbe5
- (id)initWithApplicationIdentifier:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00400000003dfc21

@end

