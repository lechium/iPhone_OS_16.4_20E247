//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKInkRendererHelper : NSObject
{
}

+ (double)_calculateMaxRenderingSize;	// IMP=0x008000000006e151
+ (id)_createFullSizeRenderer;	// IMP=0x008000000006e100
+ (id)_sharedOfflineInkRendererSmallSize;	// IMP=0x008000000006e0a0
+ (double)maxRenderingSize;	// IMP=0x008000000006e071
+ (void)purgeSharedRenderer;	// IMP=0x008000000006e008
+ (id)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 scale:(double)arg3;	// IMP=0x008000000006dc72

@end
