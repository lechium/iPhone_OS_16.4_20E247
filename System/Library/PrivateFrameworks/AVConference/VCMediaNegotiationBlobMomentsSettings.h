//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobMomentsSettings : PBCodable
{
    unsigned int _capabilities;	// 8 = 0x8
    unsigned int _multiwayCapabilities;	// 12 = 0xc
    unsigned int _supportedImageTypes;	// 16 = 0x10
    unsigned int _supportedVideoCodecs;	// 20 = 0x14
    struct {
        unsigned int multiwayCapabilities:1;
        unsigned int supportedImageTypes:1;
        unsigned int supportedVideoCodecs:1;
    } _has;	// 24 = 0x18
}

+ (unsigned int)capabilitiesBitmapWithCapabilities:(unsigned char)arg1;	// IMP=0x0010000000351c76
+ (unsigned int)avcMomentsCapabilitiesForMultiwayMomentsCapabilities:(int)arg1;	// IMP=0x0010000000351831
@property(nonatomic) unsigned int multiwayCapabilities; // @synthesize multiwayCapabilities=_multiwayCapabilities;
@property(nonatomic) unsigned int supportedImageTypes; // @synthesize supportedImageTypes=_supportedImageTypes;
@property(nonatomic) unsigned int supportedVideoCodecs; // @synthesize supportedVideoCodecs=_supportedVideoCodecs;
@property(nonatomic) unsigned int capabilities; // @synthesize capabilities=_capabilities;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000062541
- (unsigned long long)hash;	// IMP=0x00000000000624cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000062419
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000062376
- (void)copyTo:(id)arg1;	// IMP=0x0000000000062311
- (void)writeTo:(id)arg1;	// IMP=0x0000000000062271
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000062264
- (id)dictionaryRepresentation;	// IMP=0x0000000000061d9b
- (id)description;	// IMP=0x0000000000061d01
@property(nonatomic) _Bool hasMultiwayCapabilities;
@property(nonatomic) _Bool hasSupportedImageTypes;
@property(nonatomic) _Bool hasSupportedVideoCodecs;
- (id)newImageTypeSet;	// IMP=0x0000000000351be3
- (id)newVideoCodecSet;	// IMP=0x0000000000351b50
- (id)initWithVideoCodecs:(id)arg1 imageTypes:(id)arg2 capabilities:(unsigned char)arg3 multiwayCapabilities:(unsigned char)arg4;	// IMP=0x0000000000351849

@end
