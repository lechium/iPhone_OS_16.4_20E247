//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDHoursFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c77b71
- (unsigned long long)hash;	// IMP=0x0000000000c77b69
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c77b24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c77ac9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c77aac
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c77a9d
- (id)jsonRepresentation;	// IMP=0x0000000000c7798b
- (id)dictionaryRepresentation;	// IMP=0x0000000000c77820
- (id)description;	// IMP=0x0000000000c77771

@end

