//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFDeviceContext, MFObjectTable, NSDictionary, NSMutableArray;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFGraphicsDevice : NSObject
{
    MFDeviceContext *m_currentDC;	// 8 = 0x8
    NSMutableArray *m_DCStack;	// 16 = 0x10
    int m_gStateStackHeight;	// 24 = 0x18
    MFDeviceContext *m_firstClipDC;	// 32 = 0x20
    NSObject<MFDeviceDriver> *m_deviceDriver;	// 40 = 0x28
    MFObjectTable *m_objectTable;	// 48 = 0x30
    MFObjectTable *m_stockObjects;	// 56 = 0x38
    NSDictionary *m_colorMap;	// 64 = 0x40
    NSDictionary *m_fillMap;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000036139d
- (void)setMaximumObjectTableSize:(unsigned int)arg1;	// IMP=0x0000000000361387
- (int)plgBlt:(struct CGPoint *)arg1 in_sourceImage:(id)arg2 in_xSrc:(int)arg3 in_ySrc:(int)arg4 in_widthSrc:(int)arg5 in_heightSrc:(int)arg6 in_maskImage:(id)arg7 in_xMask:(int)arg8 in_yMask:(int)arg9 in_xform:(struct CGAffineTransform *)arg10 in_colour:(unsigned int)arg11;	// IMP=0x000000000036129a
- (int)maskBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_maskImage:(id)arg8 in_xMask:(int)arg9 in_yMask:(int)arg10 in_rop:(unsigned int)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13;	// IMP=0x000000000036119c
- (int)alphaBlend:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_sourceConstantOpacity:(unsigned char)arg10 in_useSourceAlphaChannel:(_Bool)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13;	// IMP=0x00000000003610b9
- (int)stretchBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_rop:(unsigned int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12 usePaletteForBilevel:(_Bool)arg13;	// IMP=0x0000000000361054
- (int)stretchBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_rop:(unsigned int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12;	// IMP=0x0000000000360f7e
- (int)bitBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_rop:(unsigned int)arg8 in_xform:(struct CGAffineTransform *)arg9 in_colour:(unsigned int)arg10;	// IMP=0x0000000000360eba
- (int)patBlt:(int)arg1 in_y:(int)arg2 in_width:(int)arg3 in_height:(int)arg4 in_rop:(unsigned int)arg5;	// IMP=0x0000000000360e89
- (id)createBitmap:(unsigned int)arg1 in_height:(unsigned int)arg2 in_planes:(unsigned int)arg3 in_bitsPerPixel:(unsigned int)arg4 in_bitmap:(const char *)arg5 in_bitmapSize:(unsigned int)arg6;	// IMP=0x0000000000360e51
- (id)createDIBitmap:(const char *)arg1 in_headerSize:(unsigned int)arg2 in_bitmap:(const char *)arg3 in_bitmapSize:(unsigned int)arg4 in_usage:(int)arg5;	// IMP=0x0000000000360e1f
- (id)createDIBitmap:(const char *)arg1 in_dibSize:(unsigned int)arg2 in_usage:(int)arg3;	// IMP=0x0000000000360dfc
- (int)frameRegion:(unsigned int)arg1 in_brushID:(unsigned int)arg2 in_width:(int)arg3 in_height:(int)arg4;	// IMP=0x0000000000360d41
- (int)frameRegionWithRects:(id)arg1 in_brushID:(unsigned int)arg2 in_width:(int)arg3 in_height:(int)arg4;	// IMP=0x0000000000360c8a
- (int)fillRgn:(unsigned int)arg1 in_brushID:(unsigned int)arg2;	// IMP=0x0000000000360ba0
- (int)fillRgnWithRects:(id)arg1 in_brushID:(unsigned int)arg2;	// IMP=0x0000000000360ae9
- (int)invertRgn:(unsigned int)arg1;	// IMP=0x0000000000360a74
- (int)invertRgnWithRects:(id)arg1;	// IMP=0x0000000000360a04
- (int)paintRgn:(unsigned int)arg1;	// IMP=0x000000000036095a
- (int)paintRgnWithRects:(id)arg1;	// IMP=0x00000000003608a9
- (int)setMetaRgn;	// IMP=0x00000000001da104
- (int)intersectClipRect:(struct CGRect)arg1;	// IMP=0x00000000000f6469
- (int)excludeClipRect:(struct CGRect)arg1;	// IMP=0x0000000000163733
- (int)setClipRegion:(unsigned int)arg1;	// IMP=0x0000000000360824
- (int)selectClipRegionWithRects:(id)arg1 in_mode:(int)arg2;	// IMP=0x000000000036074c
- (int)selectClipPath:(int)arg1;	// IMP=0x00000000001da1ea
- (int)strokeAndFillPath:(_Bool)arg1 in_fill:(_Bool)arg2;	// IMP=0x00000000003606af
- (int)endPath;	// IMP=0x00000000001685e8
- (int)widenPath;	// IMP=0x0000000000360643
- (int)beginPath;	// IMP=0x00000000001682b8
- (int)abortPath;	// IMP=0x00000000003605e7
- (int)setRop2:(int)arg1;	// IMP=0x000000000015e12d
- (int)setMapMode:(int)arg1;	// IMP=0x00000000000f4a7b
- (int)modifyWorldTransform:(const struct CGAffineTransform *)arg1 in_command:(int)arg2;	// IMP=0x0000000000360577
- (int)setWorldTransform:(const struct CGAffineTransform *)arg1;	// IMP=0x00000000001da122
- (int)scaleWindowExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;	// IMP=0x00000000003604f0
- (int)scaleViewportExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;	// IMP=0x0000000000360469
- (int)setViewportOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x00000000003603f9
- (int)offsetViewportOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000360389
- (int)offsetWindowOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000360319
- (int)setViewportExt:(int)arg1 in_y:(int)arg2;	// IMP=0x00000000003602a9
- (int)setWindowOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000360239
- (int)setWindowExt:(int)arg1 in_y:(int)arg2;	// IMP=0x00000000003601c9
- (void)createStockObjects;	// IMP=0x000000000015415e
- (int)createPatternBrush:(id)arg1 index:(unsigned int)arg2 usePaletteForBilevel:(_Bool)arg3;	// IMP=0x000000000036014b
- (int)createPalette:(id)arg1 in_index:(unsigned int)arg2;	// IMP=0x00000000003600ca
- (int)resizePalette:(unsigned int)arg1 in_index:(unsigned int)arg2;	// IMP=0x0000000000360037
- (int)setPaletteEntries:(unsigned int)arg1 in_colours:(id)arg2 in_index:(unsigned int)arg3;	// IMP=0x000000000035ff73
- (id)createColorWithRGBBytes:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3 flags:(unsigned char)arg4;	// IMP=0x000000000035fecc
- (int)createPen:(int)arg1 width:(int)arg2 in_colour:(id)arg3 in_userStyleArray:(double *)arg4 index:(unsigned int)arg5;	// IMP=0x000000000035fe08
- (int)createFontIndirectW:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned int)arg18 elfStyleSize:(unsigned int)arg19 elfMatch:(unsigned int)arg20 elfVendorId:(unsigned int)arg21 elfCulture:(unsigned int)arg22 index:(unsigned int)arg23;	// IMP=0x000000000035fccb
- (int)createFontIndirect:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15;	// IMP=0x000000000035fbe1
- (int)createBrush:(int)arg1 in_colour:(id)arg2 hatchstyle:(int)arg3 index:(unsigned int)arg4;	// IMP=0x000000000035fa60
- (int)createRegion:(id)arg1;	// IMP=0x00000000001de0eb
- (int)deleteObject:(int)arg1;	// IMP=0x00000000000f588e
- (int)getStockObject:(unsigned int)arg1;	// IMP=0x00000000001540fa
- (int)selectObject:(int)arg1;	// IMP=0x00000000000f4e7c
- (int)setPolyFillMode:(int)arg1;	// IMP=0x00000000000f670f
- (int)realizePalette;	// IMP=0x000000000016372b
- (int)roundRect:(int)arg1 top:(int)arg2 right:(int)arg3 bottom:(int)arg4 rx:(double)arg5 ry:(double)arg6;	// IMP=0x000000000035fa2e
- (int)closeCurrentPath:(_Bool)arg1;	// IMP=0x00000000001684ca
- (int)bezier:(int)arg1 y:(int)arg2 x2:(int)arg3 y2:(int)arg4 x3:(int)arg5 y3:(int)arg6 x4:(int)arg7 y4:(int)arg8;	// IMP=0x000000000035f9e3
- (int)bezierTo:(int)arg1 y:(int)arg2 x2:(int)arg3 y2:(int)arg4 x3:(int)arg5 y3:(int)arg6;	// IMP=0x000000000035f9a8
- (int)chord:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x000000000035f95d
- (int)arcTo:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x000000000035f912
- (int)angleArc:(int)arg1 y:(int)arg2 radius:(unsigned int)arg3 startAngle:(double)arg4 sweepAngle:(double)arg5;	// IMP=0x000000000035f8ed
- (int)pie:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x000000000035f8a2
- (int)arc:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x000000000035f857
- (int)polyPolyline:(struct CGPoint *)arg1 in_polyCounts:(int *)arg2 in_count:(int)arg3;	// IMP=0x000000000035f834
- (int)polyline:(struct CGPoint *)arg1 in_count:(int)arg2;	// IMP=0x000000000035f814
- (int)setArcDirection:(int)arg1;	// IMP=0x000000000035f7fb
- (int)polyPolygon:(struct CGPoint *)arg1 in_polyCounts:(int *)arg2 in_count:(int)arg3;	// IMP=0x000000000035f7d8
- (int)polygon:(struct CGPoint *)arg1 in_count:(int)arg2;	// IMP=0x000000000035f7b8
- (int)lineTo:(double)arg1 y:(double)arg2;	// IMP=0x000000000035f79e
- (int)moveTo:(double)arg1 y:(double)arg2;	// IMP=0x000000000035f785
- (int)offsetClipRegionByX:(int)arg1 y:(int)arg2;	// IMP=0x000000000035f551
- (int)selectClipRegion:(id)arg1 combineMode:(int)arg2;	// IMP=0x000000000035f4db
- (int)removeClip;	// IMP=0x000000000035f4c2
- (int)selectClippingPath:(id)arg1 combineMode:(int)arg2;	// IMP=0x000000000035f2c7
- (id)clippingPathByCombiningClippingPath:(id)arg1 withClippingPath:(id)arg2 combineMode:(int)arg3;	// IMP=0x000000000035f10f
- (id)clippingPathByCombiningEmptyClippingPathWithClippingPath:(id)arg1 combineMode:(int)arg2;	// IMP=0x000000000035f091
- (id)clippingPathByCombiningImplicitClippingPathWithClippingPath:(id)arg1 combineMode:(int)arg2;	// IMP=0x000000000035efa5
- (id)currentCummulatedClippingPath;	// IMP=0x000000000035ec6f
- (id)normalizedClippingPathWithClippingPath:(id)arg1;	// IMP=0x000000000035ebb8
- (int)restoreDC:(int)arg1;	// IMP=0x00000000000f64d5
- (int)restoreDC;	// IMP=0x000000000035ea01
- (int)saveDC;	// IMP=0x00000000000f5995
- (void)setClippingPath:(id)arg1;	// IMP=0x000000000035e88b
- (void)addClippingPathToCurrentDCAndCurrentContext:(id)arg1;	// IMP=0x000000000035e7ee
- (void)applyDCAtIndexToCurrentContext:(unsigned long long)arg1;	// IMP=0x000000000035e7b1
- (void)applyClippingOfDCAtIndexToCurrentContext:(unsigned long long)arg1;	// IMP=0x000000000035e607
- (void)addClippingPathToCurrentContext:(id)arg1 dc:(id)arg2;	// IMP=0x000000000035e471
- (id)clipEverythingClippingPath;	// IMP=0x000000000035e3ba
- (id)implicitClippingPath;	// IMP=0x000000000035e35a
- (void)applyNonClippingOfDCAtIndexToCurrentContext:(unsigned long long)arg1;	// IMP=0x000000000035e2c9
- (unsigned long long)clippingStartDCIndex;	// IMP=0x000000000035e0d3
- (unsigned long long)firstClipDCIndex;	// IMP=0x000000000035e0b6
- (unsigned long long)currentDCIndex;	// IMP=0x000000000035e09c
- (void)restoreGState:(id)arg1;	// IMP=0x000000000035e07c
- (void)saveGState:(id)arg1;	// IMP=0x000000000035e05c
- (int)setViewBox:(double)arg1 top:(double)arg2 width:(double)arg3 height:(double)arg4;	// IMP=0x000000000035e046
- (int)ellipse:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;	// IMP=0x000000000035e014
- (int)fillRectangle:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;	// IMP=0x000000000035dfe2
- (int)rectangle:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;	// IMP=0x000000000035dfb0
- (int)extTextOutEncoded:(int)arg1 y:(int)arg2 in_data:(id)arg3 options:(int)arg4 left:(int)arg5 top:(int)arg6 right:(int)arg7 bottom:(int)arg8 spacingValues:(int *)arg9 numValues:(int)arg10;	// IMP=0x000000000035dcce
- (int)extTextOut:(int)arg1 y:(int)arg2 in_text:(id)arg3 options:(int)arg4 left:(int)arg5 top:(int)arg6 right:(int)arg7 bottom:(int)arg8 spacingValues:(int *)arg9 numValues:(int)arg10;	// IMP=0x000000000035dbea
- (int)textOutEncoded:(int)arg1 y:(int)arg2 in_data:(id)arg3;	// IMP=0x000000000035dadf
- (int)textOut:(int)arg1 y:(int)arg2 in_text:(id)arg3;	// IMP=0x000000000035da30
- (int)setTextAlign:(_Bool)arg1 textHorizontalAlign:(int)arg2 textVerticalAlign:(int)arg3 textDirection:(int)arg4;	// IMP=0x000000000035d9bd
- (int)setTextCharExtra:(int)arg1;	// IMP=0x00000000001df048
- (int)setTextJustification:(int)arg1 in_breakCount:(int)arg2;	// IMP=0x000000000035d9b5
- (int)setTextColour:(id)arg1;	// IMP=0x00000000000f4f9d
- (int)setStretchBltMode:(int)arg1;	// IMP=0x0000000000154f5a
- (int)setBrushOrg:(double)arg1 y:(double)arg2;	// IMP=0x000000000035d99c
- (int)setBkMode:(int)arg1;	// IMP=0x00000000000f4f7b
- (int)setBkColour:(id)arg1;	// IMP=0x000000000015e0c4
- (int)setMiterLimit:(double)arg1;	// IMP=0x00000000001d60d0
- (int)description:(id)arg1;	// IMP=0x00000000001682b0
- (int)comment:(id)arg1;	// IMP=0x000000000035d994
- (void)done;	// IMP=0x00000000000f676c
- (id)recolor:(unsigned char)arg1 in_green:(unsigned char)arg2 in_blue:(unsigned char)arg3 fill:(_Bool)arg4;	// IMP=0x000000000035d915
- (id)recolor:(id)arg1 fill:(_Bool)arg2;	// IMP=0x00000000000f5003
- (void)setColorMap:(id)arg1 fillMap:(id)arg2;	// IMP=0x00000000000f46bf
- (id)getCurrentFont;	// IMP=0x00000000001ce4e2
- (struct CGRect)getCanvas;	// IMP=0x0000000000153b49
- (void)dealloc;	// IMP=0x00000000000f67bd
- (id)initWithCanvas:(struct CGRect)arg1;	// IMP=0x00000000000f3891

@end

