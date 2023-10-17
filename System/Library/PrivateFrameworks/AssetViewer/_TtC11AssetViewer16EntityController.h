//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASVUnifiedGestureRecognizer, MISSING_TYPE, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _TtC11AssetViewer16EntityController : NSObject
{
    MISSING_TYPE *entity;	// 8 = 0x8
    MISSING_TYPE *type;	// 16 = 0x10
    MISSING_TYPE *animationManager;	// 24 = 0x18
    MISSING_TYPE *animationID;	// 32 = 0x20
    MISSING_TYPE *worldGestureRecognizer;	// 48 = 0x30
    MISSING_TYPE *delegate;	// 56 = 0x38
    MISSING_TYPE *entityWorldPosistionRefreshGuard;	// 72 = 0x48
    MISSING_TYPE *lastARFrameTimestampForMovement;	// 80 = 0x50
    MISSING_TYPE *lastScreenPointForMovement;	// 88 = 0x58
    MISSING_TYPE *lastBoundingBox;	// 96 = 0x60
    MISSING_TYPE *debugVisualizationEntity;	// 128 = 0x80
    MISSING_TYPE *debugBoundingBoxEntities;	// 136 = 0x88
    MISSING_TYPE *currentTurntableYaw;	// 144 = 0x90
    MISSING_TYPE *currentTurntablePitch;	// 148 = 0x94
    MISSING_TYPE *levitationHeight;	// 152 = 0x98
    MISSING_TYPE *savedLevitationHeight;	// 156 = 0x9c
    MISSING_TYPE *transformToCameraInObjectMode;	// 160 = 0xa0
    MISSING_TYPE *transformToWorldInARMode;	// 208 = 0xd0
    MISSING_TYPE *initialAABB;	// 256 = 0x100
    MISSING_TYPE *_assetNaturalSize;	// 288 = 0x120
    MISSING_TYPE *_assetScaleToFitUnitBox;	// 304 = 0x130
    MISSING_TYPE *projectPointHandler;	// 312 = 0x138
    MISSING_TYPE *shouldDisableGesturesHandler;	// 328 = 0x148
    MISSING_TYPE *shouldUseTightBoundsSPI;	// 344 = 0x158
    MISSING_TYPE *planeType;	// 352 = 0x160
    MISSING_TYPE *planeAnimator;	// 408 = 0x198
    MISSING_TYPE *trackedRaycast;	// 416 = 0x1a0
    MISSING_TYPE *verticalPlacementMarker;	// 424 = 0x1a8
    MISSING_TYPE *groundPlaneEntity;	// 432 = 0x1b0
    MISSING_TYPE *sceneUnderstandingState;	// 448 = 0x1c0
    MISSING_TYPE *shadowPlaneEntity;	// 552 = 0x228
    MISSING_TYPE *physicsStateManager;	// 560 = 0x230
    MISSING_TYPE *accessibilityAssetURL;	// 86 = 0x56
    MISSING_TYPE *savedViewToProj;	// 0 = 0x0
    MISSING_TYPE *savedInlineModelToCameraTransform;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000024570
- (id)init;	// IMP=0x00000000000250f0
- (void)scaleTo:(float)arg1 updateARScale:(_Bool)arg2;	// IMP=0x0000000000024d90
- (struct CGRect)calculateAssetScreenBoundingRectIn:(id)arg1;	// IMP=0x0000000000024ce0
- (void)rotateByDeltaYaw:(float)arg1 deltaPitch:(float)arg2;	// IMP=0x0000000000024c90
- (void)dealloc;	// IMP=0x0000000000024520
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSArray *entityAccessibilityWrappers;
@property(nonatomic, copy) NSURL *accessibilityAssetURL;
@property(nonatomic) float levitationHeight; // @synthesize levitationHeight;
@property(nonatomic, retain) ASVUnifiedGestureRecognizer *worldGestureRecognizer; // @synthesize worldGestureRecognizer;
- (void)worldGestureRecognizer:(id)arg1 levitatedAssetToScreenPoint: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000049460
- (void)worldGestureRecognizerEndedLevitation:(id)arg1;	// IMP=0x0000000000048d80
- (void)worldGestureRecognizerBeganLevitation:(id)arg1;	// IMP=0x0000000000048d30
- (void)worldGestureRecognizer:(id)arg1 translatedAssetToScreenPoint: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000048cc0
- (void)worldGestureRecognizerEndedTranslationDeceleration:(id)arg1;	// IMP=0x00000000000482b0
- (void)worldGestureRecognizer:(id)arg1 decelerationTranslationDelta: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000048250
- (void)worldGestureRecognizerBeganTranslationDeceleration:(id)arg1;	// IMP=0x0000000000048200
- (void)worldGestureRecognizerEndedTranslation:(id)arg1;	// IMP=0x00000000000481b0
- (void)worldGestureRecognizerBeganTranslation:(id)arg1;	// IMP=0x0000000000048160
- (void)turntableGestureRecognizer:(id)arg1 rotatedAssetByDeltaYaw:(float)arg2 deltaPitch:(float)arg3;	// IMP=0x00000000000494d0
- (void)unifiedGestureRecognizerEndedScaling:(id)arg1;	// IMP=0x0000000000049980
- (void)unifiedGestureRecognizer:(id)arg1 scaledAssetToScale:(float)arg2;	// IMP=0x00000000000498d0
- (void)unifiedGestureRecognizerBeganScaling:(id)arg1;	// IMP=0x0000000000049880
- (void)unifiedGestureRecognizerEndedRotation:(id)arg1;	// IMP=0x0000000000049830
- (void)unifiedGestureRecognizer:(id)arg1 rotatedAssetByDeltaYaw:(float)arg2;	// IMP=0x00000000000497d0
- (void)unifiedGestureRecognizerBeganRotation:(id)arg1;	// IMP=0x0000000000049750
- (void)unifiedGestureRecognizer:(id)arg1 singleTappedAtScreenPoint:(_Bool)arg2 onAsset: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000049670
- (void)unifiedGestureRecognizer:(id)arg1 doubleTappedAtScreenPoint:(_Bool)arg2 onAsset: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000049590

@end
