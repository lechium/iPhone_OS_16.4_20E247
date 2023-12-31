//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKAnnotationRendererUtilities : NSObject
{
}

+ (struct CGPath *)newStandardStrokedBorderPathWithPath:(struct CGPath *)arg1 withStrokeWidth:(double)arg2;	// IMP=0x00800000000f27d0
+ (void)setStandardLineDashInContext:(struct CGContext *)arg1 forLineWidth:(double)arg2;	// IMP=0x00800000000f2761
+ (void)setStandardLineStateInContext:(struct CGContext *)arg1 forLineWidth:(double)arg2;	// IMP=0x00800000000f2723
+ (void)endShadowInContext:(struct CGContext *)arg1;	// IMP=0x00800000000f2704
+ (void)beginShadowInContext:(struct CGContext *)arg1 forAnnotation:(id)arg2;	// IMP=0x00800000000f25fa
+ (struct CGRect)outsetRectForShadow:(struct CGRect)arg1 onAnnotation:(id)arg2;	// IMP=0x00800000000f25a5
+ (struct CGPoint)_shadowDirectionForAnnotation:(id)arg1;	// IMP=0x00800000000f253e

@end

