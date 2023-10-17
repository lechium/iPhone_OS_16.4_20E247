//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PSAppChannelSubscriptions : PBCodable
{
    NSString *_appId;	// 8 = 0x8
    NSMutableArray *_attributes;	// 16 = 0x10
    NSMutableArray *_subscriptionChannels;	// 24 = 0x18
    NSMutableArray *_unsubscriptionChannels;	// 32 = 0x20
}

+ (Class)attributesType;	// IMP=0x002000000006c42e
+ (Class)unsubscriptionChannelsType;	// IMP=0x001000000006c35c
+ (Class)subscriptionChannelsType;	// IMP=0x001000000006c28a
- (void).cxx_destruct;	// IMP=0x002000000006dc65
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSMutableArray *unsubscriptionChannels; // @synthesize unsubscriptionChannels=_unsubscriptionChannels;
@property(retain, nonatomic) NSMutableArray *subscriptionChannels; // @synthesize subscriptionChannels=_subscriptionChannels;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006d879
- (unsigned long long)hash;	// IMP=0x001000000006d7f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006d6c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006d294
- (void)copyTo:(id)arg1;	// IMP=0x001000000006d09a
- (void)writeTo:(id)arg1;	// IMP=0x001000000006cd95
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006cd88
- (id)dictionaryRepresentation;	// IMP=0x001000000006c4ee
- (id)description;	// IMP=0x001000000006c43f
- (id)attributesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000006c411
- (unsigned long long)attributesCount;	// IMP=0x001000000006c3f4
- (void)addAttributes:(id)arg1;	// IMP=0x001000000006c38a
- (void)clearAttributes;	// IMP=0x001000000006c36d
- (id)unsubscriptionChannelsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000006c33f
- (unsigned long long)unsubscriptionChannelsCount;	// IMP=0x001000000006c322
- (void)addUnsubscriptionChannels:(id)arg1;	// IMP=0x001000000006c2b8
- (void)clearUnsubscriptionChannels;	// IMP=0x001000000006c29b
- (id)subscriptionChannelsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000006c26d
- (unsigned long long)subscriptionChannelsCount;	// IMP=0x001000000006c250
- (void)addSubscriptionChannels:(id)arg1;	// IMP=0x001000000006c1e6
- (void)clearSubscriptionChannels;	// IMP=0x001000000006c1c9
@property(readonly, nonatomic) _Bool hasAppId;

@end
