//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface PSChannelSubscriptionsUpdatePayload : PBCodable
{
    NSMutableArray *_appChannelUpdates;	// 8 = 0x8
    NSMutableArray *_subscriptionUpdates;	// 16 = 0x10
}

+ (Class)subscriptionUpdatesType;	// IMP=0x002000000007b91a
+ (Class)appChannelUpdatesType;	// IMP=0x001000000007b848
- (void).cxx_destruct;	// IMP=0x002000000007ca05
@property(retain, nonatomic) NSMutableArray *subscriptionUpdates; // @synthesize subscriptionUpdates=_subscriptionUpdates;
@property(retain, nonatomic) NSMutableArray *appChannelUpdates; // @synthesize appChannelUpdates=_appChannelUpdates;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000007c779
- (unsigned long long)hash;	// IMP=0x001000000007c72c
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007c664
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007c368
- (void)copyTo:(id)arg1;	// IMP=0x001000000007c21a
- (void)writeTo:(id)arg1;	// IMP=0x001000000007c009
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007bffc
- (id);	// IMP=0x001000000007b9da
- (id)description;	// IMP=0x001000000007b92b
- (id)subscriptionUpdatesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007b8fd
- (unsigned long long)subscriptionUpdatesCount;	// IMP=0x001000000007b8e0
- (void)addSubscriptionUpdates:(id)arg1;	// IMP=0x001000000007b876
- (void)clearSubscriptionUpdates;	// IMP=0x001000000007b859
- (id)appChannelUpdatesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007b82b
- (unsigned long long)appChannelUpdatesCount;	// IMP=0x001000000007b80e
- (void)addAppChannelUpdates:(id)arg1;	// IMP=0x001000000007b7a4
- (void)clearAppChannelUpdates;	// IMP=0x001000000007b787

@end

