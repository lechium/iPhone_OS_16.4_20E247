//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarMapPanningViewController, CarMapTrackingController, NGChromeViewController, NSArray, NSString;

@interface CarMapPanningModeController : NSObject
{
    CarMapPanningViewController *_viewController;	// 8 = 0x8
    _Bool _scrollWasEnabled;	// 16 = 0x10
    _Bool _mapWasPanned;	// 17 = 0x11
    NGChromeViewController *_chromeViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000a547ca
@property(readonly, nonatomic) _Bool mapWasPanned; // @synthesize mapWasPanned=_mapWasPanned;
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) int currentUsageTarget;
- (void)carMapPanningViewControllerDidTapDone:(id)arg1;	// IMP=0x0010000000a5477d
- (void)carMapPanningViewControllerDidPan:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0010000000a54729
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000a54719
- (void)_doneButtonPressed;	// IMP=0x0010000000a5464b
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
- (void)configureNavigationDisplay:(id)arg1;	// IMP=0x0010000000a545ed
- (void)layoutForUnobscuredBoundsChange;	// IMP=0x0010000000a545d7
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000a544be
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000a54257
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (_Bool)showsNavigationBar;	// IMP=0x0010000000a541ff
- (id)fullscreenViewController;	// IMP=0x0010000000a541f1
- (_Bool)supportsAlternateRouteSelection;	// IMP=0x0010000000a541e9
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
- (_Bool)showsMapView;	// IMP=0x0010000000a541aa
- (id)mapView;	// IMP=0x0010000000a5415a
- (id)init;	// IMP=0x0010000000a540f0

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end
