//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPAssetsToDownload, CKDPRecordIdentifier, CKDPRecordRetrieveRequestRetrieveAssetURL, CKDPRequestedFields, NSString;

@interface CKDPRecordRetrieveRequest : PBRequest
{
    CKDPAssetsToDownload *_assetsToDownload;	// 8 = 0x8
    NSString *_clientVersionETag;	// 16 = 0x10
    CKDPRecordRetrieveRequestRetrieveAssetURL *_getAssetURL;	// 24 = 0x18
    CKDPRecordIdentifier *_recordIdentifier;	// 32 = 0x20
    CKDPRequestedFields *_requestedFields;	// 40 = 0x28
    NSString *_versionETag;	// 48 = 0x30
    _Bool _shouldFailBatch;	// 56 = 0x38
    struct {
        unsigned int shouldFailBatch:1;
    } _has;	// 60 = 0x3c
}

+ (id)options;	// IMP=0x0010000000027c5c
- (void).cxx_destruct;	// IMP=0x0000000000028c87
@property(nonatomic) _Bool shouldFailBatch; // @synthesize shouldFailBatch=_shouldFailBatch;
@property(retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) CKDPRecordRetrieveRequestRetrieveAssetURL *getAssetURL; // @synthesize getAssetURL=_getAssetURL;
@property(retain, nonatomic) NSString *clientVersionETag; // @synthesize clientVersionETag=_clientVersionETag;
@property(retain, nonatomic) NSString *versionETag; // @synthesize versionETag=_versionETag;
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000028a2e
- (unsigned long long)hash;	// IMP=0x0000000000028946
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028775
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000028612
- (void)copyTo:(id)arg1;	// IMP=0x000000000002850f
- (Class)responseClass;	// IMP=0x00000000000284fe
- (unsigned int)requestTypeCode;	// IMP=0x00000000000284f3
- (void)writeTo:(id)arg1;	// IMP=0x00000000000283fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000283f0
- (id)dictionaryRepresentation;	// IMP=0x0000000000027e1e
- (id)description;	// IMP=0x0000000000027d6f
@property(nonatomic) _Bool hasShouldFailBatch;
@property(readonly, nonatomic) _Bool hasAssetsToDownload;
@property(readonly, nonatomic) _Bool hasGetAssetURL;
@property(readonly, nonatomic) _Bool hasClientVersionETag;
@property(readonly, nonatomic) _Bool hasVersionETag;
@property(readonly, nonatomic) _Bool hasRequestedFields;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end
