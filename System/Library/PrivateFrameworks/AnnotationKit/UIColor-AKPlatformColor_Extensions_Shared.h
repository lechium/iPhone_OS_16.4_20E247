//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIColor.h>

@interface UIColor (AKPlatformColor_Extensions_Shared)
+ (struct CGColorSpace *)_getCIELABColorSpace;	// IMP=0x008000000000efe1
+ (id)im_colorWithSRGBDescription:(id)arg1;	// IMP=0x008000000000feac
+ (id)akColorPickerPurple;	// IMP=0x00800000000cbfe7
+ (id)akColorPickerBlue;	// IMP=0x00800000000cbfae
+ (id)akColorPickerGreen;	// IMP=0x00800000000cbf75
+ (id)akColorPickerYellow;	// IMP=0x00800000000cbf46
+ (id)akColorPickerOrange;	// IMP=0x00800000000cbf17
+ (id)akColorPickerRed;	// IMP=0x00800000000cbede
+ (id)akBubbleFillColor;	// IMP=0x00800000000cbeb5
+ (id)akSystemPurpleColor;	// IMP=0x00800000000cbe9c
+ (id)akSystemPinkColor;	// IMP=0x00800000000cbe83
+ (id)akSystemBlueColor;	// IMP=0x00800000000cbe6a
+ (id)akSystemGreenColor;	// IMP=0x00800000000cbe51
+ (id)akSystemYellowColor;	// IMP=0x00800000000cbe38
+ (id)akSystemRedColor;	// IMP=0x00800000000cbe1f
+ (id)akButtonHoverStateColor;	// IMP=0x00800000000cbdeb
+ (id)akRowSeparatorColor;	// IMP=0x00800000000cbdc1
+ (id)akBoxBorderColor;	// IMP=0x00800000000cbdaf
+ (id)akColorWithCIColor:(id)arg1;	// IMP=0x00800000000cbcc8
+ (id)akColorWithWhite:(double)arg1 alpha:(double)arg2;	// IMP=0x00800000000cbc02
+ (id)akColorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x00800000000cbb1e
- (void)getL:(double *)arg1 a:(double *)arg2 b:(double *)arg3;	// IMP=0x001000000000ee24
- (double)akDistanceFromColor:(id)arg1;	// IMP=0x001000000000ed3f
- (id)akBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;	// IMP=0x00100000000cc56d
- (id)colorUsingSRGBColorSpace;	// IMP=0x00100000000cc3d5
- (_Bool)akHasHueEqualToColor:(id)arg1 withTolerance:(double)arg2;	// IMP=0x00100000000cc2b1
- (_Bool)akIsEqualToColor:(id)arg1;	// IMP=0x00100000000cc04e
- (double)akAlphaComponent;	// IMP=0x00100000000cc020
@end
