//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface _ADPBDeviceStartRemoteResponse : PBCodable
{
    _Bool _success;	// 8 = 0x8
    struct {
        unsigned int success:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b04e8
- (unsigned long long)hash;	// IMP=0x00100000000b04bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b041b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b03b9
- (void)copyTo:(id)arg1;	// IMP=0x00100000000b0395
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b0369
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b035c
- (id)dictionaryRepresentation;	// IMP=0x00100000000b00e0
- (id)description;	// IMP=0x00100000000b0031
@property(nonatomic) _Bool hasSuccess;

@end

