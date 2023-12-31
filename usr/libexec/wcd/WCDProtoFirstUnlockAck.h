//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface WCDProtoFirstUnlockAck : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    _Bool _acknowledgedState;	// 12 = 0xc
    struct {
        unsigned int version:1;
        unsigned int acknowledgedState:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool acknowledgedState; // @synthesize acknowledgedState=_acknowledgedState;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000029a36
- (unsigned long long)hash;	// IMP=0x00100000000299f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002992e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000298b1
- (void)copyTo:(id)arg1;	// IMP=0x0010000000029857
- (void)writeTo:(id)arg1;	// IMP=0x00100000000297e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000297d8
- (id)dictionaryRepresentation;	// IMP=0x0010000000029456
- (id)description;	// IMP=0x00100000000293a7
@property(nonatomic) _Bool hasAcknowledgedState;
@property(nonatomic) _Bool hasVersion;

@end

