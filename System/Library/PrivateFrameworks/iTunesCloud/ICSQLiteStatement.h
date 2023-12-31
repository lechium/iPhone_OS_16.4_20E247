//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSQLiteConnection, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ICSQLiteStatement : NSObject
{
    ICSQLiteConnection *_connection;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    ICSQLiteStatement *_strongSelf;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001fb60
@property(readonly, nonatomic) struct sqlite3_stmt *sqlite3_stmt; // @synthesize sqlite3_stmt=_statement;
@property(readonly, nonatomic) ICSQLiteConnection *connection; // @synthesize connection=_connection;
- (int)clearBindings;	// IMP=0x000000000001fb0b
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000001fa97
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000001f98e
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000001f8a1
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x000000000001f864
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x000000000001f827
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x000000000001f7ea
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x000000000001f7a9
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x000000000001f76c
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000001f6bb
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000001f60e
- (int)step;	// IMP=0x000000000001f5cd
@property(readonly, copy, nonatomic) NSString *SQL;
- (int)reset;	// IMP=0x000000000001f522
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
- (int)finalizeStatement;	// IMP=0x000000000001f47c
@property(readonly, copy, nonatomic) NSDictionary *columnIndexByName;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 connection:(id)arg2;	// IMP=0x000000000001f2ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

