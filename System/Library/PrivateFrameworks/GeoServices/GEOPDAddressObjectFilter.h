//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddressObjectFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_libraryVersions;	// 16 = 0x10
    _Bool _enableLocation;	// 24 = 0x18
    struct {
        unsigned int has_enableLocation:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000b6dbda
- (unsigned long long)hash;	// IMP=0x0000000000b6db87
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b6dab6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b6d8d8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b6d753
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b6d744
- (id)jsonRepresentation;	// IMP=0x0000000000b6d357
- (id)dictionaryRepresentation;	// IMP=0x0000000000b6d14e
- (id)description;	// IMP=0x0000000000b6d09f

@end
