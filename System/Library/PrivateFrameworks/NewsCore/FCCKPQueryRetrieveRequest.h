//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class FCCKPQuery, FCCKPRecordZoneIdentifier, FCCKPRequestedFields, NSData;

__attribute__((visibility("hidden")))
@interface FCCKPQueryRetrieveRequest : PBRequest
{
    NSData *_continuationMarker;	// 8 = 0x8
    unsigned int _limit;	// 16 = 0x10
    FCCKPQuery *_query;	// 24 = 0x18
    FCCKPRequestedFields *_requestedFields;	// 32 = 0x20
    FCCKPRecordZoneIdentifier *_zoneIdentifier;	// 40 = 0x28
    struct {
        unsigned int limit:1;
    } _has;	// 48 = 0x30
}

+ (id)options;	// IMP=0x00100000001b84b4
- (void).cxx_destruct;	// IMP=0x00000000001b8f0c
- (unsigned long long)hash;	// IMP=0x00000000001b8dfd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b8ca0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b8b8c
- (Class)responseClass;	// IMP=0x00000000001b8b7b
- (unsigned int)requestTypeCode;	// IMP=0x00000000001b8b70
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b8ab5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b8aa8
- (id)dictionaryRepresentation;	// IMP=0x00000000001b85b3
- (id)description;	// IMP=0x00000000001b8504

@end
