//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRetainedSearchMetadata : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_query;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e7d641
- (unsigned long long)hash;	// IMP=0x0000000000e7d621
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e7d587
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e7d4fc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e7d4a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e7d492
- (id)jsonRepresentation;	// IMP=0x0000000000e7cf04
- (id)dictionaryRepresentation;	// IMP=0x0000000000e7cd72
- (id)description;	// IMP=0x0000000000e7ccc3

@end

