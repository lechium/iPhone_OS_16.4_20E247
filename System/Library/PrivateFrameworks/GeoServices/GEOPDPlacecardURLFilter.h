//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlacecardURLFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cd5dcf
- (unsigned long long)hash;	// IMP=0x0000000000cd5dc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cd5d82
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cd5d27
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cd5d0a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cd5cfb
- (id)jsonRepresentation;	// IMP=0x0000000000cd5be9
- (id)dictionaryRepresentation;	// IMP=0x0000000000cd5a7e
- (id)description;	// IMP=0x0000000000cd59cf

@end
