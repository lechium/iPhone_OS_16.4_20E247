//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordIdentifier, CKDPRecordType, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload : PBCodable
{
    NSMutableArray *_assetFields;	// 8 = 0x8
    CKDPRecordIdentifier *_recordId;	// 16 = 0x10
    CKDPRecordType *_type;	// 24 = 0x18
}

+ (Class)assetFieldsType;	// IMP=0x0010000000141f18
- (void).cxx_destruct;	// IMP=0x0000000000142d4a
@property(retain, nonatomic) NSMutableArray *assetFields; // @synthesize assetFields=_assetFields;
@property(retain, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
@property(retain, nonatomic) CKDPRecordIdentifier *recordId; // @synthesize recordId=_recordId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000142af5
- (unsigned long long)hash;	// IMP=0x0000000000142a88
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000142990
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014278a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000142688
- (void)writeTo:(id)arg1;	// IMP=0x000000000014251f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000142512
- (id)dictionaryRepresentation;	// IMP=0x0000000000141fd8
- (id)description;	// IMP=0x0000000000141f29
- (id)assetFieldsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000141efb
- (unsigned long long)assetFieldsCount;	// IMP=0x0000000000141ede
- (void)addAssetFields:(id)arg1;	// IMP=0x0000000000141e74
- (void)clearAssetFields;	// IMP=0x0000000000141e57
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasRecordId;

@end
