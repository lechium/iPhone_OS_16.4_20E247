//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol VKMapViewCameraDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraDelegateMediator : NSObject
{
    id <VKMapViewCameraDelegate> _cameraDelegate;	// 8 = 0x8
    _Bool _isChangingMapType;	// 16 = 0x10
    unsigned long long _regionChangeCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000089fea8
@property(nonatomic) _Bool isChangingMapType; // @synthesize isChangingMapType=_isChangingMapType;
@property(nonatomic) __weak id <VKMapViewCameraDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
- (void)mapLayerWasUnableToAnimate;	// IMP=0x000000000089fde7
- (void)mapLayerWillAnimateToLocation:(CDStruct_c3b9c2ee)arg1;	// IMP=0x000000000089fd3f
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;	// IMP=0x000000000089fcb7
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;	// IMP=0x000000000089fc2f
- (void)mapLayerNavigationCameraHasStoppedPanning;	// IMP=0x000000000089fba7
- (void)mapLayerNavigationCameraHasStartedPanning;	// IMP=0x000000000089fb1f
- (void)mapLayerCanZoomOutDidChange:(_Bool)arg1;	// IMP=0x000000000089fa81
- (void)mapLayerCanZoomInDidChange:(_Bool)arg1;	// IMP=0x000000000089f9e3
- (void)mapLayerMuninAvailabilityDidChange:(long long)arg1;	// IMP=0x000000000089f946
- (void)mapLayerCanEnter3DModeDidChange:(_Bool)arg1;	// IMP=0x000000000089f8a8
- (void)mapLayerDidBecomePitched:(_Bool)arg1;	// IMP=0x000000000089f80a
- (id)mapLayerPresentationForAnnotation:(id)arg1;	// IMP=0x000000000089f74b
- (void)mapLayerDidFinishInitialTrackingAnimation;	// IMP=0x000000000089f6c3
- (void)mapLayerDidChangeRegionAnimated:(_Bool)arg1;	// IMP=0x000000000089f60d
- (void)mapLayerWillChangeRegionAnimated:(_Bool)arg1;	// IMP=0x000000000089f558
- (void)mapLayerDidChangeVisibleRegion;	// IMP=0x000000000089f4ca
- (id)init;	// IMP=0x000000000089f46e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
