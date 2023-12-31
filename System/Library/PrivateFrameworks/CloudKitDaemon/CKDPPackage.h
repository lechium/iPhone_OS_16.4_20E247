//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPAsset, NSMutableArray;

@interface CKDPPackage : PBCodable
{
    CKDPAsset *_manifest;	// 8 = 0x8
    NSMutableArray *_sections;	// 16 = 0x10
}

+ (Class)sectionsType;	// IMP=0x00100000002d8a0b
- (void).cxx_destruct;	// IMP=0x00000000002d9647
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) CKDPAsset *manifest; // @synthesize manifest=_manifest;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002d9469
- (unsigned long long)hash;	// IMP=0x00000000002d941c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d9354
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d917b
- (void)copyTo:(id)arg1;	// IMP=0x00000000002d9099
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d8f4d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d8f40
- (id)dictionaryRepresentation;	// IMP=0x00000000002d8acb
- (id)description;	// IMP=0x00000000002d8a1c
- (id)sectionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002d89ee
- (unsigned long long)sectionsCount;	// IMP=0x00000000002d89d1
- (void)addSections:(id)arg1;	// IMP=0x00000000002d8967
- (void)clearSections;	// IMP=0x00000000002d894a
@property(readonly, nonatomic) _Bool hasManifest;

@end

