//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRequestedFields;

@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable
{
    long long _requestedTTL;	// 8 = 0x8
    CKDPRequestedFields *_assetFields;	// 16 = 0x10
    int _type;	// 24 = 0x18
    struct {
        unsigned int requestedTTL:1;
        unsigned int type:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000155f8b
@property(nonatomic) long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) CKDPRequestedFields *assetFields; // @synthesize assetFields=_assetFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000155eba
- (unsigned long long)hash;	// IMP=0x0000000000155e4a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000155d63
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000155cad
- (void)copyTo:(id)arg1;	// IMP=0x0000000000155c2c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000155b9d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000155b90
- (id)dictionaryRepresentation;	// IMP=0x0000000000155719
- (id)description;	// IMP=0x000000000015566a
- (int)StringAsType:(id)arg1;	// IMP=0x00000000001555cd
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000155566
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasRequestedTTL;
@property(readonly, nonatomic) _Bool hasAssetFields;

@end

