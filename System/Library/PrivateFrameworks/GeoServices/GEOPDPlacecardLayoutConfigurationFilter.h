//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlacecardLayoutConfigurationFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cd3b99
- (unsigned long long)hash;	// IMP=0x0000000000cd3b91
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cd3b4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cd3af1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cd3ad4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cd3ac5
- (id)jsonRepresentation;	// IMP=0x0000000000cd39b3
- (id)dictionaryRepresentation;	// IMP=0x0000000000cd3848
- (id)description;	// IMP=0x0000000000cd3799

@end

