//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitScheduleCategory : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _groupIndexs;	// 24 = 0x18
    NSString *_displayName;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_groupIndexs:1;
        unsigned int read_displayName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000d35364
- (unsigned long long)hash;	// IMP=0x0000000000d3531e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d35255
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d350bf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d34efd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d34eee
- (id)jsonRepresentation;	// IMP=0x0000000000d34ddc
- (id)dictionaryRepresentation;	// IMP=0x0000000000d34bcb
- (id)description;	// IMP=0x0000000000d34b1c
- (void)dealloc;	// IMP=0x0000000000d3412b
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d340cf
- (id)init;	// IMP=0x0000000000d34073

@end
