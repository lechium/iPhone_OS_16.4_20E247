//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BCSImageQuad : NSObject
{
    struct CGPoint _topLeft;	// 8 = 0x8
    struct CGPoint _topRight;	// 24 = 0x18
    struct CGPoint _bottomRight;	// 40 = 0x28
    struct CGPoint _bottomLeft;	// 56 = 0x38
    struct CGRect _bounds;	// 72 = 0x48
}

@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) struct CGPoint bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(readonly, nonatomic) struct CGPoint bottomRight; // @synthesize bottomRight=_bottomRight;
@property(readonly, nonatomic) struct CGPoint topRight; // @synthesize topRight=_topRight;
@property(readonly, nonatomic) struct CGPoint topLeft; // @synthesize topLeft=_topLeft;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000a7ef
- (void)adjustOrientationInImageSpace:(_Bool)arg1;	// IMP=0x001000000000a267
- (struct CGSize)perspectiveCorrectedSize;	// IMP=0x001000000000a125
- (struct CGPoint)_denormalizePoint:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x001000000000a109
- (struct CGPoint)_normalizePoint:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x001000000000a0ed
- (void)flip;	// IMP=0x001000000000a07a
- (void)denormalize;	// IMP=0x0010000000009f6f
- (void)normalize;	// IMP=0x0010000000009e64
@property(readonly, nonatomic) struct CGRect boundingBox;
- (id)description;	// IMP=0x0010000000009bf0
- (id)initWithTopLeft:(struct CGPoint)arg1 topRight:(struct CGPoint)arg2 bottomRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4;	// IMP=0x0010000000009b2a

@end

