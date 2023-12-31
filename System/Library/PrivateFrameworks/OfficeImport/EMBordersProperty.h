//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface EMBordersProperty
{
    OITSUColor *mBorderColor;	// 16 = 0x10
    OITSUColor *mBorderTopColor;	// 24 = 0x18
    OITSUColor *mBorderLeftColor;	// 32 = 0x20
    OITSUColor *mBorderBottomColor;	// 40 = 0x28
    OITSUColor *mBorderRightColor;	// 48 = 0x30
    int mBorderStyle[5];	// 56 = 0x38
    int mBorderWidth[5];	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x00000000004676a6
- (id)cssString;	// IMP=0x000000000013d942
- (id)cssStringForName:(id)arg1;	// IMP=0x0000000000132cfe
- (void)setNoneAtLocation:(int)arg1;	// IMP=0x0000000000132cd9
- (_Bool)isNoneAtLocation:(int)arg1;	// IMP=0x000000000046768f
- (int *)borderWidths;	// IMP=0x000000000046767f
- (int *)borderStyles;	// IMP=0x000000000046766f
- (id)borderColor;	// IMP=0x000000000046765a
- (id)initWithEDBorders:(id)arg1;	// IMP=0x0000000000132449
- (id)initWithOADStroke:(id)arg1;	// IMP=0x00000000004672a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004671ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004670b4
- (id)widthHashNumber;	// IMP=0x000000000013e2a1
- (id)styleHashNumber;	// IMP=0x000000000013de0d
- (_Bool)hasSameColorsAs:(id)arg1;	// IMP=0x00000000004677d7
- (_Bool)hasSameWidthsAs:(id)arg1;	// IMP=0x0000000000467772
- (_Bool)hasSameStylesAs:(id)arg1;	// IMP=0x000000000046770d
- (id)colorString;	// IMP=0x000000000013e3eb
- (id)widthString;	// IMP=0x000000000013df5a
- (id)styleString;	// IMP=0x000000000013dad4
- (id)stringFromColor:(id)arg1;	// IMP=0x000000000013e626
- (id)stringFromWidthEnum:(int)arg1;	// IMP=0x000000000013e3c9
- (id)stringFromStyleEnum:(int)arg1;	// IMP=0x000000000013df38
- (void)setBorderStyleAndWidth:(int)arg1 location:(unsigned int)arg2;	// IMP=0x00000000001329d6

@end

