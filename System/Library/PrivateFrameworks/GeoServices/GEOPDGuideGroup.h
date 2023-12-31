//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDCaptionedPhoto, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuideGroup : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_guideLocationImages;	// 24 = 0x18
    GEOPDCaptionedPhoto *_photo;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    unsigned int _numGuides;	// 52 = 0x34
    struct {
        unsigned int has_numGuides:1;
        unsigned int read_unknownFields:1;
        unsigned int read_guideLocationImages:1;
        unsigned int read_photo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

+ (id)guideGroupComponentFromPlaceData:(id)arg1;	// IMP=0x0010000000a76bf7
- (void).cxx_destruct;	// IMP=0x0000000000c6ed26
- (unsigned long long)hash;	// IMP=0x0000000000c6ec6b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c6eb58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c6e83f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c6e52c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c6e51d
- (id)jsonRepresentation;	// IMP=0x0000000000c6ddd7
- (id)dictionaryRepresentation;	// IMP=0x0000000000c6d888
- (id)description;	// IMP=0x0000000000c6d7d9
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c6cd02
- (id)init;	// IMP=0x0000000000c6cca6

@end

