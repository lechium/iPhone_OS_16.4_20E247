//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSaliencyResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
    VCPProtoTimeRange *_timeRange;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000a79cd
- (void).cxx_destruct;	// IMP=0x0000000000072250
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000072139
- (unsigned long long)hash;	// IMP=0x0000000000072009
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000071f28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000071e78
- (void)copyTo:(id)arg1;	// IMP=0x0000000000071df5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000071d7c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000071d6f
- (id)dictionaryRepresentation;	// IMP=0x00000000000719c4
- (id)description;	// IMP=0x0000000000071915
- (id)exportToLegacyDictionary;	// IMP=0x00000000000a7c54

@end

