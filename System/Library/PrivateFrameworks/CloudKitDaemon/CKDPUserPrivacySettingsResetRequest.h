//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface CKDPUserPrivacySettingsResetRequest : PBRequest
{
}

+ (id)options;	// IMP=0x00100000002b82d9
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002b85bb
- (unsigned long long)hash;	// IMP=0x00000000002b85b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b856e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b8535
- (void)copyTo:(id)arg1;	// IMP=0x00000000002b852f
- (Class)responseClass;	// IMP=0x00000000002b851e
- (unsigned int)requestTypeCode;	// IMP=0x00000000002b8513
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b850d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b8500
- (id)dictionaryRepresentation;	// IMP=0x00000000002b83d8
- (id)description;	// IMP=0x00000000002b8329

@end

