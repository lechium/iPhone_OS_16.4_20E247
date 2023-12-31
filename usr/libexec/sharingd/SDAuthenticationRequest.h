//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class MISSING_TYPE, NSData, NSString;

@interface SDAuthenticationRequest : PBRequest
{
    MISSING_TYPE *_unlockDate;	// 8 = 0x8
    NSData *_awdlInfo;	// 16 = 0x10
    NSData *_rangingToken;	// 24 = 0x18
    NSString *_sessionID;	// 32 = 0x20
    unsigned int _type;	// 40 = 0x28
    unsigned int _version;	// 44 = 0x2c
    struct {
        unsigned int unlockDate:1;
        unsigned int type:1;
        unsigned int version:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000221912
@property(nonatomic) double unlockDate; // @synthesize unlockDate=_unlockDate;
@property(retain, nonatomic) NSData *rangingToken; // @synthesize rangingToken=_rangingToken;
@property(retain, nonatomic) NSData *awdlInfo; // @synthesize awdlInfo=_awdlInfo;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000022178a
- (unsigned long long)hash;	// IMP=0x00100000002215d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000221442
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000022131c
- (void)copyTo:(id)arg1;	// IMP=0x0010000000221235
- (void)writeTo:(id)arg1;	// IMP=0x001000000022114d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000221140
- (id)dictionaryRepresentation;	// IMP=0x0010000000220c29
- (id)description;	// IMP=0x0010000000220b7a
@property(nonatomic) _Bool hasUnlockDate;
@property(readonly, nonatomic) _Bool hasRangingToken;
@property(readonly, nonatomic) _Bool hasAwdlInfo;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasVersion;

@end

