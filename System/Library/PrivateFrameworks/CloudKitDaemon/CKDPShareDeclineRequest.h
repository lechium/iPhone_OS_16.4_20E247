//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPShareIdentifier, NSString;

@interface CKDPShareDeclineRequest : PBRequest
{
    NSString *_participantId;	// 8 = 0x8
    CKDPShareIdentifier *_shareId;	// 16 = 0x10
}

+ (id)options;	// IMP=0x00100000000d6a22
- (void).cxx_destruct;	// IMP=0x00000000000d7135
@property(retain, nonatomic) NSString *participantId; // @synthesize participantId=_participantId;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d706e
- (unsigned long long)hash;	// IMP=0x00000000000d7021
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d6f59
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d6ebb
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d6e58
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d6dfb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d6dee
- (id)dictionaryRepresentation;	// IMP=0x00000000000d6b4b
- (id)description;	// IMP=0x00000000000d6a9c
@property(readonly, nonatomic) _Bool hasParticipantId;
@property(readonly, nonatomic) _Bool hasShareId;

@end
