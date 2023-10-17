//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PDDPTypedValue;

@interface PDDPSearchCriteria : PBCodable
{
    int _compareOptions;	// 8 = 0x8
    NSString *_fieldName;	// 16 = 0x10
    int _searchOperator;	// 24 = 0x18
    PDDPTypedValue *_value;	// 32 = 0x20
    struct {
        unsigned int compareOptions:1;
        unsigned int searchOperator:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000135e6e
@property(retain, nonatomic) PDDPTypedValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000135d63
- (unsigned long long)hash;	// IMP=0x0010000000135cb8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000135b95
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000135ab9
- (void)copyTo:(id)arg1;	// IMP=0x0010000000135a12
- (void)writeTo:(id)arg1;	// IMP=0x0010000000135969
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000013595c
- (id)dictionaryRepresentation;	// IMP=0x00100000001353f1
- (id)description;	// IMP=0x0010000000135342
- (int)StringAsCompareOptions:(id)arg1;	// IMP=0x0010000000135210
- (id)compareOptionsAsString:(int)arg1;	// IMP=0x001000000013513f
@property(nonatomic) _Bool hasCompareOptions;
@property(nonatomic) int compareOptions; // @synthesize compareOptions=_compareOptions;
- (_Bool);	// IMP=0x00100000001350c6
- (int)StringAsSearchOperator:(id)arg1;	// IMP=0x0010000000134f8e
- (id)searchOperatorAsString:(int)arg1;	// IMP=0x0010000000134f45
@property(nonatomic) _Bool hasSearchOperator;
@property(nonatomic) int searchOperator; // @synthesize searchOperator=_searchOperator;
@property(readonly, nonatomic) _Bool hasFieldName;

// Remaining properties
@property(readonly, nonatomic) _Bool hasValue;

@end
