//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGroundViewLabelResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000054d548
- (unsigned long long)hash;	// IMP=0x000000000054d540
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000054d4fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000054d4a0
- (void)writeTo:(id)arg1;	// IMP=0x000000000054d483
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000054d474
- (id)jsonRepresentation;	// IMP=0x000000000054d1b4
- (id)dictionaryRepresentation;	// IMP=0x000000000054d049
- (id)description;	// IMP=0x000000000054cf9a

@end

