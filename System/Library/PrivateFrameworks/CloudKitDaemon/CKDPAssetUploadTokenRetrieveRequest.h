//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordFieldIdentifier, CKDPRecordType, NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest
{
    NSMutableArray *_assets;	// 8 = 0x8
    NSData *_authPutRequest;	// 16 = 0x10
    int _authPutType;	// 24 = 0x18
    NSMutableArray *_contentRequestHeaders;	// 32 = 0x20
    CKDPRecordFieldIdentifier *_field;	// 40 = 0x28
    CKDPRecordType *_type;	// 48 = 0x30
    NSMutableArray *_uploads;	// 56 = 0x38
    struct {
        unsigned int authPutType:1;
    } _has;	// 64 = 0x40
}

+ (Class)contentRequestHeadersType;	// IMP=0x00100000002455a3
+ (Class)uploadsType;	// IMP=0x00100000002454d1
+ (Class)assetsType;	// IMP=0x00100000002453ff
+ (id)options;	// IMP=0x00100000002452c4
- (void).cxx_destruct;	// IMP=0x00000000002474fd
@property(retain, nonatomic) NSData *authPutRequest; // @synthesize authPutRequest=_authPutRequest;
@property(retain, nonatomic) NSMutableArray *contentRequestHeaders; // @synthesize contentRequestHeaders=_contentRequestHeaders;
@property(retain, nonatomic) NSMutableArray *uploads; // @synthesize uploads=_uploads;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *field; // @synthesize field=_field;
@property(retain, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000247033
- (unsigned long long)hash;	// IMP=0x0000000000246f4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000246d87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002468c2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000246665
- (Class)responseClass;	// IMP=0x0000000000246654
- (unsigned int)requestTypeCode;	// IMP=0x0000000000246649
- (void)writeTo:(id)arg1;	// IMP=0x00000000002462e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002462d4
- (id)dictionaryRepresentation;	// IMP=0x00000000002457c7
- (id)description;	// IMP=0x0000000000245718
- (int)StringAsAuthPutType:(id)arg1;	// IMP=0x000000000024567b
- (id)authPutTypeAsString:(int)arg1;	// IMP=0x0000000000245630
@property(nonatomic) _Bool hasAuthPutType;
@property(nonatomic) int authPutType; // @synthesize authPutType=_authPutType;
@property(readonly, nonatomic) _Bool hasAuthPutRequest;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000245586
- (unsigned long long)contentRequestHeadersCount;	// IMP=0x0000000000245569
- (void)addContentRequestHeaders:(id)arg1;	// IMP=0x00000000002454ff
- (void)clearContentRequestHeaders;	// IMP=0x00000000002454e2
- (id)uploadsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002454b4
- (unsigned long long)uploadsCount;	// IMP=0x0000000000245497
- (void)addUploads:(id)arg1;	// IMP=0x000000000024542d
- (void)clearUploads;	// IMP=0x0000000000245410
- (id)assetsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002453e2
- (unsigned long long)assetsCount;	// IMP=0x00000000002453c5
- (void)addAssets:(id)arg1;	// IMP=0x000000000024535b
- (void)clearAssets;	// IMP=0x000000000024533e
@property(readonly, nonatomic) _Bool hasField;
@property(readonly, nonatomic) _Bool hasType;

@end

