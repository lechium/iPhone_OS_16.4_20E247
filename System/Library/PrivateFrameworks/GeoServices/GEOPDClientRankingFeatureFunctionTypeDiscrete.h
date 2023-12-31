//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureFunctionTypeDiscrete : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    float _featureValueThresholdHigh;	// 16 = 0x10
    float _featureValueThresholdLow;	// 20 = 0x14
    float _featureWeightHigh;	// 24 = 0x18
    float _featureWeightLow;	// 28 = 0x1c
    struct {
        unsigned int has_featureValueThresholdHigh:1;
        unsigned int has_featureValueThresholdLow:1;
        unsigned int has_featureWeightHigh:1;
        unsigned int has_featureWeightLow:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000067c5c3
- (unsigned long long)hash;	// IMP=0x000000000067c19e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000067c08c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000067bfa9
- (void)writeTo:(id)arg1;	// IMP=0x000000000067bed7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000067bec8
- (id)jsonRepresentation;	// IMP=0x000000000067b5cb
- (id)dictionaryRepresentation;	// IMP=0x000000000067b2b4
- (id)description;	// IMP=0x000000000067b205

@end

