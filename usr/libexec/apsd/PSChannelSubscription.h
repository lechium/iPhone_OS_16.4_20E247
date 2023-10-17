//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface PSChannelSubscription : PBCodable
{
    unsigned long long _checkpoint;	// 8 = 0x8
    unsigned long long _messageReplayCount;	// 16 = 0x10
    NSMutableArray *_attributes;	// 24 = 0x18
    NSData *_channelId;	// 32 = 0x20
    int _subscriptionInfo;	// 40 = 0x28
    struct {
        unsigned int checkpoint:1;
        unsigned int messageReplayCount:1;
        unsigned int subscriptionInfo:1;
    } _has;	// 44 = 0x2c
}

+ (Class)attributesType;	// IMP=0x0020000000073ef4
- (void).cxx_destruct;	// IMP=0x0020000000075109
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) unsigned long long messageReplayCount; // @synthesize messageReplayCount=_messageReplayCount;
@property(nonatomic) unsigned long long checkpoint; // @synthesize checkpoint=_checkpoint;
@property(retain, nonatomic) NSData *channelId; // @synthesize channelId=_channelId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000074ea8
- (unsigned long long)hash;	// IMP=0x0010000000074de4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000074c8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000074a41
- (void)copyTo:(id)arg1;	// IMP=0x0010000000074903
- (void)writeTo:(id)arg1;	// IMP=0x0010000000074759
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007474c
- (id)dictionaryRepresentation;	// IMP=0x0010000000073fb4
- (id)description;	// IMP=0x0010000000073f05
- (id)attributesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000073ed7
- (unsigned long long)attributesCount;	// IMP=0x0010000000073eba
- (void)addAttributes:(id)arg1;	// IMP=0x0010000000073e50
- (void)clearAttributes;	// IMP=0x0010000000073e33
- (void)clearOneofValuesForSubscriptionInfo;	// IMP=0x0010000000073df4
- (int)StringAsSubscriptionInfo:(id)arg1;	// IMP=0x0010000000073d62
- (id)subscriptionInfoAsString:(int)arg1;	// IMP=0x0010000000073d19
@property(nonatomic) _Bool hasSubscriptionInfo;
@property(nonatomic) int subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
@property(nonatomic) _Bool hasMessageReplayCount;
@property(nonatomic) _Bool hasCheckpoint;
@property(readonly, nonatomic) _Bool hasChannelId;

@end
