//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISearchContainerViewController.h>

@class CarMapTrackingController, NGChromeViewController, NSArray, NSString, UINavigationController, UIViewController;
@protocol CarKeyboardResultsProviding;

@interface CarKeyboardModeController : UISearchContainerViewController
{
    UINavigationController *_wrapperNavigationController;	// 8 = 0x8
    NGChromeViewController *_chromeViewController;	// 16 = 0x10
    UIViewController<CarKeyboardResultsProviding> *_resultsProvider;	// 24 = 0x18
    unsigned long long _requestedInteractionModel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000002362e4
@property(readonly, nonatomic) unsigned long long requestedInteractionModel; // @synthesize requestedInteractionModel=_requestedInteractionModel;
@property(retain, nonatomic) UIViewController<CarKeyboardResultsProviding> *resultsProvider; // @synthesize resultsProvider=_resultsProvider;
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void)pptInvokeSearch:(id)arg1;	// IMP=0x001000000023620f
- (void)pptEndEditing;	// IMP=0x00100000002361a5
- (void)pptHandleTextChange:(id)arg1;	// IMP=0x0010000000236115
- (void)_ppt_selectKeyboardSearchButton;	// IMP=0x0010000000235fcf
- (void)_ppt_selectKeyboardMode;	// IMP=0x0010000000235fc9
- (void)_ppt_selectFirstCarplayBrowseCategory;	// IMP=0x0010000000235fc3
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)didDismissSearchController:(id)arg1;	// IMP=0x0010000000235f58
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0010000000235ee6
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x0010000000235e68
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x0010000000235dd8
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0010000000235d66
- (void)configureFocusContainerGuideController:(id)arg1;	// IMP=0x0010000000235d4f
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
- (id)fullscreenViewController;	// IMP=0x0010000000235cd0
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) long long autohideBehavior;
- (_Bool)showsNavigationBar;	// IMP=0x0010000000235cb5
- (_Bool)showsMapView;	// IMP=0x0010000000235cad
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000235bde
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000235af9
- (void)viewDidLoad;	// IMP=0x00100000002358e9
- (id)initWithRequestedInteractionModel:(unsigned long long)arg1 resultsProvider:(id)arg2;	// IMP=0x0010000000235741

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
// Error: Property attributes should begin with the type ('T') attribute, property name: showsHeadingIndicator
// Property attributes: (null)

@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end
