//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingLinkSyncCheckInMessage, CSDMessagingLinkSyncRecoverMessage, CSDMessagingLinkSyncUpdateMessage;

@interface CSDMessagingLinkSyncMessage : PBCodable
{
    CSDMessagingLinkSyncCheckInMessage *_checkInMessage;	// 8 = 0x8
    CSDMessagingLinkSyncRecoverMessage *_recoverMessage;	// 16 = 0x10
    int _type;	// 24 = 0x18
    CSDMessagingLinkSyncUpdateMessage *_updateMessage;	// 32 = 0x20
    unsigned int _version;	// 40 = 0x28
    struct {
        unsigned int type:1;
        unsigned int version:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x002000000006ae88
@property(retain, nonatomic) CSDMessagingLinkSyncRecoverMessage *recoverMessage; // @synthesize recoverMessage=_recoverMessage;
@property(retain, nonatomic) CSDMessagingLinkSyncCheckInMessage *checkInMessage; // @synthesize checkInMessage=_checkInMessage;
@property(retain, nonatomic) CSDMessagingLinkSyncUpdateMessage *updateMessage; // @synthesize updateMessage=_updateMessage;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006acfb
- (unsigned long long)hash;	// IMP=0x001000000006ac46
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006aae9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006a9e5
- (void)copyTo:(id)arg1;	// IMP=0x001000000006a925
- (void)writeTo:(id)arg1;	// IMP=0x001000000006a85d
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006a850
- (id)dictionaryRepresentation;	// IMP=0x001000000006a2a7
- (id)description;	// IMP=0x001000000006a1f8
@property(readonly, nonatomic) _Bool hasRecoverMessage;
@property(readonly, nonatomic) _Bool hasCheckInMessage;
@property(readonly, nonatomic) _Bool hasUpdateMessage;
- (int)StringAsType:(id)arg1;	// IMP=0x001000000006a10a
- (id)typeAsString:(int)arg1;	// IMP=0x001000000006a0c1
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasVersion;

@end

