//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteEntity : NSObject
{
    AMSSQLiteConnection *_connection;	// 8 = 0x8
    long long _persistentID;	// 16 = 0x10
}

+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 onConnection:(id)arg4;	// IMP=0x0010000000322ed4
+ (Class)memoryEntityClass;	// IMP=0x001000000032176c
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0010000000321764
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x001000000032175c
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x0010000000321754
+ (id)foreignDatabaseTableForProperty:(id)arg1;	// IMP=0x001000000032174c
+ (id)foreignDatabaseColumnForProperty:(id)arg1;	// IMP=0x0010000000321744
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x0010000000321681
+ (id)databaseTable;	// IMP=0x001000000032164f
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 onConnection:(id)arg4;	// IMP=0x0010000000327cb5
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x0010000000327bb2
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x0010000000327b9d
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x0010000000327b7e
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x0010000000327b5f
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x0010000000327b40
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000032796d
- (void).cxx_destruct;	// IMP=0x0000000000323841
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) AMSSQLiteConnection *connection; // @synthesize connection=_connection;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;	// IMP=0x0000000000323734
- (id)_copyTableClusteredValuesWithValues:(id)arg1;	// IMP=0x00000000003234c8
- (id)valueForProperty:(id)arg1;	// IMP=0x0000000000322df7
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000322de5
- (_Bool)setValuesWithDictionary:(id)arg1;	// IMP=0x00000000003224d7
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000003223eb
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000003223d9
- (id)getValuesForProperties:(id)arg1;	// IMP=0x0000000000321c35
@property(readonly, nonatomic) _Bool existsInDatabase;
- (_Bool)deleteFromDatabase;	// IMP=0x000000000032177d
- (id)initWithPropertyValues:(id)arg1 onConnection:(id)arg2;	// IMP=0x0000000000321382
- (id)initWithPersistentID:(long long)arg1 onConnection:(id)arg2;	// IMP=0x000000000032130c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

