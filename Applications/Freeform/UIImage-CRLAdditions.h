//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (CRLAdditions)
+ (id)crl_internalSystemImageNamed:(id)arg1;	// IMP=0x00100000004bb66b
+ (id)crl_systemImageNamed:(id)arg1 withFont:(id)arg2;	// IMP=0x00100000004bb51e
+ (id)crl_systemImageNamed:(id)arg1 withPointSize:(double)arg2 weight:(long long)arg3 scale:(long long)arg4;	// IMP=0x00100000004bb47b
+ (id)crl_systemImageNamed:(id)arg1 withPointSize:(double)arg2 weight:(long long)arg3;	// IMP=0x00100000004bb3dd
+ (id)crl_imageNamed:(id)arg1 withPointSize:(double)arg2;	// IMP=0x00100000004bb33e
+ (id)crl_systemImageNamed:(id)arg1 withPointSize:(double)arg2;	// IMP=0x00100000004bb327
+ (id)crl_systemImageNamed:(id)arg1 withFallbackCustomImageNamed:(id)arg2;	// IMP=0x00100000004bb0cb
+ (id)crl_bidiConsciousImageNamed:(id)arg1;	// IMP=0x00100000004bb069
+ (id)crl_accessibilityBoldTextAdaptiveImageNamed:(id)arg1;	// IMP=0x00100000004bafb5
+ (id)crl_imageWithColor:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00100000004bae17
+ (id)crl_templateImageWithCGPath:(const struct CGPath *)arg1 scale:(double)arg2;	// IMP=0x00100000004ba9c8
- (id)crl_imageWithRTLMirroringForcedOn:(_Bool)arg1;	// IMP=0x00200000004bb5b2
- (id)crl_resizableImage;	// IMP=0x00100000004bad6f
- (id)crl_tintedImageWithColor:(id)arg1;	// IMP=0x00100000004bac62
- (id)crl_templateImageWithAlpha:(double)arg1;	// IMP=0x00100000004bac4b
- (id)crl_imageWithAlpha:(double)arg1 renderingMode:(long long)arg2;	// IMP=0x00100000004baaf9
@end
