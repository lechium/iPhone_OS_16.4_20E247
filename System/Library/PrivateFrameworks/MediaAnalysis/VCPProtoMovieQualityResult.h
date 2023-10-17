//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieQualityResult : PBCodable
{
    float _qualityScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000025e0ba
- (void).cxx_destruct;	// IMP=0x0000000000065414
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006535c
- (unsigned long long)hash;	// IMP=0x0000000000065255
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000651a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006511c
- (void)copyTo:(id)arg1;	// IMP=0x00000000000650be
- (void)writeTo:(id)arg1;	// IMP=0x000000000006505d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000065050
- (id)dictionaryRepresentation;	// IMP=0x0000000000064d4a
- (id)description;	// IMP=0x0000000000064c9b
- (id)exportToLegacyDictionary;	// IMP=0x000000000025e23e

@end
