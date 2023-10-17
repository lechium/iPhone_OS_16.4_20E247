//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADBevel, OADColor;

__attribute__((visibility("hidden")))
@interface OADShape3D : NSObject
{
    OADBevel *mTopBevel;	// 8 = 0x8
    OADBevel *mBottomBevel;	// 16 = 0x10
    OADColor *mExtrusionColor;	// 24 = 0x18
    float mExtrusionHeight;	// 32 = 0x20
    OADColor *mContourColor;	// 40 = 0x28
    float mContourWidth;	// 48 = 0x30
    float mShapeDepth;	// 52 = 0x34
    int mMaterial;	// 56 = 0x38
}

+ (id)nullShape3D;	// IMP=0x001000000001ecf4
- (void).cxx_destruct;	// IMP=0x0000000000319db3
- (id)description;	// IMP=0x0000000000319d75
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000319af5
- (unsigned long long)hash;	// IMP=0x0000000000319a14
- (void)setMaterial:(int)arg1;	// IMP=0x000000000001edd3
- (int)material;	// IMP=0x0000000000319a0b
- (void)setShapeDepth:(float)arg1;	// IMP=0x0000000000219cdd
- (float)shapeDepth;	// IMP=0x0000000000319a00
- (void)setContourWidth:(float)arg1;	// IMP=0x00000000001dcbb0
- (float)contourWidth;	// IMP=0x00000000003199f5
- (void)setContourColor:(id)arg1;	// IMP=0x00000000001dcb9f
- (id)contourColor;	// IMP=0x00000000003199e7
- (void)setExtrusionHeight:(float)arg1;	// IMP=0x0000000000219cab
- (float)extrusionHeight;	// IMP=0x00000000003199dc
- (void)setExtrusionColor:(id)arg1;	// IMP=0x0000000000223b25
- (id)extrusionColor;	// IMP=0x00000000003199ce
- (void)setBottomBevel:(id)arg1;	// IMP=0x0000000000219c9a
- (id)bottomBevel;	// IMP=0x00000000003199c0
- (void)setTopBevel:(id)arg1;	// IMP=0x00000000001dcb8e
- (id)topBevel;	// IMP=0x00000000003199b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003198a8
- (id)init;	// IMP=0x000000000001ed47

@end
