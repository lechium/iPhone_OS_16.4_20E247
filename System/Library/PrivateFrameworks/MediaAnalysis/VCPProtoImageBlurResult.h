//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoImageBlurResult : PBCodable
{
    float _faceSharpness;	// 8 = 0x8
    float _sharpness;	// 12 = 0xc
    struct {
        unsigned int faceSharpness:1;
    } _has;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000294984
@property(nonatomic) float faceSharpness; // @synthesize faceSharpness=_faceSharpness;
@property(nonatomic) float sharpness; // @synthesize sharpness=_sharpness;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000095695
- (unsigned long long)hash;	// IMP=0x00000000000954c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000095415
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009539e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000095365
- (void)writeTo:(id)arg1;	// IMP=0x0000000000095303
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000952f6
- (id)dictionaryRepresentation;	// IMP=0x0000000000094ff6
- (id)description;	// IMP=0x0000000000094f47
@property(nonatomic) _Bool hasFaceSharpness;
- (id)exportToLegacyDictionary;	// IMP=0x0000000000294ad7

@end

