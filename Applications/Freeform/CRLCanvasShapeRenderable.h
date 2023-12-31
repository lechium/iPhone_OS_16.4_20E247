//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, NSArray, NSString;

@interface CRLCanvasShapeRenderable
{
}

+ (id)renderable;	// IMP=0x004000000009535d
+ (id)renderableFromShapeLayer:(id)arg1;	// IMP=0x0010000000095314
- (void)setCGLineJoin:(int)arg1;	// IMP=0x0020000000095aae
- (void)setCGLineCap:(int)arg1;	// IMP=0x0010000000095a79
@property(nonatomic) double strokeEnd;
@property(nonatomic) double miterLimit;
@property(copy, nonatomic) NSString *lineJoin;
@property(nonatomic) double lineDashPhase;
@property(copy, nonatomic) NSString *lineCap;
@property(copy, nonatomic) NSArray *lineDashPattern;
@property(nonatomic) double lineWidth;
@property(nonatomic) struct CGColor *fillColor;
@property(nonatomic) struct CGColor *strokeColor;
@property(nonatomic) const struct CGPath *path;
@property(readonly, nonatomic) CAShapeLayer *shapeLayer;
- (id)initWithShapeLayer:(id)arg1;	// IMP=0x00100000000952e5

@end

