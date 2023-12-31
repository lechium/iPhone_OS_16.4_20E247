//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPCharSequence, CPZoneProfile, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPZone
{
    NSMutableArray *zoneBorders;	// 128 = 0x80
    struct CGPoint *outerVertices;	// 136 = 0x88
    struct CGPoint *swollenOuterVertices;	// 144 = 0x90
    double area;	// 152 = 0x98
    _Bool isStraddleZone;	// 160 = 0xa0
    CPZoneProfile *zoneProfile;	// 168 = 0xa8
    NSArray *leftGuides;	// 176 = 0xb0
    NSArray *rightGuides;	// 184 = 0xb8
    NSArray *gutters;	// 192 = 0xc0
    NSArray *spacers;	// 200 = 0xc8
    CPCharSequence *charactersInZone;	// 208 = 0xd0
    _Bool hasRotatedCharacters;	// 216 = 0xd8
    NSMutableArray *textLinesInZone;	// 224 = 0xe0
    NSArray *graphicsInZone;	// 232 = 0xe8
    NSMutableArray *backgroundGraphics;	// 240 = 0xf0
    unsigned int usedGraphicCount;	// 248 = 0xf8
    double rotationAngle;	// 256 = 0x100
}

- (double)rotationAngle;	// IMP=0x000000000003488d
- (void)setRotationAngle:(double)arg1;	// IMP=0x000000000003487b
- (unsigned int)usedGraphicCount;	// IMP=0x000000000003486b
- (void)incrementUsedGraphicCount;	// IMP=0x000000000003485b
- (id)spacers;	// IMP=0x000000000003484a
- (void)setSpacers:(id)arg1;	// IMP=0x000000000003480c
- (id)gutters;	// IMP=0x00000000000347fb
- (void)setGutters:(id)arg1;	// IMP=0x00000000000347bd
- (id)rightGuides;	// IMP=0x00000000000347ac
- (void)setRightGuides:(id)arg1;	// IMP=0x000000000003476e
- (id)leftGuides;	// IMP=0x000000000003475d
- (void)setLeftGuides:(id)arg1;	// IMP=0x000000000003471f
- (void)setZoneProfile:(id)arg1;	// IMP=0x00000000000346e1
- (id)zoneProfile;	// IMP=0x00000000000346d0
- (void)setIsStraddleZone:(_Bool)arg1;	// IMP=0x00000000000346c0
- (_Bool)isStraddleZone;	// IMP=0x00000000000346b0
- (long long)compareArea:(id)arg1;	// IMP=0x0000000000034560
- (void)addContentFrom:(id)arg1;	// IMP=0x0000000000034474
- (void)updatedCharSequenceFrom:(unsigned int)arg1 length:(unsigned int)arg2;	// IMP=0x00000000000343f0
- (_Bool)hasRotatedCharacters;	// IMP=0x00000000000343e0
- (id)charactersInZone;	// IMP=0x00000000000343cf
- (void)setCharactersInZone:(id)arg1;	// IMP=0x0000000000034361
- (void)addPDFChar:(void *)arg1;	// IMP=0x00000000000342de
- (_Bool)canContain:(struct CGRect)arg1;	// IMP=0x000000000003429c
- (_Bool)contains:(id)arg1;	// IMP=0x0000000000034109
- (_Bool)rectangleBordersAtLeft:(id *)arg1 top:(id *)arg2 right:(id *)arg3 bottom:(id *)arg4;	// IMP=0x0000000000033ec3
- (_Bool)isRectangular;	// IMP=0x0000000000033eaa
- (struct CGRect)swollenZoneBounds;	// IMP=0x0000000000033d88
- (struct CGRect)zoneBounds;	// IMP=0x0000000000033cc1
- (struct CGRect)zoneBoundsFromVertices:(struct CGPoint *)arg1 ofCount:(unsigned int)arg2;	// IMP=0x0000000000033c65
- (double)area;	// IMP=0x0000000000033bfd
- (struct CGPoint *)swollenOuterVertices;	// IMP=0x0000000000033b7b
- (void)accept:(id)arg1;	// IMP=0x0000000000033b60
- (struct CGPoint *)outerVertices;	// IMP=0x0000000000033ae3
- (long long)neighborZOrder;	// IMP=0x0000000000033933
- (long long)borderZOrder;	// IMP=0x0000000000033803
- (unsigned int)vertexCount;	// IMP=0x00000000000337dc
- (void)removeUnfilledNeighborShapes;	// IMP=0x00000000000336e9
- (id)backgroundGraphics;	// IMP=0x00000000000333d8
- (struct CGColor *)newBackgroundColor;	// IMP=0x000000000003323a
- (_Bool)hasNeighborShape:(id)arg1;	// IMP=0x0000000000033160
- (_Bool)bordersWindClockwise;	// IMP=0x0000000000033158
- (void)setZoneBorders:(id)arg1;	// IMP=0x0000000000033052
- (id)zoneBorders;	// IMP=0x0000000000033041
- (_Bool)hasBorders;	// IMP=0x0000000000033029
- (_Bool)isZone;	// IMP=0x0000000000033021
- (_Bool)mapToWordPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x0000000000032ea1
- (_Bool)mapToWordPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x0000000000032d0b
- (_Bool)mapToWordsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x0000000000032be5
- (_Bool)mapToWords:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x0000000000032af3
- (unsigned int)wordCount;	// IMP=0x0000000000032a68
- (id)graphicsInZone;	// IMP=0x0000000000032a1d
- (id)textLinesInZone;	// IMP=0x0000000000032a0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000327ce
- (void)dealloc;	// IMP=0x00000000000326c4
- (id)init;	// IMP=0x00000000000325e3

@end

