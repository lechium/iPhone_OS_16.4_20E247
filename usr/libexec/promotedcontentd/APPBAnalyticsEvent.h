//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface APPBAnalyticsEvent : PBCodable
{
    double _timestamp;	// 8 = 0x8
    int _event;	// 16 = 0x10
}

+ (id)options;	// IMP=0x002000000006d884
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int event; // @synthesize event=_event;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006e0d8
- (unsigned long long)hash;	// IMP=0x001000000006dfd2
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006df40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006dede
- (void)copyTo:(id)arg1;	// IMP=0x001000000006deba
- (void)writeTo:(id)arg1;	// IMP=0x001000000006de59
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006de4c
- (id)dictionaryRepresentation;	// IMP=0x001000000006db1f
- (id)description;	// IMP=0x001000000006da70
- (int)StringAsEvent:(id)arg1;	// IMP=0x001000000006d91d
- (id)eventAsString:(int)arg1;	// IMP=0x001000000006d8d4

@end
