//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface _ADPBLocationGetPeerLocationRequest : PBRequest
{
}

+ (unsigned short)_ADPBLocationRequestType;	// IMP=0x002000000022323b
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001ad6ae
- (unsigned long long)hash;	// IMP=0x00100000001ad6a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001ad661
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001ad628
- (void)copyTo:(id)arg1;	// IMP=0x00100000001ad622
- (void)writeTo:(id)arg1;	// IMP=0x00100000001ad61c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001ad60f
- (id)dictionaryRepresentation;	// IMP=0x00100000001ad4f0
- (id)description;	// IMP=0x00100000001ad441
- (void)_ad_performWithPeerLocationManagerRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f579f

@end

