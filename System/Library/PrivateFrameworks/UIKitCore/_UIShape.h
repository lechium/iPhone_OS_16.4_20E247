//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIShape : NSObject
{
    UIBezierPath *_path;	// 8 = 0x8
    double _cornerRadius;	// 16 = 0x10
    NSString *_cornerCurve;	// 24 = 0x18
    unsigned long long _cornerMask;	// 32 = 0x20
    struct CGRect _rect;	// 40 = 0x28
}

+ (id)shapeWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2 cornerCurve:(id)arg3 cornerMask:(unsigned long long)arg4;	// IMP=0x00100000000533e4
+ (id)shapeWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2 cornerCurve:(id)arg3;	// IMP=0x00100000000533c6
+ (id)shapeWithPath:(id)arg1;	// IMP=0x0010000000053362
- (void).cxx_destruct;	// IMP=0x000000000005402f
@property(readonly, nonatomic) unsigned long long cornerMask; // @synthesize cornerMask=_cornerMask;
@property(readonly, nonatomic) NSString *cornerCurve; // @synthesize cornerCurve=_cornerCurve;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (id)description;	// IMP=0x0000000000053da8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000053cc2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000053a3c
@property(readonly, nonatomic) _UIShape *zeroOriginShape;
@property(readonly, nonatomic) UIBezierPath *outline;
@property(readonly, nonatomic) _Bool isRect;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGSize size;
- (id)shapeConvertedFromCoordinateSpace:(id)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x0000000000053455

@end

