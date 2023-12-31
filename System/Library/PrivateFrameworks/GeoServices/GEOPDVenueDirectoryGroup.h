//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDVenueLabel, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueDirectoryGroup : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _directoryGroupingId;	// 16 = 0x10
    GEOPDVenueLabel *_label;	// 24 = 0x18
    unsigned long long _muid;	// 32 = 0x20
    struct {
        unsigned int has_directoryGroupingId:1;
        unsigned int has_muid:1;
    } _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000040bb29
- (unsigned long long)hash;	// IMP=0x000000000040bab4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000040b9c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000040b8f9
- (void)writeTo:(id)arg1;	// IMP=0x000000000040b850
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000040b841
- (id)jsonRepresentation;	// IMP=0x000000000040b72f
- (id)dictionaryRepresentation;	// IMP=0x000000000040b483
- (id)description;	// IMP=0x000000000040b3d4

@end

