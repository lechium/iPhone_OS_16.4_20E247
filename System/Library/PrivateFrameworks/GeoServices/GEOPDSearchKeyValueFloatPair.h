//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValueFloatPair : PBCodable
{
    NSString *_key;	// 8 = 0x8
    float _value;	// 16 = 0x10
    CDStruct_38ef1b98 _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000003fa8bb
- (unsigned long long)hash;	// IMP=0x00000000003fa78a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003fa6c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003fa628
- (void)writeTo:(id)arg1;	// IMP=0x00000000003fa5c2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003fa5b3
- (id)jsonRepresentation;	// IMP=0x00000000003fa03e
- (id)dictionaryRepresentation;	// IMP=0x00000000003f9f65
- (id)description;	// IMP=0x00000000003f9eb6

@end

