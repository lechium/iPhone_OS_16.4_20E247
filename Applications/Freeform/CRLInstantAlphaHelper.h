//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLInstantAlphaHelper : NSObject
{
}

+ (CDUnknownFunctionPointerType)p_loadVKCGImageRemoveBackground;	// IMP=0x00400000000e68b4
+ (id)removeBackgroundFromCGImage:(struct CGImage *)arg1;	// IMP=0x00100000000e5f27
+ (id)newMaskSeedFillWithPoint:(struct CGPoint)arg1 inImage:(id)arg2 tolerance:(unsigned long long)arg3 oldFill:(id)arg4;	// IMP=0x00100000000e5e19
+ (id)newMaskBitmapWithPoint:(struct CGPoint)arg1 image:(id)arg2 tolerance:(unsigned long long)arg3 oldMaskBitmap:(id)arg4;	// IMP=0x00100000000e51be
+ (id)newInstantAlphaImageWithCGImage:(struct CGImage *)arg1 ofSize:(struct CGSize)arg2;	// IMP=0x00100000000e5051

@end

