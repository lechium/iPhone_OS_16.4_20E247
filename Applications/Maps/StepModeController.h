//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IOSBasedChromeViewController, MKMapCamera, MKMapItem, NSString, NavigationPowerLogger, Route, StatusBarBackgroundViewStyle, StepContainerViewController, UIView;
@protocol MapSelectionManagerDelegate, StatusBarSupplementaryView, StepActionCoordination;

@interface StepModeController : NSObject
{
    long long _previousHeadingIndicatorStyle;	// 8 = 0x8
    _Bool _previousEnabledStatus;	// 16 = 0x10
    NavigationPowerLogger *_powerLogger;	// 24 = 0x18
    _Bool _initializedWithUserTrackingMode;	// 32 = 0x20
    Route *_route;	// 40 = 0x28
    IOSBasedChromeViewController *_chromeViewController;	// 48 = 0x30
    StepContainerViewController *_containerViewController;	// 56 = 0x38
    long long _desiredTrackingMode;	// 64 = 0x40
    MKMapCamera *_desiredInitialCamera;	// 72 = 0x48
    unsigned long long _initialStepIndex;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000ae92b5
@property(nonatomic) unsigned long long initialStepIndex; // @synthesize initialStepIndex=_initialStepIndex;
@property(retain, nonatomic) MKMapCamera *desiredInitialCamera; // @synthesize desiredInitialCamera=_desiredInitialCamera;
@property(nonatomic) _Bool initializedWithUserTrackingMode; // @synthesize initializedWithUserTrackingMode=_initializedWithUserTrackingMode;
@property(nonatomic) long long desiredTrackingMode; // @synthesize desiredTrackingMode=_desiredTrackingMode;
@property(retain, nonatomic) StepContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak IOSBasedChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
- (_Bool)permitsLookAroundShowing;	// IMP=0x0010000000ae9227
- (_Bool)wantsLookAroundShowing;	// IMP=0x0010000000ae921f
- (_Bool)permitsWeatherShowing;	// IMP=0x0010000000ae9217
- (_Bool)wantsWeatherShowing;	// IMP=0x0010000000ae920f
@property(readonly, nonatomic) UIView<StatusBarSupplementaryView> *statusBarSupplementaryView;
@property(readonly, nonatomic) StatusBarBackgroundViewStyle *statusBarBackgroundViewStyle;
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000ae912b
- (_Bool)prefersStatusBarHidden;	// IMP=0x0010000000ae90e7
- (_Bool)wantsStatusBarControl;	// IMP=0x0010000000ae90df
@property(readonly, nonatomic) _Bool shouldResetStateAfterResigning;
- (void)didEndDisplayingInLockScreen;	// IMP=0x0010000000ae90a2
- (void)willBeginDisplayingInSecureLockScreen;	// IMP=0x0010000000ae9065
- (_Bool)supportsLockscreen;	// IMP=0x0010000000ae9019
- (void)_locationManagerApprovalDidChange:(id)arg1;	// IMP=0x0010000000ae8f0e
- (void)getCurrentSceneTitleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ae8cd0
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000ae89dd
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000ae8541
- (id)personalizedItemSources;	// IMP=0x0010000000ae8415
- (id)fullscreenViewController;	// IMP=0x0010000000ae8403
- (_Bool)wantsCompassLayoutControl;	// IMP=0x0010000000ae83ed
- (_Bool)showsMapView;	// IMP=0x0010000000ae83e5
- (id)mapViewDelegate;	// IMP=0x0010000000ae83d7
- (id)transitionControllerForPopToMode:(id)arg1;	// IMP=0x0010000000ae83be
- (id)transitionControllerForPushFromMode:(id)arg1;	// IMP=0x0010000000ae83a5
- (_Bool)usesDefaultTransitions;	// IMP=0x0010000000ae839d
@property(readonly, nonatomic) id <StepActionCoordination> actionCoordinator;
- (void)updateWithDisplayedStep:(id)arg1;	// IMP=0x0010000000ae81c2
- (id)initWithRoute:(id)arg1 initialStepIndex:(unsigned long long)arg2 desiredUserTrackingMode:(id)arg3;	// IMP=0x0010000000ae806d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MKMapItem *mapItemForLookAroundButton;
@property(readonly, nonatomic) id <MapSelectionManagerDelegate> mapSelectionManagerDelegate;
@property(readonly) Class superclass;

@end

