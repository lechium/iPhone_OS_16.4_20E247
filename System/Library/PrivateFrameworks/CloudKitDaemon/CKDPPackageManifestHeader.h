//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface CKDPPackageManifestHeader : PBCodable
{
    NSData *_signature;	// 8 = 0x8
    int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000160026
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015ff8e
- (unsigned long long)hash;	// IMP=0x000000000015ff41
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015fe7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015fdec
- (void)copyTo:(id)arg1;	// IMP=0x000000000015fd89
- (void)writeTo:(id)arg1;	// IMP=0x000000000015fd25
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015fb17
- (id)dictionaryRepresentation;	// IMP=0x000000000015fa59
- (id)description;	// IMP=0x000000000015f9aa
@property(readonly, nonatomic) _Bool hasSignature;
@property(nonatomic) _Bool hasVersion;

@end
