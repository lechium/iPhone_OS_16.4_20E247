//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface IDSProtoKeyTransparencyTrustedDevice : PBCodable
{
    long long _transparencyVersion;	// 8 = 0x8
    NSString *_buildVersion;	// 16 = 0x10
    NSString *_productName;	// 24 = 0x18
    NSData *_pushToken;	// 32 = 0x20
    NSMutableArray *_trustedServices;	// 40 = 0x28
    struct {
        unsigned int transparencyVersion:1;
    } _has;	// 48 = 0x30
}

+ (Class)trustedServicesType;	// IMP=0x00200000001f9df0
- (void).cxx_destruct;	// IMP=0x00200000001fc040
@property(nonatomic) long long transparencyVersion; // @synthesize transparencyVersion=_transparencyVersion;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSMutableArray *trustedServices; // @synthesize trustedServices=_trustedServices;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001fbb50
- (unsigned long long)hash;	// IMP=0x00100000001fba10
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001fb6f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001fb310
- (void)copyTo:(id)arg1;	// IMP=0x00100000001fb100
- (void)writeTo:(id)arg1;	// IMP=0x00100000001fade0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001fad80
- (id)dictionaryRepresentation;	// IMP=0x00100000001fa000
- (id)description;	// IMP=0x00100000001f9f30
@property(nonatomic) _Bool hasTransparencyVersion;
@property(readonly, nonatomic) _Bool hasProductName;
@property(readonly, nonatomic) _Bool hasBuildVersion;
- (id)trustedServicesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001f9db0
- (unsigned long long)trustedServicesCount;	// IMP=0x00100000001f9d70
- (void)addTrustedServices:(id)arg1;	// IMP=0x00100000001f9cd0
- (void)clearTrustedServices;	// IMP=0x00100000001f9c90
@property(readonly, nonatomic) _Bool hasPushToken;

@end

