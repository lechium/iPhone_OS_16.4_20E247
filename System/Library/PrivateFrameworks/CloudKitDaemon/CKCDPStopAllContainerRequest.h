//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface CKCDPStopAllContainerRequest : PBRequest
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001eb9a4
- (unsigned long long)hash;	// IMP=0x00000000001eb99c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001eb957
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001eb91e
- (void)copyTo:(id)arg1;	// IMP=0x00000000001eb918
- (Class)responseClass;	// IMP=0x00000000001eb907
- (unsigned int)requestTypeCode;	// IMP=0x00000000001eb8fc
- (void)writeTo:(id)arg1;	// IMP=0x00000000001eb8f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001eb7f5
- (id)dictionaryRepresentation;	// IMP=0x00000000001eb7dc
- (id)description;	// IMP=0x00000000001eb72d

@end
