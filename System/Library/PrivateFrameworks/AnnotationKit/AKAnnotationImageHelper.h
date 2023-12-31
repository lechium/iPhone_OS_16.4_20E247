//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKAnnotationImageHelper : NSObject
{
}

+ (struct CGImage *)createImageOfAnnotation:(id)arg1 withScale:(double)arg2;	// IMP=0x00800000000a6980
+ (void)_drawImageForSignature:(id)arg1 withFillColor:(id)arg2 scale:(double)arg3 pathOffset:(struct CGPoint)arg4 inContext:(struct CGContext *)arg5;	// IMP=0x00800000000a6887
+ (id)imageOfSize:(struct CGSize)arg1 withFillColor:(id)arg2 forSignature:(id)arg3;	// IMP=0x00800000000a6685
+ (void)_drawImageForPath:(id)arg1 inRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x00800000000a6495
+ (id)imageOfSize:(struct CGSize)arg1 forPath:(id)arg2;	// IMP=0x00800000000a6394
+ (void)_drawFilledShapeImageForAnnotation:(id)arg1 inRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x00800000000a6006
+ (id)_imageOfSize:(struct CGSize)arg1 forAnnotation:(id)arg2 strokeWidth:(double)arg3 withFillColor:(_Bool)arg4;	// IMP=0x00800000000a5d0e
+ (id)imageOfSize:(struct CGSize)arg1 forAnnotation:(id)arg2;	// IMP=0x00800000000a5c90
+ (id)imageOfSize:(struct CGSize)arg1 forAnnotationTag:(long long)arg2;	// IMP=0x00800000000a577c
+ (id)imageForShapeTag:(long long)arg1;	// IMP=0x00800000000a56ec

@end

