//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface IDSProtoKeyTransparencyLoggableData : PBCodable
{
    NSMutableArray *_applicationPublicIdentitys;	// 8 = 0x8
    unsigned int _ktVersion;	// 16 = 0x10
    NSData *_ngmPublicIdentity;	// 24 = 0x18
    unsigned int _ngmVersion;	// 32 = 0x20
    struct {
        unsigned int ktVersion:1;
        unsigned int ngmVersion:1;
    } _has;	// 36 = 0x24
}

+ (Class)applicationPublicIdentityType;	// IMP=0x00200000000afcf0
- (void).cxx_destruct;	// IMP=0x00200000000b1ef0
@property(retain, nonatomic) NSMutableArray *applicationPublicIdentitys; // @synthesize applicationPublicIdentitys=_applicationPublicIdentitys;
@property(nonatomic) unsigned int ktVersion; // @synthesize ktVersion=_ktVersion;
@property(nonatomic) unsigned int ngmVersion; // @synthesize ngmVersion=_ngmVersion;
@property(retain, nonatomic) NSData *ngmPublicIdentity; // @synthesize ngmPublicIdentity=_ngmPublicIdentity;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b1ac0
- (unsigned long long)hash;	// IMP=0x00100000000b1940
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b1660
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b12a0
- (void)copyTo:(id)arg1;	// IMP=0x00100000000b10b0
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b0dc0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b0d60
- (id)dictionaryRepresentation;	// IMP=0x00100000000afdf0
- (id)description;	// IMP=0x00100000000afd20
- (id)applicationPublicIdentityAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000afcb0
- (unsigned long long)applicationPublicIdentitysCount;	// IMP=0x00100000000afc70
- (void)addApplicationPublicIdentity:(id)arg1;	// IMP=0x00100000000afbd0
- (void)clearApplicationPublicIdentitys;	// IMP=0x00100000000afb90
@property(nonatomic) _Bool hasKtVersion;
@property(nonatomic) _Bool hasNgmVersion;
@property(readonly, nonatomic) _Bool hasNgmPublicIdentity;

@end
