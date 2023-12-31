//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AKSQLiteMigration;

@interface AKSQLiteExecutor : NSObject
{
    struct sqlite3 *_database;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    _Bool _shouldAutomaticallyMigrate;	// 24 = 0x18
    id <AKSQLiteMigration> _migrator;	// 32 = 0x20
}

+ (id)_databaseQueue;	// IMP=0x004000000007fdbb
+ (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x001000000007fcd1
+ (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000007fbe8
- (void).cxx_destruct;	// IMP=0x00200000000812dd
@property(retain, nonatomic) id <AKSQLiteMigration> migrator; // @synthesize migrator=_migrator;
- (void)setShouldAutomaticallyMigrate:(_Bool)arg1;	// IMP=0x00100000000812b9
- (_Bool)shouldAutomaticallyMigrate;	// IMP=0x00100000000812b0
- (void)_unsafe_closeDatabase;	// IMP=0x00100000000811de
- (void)closeDatabase;	// IMP=0x0010000000081172
- (void)_unsafe_wipeDatabase:(id *)arg1;	// IMP=0x0010000000081064
- (void)wipeDatabase:(id *)arg1;	// IMP=0x0010000000080ee8
- (int)_unsafe_createDataBase;	// IMP=0x0010000000080ce0
- (_Bool)_unsafe_openDatabase:(id *)arg1;	// IMP=0x0010000000080af0
- (_Bool)openDatabase:(id *)arg1;	// IMP=0x001000000008092e
- (id)_currentDataBaseError;	// IMP=0x00100000000807c6
- (_Bool)_handleDatabaseFailureError:(id *)arg1;	// IMP=0x0010000000080635
- (_Bool)_finalizeStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x00100000000805ae
- (struct sqlite3_stmt *)_prepareStatementForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000080505
- (void)_stepThroughRowsWithQuery:(id)arg1 statement:(struct sqlite3_stmt *)arg2;	// IMP=0x0010000000080452
- (void)_printStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00100000000803f7
- (long long)performInsertQuery:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000802b7
- (_Bool)performQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000080162
- (_Bool)performQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000080073
- (_Bool)performQuery:(id)arg1;	// IMP=0x001000000008005f
- (long long)performInsertQuery:(id)arg1;	// IMP=0x0010000000080003
- (int)_executeQuery:(id)arg1;	// IMP=0x001000000007ff03
- (void)rollbackTransaction;	// IMP=0x001000000007feea
- (void)commitTransaction;	// IMP=0x001000000007feac
- (void)openTransaction;	// IMP=0x001000000007fe93
- (void)performTransactionBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x001000000007fe3c
@property(readonly, nonatomic) NSString *databasePath;
@property(readonly, nonatomic) struct sqlite3 *database;
- (id)initWithDatabasePath:(id)arg1 migrationController:(id)arg2;	// IMP=0x001000000007fb44

@end

