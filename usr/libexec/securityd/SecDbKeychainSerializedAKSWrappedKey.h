//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SecDbKeychainSerializedAKSWrappedKey : PBCodable
{
    NSData *_refKeyBlob;	// 8 = 0x8
    unsigned int _type;	// 16 = 0x10
    NSData *_wrappedKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000015581c
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSData *refKeyBlob; // @synthesize refKeyBlob=_refKeyBlob;
@property(retain, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000155741
- (unsigned long long)hash;	// IMP=0x00100000001556de
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000155607
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000015555b
- (void)copyTo:(id)arg1;	// IMP=0x00100000001554ef
- (void)writeTo:(id)arg1;	// IMP=0x001000000015547f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000155268
- (id)dictionaryRepresentation;	// IMP=0x0010000000155191
- (id)description;	// IMP=0x00100000001550e2
@property(readonly, nonatomic) _Bool hasRefKeyBlob;

@end

