//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SecureBackupEscrowReason : PBCodable
{
    NSString *_expectedFederationID;	// 8 = 0x8
    int _reason;	// 16 = 0x10
    struct {
        unsigned int reason:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x002000000001b330
@property(retain, nonatomic) NSString *expectedFederationID; // @synthesize expectedFederationID=_expectedFederationID;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000001b2a8
- (unsigned long long)hash;	// IMP=0x001000000001b25b
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001b196
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001b106
- (void)copyTo:(id)arg1;	// IMP=0x001000000001b0a3
- (void)writeTo:(id)arg1;	// IMP=0x001000000001b03f
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000001b032
- (id)dictionaryRepresentation;	// IMP=0x001000000001ad36
- (id)description;	// IMP=0x001000000001ac87
@property(readonly, nonatomic) _Bool hasExpectedFederationID;
- (int)StringAsReason:(id)arg1;	// IMP=0x001000000001ac10
- (id)reasonAsString:(int)arg1;	// IMP=0x001000000001abbb
@property(nonatomic) _Bool hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;

@end
