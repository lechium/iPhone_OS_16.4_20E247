//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSString;

@interface SDUnlockReset : PBCodable
{
    NSString *_errorString;	// 8 = 0x8
    unsigned int _resetReason;	// 16 = 0x10
    unsigned int _sessionID;	// 20 = 0x14
    unsigned int _version;	// 24 = 0x18
    MISSING_TYPE *_has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000006b176
@property(retain, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
@property(nonatomic) unsigned int resetReason; // @synthesize resetReason=_resetReason;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006b086
- (unsigned long long)hash;	// IMP=0x001000000006b004
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006aef9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006ae31
- (void)copyTo:(id)arg1;	// IMP=0x001000000006ad96
- (void)writeTo:(id)arg1;	// IMP=0x001000000006ace9
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006acdc
- (id)dictionaryRepresentation;	// IMP=0x001000000006a7f9
- (id)description;	// IMP=0x001000000006a74a
@property(readonly, nonatomic) _Bool hasErrorString;
@property(nonatomic) _Bool hasResetReason;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end
