//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface APPBClickLocation : PBCodable
{
    int _h;	// 8 = 0x8
    int _w;	// 12 = 0xc
    int _x;	// 16 = 0x10
    int _y;	// 20 = 0x14
    MISSING_TYPE *_has;	// 24 = 0x18
}

+ (id)options;	// IMP=0x0020000000041fdc
@property(nonatomic) int h; // @synthesize h=_h;
@property(nonatomic) int w; // @synthesize w=_w;
@property(nonatomic) int y; // @synthesize y=_y;
@property(nonatomic) int x; // @synthesize x=_x;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000042ac9
- (unsigned long long)hash;	// IMP=0x0010000000042a4a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000042953
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000428a4
- (void)copyTo:(id)arg1;	// IMP=0x0010000000042818
- (void)writeTo:(id)arg1;	// IMP=0x0010000000042769
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004275c
- (id)dictionaryRepresentation;	// IMP=0x00100000000421ff
- (id)description;	// IMP=0x0010000000042150
@property(nonatomic) _Bool hasH;
@property(nonatomic) _Bool hasW;
@property(nonatomic) _Bool hasY;
@property(nonatomic) _Bool hasX;

@end

