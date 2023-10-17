//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface FCCKPQuery : PBCodable
{
    NSMutableArray *_filters;	// 8 = 0x8
    int _queryOperator;	// 16 = 0x10
    NSMutableArray *_sorts;	// 24 = 0x18
    NSMutableArray *_types;	// 32 = 0x20
    _Bool _distinct;	// 40 = 0x28
    struct {
        unsigned int queryOperator:1;
        unsigned int distinct:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000001798bf
- (unsigned long long)hash;	// IMP=0x0000000000179803
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001796a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000179288
- (void)writeTo:(id)arg1;	// IMP=0x0000000000178f45
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000178f38
- (id)dictionaryRepresentation;	// IMP=0x000000000017851d
- (id)description;	// IMP=0x000000000017846e

@end
