//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLitePropertyPredicate
{
    NSString *_property;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000324121
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x000000000032409f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000323f88
- (unsigned long long)hash;	// IMP=0x0000000000323f07
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000323efc

@end
