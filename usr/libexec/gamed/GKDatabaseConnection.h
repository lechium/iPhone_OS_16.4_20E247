//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface GKDatabaseConnection : NSObject
{
    struct __CFDictionary *_stmtCache;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
    struct sqlite3 *_database;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_databaseQueue;	// 32 = 0x20
}

+ (id)connectionWithDatabasePath:(id)arg1;	// IMP=0x0020000000124cda
- (void).cxx_destruct;	// IMP=0x00200000001270c8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void)performAsyncTransaction:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001269c8
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001267d7
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001265e6
- (void)close;	// IMP=0x00100000001262a6
- (void)open;	// IMP=0x00100000001253b7
- (int)getStatement:(struct sqlite3_stmt **)arg1 forSQL:(id)arg2;	// IMP=0x0010000000125068
- (void)dealloc;	// IMP=0x0010000000125012
- (void)checkAndOpenDatabase;	// IMP=0x0010000000124ee8
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x0010000000124d27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

