//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDStorefrontFaces : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_faces;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000d1102a
- (unsigned long long)hash;	// IMP=0x0000000000d1100d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d10f73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d10db3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d10c54
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d10c45
- (id)jsonRepresentation;	// IMP=0x0000000000d10b33
- (id)dictionaryRepresentation;	// IMP=0x0000000000d107a2
- (id)description;	// IMP=0x0000000000d106f3

@end
