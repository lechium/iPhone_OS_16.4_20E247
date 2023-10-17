//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoKeyFrameStillResult : PBCodable
{
    float _sharpness;	// 8 = 0x8
    float _stillTime;	// 12 = 0xc
    float _textureness;	// 16 = 0x10
    _Bool _hasFlash;	// 20 = 0x14
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002936c4
@property(nonatomic) float stillTime; // @synthesize stillTime=_stillTime;
@property(nonatomic) _Bool hasFlash; // @synthesize hasFlash=_hasFlash;
@property(nonatomic) float textureness; // @synthesize textureness=_textureness;
@property(nonatomic) float sharpness; // @synthesize sharpness=_sharpness;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000020e73f
- (unsigned long long)hash;	// IMP=0x000000000020e491
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020e3ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020e346
- (void)copyTo:(id)arg1;	// IMP=0x000000000020e300
- (void)writeTo:(id)arg1;	// IMP=0x000000000020e265
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000020e258
- (id)dictionaryRepresentation;	// IMP=0x000000000020ddfb
- (id)description;	// IMP=0x000000000020dd4c
- (id)exportToLegacyDictionary;	// IMP=0x0000000000293925

@end
