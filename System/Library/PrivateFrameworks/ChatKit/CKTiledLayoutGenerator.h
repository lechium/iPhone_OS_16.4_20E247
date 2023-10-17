//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKTiledLayoutGeneratorScanState;

__attribute__((visibility("hidden")))
@interface CKTiledLayoutGenerator : NSObject
{
    long long _cacheTailLocation;	// 8 = 0x8
    long long _cacheHeadLocation;	// 16 = 0x10
    CDStruct_1417b155 _cachedTileInfo[20];	// 24 = 0x18
    id _cachedBatchID[20];	// 984 = 0x3d8
    _Bool _scannedBatchHasCaption;	// 1144 = 0x478
    _Bool _shouldStop;	// 1145 = 0x479
    long long _tileCount;	// 1152 = 0x480
    CDUnknownBlockType _tileImageSizeBlock;	// 1160 = 0x488
    CDUnknownBlockType _tileMinimumSizeBlock;	// 1168 = 0x490
    CDUnknownBlockType _tileHasCaptionBlock;	// 1176 = 0x498
    CDUnknownBlockType _tileCaptionSizeBlock;	// 1184 = 0x4a0
    CDUnknownBlockType _tileBatchIDBlock;	// 1192 = 0x4a8
    long long _numberOfMagneticGuidelines;	// 1200 = 0x4b0
    double _roundingScale;	// 1208 = 0x4b8
    CDUnknownBlockType _parsedFrameBlock;	// 1216 = 0x4c0
    long long _scanLocation;	// 1224 = 0x4c8
    id _scannedBatchID;	// 1232 = 0x4d0
    long long _scanSpecialSequenceCount;	// 1240 = 0x4d8
    struct CGSize _interTileSpacing;	// 1248 = 0x4e0
    struct CGSize _noCaptionSpacing;	// 1264 = 0x4f0
    struct UIEdgeInsets _captionPadding;	// 1280 = 0x500
}

- (void).cxx_destruct;	// IMP=0x00000000004cd333
@property(nonatomic) _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
@property(nonatomic) long long scanSpecialSequenceCount; // @synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount;
@property(nonatomic) _Bool scannedBatchHasCaption; // @synthesize scannedBatchHasCaption=_scannedBatchHasCaption;
@property(retain, nonatomic) id scannedBatchID; // @synthesize scannedBatchID=_scannedBatchID;
@property(nonatomic) long long scanLocation; // @synthesize scanLocation=_scanLocation;
@property(copy, nonatomic) CDUnknownBlockType parsedFrameBlock; // @synthesize parsedFrameBlock=_parsedFrameBlock;
@property(nonatomic) double roundingScale; // @synthesize roundingScale=_roundingScale;
@property(nonatomic) long long numberOfMagneticGuidelines; // @synthesize numberOfMagneticGuidelines=_numberOfMagneticGuidelines;
@property(copy, nonatomic) CDUnknownBlockType tileBatchIDBlock; // @synthesize tileBatchIDBlock=_tileBatchIDBlock;
@property(copy, nonatomic) CDUnknownBlockType tileCaptionSizeBlock; // @synthesize tileCaptionSizeBlock=_tileCaptionSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType tileHasCaptionBlock; // @synthesize tileHasCaptionBlock=_tileHasCaptionBlock;
@property(nonatomic) struct CGSize noCaptionSpacing; // @synthesize noCaptionSpacing=_noCaptionSpacing;
@property(nonatomic) struct UIEdgeInsets captionPadding; // @synthesize captionPadding=_captionPadding;
@property(copy, nonatomic) CDUnknownBlockType tileMinimumSizeBlock; // @synthesize tileMinimumSizeBlock=_tileMinimumSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType tileImageSizeBlock; // @synthesize tileImageSizeBlock=_tileImageSizeBlock;
@property(nonatomic) struct CGSize interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property(nonatomic) long long tileCount; // @synthesize tileCount=_tileCount;
- (double)valueByRounding:(double)arg1 usingMagneticGuidelines:(_Bool)arg2;	// IMP=0x00000000004cd069
- (void)parsedFrame:(struct CGRect)arg1 type:(long long)arg2 forTileAtIndex:(long long)arg3;	// IMP=0x00000000004ccfae
- (struct CGSize)captionSizeForTileAtIndex:(long long)arg1 proposedSize:(struct CGSize)arg2;	// IMP=0x00000000004ccf12
- (_Bool)scanTile:(CDStruct_1417b155 *)arg1 ofType:(long long)arg2;	// IMP=0x00000000004cce70
- (_Bool)scanTile:(CDStruct_1417b155 *)arg1 type:(long long *)arg2;	// IMP=0x00000000004ccd67
- (_Bool)scanTileWithSquareImage:(CDStruct_1417b155 *)arg1;	// IMP=0x00000000004ccd53
- (_Bool)scanTileWithHorizontalPanorama:(CDStruct_1417b155 *)arg1;	// IMP=0x00000000004ccd3c
- (_Bool)scanTileWithLandscapeImage:(CDStruct_1417b155 *)arg1;	// IMP=0x00000000004ccd25
- (_Bool)scanTileWithPortraitImage:(CDStruct_1417b155 *)arg1;	// IMP=0x00000000004ccd0e
- (_Bool)scanAnyTile:(CDStruct_1417b155 *)arg1;	// IMP=0x00000000004ccced
- (_Bool)scanTile:(CDStruct_1417b155 *)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00000000004cc913
@property(readonly, nonatomic) _Bool isAtEnd;
@property(retain, nonatomic) CKTiledLayoutGeneratorScanState *scanState;
- (void)didParseTiles;	// IMP=0x00000000004cc746
- (_Bool)parseNextTiles;	// IMP=0x00000000004cc72e
- (void)willParseTiles;	// IMP=0x00000000004cc6e6
- (void)parseTiles;	// IMP=0x00000000004cc683
- (void)enumerateFramesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004cc624
- (id)init;	// IMP=0x00000000004cc590

@end
