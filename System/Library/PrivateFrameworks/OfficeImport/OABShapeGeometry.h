//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABShapeGeometry : NSObject
{
}

+ (void)writeFromShape:(id)arg1 toShape:(void *)arg2;	// IMP=0x00800000003008c9
+ (void)writeTextBodyRectsFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;	// IMP=0x0080000000300661
+ (void)writeFormulasFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;	// IMP=0x008000000030038f
+ (void)writePathCommandsAndParamsFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;	// IMP=0x00800000002ffdc1
+ (void)appendAdjustPoint:(struct OADAdjustPoint)arg1 toPathParams:(void *)arg2;	// IMP=0x00800000002ffc83
+ (void)writeLimoFromGeometry:(id)arg1 toPath:(struct EshPath *)arg2;	// IMP=0x00800000002ffb98
+ (void)writeCoordSpaceFromGeometry:(id)arg1 toShape:(void *)arg2;	// IMP=0x00800000002ff9a0
+ (void)writeAdjustValuesFromGeometry:(id)arg1 toShapeProperties:(struct EshShapeProperties *)arg2;	// IMP=0x00800000002ff911
+ (struct EshComputedValue)computedValueWithAdjustCoord:(struct OADAdjustCoord)arg1;	// IMP=0x00800000002ff8f9
+ (void)readFromLimo:(CsPoint_c846a6ec)arg1 toGeometry:(id)arg2;	// IMP=0x0080000000106d31
+ (void)readFromTextBoxRects:(const void *)arg1 toGeometry:(id)arg2;	// IMP=0x0080000000106b22
+ (void)readFromFormulas:(const void *)arg1 toGeometry:(id)arg2;	// IMP=0x008000000010697c
+ (void)readFromPathCommands:(const void *)arg1 pathParams:(const void *)arg2 toGeometry:(id)arg3;	// IMP=0x0080000000105dd8
+ (void)readFromShape:(void *)arg1 toShape:(id)arg2;	// IMP=0x0080000000028630
+ (int)actualPathCommandForPathCommand:(int)arg1 index:(unsigned short)arg2;	// IMP=0x0080000000106846
+ (void)readLimoFromPath:(const struct EshPath *)arg1 toGeometry:(id)arg2;	// IMP=0x0080000000155743
+ (void)readPathCommandsAndParamsFromPath:(const struct EshPath *)arg1 toGeometry:(id)arg2;	// IMP=0x0080000000155801
+ (struct OADAdjustCoord)adjustCoordWithComputedValue:(struct EshComputedValue)arg1;	// IMP=0x00800000001068ae
+ (void)readGeometryCoordSpaceFromShapeProperties:(const struct EshShapeProperties *)arg1 toGeometry:(id)arg2;	// IMP=0x0080000000155609
+ (void)readAdjustValuesFromShapeProperties:(const struct EshShapeProperties *)arg1 toGeometry:(id)arg2;	// IMP=0x0080000000028c83

@end
