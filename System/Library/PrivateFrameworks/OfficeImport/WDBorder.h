//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface WDBorder : NSObject
{
    int mStyle;	// 8 = 0x8
    OITSUColor *mColor;	// 16 = 0x10
    unsigned char mWidth;	// 24 = 0x18
    unsigned char mSpace;	// 25 = 0x19
    _Bool mShadow;	// 26 = 0x1a
    _Bool mFrame;	// 27 = 0x1b
}

- (void).cxx_destruct;	// IMP=0x00000000003e550c
- (id)description;	// IMP=0x00000000003e54ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003e543b
- (void)setFrame:(_Bool)arg1;	// IMP=0x00000000000e45b4
- (_Bool)frame;	// IMP=0x00000000003e5432
- (void)setShadow:(_Bool)arg1;	// IMP=0x00000000000e45ab
- (_Bool)shadow;	// IMP=0x00000000003e5429
- (void)setSpace:(unsigned char)arg1;	// IMP=0x00000000000e45a2
- (unsigned char)space;	// IMP=0x00000000003e541f
- (void)setWidth:(unsigned char)arg1;	// IMP=0x00000000000e4599
- (unsigned char)width;	// IMP=0x00000000000f7391
- (void)setColor:(id)arg1;	// IMP=0x00000000000e4588
- (id)color;	// IMP=0x00000000000f739b
- (void)setStyle:(int)arg1;	// IMP=0x00000000000e457f
- (int)style;	// IMP=0x00000000000f7388
- (void)setSingleBlackBorder;	// IMP=0x00000000003e5366
- (void)setNullBorder;	// IMP=0x00000000003e52b3
- (void)setBorder:(id)arg1;	// IMP=0x00000000003e5180
- (unsigned long long)hash;	// IMP=0x00000000003e512c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003e50b0
- (_Bool)isEqualToBorder:(id)arg1;	// IMP=0x00000000003e5018
- (id)init;	// IMP=0x00000000000bad36

@end
