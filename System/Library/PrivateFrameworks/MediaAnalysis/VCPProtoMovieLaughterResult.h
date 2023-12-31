//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieLaughterResult : PBCodable
{
    float _confidence;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000029bbe8
- (void).cxx_destruct;	// IMP=0x0000000000003249
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000003191
- (unsigned long long)hash;	// IMP=0x000000000000308a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002fdb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002f51
- (void)copyTo:(id)arg1;	// IMP=0x0000000000002ef3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000002e92
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000002e85
- (id)dictionaryRepresentation;	// IMP=0x0000000000002b7f
- (id)description;	// IMP=0x0000000000002ad0
- (id)exportToLegacyDictionary;	// IMP=0x000000000029bd6c

@end

