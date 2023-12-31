//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface APPBConfiguration : PBCodable
{
    double _expirationDate;	// 8 = 0x8
    NSString *_baseUrl;	// 16 = 0x10
    NSString *_bundleId;	// 24 = 0x18
    int _requestType;	// 32 = 0x20
    _Bool _isTest;	// 36 = 0x24
    struct {
        unsigned int expirationDate:1;
        unsigned int requestType:1;
        unsigned int isTest:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000037656
@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(nonatomic) _Bool isTest; // @synthesize isTest=_isTest;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000037513
- (unsigned long long)hash;	// IMP=0x0010000000037379
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000037214
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000037118
- (void)copyTo:(id)arg1;	// IMP=0x0010000000037051
- (void)writeTo:(id)arg1;	// IMP=0x0010000000036f85
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000036f78
- (id)dictionaryRepresentation;	// IMP=0x0010000000036a7c
- (id)description;	// IMP=0x00100000000369cd
@property(nonatomic) _Bool hasExpirationDate;
@property(readonly, nonatomic) _Bool hasBaseUrl;
@property(nonatomic) _Bool hasIsTest;
@property(nonatomic) _Bool hasRequestType;
@property(readonly, nonatomic) _Bool hasBundleId;

@end

