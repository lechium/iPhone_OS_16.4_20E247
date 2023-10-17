//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VKGlobeCameraController
{
    void *_globeView;	// 96 = 0x60
    struct CameraManager _cameraManager;	// 104 = 0x68
    double _currentDoublePanPitch;	// 528 = 0x210
    _Bool _isPitching;	// 536 = 0x218
    _Bool _isRotating;	// 537 = 0x219
    _Bool _wasPitched;	// 538 = 0x21a
    _Bool _couldEnter3DMode;	// 539 = 0x21b
    double _currentZoomLevel;	// 544 = 0x220
    double _maxZoomLevel;	// 552 = 0x228
    double _minZoomLevel;	// 560 = 0x230
    double _lastRotation;	// 568 = 0x238
    struct CGPoint _panStartScreenPoint;	// 576 = 0x240
    struct CGPoint _panLastScreenPoint;	// 592 = 0x250
    double _beganDoublePanPitch;	// 608 = 0x260
    shared_ptr_e963992e _taskContext;	// 616 = 0x268
    _Bool _tourShouldResumeWhenDoneGesturing;	// 632 = 0x278
}

- (id).cxx_construct;	// IMP=0x00000000006e5e7e
- (void).cxx_destruct;	// IMP=0x00000000006e5e6d
@property(nonatomic) _Bool tourShouldResumeWhenDoneGesturing; // @synthesize tourShouldResumeWhenDoneGesturing=_tourShouldResumeWhenDoneGesturing;
@property(nonatomic) void *globeView; // @synthesize globeView=_globeView;
- (void)animateToRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000006e55bf
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000006e5202
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 cursor:(Matrix_443f5d51)arg3 stepHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000006e4f74
- (void)setCenterCoordinateDistanceRange:(CDStruct_c3b9c2ee)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000006e49e3
- (void)setMinZoomLevel:(double)arg1;	// IMP=0x00000000006e49c9
- (void)setMaxZoomLevel:(double)arg1;	// IMP=0x00000000006e49b7
- (void)setCurrentZoomLevel:(double)arg1;	// IMP=0x00000000006e49a5
- (double)topDownMinimumZoomLevel;	// IMP=0x00000000006e4993
- (double)currentZoomLevel;	// IMP=0x00000000006e4981
- (double)maximumZoomLevel;	// IMP=0x00000000006e496f
- (double)minimumZoomLevel;	// IMP=0x00000000006e495d
- (double)_fovAdjustment;	// IMP=0x00000000006e48ee
- (double)pitch;	// IMP=0x00000000006e48cc
- (double)heading;	// IMP=0x00000000006e4889
- (double)altitude;	// IMP=0x00000000006e4830
- (double)distanceFromCenterCoordinate;	// IMP=0x00000000006e4816
- (CDStruct_c3b9c2ee)centerCoordinate;	// IMP=0x00000000006e475b
- (CDStruct_c3b9c2ee)_centerCoordinateForMapRegion:(id)arg1;	// IMP=0x00000000006e470e
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000006e4584
- (double)durationToAnimateToMapRegion:(id)arg1;	// IMP=0x00000000006e4576
- (double)zoomForMapRegion:(id)arg1;	// IMP=0x00000000006e3f98
- (double)widestLatitudeForMapRegion:(id)arg1;	// IMP=0x00000000006e3f02
- (double)greatCircleMidPointLatitude:(double)arg1 fromLongitude:(double)arg2 toLongitude:(double)arg3;	// IMP=0x00000000006e3e84
- (double)earthRadiusAt:(double)arg1;	// IMP=0x00000000006e3e3d
- (double)geocAngleBetween:(CDStruct_c3b9c2ee)arg1 andCoordinate:(CDStruct_c3b9c2ee)arg2;	// IMP=0x00000000006e3cd8
- (id)mapRegionIgnoringEdgeInsets;	// IMP=0x00000000006e3cc6
- (id)mapRegion;	// IMP=0x00000000006e3a6e
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000006e39e6
- (double)presentationYaw;	// IMP=0x00000000006e39d4
- (void)updateCameraManager;	// IMP=0x00000000006e39b0
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x00000000006e3668
- (void)setGesturing:(_Bool)arg1;	// IMP=0x00000000006e35af
- (void)updateState;	// IMP=0x00000000006e3581
- (void)_updateCanEnter3DMode;	// IMP=0x00000000006e34f3
- (void)_updateIsPitched;	// IMP=0x00000000006e3457
- (double)maxPitch;	// IMP=0x00000000006e3423
- (double)minPitch;	// IMP=0x00000000006e3415
- (_Bool)isFullyPitched;	// IMP=0x00000000006e33d5
- (_Bool)isPitched;	// IMP=0x00000000006e33b0
- (_Bool)canEnter3DMode;	// IMP=0x00000000006e3379
- (void)exit3DMode;	// IMP=0x00000000006e335a
- (void)enter3DMode;	// IMP=0x00000000006e3306
- (void)stopGlobeAnimations;	// IMP=0x00000000006e3237
- (Geocentric_d8fde6f2)cameraPosition;	// IMP=0x00000000006e31ef
- (void)adjustLoadingForAnimation:(float)arg1 progressFactor:(float)arg2;	// IMP=0x00000000006e3180
- (float)slowDownFactorFromLoadProgress;	// IMP=0x00000000006e3110
- (_Bool)isFlyoverTourStarted;	// IMP=0x00000000006e30e8
- (void)interruptFlyoverTourAnimation;	// IMP=0x00000000006e30c5
- (void)stopFlyoverTourAnimation;	// IMP=0x00000000006e30a2
- (void)resumeFlyoverTourAnimation;	// IMP=0x00000000006e307f
- (void)pauseFlyoverTourAnimation;	// IMP=0x00000000006e3031
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(_Bool)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;	// IMP=0x00000000006e27a1
- (void)moveToZoomOutZoomInTransition:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000000006e189c
- (CDUnknownBlockType)createMoveToZoomOutZoomInFrameFunction:(CameraFrame_b765d6d7)arg1 toLatLon:(CameraFrame_b765d6d7)arg2;	// IMP=0x00000000006e0ce6
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000000006dff87
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000006dff5b
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000006dfb3b
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3;	// IMP=0x00000000006dfb24
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000006df69b
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000006df1e8
- (void)tiltTo:(double)arg1 animated:(_Bool)arg2 exaggerate:(_Bool)arg3;	// IMP=0x00000000006dec8a
- (void)rotateTo:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000006de6ca
- (_Bool)snapMapIfNecessary:(_Bool)arg1;	// IMP=0x00000000006de5f7
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000006de4b6
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000006de360
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000006de28b
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x00000000006de0f7
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000006de00f
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000006ddee0
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x00000000006ddd25
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000006ddc57
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x00000000006ddb81
- (long long)tileSize;	// IMP=0x00000000006ddb76
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(void *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5;	// IMP=0x00000000006dd95c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
