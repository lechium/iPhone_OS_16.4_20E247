//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLBezierPath, MISSING_TYPE, NSString;

@interface CRLLineEnd : NSObject
{
    CRLBezierPath *_path;	// 8 = 0x8
    CRLBezierPath *_wrapPath;	// 16 = 0x10
    struct CGPoint _endPoint;	// 24 = 0x18
    _Bool _isFilled;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    int _lineJoin;	// 56 = 0x38
    NSString *_accessibilityDescription;	// 64 = 0x40
}

+ (id)lineEndWithPath:(const struct CGPath *)arg1 wrapPath:(const struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(_Bool)arg4 identifier:(id)arg5;	// IMP=0x0020000000558218
+ (id)lineEndWithPath:(const struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(_Bool)arg3 identifier:(id)arg4;	// IMP=0x0010000000558197
+ (long long)lineEndTypeFromLineEnd:(id)arg1;	// IMP=0x001000000055800f
+ (id)lineEndWithIdentifier:(id)arg1;	// IMP=0x0010000000557e48
+ (id)lineEndWithType:(long long)arg1;	// IMP=0x0010000000557b54
+ (id)none;	// IMP=0x0010000000557a8b
+ (id)line;	// IMP=0x0010000000557991
+ (id)invertedArrow;	// IMP=0x001000000055786d
+ (id)openCircle;	// IMP=0x0010000000557705
+ (id)openSquare;	// IMP=0x001000000055759d
+ (id)filledSquare;	// IMP=0x001000000055743d
+ (id)filledArrow;	// IMP=0x0010000000557304
+ (id)openArrow;	// IMP=0x00100000005571bc
+ (id)filledDiamond;	// IMP=0x001000000055707e
+ (id)filledCircle;	// IMP=0x0010000000556f1e
+ (id)simpleArrow;	// IMP=0x0010000000556e04
- (void).cxx_destruct;	// IMP=0x0020000000558d43
@property(copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property(readonly, nonatomic) int lineJoin; // @synthesize lineJoin=_lineJoin;
@property(readonly, nonatomic) _Bool isFilled; // @synthesize isFilled=_isFilled;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, copy, nonatomic) CRLBezierPath *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (double)scaleForStrokeWidth:(double)arg1;	// IMP=0x0010000000558cb5
- (id)description;	// IMP=0x0010000000558c13
@property(readonly, nonatomic) _Bool isNone;
@property(readonly, copy, nonatomic) CRLBezierPath *wrapPath;
- (struct CGImage *)newLineEndImageOnRight:(_Bool)arg1 forContentsScale:(double)arg2 withSize:(struct CGSize)arg3;	// IMP=0x00100000005586b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000558663
- (MISSING_TYPE *)isEqual: /* Error: Ran out of types for this method. */;	// IMP=0x00100000005584eb
- (unsigned long long)hash;	// IMP=0x00100000005584d5
- (id)initWithPath:(const struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(_Bool)arg3 identifier:(id)arg4;	// IMP=0x00100000005584ab
- (id)initWithPath:(const struct CGPath *)arg1 wrapPath:(const struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(_Bool)arg4 identifier:(id)arg5 lineJoin:(int)arg6;	// IMP=0x00100000005583be
- (id)initWithBezierPath:(id)arg1 wrapPath:(id)arg2 endPoint:(struct CGPoint)arg3 isFilled:(_Bool)arg4 identifier:(id)arg5 lineJoin:(int)arg6;	// IMP=0x00100000005582aa

@end

