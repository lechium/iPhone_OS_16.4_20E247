//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ChannelActivityParticipantPayload : PBCodable
{
    unsigned long long _serverUpdateTimestampSeconds;	// 8 = 0x8
    NSData *_encryptedParticipantPayload;	// 16 = 0x10
    struct {
        unsigned int serverUpdateTimestampSeconds:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003af94
@property(nonatomic) unsigned long long serverUpdateTimestampSeconds; // @synthesize serverUpdateTimestampSeconds=_serverUpdateTimestampSeconds;
@property(retain, nonatomic) NSData *encryptedParticipantPayload; // @synthesize encryptedParticipantPayload=_encryptedParticipantPayload;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003aefa
- (unsigned long long)hash;	// IMP=0x000000000003aeaa
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003ade9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003ad50
- (void)copyTo:(id)arg1;	// IMP=0x000000000003acec
- (void)writeTo:(id)arg1;	// IMP=0x000000000003ac87
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003ac7a
- (id)dictionaryRepresentation;	// IMP=0x000000000003a9a4
- (id)description;	// IMP=0x000000000003a8f5
@property(nonatomic) _Bool hasServerUpdateTimestampSeconds;
@property(readonly, nonatomic) _Bool hasEncryptedParticipantPayload;

@end

