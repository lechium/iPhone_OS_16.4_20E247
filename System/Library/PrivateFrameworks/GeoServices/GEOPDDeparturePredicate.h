//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDeparturePredicate : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDTimeRange _timeRange;	// 16 = 0x10
    unsigned int _numAdditionalDepartures;	// 28 = 0x1c
    struct {
        unsigned int has_timeRange:1;
        unsigned int has_numAdditionalDepartures:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c31ce7
- (unsigned long long)hash;	// IMP=0x0000000000c31c8a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c31bb2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c31b0b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c31a12
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c31a03
- (id)jsonRepresentation;	// IMP=0x0000000000c30f39
- (id)dictionaryRepresentation;	// IMP=0x0000000000c30d02
- (id)description;	// IMP=0x0000000000c30c53
- (id)initWithTraitsTransitModeFilter:(id)arg1;	// IMP=0x00000000013dfad2

@end

