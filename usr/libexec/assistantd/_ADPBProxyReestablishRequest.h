//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface _ADPBProxyReestablishRequest : PBRequest
{
    NSString *_lastKnownStreamId;	// 8 = 0x8
}

+ (unsigned short)_ADPBProxyRequestType;	// IMP=0x002000000012208e
- (void).cxx_destruct;	// IMP=0x001000000008b153
@property(retain, nonatomic) NSString *lastKnownStreamId; // @synthesize lastKnownStreamId=_lastKnownStreamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000008b10a
- (unsigned long long)hash;	// IMP=0x001000000008b0ed
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008b053
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008afdb
- (void)copyTo:(id)arg1;	// IMP=0x001000000008afb1
- (void)writeTo:(id)arg1;	// IMP=0x001000000008af8d
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008af80
- (id)dictionaryRepresentation;	// IMP=0x001000000008adb1
- (id)description;	// IMP=0x001000000008ad02
@property(readonly, nonatomic) _Bool hasLastKnownStreamId;
- (void)_ad_performWithPeerStreamConnection:(id)arg1 context:(id)arg2;	// IMP=0x00100000000940b7

@end
