//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripStop : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_stopInfos;	// 16 = 0x10
}

+ (id)transitTripStopForPlaceData:(id)arg1;	// IMP=0x0010000000a6f293
- (void).cxx_destruct;	// IMP=0x0000000000d3bcae
- (unsigned long long)hash;	// IMP=0x0000000000d3bc91
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d3bbf7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d3ba37
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d3b8d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d3b8c9
- (id)jsonRepresentation;	// IMP=0x0000000000d3b7b7
- (id)dictionaryRepresentation;	// IMP=0x0000000000d3b414
- (id)description;	// IMP=0x0000000000d3b365

@end
