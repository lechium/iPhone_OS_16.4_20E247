//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, _bmFMDatabase, _bmFMStatement;

@interface _bmFMResultSet : NSObject
{
    NSMutableDictionary *_columnNameToIndexMap;	// 8 = 0x8
    _Bool _shouldAutoClose;	// 16 = 0x10
    _bmFMDatabase *_parentDB;	// 24 = 0x18
    NSString *_query;	// 32 = 0x20
    _bmFMStatement *_statement;	// 40 = 0x28
}

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2 shouldAutoClose:(_Bool)arg3;	// IMP=0x00400000000487e3
- (void).cxx_destruct;	// IMP=0x0010000000049cf6
@property(nonatomic) _Bool shouldAutoClose; // @synthesize shouldAutoClose=_shouldAutoClose;
@property(retain) _bmFMStatement *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) _bmFMDatabase *parentDB; // @synthesize parentDB=_parentDB;
- (_Bool)bindWithDictionary:(id)arg1;	// IMP=0x0010000000049c69
- (_Bool)bindWithArray:(id)arg1;	// IMP=0x0010000000049c52
- (_Bool)bindWithArray:(id)arg1 orDictionary:(id)arg2 orVAList:(struct __va_list_tag [1])arg3;	// IMP=0x0010000000049bb7
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0010000000049ba5
- (id)objectAtIndexedSubscript:(int)arg1;	// IMP=0x0010000000049b93
- (id)columnNameForIndex:(int)arg1;	// IMP=0x0010000000049b45
- (id)objectForColumn:(id)arg1;	// IMP=0x0010000000049b15
- (id)objectForColumnName:(id)arg1;	// IMP=0x0010000000049b03
- (id)objectForColumnIndex:(int)arg1;	// IMP=0x00100000000499df
- (const char *)UTF8StringForColumnName:(id)arg1;	// IMP=0x00100000000499cd
- (const char *)UTF8StringForColumn:(id)arg1;	// IMP=0x001000000004999d
- (const char *)UTF8StringForColumnIndex:(int)arg1;	// IMP=0x0000000000049920
- (_Bool)columnIsNull:(id)arg1;	// IMP=0x00100000000498f0
- (_Bool)columnIndexIsNull:(int)arg1;	// IMP=0x00100000000498c0
- (id)dataNoCopyForColumnIndex:(int)arg1;	// IMP=0x00100000000497fd
- (id)dataNoCopyForColumn:(id)arg1;	// IMP=0x00100000000497cd
- (id)dataForColumnIndex:(int)arg1;	// IMP=0x0010000000049705
- (id)dataForColumn:(id)arg1;	// IMP=0x00100000000496d5
- (id)dateForColumnIndex:(int)arg1;	// IMP=0x00100000000495cc
- (id)dateForColumn:(id)arg1;	// IMP=0x001000000004959c
- (id)stringForColumn:(id)arg1;	// IMP=0x001000000004956c
- (id)stringForColumnIndex:(int)arg1;	// IMP=0x00100000000494ca
- (double)doubleForColumnIndex:(int)arg1;	// IMP=0x00100000000494a1
- (double)doubleForColumn:(id)arg1;	// IMP=0x0010000000049471
- (_Bool)boolForColumnIndex:(int)arg1;	// IMP=0x0010000000049459
- (_Bool)boolForColumn:(id)arg1;	// IMP=0x0010000000049429
- (unsigned long long)unsignedLongLongIntForColumnIndex:(int)arg1;	// IMP=0x0010000000049417
- (unsigned long long)unsignedLongLongIntForColumn:(id)arg1;	// IMP=0x00100000000493e7
- (long long)longLongIntForColumnIndex:(int)arg1;	// IMP=0x00100000000493be
- (long long)longLongIntForColumn:(id)arg1;	// IMP=0x001000000004938e
- (long long)longForColumnIndex:(int)arg1;	// IMP=0x0010000000049365
- (long long)longForColumn:(id)arg1;	// IMP=0x0010000000049335
- (int)intForColumnIndex:(int)arg1;	// IMP=0x001000000004930c
- (int)intForColumn:(id)arg1;	// IMP=0x00100000000492dc
- (int)columnIndexForName:(id)arg1;	// IMP=0x0010000000049225
- (_Bool)hasAnotherRow;	// IMP=0x0010000000049200
- (int)internalStepWithError:(id *)arg1;	// IMP=0x0010000000048fad
- (_Bool)stepWithError:(id *)arg1;	// IMP=0x0010000000048f94
- (_Bool)step;	// IMP=0x0010000000048f80
- (_Bool)nextWithError:(id *)arg1;	// IMP=0x0010000000048f67
- (_Bool)next;	// IMP=0x0010000000048f53
@property(readonly, nonatomic) NSDictionary *resultDictionary;
- (id)resultDict;	// IMP=0x0010000000048c8d
- (void)kvcMagic:(id)arg1;	// IMP=0x0010000000048b61
@property(readonly) NSMutableDictionary *columnNameToIndexMap;
@property(readonly, nonatomic) int columnCount;
- (void)close;	// IMP=0x001000000004897c
- (void)dealloc;	// IMP=0x0010000000048916
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001fc0f

@end

