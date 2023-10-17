//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface SDUnlockStateResponse : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    _Bool _passcodeEnabled;	// 12 = 0xc
    _Bool _unlockEnabled;	// 13 = 0xd
    MISSING_TYPE *_has;	// 16 = 0x10
}

@property(nonatomic) _Bool passcodeEnabled; // @synthesize passcodeEnabled=_passcodeEnabled;
@property(nonatomic) _Bool unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001138eb
- (unsigned long long)hash;	// IMP=0x0010000000113889
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000011379b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000113705
- (void)copyTo:(id)arg1;	// IMP=0x0010000000113692
- (void)writeTo:(id)arg1;	// IMP=0x0010000000113600
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001135f3
- (id)dictionaryRepresentation;	// IMP=0x0010000000113177
- (id)description;	// IMP=0x00100000001130c8
@property(nonatomic) _Bool hasPasscodeEnabled;
@property(nonatomic) _Bool hasUnlockEnabled;
@property(nonatomic) _Bool hasVersion;

@end
