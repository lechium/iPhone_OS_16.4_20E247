//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADRgbColor
{
    float mRed;	// 16 = 0x10
    float mGreen;	// 20 = 0x14
    float mBlue;	// 24 = 0x18
}

+ (id)white;	// IMP=0x00600000000259a4
+ (id)black;	// IMP=0x006000000000a5ae
+ (id)rgbColorWithTSUColor:(id)arg1;	// IMP=0x0060000000184d08
+ (id)rgbColorWithWhiteByte:(float)arg1;	// IMP=0x0060000000308189
+ (id)rgbColorWithWhite:(float)arg1;	// IMP=0x00600000003080e4
+ (id)rgbColorWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;	// IMP=0x0060000000109ab7
+ (id)rgbColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;	// IMP=0x00600000001d4826
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001008eb
- (unsigned long long)hash;	// IMP=0x0000000000100c90
- (_Bool)isBlack;	// IMP=0x00000000002434aa
- (_Bool)isWhite;	// IMP=0x00000000002434f6
- (unsigned char)blueByte;	// IMP=0x0000000000100d80
- (unsigned char)greenByte;	// IMP=0x0000000000100d4a
- (unsigned char)redByte;	// IMP=0x0000000000100d14
- (float)blue;	// IMP=0x00000000000a4d4a
- (float)green;	// IMP=0x00000000000a4d38
- (float)red;	// IMP=0x00000000000a4bae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001936a9
- (id)rgbColorWithFraction:(float)arg1 ofRgbColor:(id)arg2;	// IMP=0x00000000003081c4
- (id)initWithWhiteByte:(float)arg1;	// IMP=0x000000000030811f
- (id)initWithWhite:(float)arg1;	// IMP=0x0000000000308082
- (id)initWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;	// IMP=0x00000000000243f1
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;	// IMP=0x000000000000a5e0

@end

