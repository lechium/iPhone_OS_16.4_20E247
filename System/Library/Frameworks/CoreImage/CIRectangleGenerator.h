//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRectangleGenerator : CIFilter
{
    CIColor *inputColor;	// 72 = 0x48
    CIVector *inputRectangle;	// 80 = 0x50
    NSNumber *inputEdgeBlur;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x006000000012963e
- (id)outputImage;	// IMP=0x0000000000129445
- (id)_CIRectangle;	// IMP=0x0000000000129425

@end

