//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICMYKHalftone : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputCenter;	// 80 = 0x50
    NSNumber *inputWidth;	// 88 = 0x58
    NSNumber *inputAngle;	// 96 = 0x60
    NSNumber *inputSharpness;	// 104 = 0x68
    NSNumber *inputGCR;	// 112 = 0x70
    NSNumber *inputUCR;	// 120 = 0x78
}

+ (id)customAttributes;	// IMP=0x006000000003a964
@property(retain, nonatomic) NSNumber *inputUCR; // @synthesize inputUCR;
@property(retain, nonatomic) NSNumber *inputGCR; // @synthesize inputGCR;
@property(retain, nonatomic) NSNumber *inputSharpness; // @synthesize inputSharpness;
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000003a13b
- (id)_CICMYK_black;	// IMP=0x000000000003a11b
- (id)_CICMYK_yellow;	// IMP=0x000000000003a0fb
- (id)_CICMYK_magenta;	// IMP=0x000000000003a0db
- (id)_CICMYK_cyan;	// IMP=0x000000000003a0bb
- (id)_CICMYK_convert;	// IMP=0x000000000003a09b
- (id)_CIWhite;	// IMP=0x000000000003a07b

@end
