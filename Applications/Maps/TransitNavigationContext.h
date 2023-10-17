//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRouteStep, GEOMapServiceTraits, GEOTransitVehicleUpdater, MKMapItem, NGChromeViewController, NSString, NavIdleTimeoutTimer, NavigationDebugViewsController, NavigationDisplay, PlaceCardViewController, Route, StatusBarBackgroundViewStyle, TransitContainerViewController, TransitNavigationTrayViewController, TransitSteppingAnalyticsDelegate, TransitSteppingCameraFramer, UIButton, UIScrollView, UIView;
@protocol MapSelectionManagerDelegate, StatusBarSupplementaryView;

@interface TransitNavigationContext : NSObject
{
    TransitContainerViewController *_containerViewController;	// 8 = 0x8
    TransitNavigationTrayViewController *_trayViewController;	// 16 = 0x10
    PlaceCardViewController *_placeCardViewController;	// 24 = 0x18
    NavigationDisplay *_navigationDisplay;	// 32 = 0x20
    NavigationDebugViewsController *_debugViewsController;	// 40 = 0x28
    GEOTransitVehicleUpdater *_transitVehicleUpdater;	// 48 = 0x30
    GEOComposedRouteStep *_activeStep;	// 56 = 0x38
    GEOComposedRouteStep *_displayedStep;	// 64 = 0x40
    Route *_route;	// 72 = 0x48
    TransitSteppingAnalyticsDelegate *_analyticsDelegate;	// 80 = 0x50
    UIButton *_recenterButton;	// 88 = 0x58
    _Bool _cameraPanningOrZoomed;	// 96 = 0x60
    TransitSteppingCameraFramer *_manualSteppingFramer;	// 104 = 0x68
    _Bool _forceManualFraming;	// 112 = 0x70
    _Bool _requestingRealtimeUpdates;	// 113 = 0x71
    NavIdleTimeoutTimer *_arrivalEndTimer;	// 120 = 0x78
    _Bool _trayPresented;	// 128 = 0x80
    CDUnknownBlockType _whenTrayPresentedBlock;	// 136 = 0x88
    NGChromeViewController *_chromeViewController;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00200000004afd90
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)pptTestDismissTrayAnimated:(_Bool)arg1 assertTrayType:(long long)arg2;	// IMP=0x00100000004afd29
- (_Bool)pptTestIsTrayType:(long long)arg1;	// IMP=0x00100000004afd1d
- (void)pptTestUpdateTrayLayout:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00100000004afba3
@property(readonly, nonatomic) _Bool pptTestCanUpdateTrayLayout;
- (_Bool)pptTestMoveToBoardStep;	// IMP=0x00100000004afb4c
- (void)pptTestMoveToNextStep;	// IMP=0x00100000004afb36
@property(readonly, nonatomic) _Bool pptTestHasNextStep;
@property(readonly, nonatomic) long long pptTestCurrentStepIndex;
@property(readonly, nonatomic) _Bool pptTestSupportStepping;
- (void)navigationDebugViewsTracePlaybackDidSeekToGuideMePortionOfTransitSegment:(id)arg1;	// IMP=0x00100000004afaee
- (void)navigationDebugViewsTracePlaybackDidSeek:(id)arg1;	// IMP=0x00100000004afae8
- (void);	// IMP=0x00100000004afae2
- (void)placeCardViewController:(id)arg1 presentPOIEnrichmentWithCoordinator:(id)arg2;	// IMP=0x00100000004afadc
- (void)placeCardViewController:(id)arg1 dismissAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004afad6
- (void)placeCardViewController:(id)arg1 seeAllCollections:(id)arg2 usingTitle:(id)arg3 usingCollectionIds:(id)arg4;	// IMP=0x00100000004afad0
- (void)placeCardViewController:(id)arg1 selectExploreGuidesWithGuideLocation:(id)arg2;	// IMP=0x00100000004afaca
- (void)placeCardViewController:(id)arg1 showCuratedCollection:(id)arg2;	// IMP=0x00100000004afac4
- (void)placeCardViewController:(id)arg1 editShortcut:(id)arg2;	// IMP=0x00100000004afabe
- (void)placeCardViewController:(id)arg1 showRelatedMapItems:(id)arg2 withTitle:(id)arg3 originalMapItem:(id)arg4 analyticsDelegate:(id)arg5;	// IMP=0x00100000004afab8
- (void)placeCardViewController:(id)arg1 editCollection:(id)arg2;	// IMP=0x00100000004afab2
- (void)placeCardViewController:(id)arg1 showCollection:(id)arg2;	// IMP=0x00100000004afaac
- (void)placeCardViewController:(id)arg1 requestCopyLinkToClipboard:(id)arg2;	// IMP=0x00100000004afaa6
- (_Bool)placeCardViewController:(id)arg1 shouldShowTransitScheduleForMapItem:(id)arg2 departureSequence:(id)arg3;	// IMP=0x00100000004afa9e
- (void)placeCardViewController:(id)arg1 showTransitScheduleForMapItem:(id)arg2 departureSequence:(id)arg3;	// IMP=0x00100000004afa98
- (void)placeCardViewController:(id)arg1 editNameOfMapItem:(id)arg2 saveHandler:(CDUnknownBlockType)arg3 cancelHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000004afa92
- (void)placeCardViewController:(id)arg1 pickCollectionWithSession:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;	// IMP=0x00100000004afa8c
- (void)placeCardViewController:(id)arg1 doSearchItem:(id)arg2 withUserInfo:(id)arg3;	// IMP=0x00100000004afa86
- (void)placeCardViewController:(id)arg1 didUpdateLinkedPlacesFromPlaceCardItem:(id)arg2;	// IMP=0x00100000004afa80
- (void)placeCardViewController:(id)arg1 didSelectParent:(id)arg2;	// IMP=0x00100000004afa7a
- (void)placeCardViewController:(id)arg1 presentPlacesForMapItem:(id)arg2 searchCategory:(id)arg3;	// IMP=0x00100000004afa74
- (void)placeCardViewController:(id)arg1 presentCategoryPlacesListForMapItem:(id)arg2 searchCategory:(id)arg3;	// IMP=0x00100000004afa6e
- (void)placeCardViewController:(id)arg1 displayStoreViewControllerForAppWithiTunesIdentifier:(id)arg2;	// IMP=0x00100000004afa68
- (void)placeCardViewController:(id)arg1 enterLookAroundForMapItem:(id)arg2 lookAroundView:(id)arg3;	// IMP=0x00100000004afa62
- (void)placeCardViewController:(id)arg1 enterFlyoverForMapItem:(id)arg2;	// IMP=0x00100000004afa5c
- (void)placeCardViewController:(id)arg1 createDroppedPin:(id)arg2;	// IMP=0x00100000004afa56
- (void)placeCardViewController:(id)arg1 editLocationOfMarkedLocation:(id)arg2;	// IMP=0x00100000004afa50
- (void)placeCardViewController:(id)arg1 removeDroppedPin:(id)arg2;	// IMP=0x00100000004afa4a
- (void)placeCardViewController:(id)arg1 selectDisplayedAddressFromPlaceCardItem:(id)arg2;	// IMP=0x00100000004afa44
- (void)placeCardViewController:(id)arg1 showTransitIncidents:(id)arg2;	// IMP=0x00100000004afa2f
- (void)placeCardViewController:(id)arg1 selectTransitLineItem:(id)arg2;	// IMP=0x00100000004afa29
- (void)placeCardViewController:(id)arg1 selectMapItem:(id)arg2 address:(id)arg3;	// IMP=0x00100000004afa23
- (void)placeCardViewController:(id)arg1 doDirectionItem:(id)arg2 userInfo:(id)arg3;	// IMP=0x00100000004afa1d
- (void)placeCardViewController:(id)arg1 mapItemDidChange:(id)arg2;	// IMP=0x00100000004afa17
@property(readonly, nonatomic) long long displayedViewMode;
@property(readonly, nonatomic) GEOMapServiceTraits *newTraits;
- (void)_presentPlaceCardViewControllerForMapItem:(id)arg1 modally:(_Bool)arg2;	// IMP=0x00100000004af7ef
- (id)_placeCardViewController;	// IMP=0x00100000004af767
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredSegment:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x00100000004af6d0
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;	// IMP=0x00100000004af6ca
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;	// IMP=0x00100000004af6c4
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;	// IMP=0x00100000004af6be
- (void)_presentIncidents:(id)arg1;	// IMP=0x00100000004af59e
- (void)_presentAdvisory:(id)arg1;	// IMP=0x00100000004af3cb
- (void)idleTimerDidTimeout:(id)arg1;	// IMP=0x00100000004af295
- (void)_updateArrivalEndTimerIfNeeded;	// IMP=0x00100000004af036
- (_Bool)_sceneInBackground;	// IMP=0x00100000004aef62
- (void)_pauseOrResumeRealtimeUpdatesIfNeeded;	// IMP=0x00100000004aed83
- (void)transitVehicleUpdater:(id)arg1 didUpdateVehiclePositions:(id)arg2 forTripIDs:(id)arg3;	// IMP=0x00100000004aeb81
- (id)transitVehicleUpdater:(id)arg1 shouldUpdateVehiclePositionsForTripIDs:(id)arg2;	// IMP=0x00100000004ae883
- (void)_backlightLuminanceDidChange;	// IMP=0x00100000004ae804
- (void)_sceneWillEnterForeground:(id)arg1;	// IMP=0x00100000004ae6b8
- (void)_sceneDidEnterBackground:(id)arg1;	// IMP=0x00100000004ae5a0
- (_Bool)_shouldFrameVehiclePositions;	// IMP=0x00100000004ae4de
- (void)_updateTransitVehicleUpdaterIfNeeded;	// IMP=0x00100000004ae117
- (id)_stepForTransitVehicleUpdater;	// IMP=0x00100000004ae109
- (void)_updateRecenterButtonVisibility;	// IMP=0x00100000004ae002
- (_Bool)_shouldShowRecenterButton;	// IMP=0x00100000004adfe6
- (void)_recenterButtonTapped:(id)arg1;	// IMP=0x00100000004ade0b
- (id)_recenterButton;	// IMP=0x00100000004adb57
- (void)_didReturnToDefaultZoomPan;	// IMP=0x00100000004adb39
- (void)_didLeaveDefaultZoomPan;	// IMP=0x00100000004adad7
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00100000004adac5
- (void)mapViewNavigationCameraDidReturnToDefaultZoom:(id)arg1;	// IMP=0x00100000004adab3
- (void)mapViewNavigationCameraHasStoppedPanning:(id)arg1;	// IMP=0x00100000004adaa1
- (void)mapViewNavigationCameraHasStartedPanning:(id)arg1;	// IMP=0x00100000004ada8f
- (void)mapViewNavigationCameraDidLeaveDefaultZoom:(id)arg1;	// IMP=0x00100000004ada7d
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00100000004ad899
- (void)_checkRouteProximityForManualFraming:(id)arg1;	// IMP=0x00100000004ad4f2
- (void)_frameCurrentStep;	// IMP=0x00100000004ad2a2
- (_Bool)_shouldUseManualFraming;	// IMP=0x00100000004ad286
- (void)_updateNavigationDisplayForDisplayedStep;	// IMP=0x00100000004ad140
- (void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;	// IMP=0x00100000004ad0dc
- (void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;	// IMP=0x00100000004ad037
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;	// IMP=0x00100000004ad01f
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;	// IMP=0x00100000004ad019
- (_Bool)wantsMapSelectionControl;	// IMP=0x00100000004ad011
- (void)container:(id)arg1 didChangeContainerStyle:(unsigned long long)arg2;	// IMP=0x00100000004acfff
- (void)container:(id)arg1 didPresentContainee:(id)arg2 finished:(_Bool)arg3;	// IMP=0x00100000004acf59
- (void)_performWhenTrayPresented:(CDUnknownBlockType)arg1;	// IMP=0x00100000004acf0c
- (void)containeeViewControllerGoToPreviousState:(id)arg1 withSender:(id)arg2;	// IMP=0x00100000004ace2c
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapGetTicketsForSegments:(id)arg2;	// IMP=0x00100000004acc74
- (void)transitDirectionsStepsListDataSource:(id)arg1 willExpandItem:(id)arg2;	// IMP=0x00100000004acc2e
- (void)transitDirectionsStepsListDataSource:(id)arg1 didUpdateActiveGuidanceStep:(id)arg2;	// IMP=0x00100000004aca5a
- (void)transitDirectionsStepsListDataSource:(id)arg1 didUpdateDisplayedGuidanceStep:(id)arg2;	// IMP=0x00100000004ac808
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapIncidentsCell:(id)arg2 withAdvisory:(id)arg3;	// IMP=0x00100000004ac7f3
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapClusteredVehiclesCell:(id)arg2;	// IMP=0x00100000004ac3bb
- (void)transitDirectionsStepsListDataSource:(id)arg1 didTapRowForItem:(id)arg2;	// IMP=0x00100000004ac04d
- (void)transitDirectionsStepsListDataSource:(id)arg1 didSelectTrip:(id)arg2;	// IMP=0x00100000004abf46
- (void)directionsStepsListDidTapRAPButton:(id)arg1;	// IMP=0x00100000004abe1f
- (void)directionsStepsListDidTapShareButton:(id)arg1;	// IMP=0x00100000004abc94
- (void)directionsStepsList:(id)arg1 didTapRowForRouteStep:(id)arg2;	// IMP=0x00100000004abc8e
- (void)transitNavigationTrayDidTapClose:(id)arg1;	// IMP=0x00100000004abb33
- (void)didEndDisplayingInLockScreen;	// IMP=0x00100000004abb2d
- (void)willBeginDisplayingInSecureLockScreen;	// IMP=0x00100000004abb17
- (_Bool)_isDisplayingManuallySelectedStep;	// IMP=0x00100000004aba4a
- (void)_updateAnnotationsForCurrentRoute;	// IMP=0x00100000004ab857
- (void)_updateCurrentRouteIfNeeded;	// IMP=0x00100000004ab5f7
- (int)currentUITargetForAnalytics;	// IMP=0x00100000004ab5ec
@property(readonly, nonatomic) _Bool shouldResetStateAfterResigning;
- (_Bool)permitsLookAroundShowing;	// IMP=0x00100000004ab5a1
- (_Bool)permitsWeatherShowing;	// IMP=0x00100000004ab599
- (id)mapViewDelegate;	// IMP=0x00100000004ab564
- (_Bool)_isAuthorizedForPreciseLocation;	// IMP=0x00100000004ab502
- (void)leaveStackInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000004ab4fc
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000004ab13a
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000004aa71f
- (void)enterStackInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000004aa719
- (id)fullscreenViewController;	// IMP=0x00100000004aa70b
- (id)personalizedItemSources;	// IMP=0x00100000004aa5df
- (_Bool)showsMapView;	// IMP=0x00100000004aa5d7
- (id)init;	// IMP=0x00100000004aa398
- (void)dealloc;	// IMP=0x00100000004aa342
- (void)placeCardViewController:(id)arg1 openURL:(id)arg2;	// IMP=0x00100000004aa2ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MKMapItem *mapItemForLookAroundButton;
@property(readonly, nonatomic) id <MapSelectionManagerDelegate> mapSelectionManagerDelegate;
@property(readonly, nonatomic) StatusBarBackgroundViewStyle *statusBarBackgroundViewStyle;
@property(readonly, nonatomic) UIView<StatusBarSupplementaryView> *statusBarSupplementaryView;
@property(readonly) Class superclass;

@end
