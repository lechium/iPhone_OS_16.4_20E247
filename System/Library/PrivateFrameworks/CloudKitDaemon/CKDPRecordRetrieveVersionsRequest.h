//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPAssetsToDownload, CKDPRecordIdentifier, CKDPRequestedFields, NSString;

@interface CKDPRecordRetrieveVersionsRequest : PBRequest
{
    CKDPAssetsToDownload *_assetsToDownload;	// 8 = 0x8
    NSString *_minimumVersionEtag;	// 16 = 0x10
    CKDPRecordIdentifier *_recordIdentifier;	// 24 = 0x18
    CKDPRequestedFields *_requestedFields;	// 32 = 0x20
}

+ (id)options;	// IMP=0x001000000015090c
- (void).cxx_destruct;	// IMP=0x00000000001513ce
@property(retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) NSString *minimumVersionEtag; // @synthesize minimumVersionEtag=_minimumVersionEtag;
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000151249
- (unsigned long long)hash;	// IMP=0x00000000001511c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000151099
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000150faf
- (void)copyTo:(id)arg1;	// IMP=0x0000000000150f0c
- (Class)responseClass;	// IMP=0x0000000000150efb
- (unsigned int)requestTypeCode;	// IMP=0x0000000000150ef0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000150e59
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000150e4c
- (id)dictionaryRepresentation;	// IMP=0x0000000000150a5f
- (id)description;	// IMP=0x00000000001509b0
@property(readonly, nonatomic) _Bool hasAssetsToDownload;
@property(readonly, nonatomic) _Bool hasMinimumVersionEtag;
@property(readonly, nonatomic) _Bool hasRequestedFields;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end

