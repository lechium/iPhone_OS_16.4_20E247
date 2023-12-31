//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSubtleMotionResult : PBCodable
{
    float _actionScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000102a96
- (void).cxx_destruct;	// IMP=0x000000000006ae6b
@property(nonatomic) float actionScore; // @synthesize actionScore=_actionScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006adb3
- (unsigned long long)hash;	// IMP=0x000000000006acac
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006abfd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006ab73
- (void)copyTo:(id)arg1;	// IMP=0x000000000006ab15
- (void)writeTo:(id)arg1;	// IMP=0x000000000006aab4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006aaa7
- (id)dictionaryRepresentation;	// IMP=0x000000000006a7a1
- (id)description;	// IMP=0x000000000006a6f2
- (id)exportToLegacyDictionary;	// IMP=0x0000000000102c1a

@end

