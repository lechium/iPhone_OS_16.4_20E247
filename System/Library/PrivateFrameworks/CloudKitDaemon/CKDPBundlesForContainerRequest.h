//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface CKDPBundlesForContainerRequest : PBRequest
{
}

+ (id)options;	// IMP=0x0010000000322979
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000322c5b
- (unsigned long long)hash;	// IMP=0x0000000000322c53
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000322c0e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000322bd5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000322bcf
- (Class)responseClass;	// IMP=0x0000000000322bbe
- (unsigned int)requestTypeCode;	// IMP=0x0000000000322bb3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000322bad
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000322ba0
- (id)dictionaryRepresentation;	// IMP=0x0000000000322a78
- (id)description;	// IMP=0x00000000003229c9

@end

