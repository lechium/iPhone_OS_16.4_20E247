//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface CKDPUserRetrieveRequest : PBRequest
{
}

+ (id)options;	// IMP=0x001000000026e7f4
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000026ead6
- (unsigned long long)hash;	// IMP=0x000000000026eace
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026ea89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026ea50
- (void)copyTo:(id)arg1;	// IMP=0x000000000026ea4a
- (Class)responseClass;	// IMP=0x000000000026ea39
- (unsigned int)requestTypeCode;	// IMP=0x000000000026ea2e
- (void)writeTo:(id)arg1;	// IMP=0x000000000026ea28
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000026ea1b
- (id)dictionaryRepresentation;	// IMP=0x000000000026e8f3
- (id)description;	// IMP=0x000000000026e844

@end
