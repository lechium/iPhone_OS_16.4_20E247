//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class BNBannerSource, BSAction, GCDTimer, NSArray, NSLayoutConstraint, NSString, NSURL, UIColor, UITapGestureRecognizer, UIView;
@protocol BNPresentableContext, BannerView, MapsBannerViewControllerDelegate, SBUISystemApertureAccessoryView, SBUISystemApertureAutomaticallyInvalidatable;

@interface MapsBannerViewController : UIViewController
{
    _Bool _aperturePresentation;	// 8 = 0x8
    _Bool _didShowControlsForArrival;	// 9 = 0x9
    id <SBUISystemApertureAutomaticallyInvalidatable> _alertingAssertion;	// 16 = 0x10
    NSLayoutConstraint *_widthConstraint;	// 24 = 0x18
    NSArray *_bannerConstraints;	// 32 = 0x20
    NSArray *_alternateBannerConstraints;	// 40 = 0x28
    double _cachedDisplayWidth;	// 48 = 0x30
    _Bool _waitingForDisplay;	// 56 = 0x38
    struct CGSize _deferredContentSize;	// 64 = 0x40
    NSString *_requestIdentifier;	// 80 = 0x50
    long long _activeLayoutMode;	// 88 = 0x58
    UIView<BannerView> *_bannerView;	// 96 = 0x60
    UIView<BannerView> *_alternateBannerView;	// 104 = 0x68
    BNBannerSource *_target;	// 112 = 0x70
    id <MapsBannerViewControllerDelegate> _delegate;	// 120 = 0x78
    GCDTimer *_timeoutTimer;	// 128 = 0x80
    GCDTimer *_apertureExpansionTimer;	// 136 = 0x88
    GCDTimer *_alternateBannerActiveTimer;	// 144 = 0x90
    UITapGestureRecognizer *_knobSelectRecognizer;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0020000000726a93
@property(retain, nonatomic) UITapGestureRecognizer *knobSelectRecognizer; // @synthesize knobSelectRecognizer=_knobSelectRecognizer;
@property(retain, nonatomic) GCDTimer *alternateBannerActiveTimer; // @synthesize alternateBannerActiveTimer=_alternateBannerActiveTimer;
@property(retain, nonatomic) GCDTimer *apertureExpansionTimer; // @synthesize apertureExpansionTimer=_apertureExpansionTimer;
@property(retain, nonatomic) GCDTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(readonly, nonatomic) __weak id <MapsBannerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak BNBannerSource *target; // @synthesize target=_target;
@property(readonly, nonatomic) UIView<BannerView> *alternateBannerView; // @synthesize alternateBannerView=_alternateBannerView;
@property(readonly, nonatomic) UIView<BannerView> *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) long long activeLayoutMode; // @synthesize activeLayoutMode=_activeLayoutMode;
- (void)_wheelChangedWithEvent:(id)arg1;	// IMP=0x0010000000726913
- (void)_handleSwipeGesture:(id)arg1;	// IMP=0x00100000007268d0
- (void)_handleTapOnContent:(id)arg1;	// IMP=0x001000000072684d
- (void)_openMaps;	// IMP=0x00100000007264d5
@property(readonly, copy, nonatomic) UIColor *keyColor;
@property(readonly, copy, nonatomic) NSString *elementIdentifier;
@property(readonly, nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property(readonly, nonatomic) long long maximumLayoutMode;
@property(readonly, nonatomic) long long preferredLayoutMode;
@property(readonly, nonatomic) unsigned long long presentationBehaviors;
@property(readonly, nonatomic) _Bool preventsInteractiveDismissal;
@property(readonly, nonatomic) long long contentRole;
- (id)systemApertureElementViewController;	// IMP=0x001000000072604c
- (void)_updateShowsControls;	// IMP=0x0010000000725c55
- (void)_requestAlertingAssertionIfNecessary;	// IMP=0x00100000007257c4
- (void)presentableWillNotAppearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x001000000072565c
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000725473
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x00100000007252f8
- (void)presentableDidAppearAsBanner:(id)arg1;	// IMP=0x0010000000725156
- (void)presentableWillAppearAsBanner:(id)arg1;	// IMP=0x0010000000724f96
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier;
- (void)_dismissBannerWithReason:(id)arg1;	// IMP=0x0010000000724d30
- (void)_revertToPrimaryBannerView;	// IMP=0x0010000000724b43
- (void)_revertToPrimaryBannerViewAfterDelay;	// IMP=0x001000000072498e
- (_Bool)_useSignificantUpdateSPI;	// IMP=0x0010000000724945
- (void)_setApertureExpansionTimeout;	// IMP=0x0010000000724739
- (void)_setTimeout;	// IMP=0x0010000000724461
- (void)setPreferredContentSize:(struct CGSize)arg1;	// IMP=0x0010000000724258
- (void)postTemporaryAlternateBannerView:(id)arg1;	// IMP=0x0010000000723bd4
- (_Bool)_shouldExpandForGuidanceState:(id)arg1;	// IMP=0x0010000000723899
- (void)updateFromGuidanceState:(id)arg1;	// IMP=0x0010000000722de5
- (double)approximateWidth;	// IMP=0x0010000000722cc2
- (double)displayWidth;	// IMP=0x0010000000722b37
@property(readonly, copy) NSString *description;
- (id)accessibilityIdentifier;	// IMP=0x0010000000722a76
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000007229be
- (void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)arg1;	// IMP=0x00100000007227da
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000007226b0
- (id)_contentView;	// IMP=0x00100000007225d6
- (void)viewDidLoad;	// IMP=0x0010000000722258
- (void)loadView;	// IMP=0x001000000072216f
- (id)initWithRequestId:(id)arg1 target:(id)arg2 bannerView:(id)arg3 delegate:(id)arg4 aperturePresentation:(_Bool)arg5;	// IMP=0x0010000000721e40
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000721e38

// Remaining properties
@property(readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property(readonly, nonatomic) _Bool attachedMinimalViewRequiresZeroPadding;
@property(nonatomic) _Bool canRequestAlertingAssertion;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDraggingDismissalEnabled) _Bool draggingDismissalEnabled;
@property(readonly, nonatomic, getter=isDraggingInteractionEnabled) _Bool draggingInteractionEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BSAction *launchAction;
@property(readonly, copy, nonatomic) NSURL *launchURL;
@property(nonatomic) unsigned long long minimalViewLayoutAxis;
@property(readonly, nonatomic) long long minimumLayoutMode;
@property(readonly, nonatomic) struct CGSize preferredCustomAspectRatio;
@property(readonly, nonatomic) long long preferredCustomLayout;
@property(readonly, nonatomic) double preferredHeightForBottomSafeArea;
@property(readonly, nonatomic) long long presentableBehavior;
@property(nonatomic) __weak id <BNPresentableContext> presentableContext;
@property(readonly, nonatomic) long long presentableType;
@property(readonly, nonatomic) _Bool preventsAutomaticDismissal;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) _Bool touchOutsideDismissalEnabled;

@end
