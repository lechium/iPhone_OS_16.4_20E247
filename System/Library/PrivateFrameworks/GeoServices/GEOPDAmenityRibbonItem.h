//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAmenityRibbonItem : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_9f2792e4 _amenityItemIndexs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b721a3
- (unsigned long long)hash;	// IMP=0x0000000000b72192
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b7212f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b720c1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b7204c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b7203d
- (id)jsonRepresentation;	// IMP=0x0000000000b71b7c
- (id)dictionaryRepresentation;	// IMP=0x0000000000b719be
- (id)description;	// IMP=0x0000000000b7190f
- (void)dealloc;	// IMP=0x0000000000b717f0

@end

