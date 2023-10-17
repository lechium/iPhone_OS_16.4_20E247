//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ALCLMotionActivity;

@interface ALActivityOverrideMsg : PBCodable
{
    ALCLMotionActivity *_activity;	// 8 = 0x8
    int _overrideAction;	// 16 = 0x10
}

@property(retain, nonatomic) ALCLMotionActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) int overrideAction; // @synthesize overrideAction=_overrideAction;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000117865
- (unsigned long long)hash;	// IMP=0x0010000000117829
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001177b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000011772f
- (void)copyTo:(id)arg1;	// IMP=0x00100000001176ff
- (void)writeTo:(id)arg1;	// IMP=0x00100000001176b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001176a3
- (id)dictionaryRepresentation;	// IMP=0x0010000000117380
- (id)description;	// IMP=0x0010000000117309
- (int)StringAsOverrideAction:(id)arg1;	// IMP=0x00100000001172a0
- (id)overrideActionAsString:(int)arg1;	// IMP=0x0010000000117265
- (void)dealloc;	// IMP=0x0010000000117225

@end
