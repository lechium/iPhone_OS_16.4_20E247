//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage;

__attribute__((visibility("hidden")))
@interface _UIImageCIImageContent
{
    CIImage *_ciImage;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000068b74e
- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;	// IMP=0x000000000068b4b1
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x000000000068b47f
- (id)description;	// IMP=0x000000000068b44f
- (unsigned long long)hash;	// IMP=0x000000000068b432
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000068b3c6
- (struct CGSize)sizeInPixels;	// IMP=0x000000000068b376
- (_Bool)canEmitDrawingCommands;	// IMP=0x000000000068b36e
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x000000000068b366
- (_Bool)isCIImage;	// IMP=0x000000000068b35e
- (id)CIImage;	// IMP=0x000000000068b349
- (id)initWithScale:(double)arg1;	// IMP=0x000000000068b2c2
- (id)initWithCIImage:(id)arg1 scale:(double)arg2;	// IMP=0x000000000068b1da

@end
