//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionFlyover : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000bab8a3
- (unsigned long long)hash;	// IMP=0x0000000000bab89b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bab856
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bab7fb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bab7de
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bab7cf
- (id)jsonRepresentation;	// IMP=0x0000000000bab6bd
- (id)dictionaryRepresentation;	// IMP=0x0000000000bab552
- (id)description;	// IMP=0x0000000000bab4a3

@end

