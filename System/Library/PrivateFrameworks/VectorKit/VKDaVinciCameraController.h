//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VKDaVinciCameraController
{
    void *_mapEngine;	// 96 = 0x60
    void *_cameraManager;	// 104 = 0x68
    double _currentDoublePanPitch;	// 112 = 0x70
    _Bool _isPitching;	// 120 = 0x78
    _Bool _isRotating;	// 121 = 0x79
    _Bool _wasPitched;	// 122 = 0x7a
    _Bool _couldEnter3DMode;	// 123 = 0x7b
    double _lastRotation;	// 128 = 0x80
    struct CGPoint _panStartScreenPoint;	// 136 = 0x88
    struct CGPoint _panLastScreenPoint;	// 152 = 0x98
    double _beganDoublePanPitch;	// 168 = 0xa8
    _Bool _updateHeight;	// 176 = 0xb0
}

- (float)maxPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x00000000006247bd
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x000000000062478c
- (float)minPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x000000000062475b
- (double)topDownMinimumZoomLevel;	// IMP=0x00000000006245f7
- (double)currentZoomLevel;	// IMP=0x00000000006244bd
- (double)maximumZoomLevel;	// IMP=0x0000000000624359
- (double)minimumZoomLevel;	// IMP=0x00000000006241f5
- (void)updateCameraLimits;	// IMP=0x000000000062362c
- (long long)tileSize;	// IMP=0x00000000006235fe
- (float)minimumNormalizedZoomLevel;	// IMP=0x00000000006235ac
- (float)maximumNormalizedZoomLevel;	// IMP=0x000000000062357d
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000623268
- (_Bool)usesVKCamera;	// IMP=0x0000000000623260
- (void)animateToRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x0000000000622992
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000006225a0
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 stepHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000622312
- (void)setCenterCoordinateDistanceRange:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x0000000000621aec
- (double)pitch;	// IMP=0x0000000000621a80
- (double)heading;	// IMP=0x00000000006219ef
- (double)altitude;	// IMP=0x0000000000621916
- (double)distanceFromCenterCoordinate;	// IMP=0x00000000006218b2
- (CDStruct_c3b9c2ee)centerCoordinate;	// IMP=0x0000000000621878
- (Coordinate2D_cb341d5f)centerCoordinateRad;	// IMP=0x0000000000621764
- (Coordinate2D_cb341d5f)_centerCoordinateForMapRegion:(id)arg1;	// IMP=0x00000000006216fc
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000062157d
- (double)durationToAnimateToMapRegion:(id)arg1;	// IMP=0x000000000062156f
- (double)zoomForMapRegion:(id)arg1;	// IMP=0x0000000000620de8
- (Unit_5669e52e)widestLatitudeForMapRegion:(id)arg1;	// IMP=0x0000000000620d36
- (Unit_5669e52e)greatCircleMidPointLatitude:(Unit_5669e52e)arg1 fromLongitude:(Unit_5669e52e)arg2 toLongitude:(Unit_5669e52e)arg3;	// IMP=0x0000000000620cba
- (double)earthRadiusAt:(Unit_5669e52e)arg1;	// IMP=0x0000000000620c77
- (double)geocAngleBetween:(Coordinate2D_cb341d5f)arg1 andCoordinate:(Coordinate2D_cb341d5f)arg2;	// IMP=0x0000000000620b2e
- (id)mapRegionIgnoringEdgeInsets;	// IMP=0x0000000000620b1c
- (id)mapRegion;	// IMP=0x0000000000620862
- (vector_6baf6815)_getVisibleArea;	// IMP=0x000000000061fe66
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;	// IMP=0x000000000061fdf3
- (double)presentationYaw;	// IMP=0x000000000061fde1
- (void)updateCameraManager;	// IMP=0x000000000061fd73
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x000000000061fa77
- (void)setGesturing:(_Bool)arg1;	// IMP=0x000000000061fa21
- (void)updateState;	// IMP=0x000000000061f9f3
- (void)_updateCanEnter3DMode;	// IMP=0x000000000061f965
- (void)_updateIsPitched;	// IMP=0x000000000061f8d7
- (double)maxPitch;	// IMP=0x000000000061f89a
- (double)minPitch;	// IMP=0x000000000061f85d
- (_Bool)isFullyPitched;	// IMP=0x000000000061f794
- (_Bool)isPitched;	// IMP=0x000000000061f725
- (_Bool)canEnter3DMode;	// IMP=0x000000000061f6c9
- (void)exit3DMode;	// IMP=0x000000000061f6aa
- (void)enter3DMode;	// IMP=0x000000000061f65d
- (void)stopGlobeAnimations;	// IMP=0x000000000061f58e
- (void)moveToZoomOutZoomInTransition:(Coordinate2D_cb341d5f)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x000000000061e306
- (CDUnknownBlockType)createMoveToZoomOutZoomInFrameFunction:(CameraFrame_b765d6d7)arg1 toLatLon:(CameraFrame_b765d6d7)arg2;	// IMP=0x000000000061d4e1
- (void)moveTo:(Coordinate2D_cb341d5f)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x000000000061c364
- (void)moveTo:(Coordinate2D_cb341d5f)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000061c328
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000061bf13
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3;	// IMP=0x000000000061befc
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000061ba49
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000061b52b
- (void)tiltTo:(double)arg1 animated:(_Bool)arg2 exaggerate:(_Bool)arg3;	// IMP=0x000000000061af30
- (void)rotateTo:(double)arg1 animated:(_Bool)arg2;	// IMP=0x000000000061a94c
- (_Bool)snapMapIfNecessary:(_Bool)arg1;	// IMP=0x000000000061a721
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000000061a5df
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000000061a470
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x000000000061a398
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x000000000061a203
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x000000000061a120
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000619ff1
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x0000000000619e0d
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x0000000000619d37
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x0000000000619b7d
- (void)dealloc;	// IMP=0x0000000000619b1d
- (id)initWithMapDataAccess:(void *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4 mapEngine:(void *)arg5;	// IMP=0x00000000006199b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

