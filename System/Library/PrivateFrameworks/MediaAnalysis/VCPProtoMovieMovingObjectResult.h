//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieMovingObjectResult : PBCodable
{
    NSMutableArray *_bounds;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (Class)boundsType;	// IMP=0x0010000000298932
+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000207514
- (void).cxx_destruct;	// IMP=0x0000000000299592
@property(retain, nonatomic) NSMutableArray *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002993b4
- (unsigned long long)hash;	// IMP=0x0000000000299367
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029929f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002990c6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000298fe4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000298e9c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000298e8f
- (id)dictionaryRepresentation;	// IMP=0x00000000002989f2
- (id)description;	// IMP=0x0000000000298943
- (id)boundsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000298915
- (unsigned long long)boundsCount;	// IMP=0x00000000002988f8
- (void)addBounds:(id)arg1;	// IMP=0x000000000029888e
- (void)clearBounds;	// IMP=0x0000000000298871
- (id)exportToLegacyDictionary;	// IMP=0x00000000002078dd

@end
