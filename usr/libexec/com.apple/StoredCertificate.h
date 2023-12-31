//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface StoredCertificate : PBCodable
{
    NSString *_dsid;	// 8 = 0x8
    NSData *_duplicateEscrowCertificate;	// 16 = 0x10
    NSString *_escrowBaseURL;	// 24 = 0x18
    NSData *_escrowCertificate;	// 32 = 0x20
    NSString *_iCloudEnvironment;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001aaf3
@property(retain, nonatomic) NSData *duplicateEscrowCertificate; // @synthesize duplicateEscrowCertificate=_duplicateEscrowCertificate;
@property(retain, nonatomic) NSData *escrowCertificate; // @synthesize escrowCertificate=_escrowCertificate;
@property(retain, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(retain, nonatomic) NSString *escrowBaseURL; // @synthesize escrowBaseURL=_escrowBaseURL;
@property(retain, nonatomic) NSString *iCloudEnvironment; // @synthesize iCloudEnvironment=_iCloudEnvironment;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000001a977
- (unsigned long long)hash;	// IMP=0x001000000001a8d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001a774
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001a65c
- (void)copyTo:(id)arg1;	// IMP=0x001000000001a599
- (void)writeTo:(id)arg1;	// IMP=0x001000000001a4e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000001a4d8
- (id)dictionaryRepresentation;	// IMP=0x001000000001a1dc
- (id)description;	// IMP=0x001000000001a12d
@property(readonly, nonatomic) _Bool hasDuplicateEscrowCertificate;
@property(readonly, nonatomic) _Bool hasEscrowCertificate;
@property(readonly, nonatomic) _Bool hasDsid;
@property(readonly, nonatomic) _Bool hasEscrowBaseURL;
- (_Bool);	// IMP=0x001000000001a0c4

// Remaining properties
@property(readonly, nonatomic) _Bool hasICloudEnvironment;

@end

