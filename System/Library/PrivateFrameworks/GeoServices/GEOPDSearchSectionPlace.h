//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchSectionPlace : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_placeIds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e84668
- (unsigned long long)hash;	// IMP=0x0000000000e8464b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e845b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e843f1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e84292
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e84283
- (id)jsonRepresentation;	// IMP=0x0000000000e84171
- (id)dictionaryRepresentation;	// IMP=0x0000000000e83dce
- (id)description;	// IMP=0x0000000000e83d1f

@end
