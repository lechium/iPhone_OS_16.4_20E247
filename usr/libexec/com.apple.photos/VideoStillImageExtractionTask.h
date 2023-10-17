//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface VideoStillImageExtractionTask
{
    NSData *_imageData;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0020000000022759
@property(retain) NSData *imageData; // @synthesize imageData=_imageData;
- (void)storeImage;	// IMP=0x0010000000022377
- (double)posterFrameScaleFactorForCGImage:(struct CGImage *)arg1;	// IMP=0x0010000000022146
- (void)extractStillImage;	// IMP=0x0010000000021523
- (void)performConversion;	// IMP=0x00100000000214b3

@end
