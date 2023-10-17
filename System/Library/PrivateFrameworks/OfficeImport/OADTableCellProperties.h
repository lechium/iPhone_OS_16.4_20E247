//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADFill, OADStroke, OADTableCell3DProperties;

__attribute__((visibility("hidden")))
@interface OADTableCellProperties : NSObject
{
    OADStroke *mLeftStroke;	// 8 = 0x8
    OADStroke *mRightStroke;	// 16 = 0x10
    OADStroke *mTopStroke;	// 24 = 0x18
    OADStroke *mBottomStroke;	// 32 = 0x20
    OADStroke *mTopLeftToBottomRightStroke;	// 40 = 0x28
    OADStroke *mBottomLeftToTopRightStroke;	// 48 = 0x30
    OADTableCell3DProperties *mThreeDProperties;	// 56 = 0x38
    OADFill *mFill;	// 64 = 0x40
    float mLeftMargin;	// 72 = 0x48
    _Bool mIsLeftMarginOverridden;	// 76 = 0x4c
    float mRightMargin;	// 80 = 0x50
    _Bool mIsRightMarginOverridden;	// 84 = 0x54
    float mTopMargin;	// 88 = 0x58
    _Bool mIsTopMarginOverridden;	// 92 = 0x5c
    float mBottomMargin;	// 96 = 0x60
    _Bool mIsBottomMarginOverridden;	// 100 = 0x64
    unsigned char mTextFlow;	// 101 = 0x65
    _Bool mIsTextFlowOverridden;	// 102 = 0x66
    unsigned char mTextAnchor;	// 103 = 0x67
    _Bool mIsTextAnchorOverridden;	// 104 = 0x68
    _Bool mTextAnchorCenter;	// 105 = 0x69
    _Bool mIsTextAnchorCenterOverridden;	// 106 = 0x6a
    unsigned char mTextHorizontalOverflow;	// 107 = 0x6b
    _Bool mIsTextHorizontalOverflowOverridden;	// 108 = 0x6c
}

- (void).cxx_destruct;	// IMP=0x000000000031e213
- (id)description;	// IMP=0x000000000031e1d5
- (_Bool)isTextHorizontalOverflowOverridden;	// IMP=0x000000000031e1cc
- (void)setTextHorizontalOverflow:(unsigned char)arg1;	// IMP=0x0000000000219dd1
- (unsigned char)textHorizontalOverflow;	// IMP=0x000000000031e1c2
- (_Bool)isTextAnchorCenterOverridden;	// IMP=0x000000000031e1b9
- (void)setTextAnchorCenter:(_Bool)arg1;	// IMP=0x0000000000241ea0
- (_Bool)textAnchorCenter;	// IMP=0x000000000031e1b0
- (_Bool)isTextAnchorOverridden;	// IMP=0x00000000001fae92
- (void)setTextAnchor:(unsigned char)arg1;	// IMP=0x0000000000223f89
- (unsigned char)textAnchor;	// IMP=0x0000000000223f96
- (_Bool)isTextFlowOverridden;	// IMP=0x000000000031e1a7
- (void)setTextFlow:(unsigned char)arg1;	// IMP=0x000000000031e19a
- (unsigned char)textFlow;	// IMP=0x000000000031e190
- (_Bool)isBottomMarginOverridden;	// IMP=0x000000000031e187
- (void)setBottomMargin:(float)arg1;	// IMP=0x00000000001f88b2
- (float)bottomMargin;	// IMP=0x000000000031e17c
- (_Bool)isTopMarginOverridden;	// IMP=0x000000000031e173
- (void)setTopMargin:(float)arg1;	// IMP=0x00000000001f88a3
- (float)topMargin;	// IMP=0x000000000031e168
- (_Bool)isRightMarginOverridden;	// IMP=0x000000000031e15f
- (void)setRightMargin:(float)arg1;	// IMP=0x00000000001f8894
- (float)rightMargin;	// IMP=0x000000000031e154
- (_Bool)isLeftMarginOverridden;	// IMP=0x000000000031e14b
- (void)setLeftMargin:(float)arg1;	// IMP=0x00000000001f8885
- (float)leftMargin;	// IMP=0x000000000031e140
- (void)setFill:(id)arg1;	// IMP=0x0000000000219d4e
- (id)fill;	// IMP=0x0000000000219e16
- (void)setThreeDProperties:(id)arg1;	// IMP=0x000000000031e12f
- (id)threeDProperties;	// IMP=0x000000000031e121
- (id)strokeNormalToDir:(int)arg1 bound:(int)arg2;	// IMP=0x000000000031e0bf
- (void)setBottomLeftToTopRightStroke:(id)arg1;	// IMP=0x0000000000219d3d
- (id)bottomLeftToTopRightStroke;	// IMP=0x000000000031e0b1
- (void)setTopLeftToBottomRightStroke:(id)arg1;	// IMP=0x0000000000219d2c
- (id)topLeftToBottomRightStroke;	// IMP=0x000000000031e0a3
- (void)setBottomStroke:(id)arg1;	// IMP=0x0000000000219d1b
- (id)bottomStroke;	// IMP=0x0000000000219dec
- (void)setTopStroke:(id)arg1;	// IMP=0x0000000000219d0a
- (id)topStroke;	// IMP=0x0000000000219dde
- (void)setRightStroke:(id)arg1;	// IMP=0x0000000000219cf9
- (id)rightStroke;	// IMP=0x0000000000219e08
- (void)setLeftStroke:(id)arg1;	// IMP=0x0000000000219ce8
- (id)leftStroke;	// IMP=0x0000000000219dfa
- (void)setStrokeOfType:(int)arg1 toValue:(id)arg2;	// IMP=0x000000000031e033
- (id)stroke:(int)arg1;	// IMP=0x000000000031dfef

@end
