//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class AuthCredential, ChannelIdentity, NSData;

__attribute__((visibility("hidden")))
@interface ChannelActivityActivationRequest : PBRequest
{
    unsigned long long _clientTimestampSeconds;	// 8 = 0x8
    AuthCredential *_authCredential;	// 16 = 0x10
    ChannelIdentity *_channelIdentity;	// 24 = 0x18
    NSData *_encryptedParticipantPayload;	// 32 = 0x20
    int _requestFlag;	// 40 = 0x28
    NSData *_uuid;	// 48 = 0x30
    struct {
        unsigned int clientTimestampSeconds:1;
        unsigned int requestFlag:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005579c
@property(retain, nonatomic) NSData *encryptedParticipantPayload; // @synthesize encryptedParticipantPayload=_encryptedParticipantPayload;
@property(nonatomic) unsigned long long clientTimestampSeconds; // @synthesize clientTimestampSeconds=_clientTimestampSeconds;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) ChannelIdentity *channelIdentity; // @synthesize channelIdentity=_channelIdentity;
@property(retain, nonatomic) AuthCredential *authCredential; // @synthesize authCredential=_authCredential;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000555db
- (unsigned long long)hash;	// IMP=0x0000000000055504
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000055370
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000055241
- (void)copyTo:(id)arg1;	// IMP=0x0000000000055159
- (void)writeTo:(id)arg1;	// IMP=0x0000000000055075
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000055068
- (id)dictionaryRepresentation;	// IMP=0x0000000000054ac4
- (id)description;	// IMP=0x0000000000054a15
@property(readonly, nonatomic) _Bool hasEncryptedParticipantPayload;
@property(nonatomic) _Bool hasClientTimestampSeconds;
@property(readonly, nonatomic) _Bool hasUuid;
- (int)StringAsRequestFlag:(id)arg1;	// IMP=0x0000000000054913
- (id)requestFlagAsString:(int)arg1;	// IMP=0x00000000000548ca
@property(nonatomic) _Bool hasRequestFlag;
@property(nonatomic) int requestFlag; // @synthesize requestFlag=_requestFlag;
@property(readonly, nonatomic) _Bool hasChannelIdentity;
@property(readonly, nonatomic) _Bool hasAuthCredential;

@end

