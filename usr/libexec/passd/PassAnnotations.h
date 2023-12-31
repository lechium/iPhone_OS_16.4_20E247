//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PassAnnotations
{
}

+ (id)_propertySettersForPassAnnotations;	// IMP=0x00400000002ddb99
+ (void)updateAnnotationsOfExpiredIrrelevantOrVoidedPassesWithState:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002dd767
+ (id)queryWithDatabase:(id)arg1 passAnnotationsPID:(unsigned long long)arg2;	// IMP=0x00100000002dd6db
+ (id)anyInDatabase:(id)arg1 withPassID:(id)arg2;	// IMP=0x00100000002dd64f
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002dd5b6
+ (id)_passAnnotationsIDPredicate:(id)arg1;	// IMP=0x00100000002dd593
+ (id)_predicateForPass:(id)arg1;	// IMP=0x00100000002dd55f
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x00100000002dd4ec
+ (id)insertPassAnnotationsForSortingState:(long long)arg1 forPassPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002dd48f
+ (id)insertPassAnnotationsForSortingState:(long long)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002dd414
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000002dd187
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000002dd158
+ (id)databaseTable;	// IMP=0x00100000002dd14b
- (_Bool)deleteFromDatabase;	// IMP=0x00400000002ddc61
- (void)updateSortingState:(long long)arg1;	// IMP=0x00100000002ddb3f
- (long long)sortingState;	// IMP=0x00100000002ddb07
- (id)passAnnotations;	// IMP=0x00100000002dd9cf
- (id)initWithPassAnnotationsForSortingState:(long long)arg1 forPassPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002dd30e
- (id)initWithPassAnnotationsForSortingState:(long long)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002dd1dc

@end

