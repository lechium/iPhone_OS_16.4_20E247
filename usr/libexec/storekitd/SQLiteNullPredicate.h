//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SQLiteNullPredicate
{
    _Bool _matchesNull;	// 16 = 0x10
}

+ (id)isNullPredicateWithProperty:(id)arg1;	// IMP=0x00200000000719d7
+ (id)isNotNullPredicateWithProperty:(id)arg1;	// IMP=0x001000000007195d
@property(readonly, nonatomic) _Bool matchesNull; // @synthesize matchesNull=_matchesNull;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0010000000071ae4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000071a5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000071a51

@end
