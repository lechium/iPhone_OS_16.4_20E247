//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLWhereIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLHavingIntermediate
{
    NSSQLWhereIntermediate *_whereClause;	// 16 = 0x10
}

- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x0000000000241fe0
- (_Bool)isHavingScoped;	// IMP=0x0000000000241fd8
- (void)dealloc;	// IMP=0x0000000000241f8a
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;	// IMP=0x0000000000241e1a

@end
