//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class FCCKPIdentifier, FCCKPRecordZoneIdentifier;

__attribute__((visibility("hidden")))
@interface FCCKPRecordIdentifier : PBCodable
{
    FCCKPIdentifier *_value;	// 8 = 0x8
    FCCKPRecordZoneIdentifier *_zoneIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001aa50c
- (unsigned long long)hash;	// IMP=0x00000000001aa3fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001aa335
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001aa297
- (void)writeTo:(id)arg1;	// IMP=0x00000000001aa23a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001aa22d
- (id)dictionaryRepresentation;	// IMP=0x00000000001a9f44
- (id)description;	// IMP=0x00000000001a9e95

@end

