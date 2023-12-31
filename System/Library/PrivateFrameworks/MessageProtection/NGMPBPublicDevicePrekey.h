//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBPublicDevicePrekey : PBCodable
{
    double _timestamp;	// 8 = 0x8
    NSData *_prekey;	// 16 = 0x10
    NSData *_prekeySignature;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000019d6d
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSData *prekeySignature; // @synthesize prekeySignature=_prekeySignature;
@property(retain, nonatomic) NSData *prekey; // @synthesize prekey=_prekey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000019c8a
- (unsigned long long)hash;	// IMP=0x0000000000019b50
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019a6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000199bf
- (void)copyTo:(id)arg1;	// IMP=0x000000000001993c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000198b4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000198a7
- (id)dictionaryRepresentation;	// IMP=0x00000000000195d8
- (id)description;	// IMP=0x0000000000019529

@end

