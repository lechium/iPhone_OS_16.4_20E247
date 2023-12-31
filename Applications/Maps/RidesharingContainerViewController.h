//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ButtonsContainerViewController, MKMarkerAnnotationView, NSLayoutConstraint, NSString, RideBookingRequestRideOptionProxy, RideBookingRequestRideStatus, RidesharingBalloonETAView, RidesharingConfirmedRideViewController, RidesharingDetailsPickingViewController;

@interface RidesharingContainerViewController
{
    MKMarkerAnnotationView *_ETACalloutView;	// 8 = 0x8
    RidesharingBalloonETAView *_ETAView;	// 16 = 0x10
    NSLayoutConstraint *_ETACalloutVerticalConstraint;	// 24 = 0x18
    _Bool _isUserInitiatedMapChange;	// 32 = 0x20
    _Bool _isProgrammaticMapCameraChange;	// 33 = 0x21
    _Bool _needsUpdateForShowingDetailsPicking;	// 34 = 0x22
    _Bool _requestingRide;	// 35 = 0x23
    _Bool _loadedFirstRequestRide;	// 36 = 0x24
    RidesharingDetailsPickingViewController *_detailsPickingViewController;	// 40 = 0x28
    RidesharingConfirmedRideViewController *_confirmedRideViewController;	// 48 = 0x30
    ButtonsContainerViewController *_recenterButtonContainer;	// 56 = 0x38
    RideBookingRequestRideOptionProxy *_requestRideOptionProxy;	// 64 = 0x40
    RideBookingRequestRideStatus *_requestRideStatus;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000050f158
@property(retain, nonatomic) RideBookingRequestRideStatus *requestRideStatus; // @synthesize requestRideStatus=_requestRideStatus;
@property(retain, nonatomic) RideBookingRequestRideOptionProxy *requestRideOptionProxy; // @synthesize requestRideOptionProxy=_requestRideOptionProxy;
@property(retain, nonatomic) ButtonsContainerViewController *recenterButtonContainer; // @synthesize recenterButtonContainer=_recenterButtonContainer;
@property(nonatomic) __weak RidesharingConfirmedRideViewController *confirmedRideViewController; // @synthesize confirmedRideViewController=_confirmedRideViewController;
@property(nonatomic) __weak RidesharingDetailsPickingViewController *detailsPickingViewController; // @synthesize detailsPickingViewController=_detailsPickingViewController;
- (struct CGPoint)mapView:(id)arg1 focusPointForPoint:(struct CGPoint)arg2 gesture:(long long)arg3;	// IMP=0x001000000050f032
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;	// IMP=0x001000000050f02a
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x001000000050ef47
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x001000000050edad
- (id)_topBannerViewHorizontalConstraints;	// IMP=0x001000000050ebb8
- (void)_setupRecenterButton;	// IMP=0x001000000050e813
- (void)_recenterTapped:(id)arg1;	// IMP=0x001000000050e6a7
- (void)_moveToCenterCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x001000000050e31b
- (void)_moveMapToNewStartWaypointIfNeededAnimated:(_Bool)arg1;	// IMP=0x001000000050e258
- (void)_updateETACalloutFromDetailsPickingProviderAndMapMoving;	// IMP=0x001000000050dc10
- (void)requestRideStatusDidChange:(id)arg1;	// IMP=0x001000000050d88e
- (void)setRequestingRide:(_Bool)arg1;	// IMP=0x001000000050d87e
- (void)updateForDismissingDetailsPickingAnimated:(_Bool)arg1;	// IMP=0x001000000050d820
- (void)_updateForShowingDetailsPickingAnimated:(_Bool)arg1;	// IMP=0x001000000050d69a
- (void)setNeedsUpdateForShowingDetailsPickingAnimated;	// IMP=0x001000000050d652
- (void)updateTopBannerViewWithTopBannerItems:(id)arg1;	// IMP=0x001000000050d54f
- (void)contentHeightUpdatedWithValue:(double)arg1;	// IMP=0x001000000050d307
- (unsigned long long)originalLayoutForViewController:(id)arg1;	// IMP=0x001000000050d2fc
- (void)viewDidLayoutSubviews;	// IMP=0x001000000050d0d2
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000050cf86
- (void)viewDidLoad;	// IMP=0x001000000050cf45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

