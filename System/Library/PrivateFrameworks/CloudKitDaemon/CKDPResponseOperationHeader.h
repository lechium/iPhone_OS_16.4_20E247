//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPResponseOperationHeader : PBCodable
{
    NSMutableArray *_assetAuthorizationResponses;	// 8 = 0x8
    NSMutableArray *_throttleConfigs;	// 16 = 0x10
}

+ (Class)throttleConfigType;	// IMP=0x001000000005c564
+ (Class)assetAuthorizationResponsesType;	// IMP=0x001000000005c492
- (void).cxx_destruct;	// IMP=0x000000000005d64d
@property(retain, nonatomic) NSMutableArray *throttleConfigs; // @synthesize throttleConfigs=_throttleConfigs;
@property(retain, nonatomic) NSMutableArray *assetAuthorizationResponses; // @synthesize assetAuthorizationResponses=_assetAuthorizationResponses;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005d3c1
- (unsigned long long)hash;	// IMP=0x000000000005d374
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d2ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005cfb0
- (void)copyTo:(id)arg1;	// IMP=0x000000000005ce62
- (void)writeTo:(id)arg1;	// IMP=0x000000000005cc51
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005cc44
- (id)dictionaryRepresentation;	// IMP=0x000000000005c624
- (id)description;	// IMP=0x000000000005c575
- (id)throttleConfigAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005c547
- (unsigned long long)throttleConfigsCount;	// IMP=0x000000000005c52a
- (void)addThrottleConfig:(id)arg1;	// IMP=0x000000000005c4c0
- (void)clearThrottleConfigs;	// IMP=0x000000000005c4a3
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005c475
- (unsigned long long)assetAuthorizationResponsesCount;	// IMP=0x000000000005c458
- (void)addAssetAuthorizationResponses:(id)arg1;	// IMP=0x000000000005c3ee
- (void)clearAssetAuthorizationResponses;	// IMP=0x000000000005c3d1

@end
