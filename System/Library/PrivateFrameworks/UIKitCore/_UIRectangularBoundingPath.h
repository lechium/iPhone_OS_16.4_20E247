//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIRectangularBoundingPath
{
    struct CGRect _boundingRect;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000090b3db
@property(readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
- (id)_imageRepresentation;	// IMP=0x000000000090c396
- (id)description;	// IMP=0x000000000090c2cf
- (struct UIEdgeInsets)_centerEdgeInsetsOfBoundingPathAndRect:(struct CGRect)arg1;	// IMP=0x000000000090c0f0
- (struct CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(double)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;	// IMP=0x000000000090c03c
- (struct CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;	// IMP=0x000000000090bf78
- (struct CGRect)_largestInscribedRectInBoundingPathAndRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;	// IMP=0x000000000090be69
- (struct CGRect)_inscribedRectInBoundingPathAndRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;	// IMP=0x000000000090bd5e
- (_Bool)isNonRectangular;	// IMP=0x000000000090bd56
- (void)setCoordinateSpace:(id)arg1;	// IMP=0x000000000090bcd0
- (_Bool)validateForCoordinateSpace;	// IMP=0x000000000090bc5d
- (_Bool)_validateBoundingRect:(struct CGRect)arg1 forCoordinateSpace:(id)arg2;	// IMP=0x000000000090b9d7
- (id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(struct UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4;	// IMP=0x000000000090b89a
- (id)boundingPathForCoordinateSpace:(id)arg1;	// IMP=0x000000000090b5df
- (id)initWithCoordinateSpace:(id)arg1 boundingRect:(struct CGRect)arg2;	// IMP=0x000000000090b50f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000090b46e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000090b3e3

@end
