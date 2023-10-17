//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPMergeableValueIdentifier : PBCodable
{
    CKDPIdentifier *_value;	// 8 = 0x8
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014fafb
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(retain, nonatomic) CKDPIdentifier *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000014fa1a
- (unsigned long long)hash;	// IMP=0x000000000014f9cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014f905
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014f867
- (void)copyTo:(id)arg1;	// IMP=0x000000000014f804
- (void)writeTo:(id)arg1;	// IMP=0x000000000014f7a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014f79a
- (id)dictionaryRepresentation;	// IMP=0x000000000014f4b1
- (id)description;	// IMP=0x000000000014f402
@property(readonly, nonatomic) _Bool hasZoneIdentifier;
@property(readonly, nonatomic) _Bool hasValue;

@end
