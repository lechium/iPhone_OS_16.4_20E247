//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface IDSProtoKeyTransparencyTrustedDeviceMetadata : PBCodable
{
    double _timestamp;	// 8 = 0x8
    unsigned int _status;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int status:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000143650
- (unsigned long long)hash;	// IMP=0x00100000001433c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000143190
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000143060
- (void)copyTo:(id)arg1;	// IMP=0x0010000000142f70
- (void)writeTo:(id)arg1;	// IMP=0x0010000000142eb0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000142e50
- (id)dictionaryRepresentation;	// IMP=0x0010000000142500
- (id)description;	// IMP=0x0010000000142430
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasStatus;

@end

