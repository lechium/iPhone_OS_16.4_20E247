//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPictureItemContainer : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_pictureItems;	// 16 = 0x10
    _Bool _allowFullScreenPhoto;	// 24 = 0x18
    struct {
        unsigned int has_allowFullScreenPhoto:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000cae709
- (unsigned long long)hash;	// IMP=0x0000000000cae6b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cae5e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cae407
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cae282
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cae273
- (id)jsonRepresentation;	// IMP=0x0000000000cae161
- (id)dictionaryRepresentation;	// IMP=0x0000000000cadd4f
- (id)description;	// IMP=0x0000000000cadca0

@end
