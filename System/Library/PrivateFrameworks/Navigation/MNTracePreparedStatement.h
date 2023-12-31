//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MNTracePreparedStatement : NSObject
{
    struct sqlite3 *_db;	// 8 = 0x8
    struct sqlite3_stmt *_preparedStatement;	// 16 = 0x10
}

+ (id)preparedStatementForTrace:(id)arg1 statement:(id)arg2 outError:(out id *)arg3;	// IMP=0x006000000004e3d2
- (id)debugDescription;	// IMP=0x000000000004f523
- (_Bool)_prepareStatementForTrace:(id)arg1 statement:(id)arg2 outError:(out id *)arg3;	// IMP=0x000000000004f2d8
- (id)columnObjectsOld:(unsigned long long)arg1 ofClasses:(id)arg2;	// IMP=0x000000000004f243
- (id)columnObjects:(unsigned long long)arg1 ofClasses:(id)arg2;	// IMP=0x000000000004f0ba
- (id)columnData:(unsigned long long)arg1;	// IMP=0x000000000004f053
- (id)columnString:(unsigned long long)arg1;	// IMP=0x000000000004f00e
- (double)columnDouble:(unsigned long long)arg1;	// IMP=0x000000000004effe
- (int)columnInt:(unsigned long long)arg1;	// IMP=0x000000000004efee
- (_Bool)stepRow;	// IMP=0x000000000004eebe
- (void)bindNull:(unsigned long long)arg1;	// IMP=0x000000000004eda0
- (void)bind:(unsigned long long)arg1 data:(id)arg2;	// IMP=0x000000000004ec1a
- (void)bind:(unsigned long long)arg1 string:(id)arg2;	// IMP=0x000000000004eace
- (void)bind:(unsigned long long)arg1 double:(double)arg2;	// IMP=0x000000000004e9b0
- (void)bind:(unsigned long long)arg1 int:(int)arg2;	// IMP=0x000000000004e886
- (_Bool)clearBindings;	// IMP=0x000000000004e75b
- (_Bool)reset;	// IMP=0x000000000004e630
- (_Bool)step;	// IMP=0x000000000004e4fa
- (_Bool)execute;	// IMP=0x000000000004e4af
- (void)finalize;	// IMP=0x000000000004e48f
- (void)dealloc;	// IMP=0x000000000004e451
- (id)initForTrace:(id)arg1 statement:(id)arg2 outError:(out id *)arg3;	// IMP=0x000000000004e30c
- (id)init;	// IMP=0x000000000004e2e2

@end

