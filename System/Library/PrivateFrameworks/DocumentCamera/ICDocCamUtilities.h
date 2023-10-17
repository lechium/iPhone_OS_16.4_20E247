//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICDocCamUtilities : NSObject
{
}

+ (struct CGAffineTransform)transformForOrientation:(id)arg1 newSize:(struct CGSize)arg2;	// IMP=0x00800000000a7e1e
+ (id)resizedImage:(id)arg1 newSize:(struct CGSize)arg2 transform:(struct CGAffineTransform)arg3 drawTransposed:(_Bool)arg4 interpolationQuality:(int)arg5;	// IMP=0x00800000000a7c38
+ (id)resizedImage:(id)arg1 newSize:(struct CGSize)arg2 interpolationQuality:(int)arg3;	// IMP=0x00800000000a7b56
+ (struct CGSize)aspectFitSize:(struct CGSize)arg1 targetSize:(struct CGSize)arg2;	// IMP=0x00800000000a7b2c
+ (struct CGSize)aspectFillSize:(struct CGSize)arg1 targetSize:(struct CGSize)arg2;	// IMP=0x00800000000a7b02
+ (_Bool)shouldPerformCustomAnimationForTransitionCoordinator:(id)arg1 window:(id)arg2;	// IMP=0x00800000000a7979
+ (id)buttonFromCopyingValuesFromButton:(id)arg1;	// IMP=0x00800000000a78b9
+ (void)prepareForRotationIfNecessaryWithShutterButton:(id)arg1 coodinator:(id)arg2;	// IMP=0x00800000000a7187

@end
