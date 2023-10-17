//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPShareIdentifier, NSData, NSString;

@interface CKDPShareVettingInitiateRequest : PBRequest
{
    NSString *_baseToken;	// 8 = 0x8
    NSData *_encryptedKey;	// 16 = 0x10
    NSString *_participantId;	// 24 = 0x18
    CKDPShareIdentifier *_shareId;	// 32 = 0x20
}

+ (id)options;	// IMP=0x0010000000353770
- (void).cxx_destruct;	// IMP=0x0000000000354152
@property(retain, nonatomic) NSString *baseToken; // @synthesize baseToken=_baseToken;
@property(retain, nonatomic) NSString *participantId; // @synthesize participantId=_participantId;
@property(retain, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000354001
- (unsigned long long)hash;	// IMP=0x0000000000353f7d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000353e51
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000353d67
- (void)copyTo:(id)arg1;	// IMP=0x0000000000353cc4
- (Class)responseClass;	// IMP=0x0000000000353cb3
- (unsigned int)requestTypeCode;	// IMP=0x0000000000353ca8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000353c11
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000353c04
- (id)dictionaryRepresentation;	// IMP=0x00000000003538c3
- (id)description;	// IMP=0x0000000000353814
@property(readonly, nonatomic) _Bool hasBaseToken;
@property(readonly, nonatomic) _Bool hasParticipantId;
@property(readonly, nonatomic) _Bool hasEncryptedKey;
@property(readonly, nonatomic) _Bool hasShareId;

@end
