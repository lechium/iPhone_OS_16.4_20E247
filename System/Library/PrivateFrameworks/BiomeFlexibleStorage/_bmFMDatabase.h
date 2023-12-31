//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString, NSURL;

__attribute__((visibility("hidden")))
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

+ (id)storeableDateFormat:(id)arg1;	// IMP=0x006000000000b705
+ (_Bool)isSQLiteThreadSafe;	// IMP=0x006000000000aa90
+ (id)sqliteLibVersion;	// IMP=0x006000000000aa4c
+ (int)FMDBVersion;	// IMP=0x006000000000a84e
+ (id)FMDBUserVersion;	// IMP=0x006000000000a841
+ (id)databaseWithURL:(id)arg1;	// IMP=0x006000000000a651
+ (id)databaseWithPath:(id)arg1;	// IMP=0x006000000000a608
- (void).cxx_destruct;	// IMP=0x000000000000e878
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) _Bool isInTransaction; // @synthesize isInTransaction=_isInTransaction;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain) NSMutableDictionary *cachedStatements; // @synthesize cachedStatements=_cachedStatements;
@property _Bool logsErrors; // @synthesize logsErrors=_logsErrors;
@property _Bool crashOnErrors; // @synthesize crashOnErrors=_crashOnErrors;
@property _Bool checkedOut; // @synthesize checkedOut=_checkedOut;
@property _Bool traceExecution; // @synthesize traceExecution=_traceExecution;
- (void)resultErrorTooBigInContext:(void *)arg1;	// IMP=0x000000000000e7d3
- (void)resultErrorNoMemoryInContext:(void *)arg1;	// IMP=0x000000000000e7c6
- (void)resultErrorCode:(int)arg1 context:(void *)arg2;	// IMP=0x000000000000e7b7
- (void)resultError:(id)arg1 context:(void *)arg2;	// IMP=0x000000000000e780
- (void)resultString:(id)arg1 context:(void *)arg2;	// IMP=0x000000000000e742
- (void)resultData:(id)arg1 context:(void *)arg2;	// IMP=0x000000000000e6d8
- (void)resultDouble:(double)arg1 context:(void *)arg2;	// IMP=0x000000000000e6cb
- (void)resultLong:(long long)arg1 context:(void *)arg2;	// IMP=0x000000000000e6bb
- (void)resultInt:(int)arg1 context:(void *)arg2;	// IMP=0x000000000000e6ac
- (void)resultNullInContext:(void *)arg1;	// IMP=0x000000000000e69f
- (id)valueString:(void *)arg1;	// IMP=0x000000000000e661
- (id)valueData:(void *)arg1;	// IMP=0x000000000000e60c
- (double)valueDouble:(void *)arg1;	// IMP=0x000000000000e5ff
- (long long)valueLong:(void *)arg1;	// IMP=0x000000000000e5f2
- (int)valueInt:(void *)arg1;	// IMP=0x000000000000e5e5
- (int)valueType:(void *)arg1;	// IMP=0x000000000000e5d8
- (void)makeFunctionNamed:(id)arg1 arguments:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e4e2
- (void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e4d0
@property(nonatomic) _Bool shouldCacheStatements; // @synthesize shouldCacheStatements=_shouldCacheStatements;
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int *)arg3 checkpointCount:(int *)arg4 error:(id *)arg5;	// IMP=0x000000000000e2c6
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000e2a1
- (_Bool)checkpoint:(int)arg1 error:(id *)arg2;	// IMP=0x000000000000e27a
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e114
- (_Bool)rollbackToSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000dfd1
- (_Bool)releaseSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000de8e
- (_Bool)startSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000dd4b
- (_Bool)interrupt;	// IMP=0x000000000000dd1a
- (_Bool)inTransaction;	// IMP=0x000000000000dd11
- (_Bool)beginExclusiveTransaction;	// IMP=0x000000000000dce3
- (_Bool)beginImmediateTransaction;	// IMP=0x000000000000dcb5
- (_Bool)beginDeferredTransaction;	// IMP=0x000000000000dc87
- (_Bool)beginTransaction;	// IMP=0x000000000000dc59
- (_Bool)commit;	// IMP=0x000000000000dc2b
- (_Bool)rollback;	// IMP=0x000000000000dbfd
- (id)prepare:(id)arg1;	// IMP=0x000000000000dbd3
- (_Bool)update:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x000000000000db29
- (_Bool)executeUpdate:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x000000000000da7f
- (_Bool)executeStatements:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d987
- (_Bool)executeStatements:(id)arg1;	// IMP=0x000000000000d973
- (_Bool)executeUpdateWithFormat:(id)arg1;	// IMP=0x000000000000d67e
- (_Bool)executeUpdate:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;	// IMP=0x000000000000d657
- (_Bool)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x000000000000d62c
- (_Bool)executeUpdate:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000d5fd
- (_Bool)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x000000000000d5d2
- (_Bool)executeUpdate:(id)arg1;	// IMP=0x000000000000d522
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(struct __va_list_tag [1])arg5;	// IMP=0x000000000000d483
- (id)executeQuery:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;	// IMP=0x000000000000d459
- (id)executeQuery:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000d3e5
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x000000000000d3bd
- (id)executeQueryWithFormat:(id)arg1;	// IMP=0x000000000000d241
- (id)executeQuery:(id)arg1;	// IMP=0x000000000000d181
- (_Bool)bindStatement:(struct sqlite3_stmt *)arg1 WithArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(struct __va_list_tag [1])arg4;	// IMP=0x000000000000cbed
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(struct __va_list_tag [1])arg4 shouldBind:(_Bool)arg5;	// IMP=0x000000000000c86a
- (id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x000000000000c840
- (void)extractSQL:(id)arg1 argumentsList:(struct __va_list_tag [1])arg2 intoString:(id)arg3 arguments:(id)arg4;	// IMP=0x000000000000c029
- (int)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;	// IMP=0x000000000000bac3
@property(readonly, nonatomic) int changes;
@property(readonly, nonatomic) long long lastInsertRowId;
- (id)lastError;	// IMP=0x000000000000b9ee
- (id)errorWithMessage:(id)arg1;	// IMP=0x000000000000b967
- (int)lastExtendedErrorCode;	// IMP=0x000000000000b959
- (int)lastErrorCode;	// IMP=0x000000000000b94b
- (_Bool)hadError;	// IMP=0x000000000000b930
- (id)lastErrorMessage;	// IMP=0x000000000000b901
- (_Bool)databaseExists;	// IMP=0x000000000000b8b3
- (void)warnInUse;	// IMP=0x000000000000b87a
@property(readonly, nonatomic) _Bool goodConnection;
- (id)stringFromDate:(id)arg1;	// IMP=0x000000000000b804
- (id)dateFromString:(id)arg1;	// IMP=0x000000000000b7ee
- (void)setDateFormat:(id)arg1;	// IMP=0x000000000000b7dd
- (_Bool)hasDateFormatter;	// IMP=0x000000000000b7cf
- (_Bool)setKeyWithData:(id)arg1;	// IMP=0x000000000000b6fd
- (_Bool)setKey:(id)arg1;	// IMP=0x000000000000b638
- (_Bool)rekeyWithData:(id)arg1;	// IMP=0x000000000000b630
- (_Bool)rekey:(id)arg1;	// IMP=0x000000000000b56b
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;	// IMP=0x000000000000b3fd
- (id)cachedStatementForQuery:(id)arg1;	// IMP=0x000000000000b354
- (void)clearCachedStatements;	// IMP=0x000000000000b0f5
- (void)resultSetDidClose:(id)arg1;	// IMP=0x000000000000b0a1
- (void)closeOpenResultSets;	// IMP=0x000000000000aec3
@property(readonly, nonatomic) _Bool hasOpenResultSets;
- (void)setBusyRetryTimeout:(int)arg1;	// IMP=0x000000000000ae78
- (int)busyRetryTimeout;	// IMP=0x000000000000ae45
@property(nonatomic) double maxBusyRetryTimeInterval; // @synthesize maxBusyRetryTimeInterval=_maxBusyRetryTimeInterval;
- (_Bool)close;	// IMP=0x000000000000ac98
- (_Bool)openWithFlags:(int)arg1 vfs:(id)arg2;	// IMP=0x000000000000abb8
- (_Bool)openWithFlags:(int)arg1;	// IMP=0x000000000000aba4
- (_Bool)open;	// IMP=0x000000000000ab0e
- (int)limitFor:(int)arg1 value:(int)arg2;	// IMP=0x000000000000aafc
- (const char *)sqlitePath;	// IMP=0x000000000000aaaa
@property(readonly, nonatomic) void *sqliteHandle;
@property(readonly, nonatomic) NSURL *databaseURL;
- (void)dealloc;	// IMP=0x000000000000a7cc
- (id)initWithPath:(id)arg1;	// IMP=0x000000000000a704
- (id)initWithURL:(id)arg1;	// IMP=0x000000000000a6ae
- (id)init;	// IMP=0x000000000000a69a
- (_Bool)validateSQL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000f94d
- (_Bool)columnExists:(id)arg1 columnName:(id)arg2;	// IMP=0x000000000000f932
@property(nonatomic) unsigned int userVersion;
@property(nonatomic) unsigned int applicationID;
- (_Bool)columnExists:(id)arg1 inTableWithName:(id)arg2;	// IMP=0x000000000000f5ce
- (id)getTableSchema:(id)arg1;	// IMP=0x000000000000f539
- (id)getSchema;	// IMP=0x000000000000f51e
- (_Bool)tableExists:(id)arg1;	// IMP=0x000000000000f491
- (id)dateForQuery:(id)arg1;	// IMP=0x000000000000f367
- (id)dataForQuery:(id)arg1;	// IMP=0x000000000000f23d
- (double)doubleForQuery:(id)arg1;	// IMP=0x000000000000f11a
- (_Bool)boolForQuery:(id)arg1;	// IMP=0x000000000000effc
- (long long)longForQuery:(id)arg1;	// IMP=0x000000000000eede
- (int)intForQuery:(id)arg1;	// IMP=0x000000000000edc0
- (id)stringForQuery:(id)arg1;	// IMP=0x000000000000ec96

@end

