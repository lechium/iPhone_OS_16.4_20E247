//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GQDScalarPath
{
    int mType;	// 16 = 0x10
    double mScalar;	// 24 = 0x18
    struct CGSize mSize;	// 32 = 0x20
}

- (struct CGPath *)createBezierPath;	// IMP=0x000000000000da68
- (struct CGSize)size;	// IMP=0x000000000000da50
- (int)type;	// IMP=0x000000000000da40
- (double)scalar;	// IMP=0x000000000000da2e
- (_Bool)isRect;	// IMP=0x000000000000da17
- (_Bool)isRectangular;	// IMP=0x000000000000d9ee
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;	// IMP=0x000000000000dde9

@end

