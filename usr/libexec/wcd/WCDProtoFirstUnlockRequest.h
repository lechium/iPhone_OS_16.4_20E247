//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface WCDProtoFirstUnlockRequest : PBRequest
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000ad9c
- (unsigned long long)hash;	// IMP=0x001000000000ad72
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000ace0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000ac7e
- (void)copyTo:(id)arg1;	// IMP=0x001000000000ac5a
- (void)writeTo:(id)arg1;	// IMP=0x001000000000ac2f
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000ac22
- (id)dictionaryRepresentation;	// IMP=0x001000000000a9a7
- (id)description;	// IMP=0x001000000000a8f8
@property(nonatomic) _Bool hasVersion;

@end
