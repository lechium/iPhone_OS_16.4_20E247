//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDSharingProximityPairingResult : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _connectErrors;	// 16 = 0x10
    int _errorCode;	// 20 = 0x14
    unsigned int _pairingMs;	// 24 = 0x18
    NSString *_sessionUUID;	// 32 = 0x20
    unsigned int _userResponseMs;	// 40 = 0x28
    _Bool _userAccepted;	// 44 = 0x2c
    struct {
        unsigned int timestamp:1;
        unsigned int connectErrors:1;
        unsigned int errorCode:1;
        unsigned int pairingMs:1;
        unsigned int userResponseMs:1;
        unsigned int userAccepted:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001782f8
@property(nonatomic) unsigned int connectErrors; // @synthesize connectErrors=_connectErrors;
@property(nonatomic) unsigned int pairingMs; // @synthesize pairingMs=_pairingMs;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int userResponseMs; // @synthesize userResponseMs=_userResponseMs;
@property(nonatomic) _Bool userAccepted; // @synthesize userAccepted=_userAccepted;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000017817d
- (unsigned long long)hash;	// IMP=0x0010000000178099
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000177f02
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000177de0
- (void)copyTo:(id)arg1;	// IMP=0x0010000000177ceb
- (void)writeTo:(id)arg1;	// IMP=0x0010000000177be0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001776f8
- (id)dictionaryRepresentation;	// IMP=0x0010000000177480
- (id)description;	// IMP=0x00100000001773d1
@property(nonatomic) _Bool hasConnectErrors;
@property(nonatomic) _Bool hasPairingMs;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasUserResponseMs;
@property(nonatomic) _Bool hasUserAccepted;
@property(readonly, nonatomic) _Bool hasSessionUUID;
@property(nonatomic) _Bool hasTimestamp;

@end
