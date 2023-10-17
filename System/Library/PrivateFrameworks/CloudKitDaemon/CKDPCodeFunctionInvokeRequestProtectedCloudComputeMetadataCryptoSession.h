//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadataCryptoSession : PBCodable
{
    NSData *_routingToken;	// 8 = 0x8
    NSData *_wrappedInvocationKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001ed842
@property(retain, nonatomic) NSData *routingToken; // @synthesize routingToken=_routingToken;
@property(retain, nonatomic) NSData *wrappedInvocationKey; // @synthesize wrappedInvocationKey=_wrappedInvocationKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ed795
- (unsigned long long)hash;	// IMP=0x00000000001ed748
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ed680
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ed5e2
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ed57f
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ed522
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ed515
- (id)dictionaryRepresentation;	// IMP=0x00000000001ed2ff
- (id)description;	// IMP=0x00000000001ed250
@property(readonly, nonatomic) _Bool hasRoutingToken;
@property(readonly, nonatomic) _Bool hasWrappedInvocationKey;

@end
