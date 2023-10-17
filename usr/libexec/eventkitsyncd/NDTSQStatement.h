//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface NDTSQStatement : NSObject
{
    NSObject<OS_dispatch_queue> *_q;	// 8 = 0x8
    int bindPosition;	// 16 = 0x10
    int fetchPosition;	// 20 = 0x14
    int columnCount;	// 24 = 0x18
    int bindCount;	// 28 = 0x1c
    struct sqlite3_stmt *_parsed;	// 32 = 0x20
    struct sqlite3 *_rawDb;	// 40 = 0x28
    NSString *_text;	// 48 = 0x30
}

- (void);	// IMP=0x002000000003c3b3
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) struct sqlite3 *rawDb; // @synthesize rawDb=_rawDb;
@property(nonatomic) struct sqlite3_stmt *parsed; // @synthesize parsed=_parsed;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003c2de
- (unsigned long long)hash;	// IMP=0x001000000003c29a
- (id)description;	// IMP=0x001000000003c219
- (void)resetFetchCursor;	// IMP=0x001000000003c1d2
- (void)resetBindCursor;	// IMP=0x001000000003c1c5
- (id)fetchBlob;	// IMP=0x001000000003c0ef
- (double)fetchDouble;	// IMP=0x001000000003c071
- (id)fetchString;	// IMP=0x001000000003bfc3
- (unsigned long long)fetchUint64;	// IMP=0x001000000003bf45
- (long long)fetchInteger;	// IMP=0x001000000003bec7
- (int)step;	// IMP=0x001000000003be87
- (int)bindBlob:(id)arg1;	// IMP=0x001000000003bd94
- (int)bindDouble:(double)arg1;	// IMP=0x001000000003bd03
- (int)bindString:(id)arg1;	// IMP=0x001000000003bc23
- (int)bindUint64:(unsigned long long)arg1;	// IMP=0x001000000003bb97
- (int)bindInteger:(long long)arg1;	// IMP=0x001000000003bb0b
- (void)dealloc;	// IMP=0x001000000003ba89
- (id)initWithQueue:(id)arg1 text:(id)arg2;	// IMP=0x001000000003b9de

@end
