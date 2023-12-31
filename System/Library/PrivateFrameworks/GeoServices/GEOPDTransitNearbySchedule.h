//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitNearbySchedule : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_categorys;	// 24 = 0x18
    NSMutableArray *_groups;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_groups:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (id)transitNearbyScheduleForPlaceData:(id)arg1;	// IMP=0x0010000000a6f783
- (void).cxx_destruct;	// IMP=0x0000000000d2f1a0
- (unsigned long long)hash;	// IMP=0x0000000000d2f149
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2f067
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d2ec99
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d2e936
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d2e927
- (id)jsonRepresentation;	// IMP=0x0000000000d2e26f
- (id)dictionaryRepresentation;	// IMP=0x0000000000d2dcf1
- (id)description;	// IMP=0x0000000000d2dc42
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d2d040
- (id)init;	// IMP=0x0000000000d2cfe4

@end

