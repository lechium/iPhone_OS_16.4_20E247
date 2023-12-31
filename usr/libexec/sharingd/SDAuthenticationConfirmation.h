//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SDAuthenticationConfirmation : PBCodable
{
    NSString *_sessionID;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    _Bool _success;	// 20 = 0x14
    CDStruct_3dd40ee6 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001ac63d
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001ac571
- (unsigned long long)hash;	// IMP=0x00100000001ac4fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001ac3fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001ac349
- (void)copyTo:(id)arg1;	// IMP=0x00100000001ac2c2
- (void)writeTo:(id)arg1;	// IMP=0x00100000001ac235
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001ac228
- (id)dictionaryRepresentation;	// IMP=0x00100000001abe43
- (id)description;	// IMP=0x00100000001abd94
@property(nonatomic) _Bool hasSuccess;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

