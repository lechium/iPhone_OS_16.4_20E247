//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface CRLCurvedShadow
{
    double mCurve;	// 8 = 0x8
}

+ (id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(id)arg6 enabled:(_Bool)arg7;	// IMP=0x0040000000346d00
@property(readonly, nonatomic) double curve; // @synthesize curve=mCurve;
- (struct CGImage *)newShadowImageForRep:(id)arg1 withSize:(struct CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(_Bool)arg4;	// IMP=0x0010000000347957
- (MISSING_TYPE *)boundsForRep: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000347885
- (struct CGRect)boundsInNaturalSpaceForRep:(id)arg1;	// IMP=0x001000000034778e
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;	// IMP=0x001000000034759c
- (_Bool)showForEditingText;	// IMP=0x0010000000347594
- (unsigned long long)hash;	// IMP=0x0010000000347565
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000347471
- (id)newShadowClampedForSwatches;	// IMP=0x001000000034735b
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000034726c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000347261
- (double)paddingForCurveWithSize:(struct CGSize)arg1;	// IMP=0x001000000034724f
- (struct CGRect)expandedBoundsForRect:(struct CGRect)arg1;	// IMP=0x00100000003471ca
- (double)paddingForBlur;	// IMP=0x00100000003471bc
- (unsigned long long)shadowType;	// IMP=0x00100000003471b1
- (double)clampOffset:(double)arg1;	// IMP=0x001000000034719e
- (id)description;	// IMP=0x0010000000347022
- (void)i_setCurve:(double)arg1;	// IMP=0x0010000000347010
- (id)initWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(id)arg6 enabled:(_Bool)arg7;	// IMP=0x0010000000346d91

@end
