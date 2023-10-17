//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDBorders : NSObject
{
    EDResources *mResources;	// 8 = 0x8
    unsigned long long mLeftBorderIndex;	// 16 = 0x10
    unsigned long long mRightBorderIndex;	// 24 = 0x18
    unsigned long long mTopBorderIndex;	// 32 = 0x20
    unsigned long long mBottomBorderIndex;	// 40 = 0x28
    unsigned long long mDiagonalBorderIndex;	// 48 = 0x30
    unsigned long long mVerticalBorderIndex;	// 56 = 0x38
    unsigned long long mHorizontalBorderIndex;	// 64 = 0x40
}

+ (id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 vertical:(id)arg6 horizontal:(id)arg7 resources:(id)arg8;	// IMP=0x00100000001ba100
+ (id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 resources:(id)arg6;	// IMP=0x00100000001191f0
+ (id)bordersWithResources:(id)arg1;	// IMP=0x0010000000119354
- (void).cxx_destruct;	// IMP=0x000000000039ee3f
- (id)description;	// IMP=0x000000000039ee01
- (id)horizontalBorder;	// IMP=0x0000000000230935
- (id)verticalBorder;	// IMP=0x000000000022fe7c
- (id)diagonalBorder;	// IMP=0x0000000000230051
- (id)bottomBorder;	// IMP=0x0000000000132b95
- (id)topBorder;	// IMP=0x0000000000132932
- (id)rightBorder;	// IMP=0x0000000000132c2e
- (id)leftBorder;	// IMP=0x0000000000132afc
- (unsigned long long)hash;	// IMP=0x000000000039edc3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011a1a0
- (_Bool)isEqualToBorders:(id)arg1;	// IMP=0x000000000011a21c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000039ed0a
- (id)initWithResources:(id)arg1;	// IMP=0x00000000001193b9
- (void)setHorizontalBorder:(id)arg1;	// IMP=0x00000000001ba2b8
- (void)setVerticalBorder:(id)arg1;	// IMP=0x00000000001ba1f9
- (void)setDiagonalBorder:(id)arg1;	// IMP=0x0000000000119910
- (void)setBottomBorder:(id)arg1;	// IMP=0x0000000000119851
- (void)setTopBorder:(id)arg1;	// IMP=0x0000000000119792
- (void)setRightBorder:(id)arg1;	// IMP=0x0000000000119519
- (void)setLeftBorder:(id)arg1;	// IMP=0x000000000011944c

@end
