//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ABSPBAlert : PBCodable
{
    NSString *_sound;	// 8 = 0x8
    NSString *_vibration;	// 16 = 0x10
    _Bool _ignoreMute;	// 24 = 0x18
    struct {
        unsigned int ignoreMute:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000002b920
@property(nonatomic) _Bool ignoreMute; // @synthesize ignoreMute=_ignoreMute;
@property(retain, nonatomic) NSString *vibration; // @synthesize vibration=_vibration;
@property(retain, nonatomic) NSString *sound; // @synthesize sound=_sound;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002b843
- (unsigned long long)hash;	// IMP=0x001000000002b7ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002b6cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002b60f
- (void)copyTo:(id)arg1;	// IMP=0x001000000002b58c
- (void)writeTo:(id)arg1;	// IMP=0x001000000002b50a
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002b4fd
- (id)dictionaryRepresentation;	// IMP=0x001000000002b1e4
- (id);	// IMP=0x001000000002b135
@property(nonatomic) _Bool hasIgnoreMute;
@property(readonly, nonatomic) _Bool hasVibration;
@property(readonly, nonatomic) _Bool hasSound;

@end

