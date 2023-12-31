//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUCompositeVideoSettings : PXSettings
{
    _Bool _useFrameBlending;	// 8 = 0x8
    long long _cropMode;	// 16 = 0x10
    double _stitchingFadeDuration;	// 24 = 0x18
    double _nonStitchingFadeDuration;	// 32 = 0x20
}

+ (id)settingsControllerModule;	// IMP=0x0060000000490ca9
+ (id)sharedInstance;	// IMP=0x0060000000490c79
@property(nonatomic) double nonStitchingFadeDuration; // @synthesize nonStitchingFadeDuration=_nonStitchingFadeDuration;
@property(nonatomic) double stitchingFadeDuration; // @synthesize stitchingFadeDuration=_stitchingFadeDuration;
@property(nonatomic) long long cropMode; // @synthesize cropMode=_cropMode;
@property(nonatomic) _Bool useFrameBlending; // @synthesize useFrameBlending=_useFrameBlending;
- (void)setDefaultValues;	// IMP=0x00000000004910c4
- (id)parentSettings;	// IMP=0x00000000004910ab

@end

