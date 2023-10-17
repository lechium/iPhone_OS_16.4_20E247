//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@protocol VKTrackableAnnotation, VKTrackableAnnotationPresentation;

@protocol VKMapViewCameraDelegate <NSObject>

@optional
- (void)mapLayerWasUnableToAnimate;
- (void)mapLayerWillAnimateToLocation:(CDStruct_c3b9c2ee)arg1;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;
- (void)mapLayerNavigationCameraHasStoppedPanning;
- (void)mapLayerNavigationCameraHasStartedPanning;
- (void)mapLayerCanZoomOutDidChange:(_Bool)arg1;
- (void)mapLayerCanZoomInDidChange:(_Bool)arg1;
- (void)mapLayerMuninAvailabilityDidChange:(long long)arg1;
- (void)mapLayerCanEnter3DModeDidChange:(_Bool)arg1;
- (void)mapLayerDidBecomePitched:(_Bool)arg1;
- (id <VKTrackableAnnotationPresentation>)mapLayerPresentationForAnnotation:(id <VKTrackableAnnotation>)arg1;
- (void)mapLayerDidFinishInitialTrackingAnimation;
- (void)mapLayerDidChangeRegionAnimated:(_Bool)arg1;
- (void)mapLayerWillChangeRegionAnimated:(_Bool)arg1;
- (void)mapLayerDidChangeVisibleRegion;
@end
