//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieHumanActionResult : PBCodable
{
    float _absoluteScore;	// 8 = 0x8
    VCPProtoBounds *_bounds;	// 16 = 0x10
    NSString *_faceId;	// 24 = 0x18
    float _humanScore;	// 32 = 0x20
    float _relativeScore;	// 36 = 0x24
    VCPProtoTimeRange *_timeRange;	// 40 = 0x28
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000015554e
- (void).cxx_destruct;	// IMP=0x000000000006bd13
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) NSString *faceId; // @synthesize faceId=_faceId;
@property(nonatomic) float humanScore; // @synthesize humanScore=_humanScore;
@property(nonatomic) float relativeScore; // @synthesize relativeScore=_relativeScore;
@property(nonatomic) float absoluteScore; // @synthesize absoluteScore=_absoluteScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006bb4b
- (unsigned long long)hash;	// IMP=0x000000000006b84d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006b70b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006b611
- (void)copyTo:(id)arg1;	// IMP=0x000000000006b55d
- (void)writeTo:(id)arg1;	// IMP=0x000000000006b49d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006b490
- (id)dictionaryRepresentation;	// IMP=0x000000000006af59
- (id)description;	// IMP=0x000000000006aeaa
@property(readonly, nonatomic) _Bool hasBounds;
@property(readonly, nonatomic) _Bool hasFaceId;
- (id)exportToLegacyDictionary;	// IMP=0x00000000001558fd

@end

