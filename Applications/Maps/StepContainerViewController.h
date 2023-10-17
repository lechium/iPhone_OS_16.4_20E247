//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOTransitVehicleUpdater, MKMapView, MKTransitItemReferenceDateUpdater, MNLocation, MapCameraController, NSDate, NSDateComponentsFormatter, NSLayoutConstraint, NSMutableDictionary, NSString, NSTimer, NavDebugLocationManager, NavIdleTimeoutTimer, NavigationDebugViewsController, Route, StatusIndicatorManager, StatusIndicatorView, StepActionCoordinator, SteppingPageViewController, UIButton, UIScrollView;
@protocol SteppingSignGenerator;

@interface StepContainerViewController
{
    _Bool _isGoingToEnterGuidance;	// 8 = 0x8
    _Bool _mustNotBreakUserTrackingMode;	// 9 = 0x9
    _Bool _hasDesiredUserTrackingMode;	// 10 = 0xa
    _Bool _userIsInteractingWithMap;	// 11 = 0xb
    _Bool _showingOverview;	// 12 = 0xc
    _Bool _userTrackingViewVisible;	// 13 = 0xd
    NSDateComponentsFormatter *_debugMinsDurationFormatter;	// 16 = 0x10
    NSDateComponentsFormatter *_debugHoursDurationFormatter;	// 24 = 0x18
    Route *_route;	// 32 = 0x20
    unsigned long long _matchedStepIndex;	// 40 = 0x28
    StepActionCoordinator *_stepActionCoordinator;	// 48 = 0x30
    SteppingPageViewController *_pagingVC;	// 56 = 0x38
    id <SteppingSignGenerator> _signGenerator;	// 64 = 0x40
    UIScrollView *_verticalSignScrollView;	// 72 = 0x48
    NSLayoutConstraint *_scrollViewHeightConstraint;	// 80 = 0x50
    UIButton *_recenterButton;	// 88 = 0x58
    MapCameraController *_mapCameraController;	// 96 = 0x60
    GEOTransitVehicleUpdater *_transitVehicleUpdater;	// 104 = 0x68
    MKTransitItemReferenceDateUpdater *_referenceDateUpdater;	// 112 = 0x70
    NavDebugLocationManager *_debugLocationManager;	// 120 = 0x78
    NavigationDebugViewsController *_debugViewsController;	// 128 = 0x80
    StatusIndicatorManager *_statusIndicatorManager;	// 136 = 0x88
    StatusIndicatorView *_statusIndicatorView;	// 144 = 0x90
    NSLayoutConstraint *_userLocationBottomConstraint;	// 152 = 0x98
    NSLayoutConstraint *_userLocationLeadingConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_userLocationTrailingConstraint;	// 168 = 0xa8
    NSDate *_startDate;	// 176 = 0xb0
    NSDate *_lastMapTouchDate;	// 184 = 0xb8
    unsigned long long _matchedSignIndex;	// 192 = 0xc0
    MNLocation *_previousMatchedLocation;	// 200 = 0xc8
    long long _desiredUserTrackingMode;	// 208 = 0xd0
    long long _hasArrived;	// 216 = 0xd8
    NSMutableDictionary *_isExpandedMapping;	// 224 = 0xe0
    unsigned long long _initialStepIndex;	// 232 = 0xe8
    NSTimer *_delayAutoAdvanceTimer;	// 240 = 0xf0
    NSTimer *_locationExpirationTimer;	// 248 = 0xf8
    NSTimer *_arrivalEndTimer;	// 256 = 0x100
    NSTimer *_backgroundArrivalTimer;	// 264 = 0x108
    NavIdleTimeoutTimer *_idleTimer;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0020000000a67af9
@property(retain, nonatomic) NavIdleTimeoutTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(retain, nonatomic) NSTimer *backgroundArrivalTimer; // @synthesize backgroundArrivalTimer=_backgroundArrivalTimer;
@property(retain, nonatomic) NSTimer *arrivalEndTimer; // @synthesize arrivalEndTimer=_arrivalEndTimer;
@property(retain, nonatomic) NSTimer *locationExpirationTimer; // @synthesize locationExpirationTimer=_locationExpirationTimer;
@property(retain, nonatomic) NSTimer *delayAutoAdvanceTimer; // @synthesize delayAutoAdvanceTimer=_delayAutoAdvanceTimer;
@property(nonatomic, getter=isUserTrackingViewVisible) _Bool userTrackingViewVisible; // @synthesize userTrackingViewVisible=_userTrackingViewVisible;
@property(nonatomic) unsigned long long initialStepIndex; // @synthesize initialStepIndex=_initialStepIndex;
@property(nonatomic) _Bool showingOverview; // @synthesize showingOverview=_showingOverview;
@property(retain, nonatomic) NSMutableDictionary *isExpandedMapping; // @synthesize isExpandedMapping=_isExpandedMapping;
@property(nonatomic) long long hasArrived; // @synthesize hasArrived=_hasArrived;
@property(nonatomic) _Bool userIsInteractingWithMap; // @synthesize userIsInteractingWithMap=_userIsInteractingWithMap;
@property(nonatomic) long long desiredUserTrackingMode; // @synthesize desiredUserTrackingMode=_desiredUserTrackingMode;
@property(nonatomic) _Bool hasDesiredUserTrackingMode; // @synthesize hasDesiredUserTrackingMode=_hasDesiredUserTrackingMode;
@property(nonatomic) _Bool mustNotBreakUserTrackingMode; // @synthesize mustNotBreakUserTrackingMode=_mustNotBreakUserTrackingMode;
@property(retain, nonatomic) MNLocation *previousMatchedLocation; // @synthesize previousMatchedLocation=_previousMatchedLocation;
@property(nonatomic) _Bool isGoingToEnterGuidance; // @synthesize isGoingToEnterGuidance=_isGoingToEnterGuidance;
@property(nonatomic) unsigned long long matchedSignIndex; // @synthesize matchedSignIndex=_matchedSignIndex;
@property(retain, nonatomic) NSDate *lastMapTouchDate; // @synthesize lastMapTouchDate=_lastMapTouchDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSLayoutConstraint *userLocationTrailingConstraint; // @synthesize userLocationTrailingConstraint=_userLocationTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *userLocationLeadingConstraint; // @synthesize userLocationLeadingConstraint=_userLocationLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *userLocationBottomConstraint; // @synthesize userLocationBottomConstraint=_userLocationBottomConstraint;
@property(retain, nonatomic) StatusIndicatorView *statusIndicatorView; // @synthesize statusIndicatorView=_statusIndicatorView;
@property(retain, nonatomic) StatusIndicatorManager *statusIndicatorManager; // @synthesize statusIndicatorManager=_statusIndicatorManager;
@property(retain, nonatomic) NavigationDebugViewsController *debugViewsController; // @synthesize debugViewsController=_debugViewsController;
@property(retain, nonatomic) NavDebugLocationManager *debugLocationManager; // @synthesize debugLocationManager=_debugLocationManager;
@property(retain, nonatomic) MKTransitItemReferenceDateUpdater *referenceDateUpdater; // @synthesize referenceDateUpdater=_referenceDateUpdater;
- (id);	// IMP=0x0010000000a6775d
@property(retain, nonatomic) GEOTransitVehicleUpdater *transitVehicleUpdater; // @synthesize transitVehicleUpdater=_transitVehicleUpdater;
@property(retain, nonatomic) MapCameraController *mapCameraController; // @synthesize mapCameraController=_mapCameraController;
@property(retain, nonatomic) UIButton *recenterButton; // @synthesize recenterButton=_recenterButton;
@property(retain, nonatomic) NSLayoutConstraint *scrollViewHeightConstraint; // @synthesize scrollViewHeightConstraint=_scrollViewHeightConstraint;
@property(retain, nonatomic) UIScrollView *verticalSignScrollView; // @synthesize verticalSignScrollView=_verticalSignScrollView;
@property(retain, nonatomic) id <SteppingSignGenerator> signGenerator; // @synthesize signGenerator=_signGenerator;
@property(retain, nonatomic) SteppingPageViewController *pagingVC; // @synthesize pagingVC=_pagingVC;
@property(retain, nonatomic) StepActionCoordinator *stepActionCoordinator; // @synthesize stepActionCoordinator=_stepActionCoordinator;
@property(readonly, nonatomic) unsigned long long matchedStepIndex; // @synthesize matchedStepIndex=_matchedStepIndex;
@property(readonly, nonatomic) Route *route; // @synthesize route=_route;
- (_Bool)pptTestMoveToBoardStep;	// IMP=0x0010000000a674a3
- (void)pptTestMoveToNextStep;	// IMP=0x0010000000a67439
@property(readonly, nonatomic) _Bool pptTestHasNextStep;
@property(readonly, nonatomic) long long pptTestCurrentStepIndex;
@property(readonly, nonatomic) _Bool pptTestSupportStepping;
- (void)_toggleTraceControls;	// IMP=0x0010000000a6722a
- (void)_updateDebugConsoleForLocation:(id)arg1;	// IMP=0x0010000000a66dc2
@property(readonly, nonatomic) NSDateComponentsFormatter *debugHoursDurationFormatter; // @synthesize debugHoursDurationFormatter=_debugHoursDurationFormatter;
@property(readonly, nonatomic) NSDateComponentsFormatter *debugMinsDurationFormatter; // @synthesize debugMinsDurationFormatter=_debugMinsDurationFormatter;
- (id)_geoRouteDetails;	// IMP=0x0010000000a669e6
- (void)idleTimerDidTimeout:(id)arg1;	// IMP=0x0010000000a66969
- (void)_updateIdleTimer;	// IMP=0x0010000000a66803
- (id)statusBarSupplementaryView;	// IMP=0x0010000000a6678d
- (void)_updateStatusBarIndicatorLayout;	// IMP=0x0010000000a666f3
- (void)statusIndicatorTypeChanged:(unsigned long long)arg1;	// IMP=0x0010000000a66668
- (_Bool)showStatusBarBackgroundViewUnderDimmingView;	// IMP=0x0010000000a6660a
- (_Bool)showStatusBarBackgroundViewWhenResigning;	// IMP=0x0010000000a66602
- (id)statusBarBackgroundViewStyle;	// IMP=0x0010000000a664a9
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000a663ae
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0010000000a662c3
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredSegment:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x0010000000a6620e
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;	// IMP=0x0010000000a661a0
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;	// IMP=0x0010000000a6619a
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;	// IMP=0x0010000000a66194
- (void)navigationService:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;	// IMP=0x0010000000a65e3f
- (void)navigationService:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0010000000a65da2
- (void)navigationService:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0010000000a65d23
- (void)navigationService:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x0010000000a65ac7
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x0010000000a659e7
- (_Bool)_isTrackingLocation;	// IMP=0x0010000000a6599c
- (void)_setGizmoStepIndex:(unsigned long long)arg1;	// IMP=0x0010000000a658a4
- (void)_invalidateTimers;	// IMP=0x0010000000a657e3
- (void)_delayTimerFired;	// IMP=0x0010000000a65706
- (void)_backgroundArrivalTimerFired;	// IMP=0x0010000000a65664
- (void)_locationExpirationTimerFired;	// IMP=0x0010000000a655ea
- (void)_arrivalEndTimerFired;	// IMP=0x0010000000a65548
- (void)_stopArrivalEndTimer;	// IMP=0x0010000000a65510
- (void)_startArrivalEndTimerIfNecessary;	// IMP=0x0010000000a653e5
- (void)_didEnterBackground:(id)arg1;	// IMP=0x0010000000a64fe0
- (void)_willEnterForeground:(id)arg1;	// IMP=0x0010000000a64e8d
- (void)transitItemReferenceDateUpdater:(id)arg1 didUpdateToReferenceDate:(id)arg2;	// IMP=0x0010000000a64e70
- (void)transitVehicleUpdater:(id)arg1 didUpdateVehiclePositions:(id)arg2 forTripIDs:(id)arg3;	// IMP=0x0010000000a64d2a
- (id)transitVehicleUpdater:(id)arg1 shouldUpdateVehiclePositionsForTripIDs:(id)arg2;	// IMP=0x0010000000a64a0f
- (void)_updateTransitVehicleUpdaterIfNeeded;	// IMP=0x0010000000a6471d
- (_Bool)transitSteppingSignGenerator:(id)arg1 signShouldBeExpandedAtIndex:(long long)arg2;	// IMP=0x0010000000a64697
- (void)transitSteppingSignGenerator:(id)arg1 didTapExpandLabelInSteppingSignCell:(id)arg2;	// IMP=0x0010000000a644da
- (void)transitSteppingSignGenerator:(id)arg1 didTapClusteredRoutesButtonInTransitSignView:(id)arg2;	// IMP=0x0010000000a643f4
- (void)transitSteppingSignGenerator:(id)arg1 incidentButtonTappedForIncidents:(id)arg2;	// IMP=0x0010000000a64340
- (void)steppingPageViewController:(id)arg1 didTapOnSignAtIndex:(long long)arg2;	// IMP=0x0010000000a6433a
- (void)steppingPageViewController:(id)arg1 willDisplayAuxView:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0010000000a64295
- (void)steppingPageViewController:(id)arg1 willDisplaySign:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0010000000a6410b
- (double)maximumSignHeight;	// IMP=0x0010000000a63e26
- (void)steppingPageViewControllerDidChangeSignHeight:(id)arg1;	// IMP=0x0010000000a63af6
- (void)steppingPageViewControllerUserDidStartScrolling:(id)arg1;	// IMP=0x0010000000a63ab6
- (void)steppingPageViewController:(id)arg1 didChangeCurrentSign:(long long)arg2 previousSign:(long long)arg3 fromUserGesture:(unsigned long long)arg4;	// IMP=0x0010000000a636b5
- (void)mapViewDidFinishInitialUserTrackingModeAnimation:(id)arg1;	// IMP=0x0010000000a6344a
- (void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;	// IMP=0x0010000000a633d8
- (void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;	// IMP=0x0010000000a63366
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;	// IMP=0x0010000000a632ef
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x0010000000a632cf
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x0010000000a632af
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x0010000000a63291
- (void)mapViewDidStopUserInteraction:(id)arg1;	// IMP=0x0010000000a63234
- (void)mapViewDidStartUserInteraction:(id)arg1;	// IMP=0x0010000000a63217
- (void)mapViewDidFinishLoadingMap:(id)arg1;	// IMP=0x0010000000a63206
- (void)_updateForMatchedStepIndex:(unsigned long long)arg1 matchedSegmentIndex:(unsigned long long)arg2;	// IMP=0x0010000000a62c7b
- (_Bool)_shouldShowHeadingIndicatorForStep:(id)arg1;	// IMP=0x0010000000a62bd3
- (_Bool)_isStepOnTransitLine:(id)arg1;	// IMP=0x0010000000a62b44
- (void)_updateUserLocationViewAppearanceWithMatchedLocation:(id)arg1;	// IMP=0x0010000000a62723
- (void)setUserTrackingViewVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a62576
- (void)_locationManagerApprovalDidChange:(id)arg1;	// IMP=0x0010000000a6246d
- (void)_setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a6238f
- (void)_updateMapRegionForSignAtIndex:(long long)arg1;	// IMP=0x0010000000a621cd
@property(readonly, nonatomic) MKMapView *mapView;
- (void)_pressedRecenterButton;	// IMP=0x0010000000a620d3
- (id)passThroughView;	// IMP=0x0010000000a62083
- (void)containerStyleManagerDidChangeStyle:(unsigned long long)arg1;	// IMP=0x0010000000a62003
- (double)availableHeight;	// IMP=0x0010000000a61d0d
- (double)topEdgeInset;	// IMP=0x0010000000a61cde
- (unsigned long long)maxLayoutForEdgeInsetsUpdate;	// IMP=0x0010000000a61cd3
- (void)containerStyleManagerConfigureLayoutForStyle:(unsigned long long)arg1;	// IMP=0x0010000000a61b29
- (void)updateLayoutAnimated:(_Bool)arg1;	// IMP=0x0010000000a61ae8
- (unsigned long long)originalLayoutForViewController:(id)arg1;	// IMP=0x0010000000a61a71
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000a61a30
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000a619de
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000a618d8
- (void)_showInitialStepIfNecessary;	// IMP=0x0010000000a616e3
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000a61554
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000a61432
- (void)_updateCompassLayout;	// IMP=0x0010000000a612ba
- (void)_setupConstraints;	// IMP=0x0010000000a608e4
- (void)_setupViews;	// IMP=0x0010000000a601bb
- (void)viewDidLoad;	// IMP=0x0010000000a6010a
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000a600c9
- (void)showOverview:(_Bool)arg1 andZoomToMapRegion:(_Bool)arg2;	// IMP=0x0010000000a5fdc1
- (void)updateWithDisplayedStep:(id)arg1;	// IMP=0x0010000000a5fcb0
- (void)dealloc;	// IMP=0x0010000000a5fc2e
- (void)_setupDebugUtilities;	// IMP=0x0010000000a5f968
- (void)_addNavigationObservers;	// IMP=0x0010000000a5f915
- (id)initWithRoute:(id)arg1 initialStepIndex:(unsigned long long)arg2 desiredTrackingMode:(long long)arg3;	// IMP=0x0010000000a5f889
- (id)initWithRoute:(id)arg1 initialStepIndex:(unsigned long long)arg2;	// IMP=0x0010000000a5f524
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000a5f51c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
