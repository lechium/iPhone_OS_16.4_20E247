//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, OKPresentationViewController, PHPlaceholderView, PUSlideshowSession, PUSlideshowViewControllerSpec, UITapGestureRecognizer;
@protocol PUSlideshowViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowViewController : UIViewController
{
    OKPresentationViewController *_currentPresentationController;	// 8 = 0x8
    PUSlideshowViewControllerSpec *_spec;	// 16 = 0x10
    UITapGestureRecognizer *_tapGestureRecognizer;	// 24 = 0x18
    unsigned long long _playerStateButtonItemIndex;	// 32 = 0x20
    _Bool __needsUpdateSpec;	// 40 = 0x28
    PUSlideshowSession *_session;	// 48 = 0x30
    unsigned long long _mode;	// 56 = 0x38
    id <PUSlideshowViewControllerDelegate> _delegate;	// 64 = 0x40
    PUSlideshowViewController *__secondScreenBrowser;	// 72 = 0x48
    PHPlaceholderView *__slideshowPlaceholderView;	// 80 = 0x50
    UIViewController *__slideshowSettingsViewController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000004803f8
@property(retain, nonatomic, setter=_setSlideshowSettingsViewController:) UIViewController *_slideshowSettingsViewController; // @synthesize _slideshowSettingsViewController=__slideshowSettingsViewController;
@property(retain, nonatomic, setter=_setSlideshowPlaceHolderView:) PHPlaceholderView *_slideshowPlaceholderView; // @synthesize _slideshowPlaceholderView=__slideshowPlaceholderView;
@property(nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property(retain, nonatomic, setter=_setSecondScreenBrowser:) PUSlideshowViewController *_secondScreenBrowser; // @synthesize _secondScreenBrowser=__secondScreenBrowser;
@property(nonatomic) __weak id <PUSlideshowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) PUSlideshowSession *session; // @synthesize session=_session;
- (void)slideshowSession:(id)arg1 stopDisplayingPresentationViewController:(id)arg2;	// IMP=0x00000000004802f9
- (void)slideshowSession:(id)arg1 startDisplayingPresentationViewController:(id)arg2;	// IMP=0x00000000004802e4
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;	// IMP=0x00000000004802b6
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;	// IMP=0x0000000000480223
- (id)contentViewControllerForAirPlayController:(id)arg1;	// IMP=0x0000000000480188
- (void)couchPotatoPlaybackFinished;	// IMP=0x00000000004800ca
- (void)settingsDidFinished:(id)arg1;	// IMP=0x00000000004800b8
- (id)ancestorViewOfInstance:(id)arg1;	// IMP=0x000000000048000b
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x000000000047ff1d
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000047ff09
- (_Bool)pu_wantsTabBarVisible;	// IMP=0x000000000047feec
- (_Bool)pu_wantsToolbarVisible;	// IMP=0x000000000047fecf
- (_Bool)pu_wantsNavigationBarVisible;	// IMP=0x000000000047feb2
- (_Bool)prefersStatusBarHidden;	// IMP=0x000000000047fe92
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000047fd44
- (void)_updateSpecIfNeeded;	// IMP=0x000000000047fbf7
- (void)_invalidateSpec;	// IMP=0x000000000047fbc4
- (void)_setNeedsUpdate;	// IMP=0x000000000047fbbe
- (_Bool)_needsUpdate;	// IMP=0x000000000047fbac
- (void)_updateIfNeeded;	// IMP=0x000000000047faf7
- (void)_updatePlaceholder;	// IMP=0x000000000047f981
- (void)_updateAirplayButton;	// IMP=0x000000000047f8d3
- (void)_updateRouteObservation;	// IMP=0x000000000047f83c
- (void)_updatePlayerButton;	// IMP=0x000000000047f733
- (void)_updateChromeVisibility;	// IMP=0x000000000047f711
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000047f62a
- (void)_removeSlideshowSettingsViewController;	// IMP=0x000000000047f582
- (void)_removeCurrentPresentationController;	// IMP=0x000000000047f4b5
- (void)viewWillLayoutSubviews;	// IMP=0x000000000047f1d9
- (void)_installPresentationController:(id)arg1;	// IMP=0x000000000047efd0
- (void)_dismissSlideshow;	// IMP=0x000000000047eee8
- (void)_handleStateChange;	// IMP=0x000000000047ec32
- (void)_handleAppWillResignActiveNotification:(id)arg1;	// IMP=0x000000000047eb90
- (void)_settingsButtonTapped:(id)arg1;	// IMP=0x000000000047ea0f
- (void)_airplayButtonTapped:(id)arg1;	// IMP=0x000000000047e8bd
- (void)_doneButtonTapped:(id)arg1;	// IMP=0x000000000047e81b
- (void)_tapGesture:(id)arg1;	// IMP=0x000000000047e743
- (void)_playerStateButtonTapped:(id)arg1;	// IMP=0x000000000047e680
- (id)visibleAssets;	// IMP=0x000000000047e5c8
- (void)_setupTapGesture;	// IMP=0x000000000047e4e9
- (void)_setupChromeBar;	// IMP=0x000000000047e279
- (_Bool)prefersHomeIndicatorAutoHidden;	// IMP=0x000000000047e1fe
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000047e12f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000047e0ac
- (void)finishSession;	// IMP=0x000000000047df42
- (void)viewDidLoad;	// IMP=0x000000000047de23
- (void)loadView;	// IMP=0x000000000047ddb6
- (void)dealloc;	// IMP=0x000000000047dd78
- (id)initWithSession:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x000000000047db89
- (id)initWithSession:(id)arg1;	// IMP=0x000000000047db75
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000047db61
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000047db4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

