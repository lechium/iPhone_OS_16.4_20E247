//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchFieldPlaceholderParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _version;	// 16 = 0x10
    _Bool _isEditServerRecommendedStop;	// 20 = 0x14
    struct {
        unsigned int has_version:1;
        unsigned int has_isEditServerRecommendedStop:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000621834
- (unsigned long long)hash;	// IMP=0x00000000006217ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000062172b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000062168e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000621601
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006215f2
- (id)jsonRepresentation;	// IMP=0x00000000006214e0
- (id)dictionaryRepresentation;	// IMP=0x000000000062128d
- (id)description;	// IMP=0x00000000006211de

@end

