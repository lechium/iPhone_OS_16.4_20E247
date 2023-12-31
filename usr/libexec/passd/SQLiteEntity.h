//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteDatabase;

@interface SQLiteEntity : NSObject
{
    SQLiteDatabase *_database;	// 8 = 0x8
    long long _persistentID;	// 16 = 0x10
}

+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 database:(id)arg4;	// IMP=0x0010000000067ba3
+ (void)applyPropertySetters:(id)arg1 toObject:(id)arg2 withProperties:(id)arg3 values:(id *)arg4;	// IMP=0x00100000000674a7
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x0010000000065fe6
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x0010000000065fde
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x0010000000065fd6
+ (id)foreignDatabaseTableForProperty:(id)arg1;	// IMP=0x0010000000065fce
+ (id)foreignDatabaseColumnForProperty:(id)arg1;	// IMP=0x0010000000065fc6
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x0010000000065f15
+ (id)databaseTable;	// IMP=0x0010000000065ee3
+ (id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2;	// IMP=0x0010000000065eda
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000065ed2
+ (id)databasePropertyToSetClientProperty:(id)arg1;	// IMP=0x0010000000065ec9
+ (id)databasePropertyToGetClientProperty:(id)arg1;	// IMP=0x0010000000065ec0
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1;	// IMP=0x0010000000065cd2
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 limit:(long long)arg5 groupingProperties:(id)arg6 returnsDistinctEntities:(_Bool)arg7;	// IMP=0x00100000000937de
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 limit:(long long)arg5 groupingProperties:(id)arg6;	// IMP=0x00100000000937b3
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 limit:(long long)arg5;	// IMP=0x0010000000093797
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4;	// IMP=0x0010000000093774
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x001000000009375f
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000009374a
+ (id)sumForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;	// IMP=0x001000000009372b
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;	// IMP=0x001000000009370c
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;	// IMP=0x00100000000936ed
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4;	// IMP=0x001000000009348a
+ (long long)countDistinctInDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x0010000000093447
+ (long long)countInDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000009341c
+ (_Bool)existsInDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x00100000000933f1
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x0010000000093293
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) SQLiteDatabase *database; // @synthesize database=_database;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;	// IMP=0x00100000000681de
- (id)_copyTableClusteredValuesWithValues:(id)arg1;	// IMP=0x0010000000068055
- (id)duplicateEntityAssigningNewPersistentID:(long long)arg1;	// IMP=0x001000000006764c
- (id)duplicateEntity;	// IMP=0x0010000000067638
- (void)getValuesForProperties:(id)arg1 withApplier:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067409
- (id)valueForProperty:(id)arg1;	// IMP=0x001000000006736b
- (id)valueForExternalProperty:(id)arg1;	// IMP=0x0010000000067363
- (_Bool)setValuesWithDictionary:(id)arg1;	// IMP=0x0010000000066aef
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000066a5d
- (void)setExternalValuesWithDictionary:(id)arg1;	// IMP=0x0010000000066a57
- (id)valuesforProperties:(id)arg1;	// IMP=0x0010000000066461
@property(readonly, nonatomic) _Bool existsInDatabase;
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000065fec
- (id)initWithPropertyValues:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000065a06
- (id)initWithPersistentID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000659be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

