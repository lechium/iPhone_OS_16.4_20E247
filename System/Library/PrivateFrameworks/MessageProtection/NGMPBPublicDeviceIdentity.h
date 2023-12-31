//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBPublicDeviceIdentity : PBCodable
{
    NSData *_signingKey;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000019516
@property(retain, nonatomic) NSData *signingKey; // @synthesize signingKey=_signingKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000194cd
- (unsigned long long)hash;	// IMP=0x00000000000194b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019416
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001939e
- (void)copyTo:(id)arg1;	// IMP=0x000000000001937b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000019331
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000019324
- (id)dictionaryRepresentation;	// IMP=0x0000000000019155
- (id)description;	// IMP=0x00000000000190a6

@end

