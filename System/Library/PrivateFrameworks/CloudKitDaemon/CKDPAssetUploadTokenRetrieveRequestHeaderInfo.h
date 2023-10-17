//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPAssetUploadTokenRetrieveRequestHeaderInfo : PBCodable
{
    NSString *_headerKey;	// 8 = 0x8
    NSString *_headerValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f827f
@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000f81d2
- (unsigned long long)hash;	// IMP=0x00000000000f8185
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f80bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f801f
- (void)copyTo:(id)arg1;	// IMP=0x00000000000f7fae
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f7f13
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f7f06
- (id)dictionaryRepresentation;	// IMP=0x00000000000f7cf0
- (id)description;	// IMP=0x00000000000f7c41

@end
