//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKCDPInitializeContainerResponse : PBCodable
{
    _Bool _success;	// 8 = 0x8
    CDStruct_f2ecb737 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000335a0b
- (unsigned long long)hash;	// IMP=0x00000000003359e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033593e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003358dc
- (void)copyTo:(id)arg1;	// IMP=0x00000000003358b8
- (void)writeTo:(id)arg1;	// IMP=0x000000000033588c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003356a1
- (id)dictionaryRepresentation;	// IMP=0x0000000000335608
- (id)description;	// IMP=0x0000000000335559
@property(nonatomic) _Bool hasSuccess;

@end

