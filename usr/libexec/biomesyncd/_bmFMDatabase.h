//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString, NSURL;

@interface _bmFMDatabase : NSObject
{
    void *_db;	// 8 = 0x8
    _Bool _isExecutingStatement;	// 16 = 0x10
    double _startBusyRetryTime;	// 24 = 0x18
    NSMutableSet *_openResultSets;	// 32 = 0x20
    NSMutableSet *_openFunctions;	// 40 = 0x28
    NSDateFormatter *_dateFormat;	// 48 = 0x30
    _Bool _shouldCacheStatements;	// 56 = 0x38
    _Bool _traceExecution;	// 57 = 0x39
    _Bool _checkedOut;	// 58 = 0x3a
    _Bool _crashOnErrors;	// 59 = 0x3b
    _Bool _logsErrors;	// 60 = 0x3c
    _Bool _isOpen;	// 61 = 0x3d
    _Bool _isInTransaction;	// 62 = 0x3e
    double _maxBusyRetryTimeInterval;	// 64 = 0x40
    NSMutableDictionary *_cachedStatements;	// 72 = 0x48
    NSString *_databasePath;	// 80 = 0x50
}

+ (id)storeableDateFormat:(id)arg1;	// IMP=0x0040000000044425
+ (_Bool)isSQLiteThreadSafe;	// IMP=0x00100000000437b0
+ (id)sqliteLibVersion;	// IMP=0x001000000004376c
+ (int)FMDBVersion;	// IMP=0x001000000004356e
+ (id)FMDBUserVersion;	// IMP=0x0010000000043561
+ (id)databaseWithURL:(id)arg1;	// IMP=0x0010000000043371
+ (id)databaseWithPath:(id)arg1;	// IMP=0x0010000000043328
- (void).cxx_destruct;	// IMP=0x0010000000047598
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) _Bool isInTransaction; // @synthesize isInTransaction=_isInTransaction;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain) NSMutableDictionary *cachedStatements; // @synthesize cachedStatements=_cachedStatements;
@property _Bool logsErrors; // @synthesize logsErrors=_logsErrors;
@property _Bool crashOnErrors; // @synthesize crashOnErrors=_crashOnErrors;
@property _Bool checkedOut; // @synthesize checkedOut=_checkedOut;
@property _Bool traceExecution; // @synthesize traceExecution=_traceExecution;
- (void)resultErrorTooBigInContext:(void *)arg1;	// IMP=0x00100000000474f3
- (void)resultErrorNoMemoryInContext:(void *)arg1;	// IMP=0x00100000000474e6
- (void)resultErrorCode:(int)arg1 context:(void *)arg2;	// IMP=0x00100000000474d7
- (void)resultError:(id)arg1 context:(void *)arg2;	// IMP=0x00100000000474a0
- (void)resultString:(id)arg1 context:(void *)arg2;	// IMP=0x0010000000047462
- (void)resultData:(id)arg1 context:(void *)arg2;	// IMP=0x00100000000473f8
- (void)resultDouble:(double)arg1 context:(void *)arg2;	// IMP=0x00100000000473eb
- (void)resultLong:(long long)arg1 context:(void *)arg2;	// IMP=0x00100000000473db
- (void)resultInt:(int)arg1 context:(void *)arg2;	// IMP=0x00100000000473cc
- (void)resultNullInContext:(void *)arg1;	// IMP=0x00100000000473bf
- (id)valueString:(void *)arg1;	// IMP=0x0010000000047381
- (id)valueData:(void *)arg1;	// IMP=0x001000000004732c
- (double)valueDouble:(void *)arg1;	// IMP=0x001000000004731f
- (long long)valueLong:(void *)arg1;	// IMP=0x0010000000047312
- (int)valueInt:(void *)arg1;	// IMP=0x0010000000047305
- (int)valueType:(void *)arg1;	// IMP=0x00100000000472f8
- (void)makeFunctionNamed:(id)arg1 arguments:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047202
- (void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000471f0
@property(nonatomic) _Bool shouldCacheStatements; // @synthesize shouldCacheStatements=_shouldCacheStatements;
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int *)arg3 checkpointCount:(int *)arg4 error:(id *)arg5;	// IMP=0x0010000000046fe6
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000046fc1
- (_Bool)checkpoint:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000046f9a
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x0010000000046e34
- (_Bool)rollbackToSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000046cf1
- (_Bool)releaseSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000046bae
- (_Bool)startSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000046a6b
- (_Bool)interrupt;	// IMP=0x0010000000046a3a
- (_Bool)inTransaction;	// IMP=0x0010000000046a31
- (_Bool)beginExclusiveTransaction;	// IMP=0x0010000000046a03
- (_Bool)beginImmediateTransaction;	// IMP=0x00100000000469d5
- (_Bool)beginDeferredTransaction;	// IMP=0x00100000000469a7
- (_Bool)beginTransaction;	// IMP=0x0010000000046979
- (_Bool)commit;	// IMP=0x001000000004694b
- (_Bool)rollback;	// IMP=0x001000000004691d
- (id)prepare:(id)arg1;	// IMP=0x00100000000468f3
- (_Bool)update:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x0010000000046849
- (_Bool)executeUpdate:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x001000000004679f
- (_Bool)executeStatements:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000466a7
- (_Bool)executeStatements:(id)arg1;	// IMP=0x0010000000046693
- (_Bool)executeUpdateWithFormat:(id)arg1;	// IMP=0x001000000004639e
- (_Bool)executeUpdate:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;	// IMP=0x0010000000046377
- (_Bool)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x001000000004634c
- (_Bool)executeUpdate:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004631d
- (_Bool)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x00100000000462f2
- (_Bool)executeUpdate:(id)arg1;	// IMP=0x0010000000046242
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(struct __va_list_tag [1])arg5;	// IMP=0x00100000000461a3
- (id)executeQuery:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;	// IMP=0x0010000000046179
- (id)executeQuery:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000046105
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x00100000000460dd
- (id)executeQueryWithFormat:(id)arg1;	// IMP=0x0010000000045f61
- (id)executeQuery:(id)arg1;	// IMP=0x0010000000045ea1
- (_Bool)bindStatement:(struct sqlite3_stmt *)arg1 WithArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(struct __va_list_tag [1])arg4;	// IMP=0x001000000004590d
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(struct __va_list_tag [1])arg4 shouldBind:(_Bool)arg5;	// IMP=0x001000000004558a
- (id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x0010000000045560
- (void)extractSQL:(id)arg1 argumentsList:(struct __va_list_tag [1])arg2 intoString:(id)arg3 arguments:(id)arg4;	// IMP=0x0010000000044d49
- (int)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;	// IMP=0x00100000000447e3
@property(readonly, nonatomic) int changes;
@property(readonly, nonatomic) long long lastInsertRowId;
- (id)lastError;	// IMP=0x001000000004470e
- (id)errorWithMessage:(id)arg1;	// IMP=0x0010000000044687
- (int)lastExtendedErrorCode;	// IMP=0x0010000000044679
- (int)lastErrorCode;	// IMP=0x001000000004466b
- (_Bool)hadError;	// IMP=0x0010000000044650
- (id)lastErrorMessage;	// IMP=0x0010000000044621
- (_Bool)databaseExists;	// IMP=0x00100000000445d3
- (void)warnInUse;	// IMP=0x001000000004459a
@property(readonly, nonatomic) _Bool goodConnection;
- (id)stringFromDate:(id)arg1;	// IMP=0x0010000000044524
- (id)dateFromString:(id)arg1;	// IMP=0x001000000004450e
- (void)setDateFormat:(id)arg1;	// IMP=0x00100000000444fd
- (_Bool)hasDateFormatter;	// IMP=0x00100000000444ef
- (_Bool)setKeyWithData:(id)arg1;	// IMP=0x001000000004441d
- (_Bool)setKey:(id)arg1;	// IMP=0x0010000000044358
- (_Bool)rekeyWithData:(id)arg1;	// IMP=0x0010000000044350
- (_Bool)rekey:(id)arg1;	// IMP=0x001000000004428b
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;	// IMP=0x001000000004411d
- (id)cachedStatementForQuery:(id)arg1;	// IMP=0x0010000000044074
- (void)clearCachedStatements;	// IMP=0x0010000000043e15
- (void)resultSetDidClose:(id)arg1;	// IMP=0x0010000000043dc1
- (void)closeOpenResultSets;	// IMP=0x0010000000043be3
@property(readonly, nonatomic) _Bool hasOpenResultSets;
- (void)setBusyRetryTimeout:(int)arg1;	// IMP=0x0010000000043b98
- (int)busyRetryTimeout;	// IMP=0x0010000000043b65
@property(nonatomic) double maxBusyRetryTimeInterval; // @synthesize maxBusyRetryTimeInterval=_maxBusyRetryTimeInterval;
- (_Bool)close;	// IMP=0x00100000000439b8
- (_Bool)openWithFlags:(int)arg1 vfs:(id)arg2;	// IMP=0x00100000000438d8
- (_Bool)openWithFlags:(int)arg1;	// IMP=0x00100000000438c4
- (_Bool)open;	// IMP=0x001000000004382e
- (int)limitFor:(int)arg1 value:(int)arg2;	// IMP=0x001000000004381c
- (const char *)sqlitePath;	// IMP=0x00100000000437ca
@property(readonly, nonatomic) void *sqliteHandle;
@property(readonly, nonatomic) NSURL *databaseURL;
- (void)dealloc;	// IMP=0x00100000000434ec
- (id)initWithPath:(id)arg1;	// IMP=0x0010000000043424
- (id)initWithURL:(id)arg1;	// IMP=0x00100000000433ce
- (id)init;	// IMP=0x00100000000433ba
- (void)setShouldCacheStatementsWithoutClearingExistingStatements:(_Bool)arg1;	// IMP=0x0010000000028184
- (_Bool)DELETE_FROM:(id)arg1 WHERE:(id)arg2;	// IMP=0x0010000000027fd9
- (_Bool)INSERT_INTO:(id)arg1 VALUES:(id)arg2;	// IMP=0x0010000000027ca3
- (_Bool)UPDATE:(id)arg1 SET:(id)arg2 WHERE:(id)arg3;	// IMP=0x00100000000279b1
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 JOIN:(id)arg3 WHERE:(id)arg4 GROUP_BY:(id)arg5 HAVING:(id)arg6 ORDER_BY:(id)arg7 LIMIT:(id)arg8;	// IMP=0x0010000000027302
- (id)_SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 JOIN:(id)arg3 WHERE:(id)arg4 GROUP_BY:(id)arg5 ORDER_BY:(id)arg6 LIMIT:(id)arg7;	// IMP=0x0010000000026df1
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 WHERE:(id)arg3 GROUP_BY:(id)arg4;	// IMP=0x0010000000026dc1
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 JOIN:(id)arg3 WHERE:(id)arg4 ORDER_BY:(id)arg5 LIMIT:(id)arg6;	// IMP=0x0010000000026d95
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 WHERE:(id)arg3 ORDER_BY:(id)arg4 LIMIT:(id)arg5;	// IMP=0x0010000000026d6b
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 WHERE:(id)arg3;	// IMP=0x0010000000026d3a
- (_Bool)validateSQL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004866d
- (_Bool)columnExists:(id)arg1 columnName:(id)arg2;	// IMP=0x0010000000048652
- (void);	// IMP=0x00100000000485c0
@property(nonatomic) unsigned int userVersion;
@property(nonatomic) unsigned int applicationID;
- (_Bool)columnExists:(id)arg1 inTableWithName:(id)arg2;	// IMP=0x00100000000482ee
- (id)getTableSchema:(id)arg1;	// IMP=0x0010000000048259
- (id)getSchema;	// IMP=0x001000000004823e
- (_Bool)tableExists:(id)arg1;	// IMP=0x00100000000481b1
- (id)dateForQuery:(id)arg1;	// IMP=0x0010000000048087
- (id)dataForQuery:(id)arg1;	// IMP=0x0010000000047f5d
- (double)doubleForQuery:(id)arg1;	// IMP=0x0010000000047e3a
- (_Bool)boolForQuery:(id)arg1;	// IMP=0x0010000000047d1c
- (long long)longForQuery:(id)arg1;	// IMP=0x0010000000047bfe
- (int)intForQuery:(id)arg1;	// IMP=0x0010000000047ae0
- (id)stringForQuery:(id)arg1;	// IMP=0x00100000000479b6

@end

