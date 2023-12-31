//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDAffineGeometry, GQDFilteredImage, GQDImageBinary, GQDPath, NSString;

@interface GQDMedia
{
    GQDFilteredImage *mFilteredImage;	// 80 = 0x50
    GQDAffineGeometry *mCropGeometry;	// 88 = 0x58
    GQDImageBinary *mOriginalImageBinary;	// 96 = 0x60
    GQDPath *mMaskingShapePath;	// 104 = 0x68
    struct CGPath *mAlphaMaskBezier;	// 112 = 0x70
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x001000000000bc18
- (struct CGPath *)alphaMaskBezier;	// IMP=0x000000000000bcff
- (id)maskingShapePath;	// IMP=0x000000000000bcee
- (id)cropGeometry;	// IMP=0x000000000000bcdd
- (id)imageBinary;	// IMP=0x000000000000bcae
- (void)dealloc;	// IMP=0x000000000000bc25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

