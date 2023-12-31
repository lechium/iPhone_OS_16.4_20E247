//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLInspectorNavigationControllerBackgroundView, CRLInspectorRefreshManager, MISSING_TYPE;

@interface CRLInspectorNavigationController
{
    _Bool _poppingViewController;	// 8 = 0x8
    CRLInspectorRefreshManager *_inspectorRefreshingManager;	// 16 = 0x10
    CRLInspectorNavigationControllerBackgroundView *_backgroundView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000047308a
@property(retain, nonatomic) CRLInspectorNavigationControllerBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=isPoppingViewController) _Bool poppingViewController; // @synthesize poppingViewController=_poppingViewController;
@property(nonatomic) __weak CRLInspectorRefreshManager *inspectorRefreshingManager; // @synthesize inspectorRefreshingManager=_inspectorRefreshingManager;
- (_Bool)accessibilityPerformEscape;	// IMP=0x0010000000472ffc
- (_Bool)wantsDefaultSizeForHalfHeightPresentation;	// IMP=0x0010000000472ff4
- (_Bool)wantsHalfHeightBlurMaterialBackground;	// IMP=0x0010000000472fec
@property(readonly, nonatomic) _Bool wantsCustomNavigationAnimator;
- (_Bool)crl_wantsCustomPopoverPresentationController;	// IMP=0x0010000000472fdc
- (MISSING_TYPE *)addChildViewController: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000472fad
- (id)childViewControllerForStatusBarStyle;	// IMP=0x0010000000472f6f
- (id)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x0010000000472ee6
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x0010000000472e39
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000472b7d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000472b03
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000472a54
- (void)viewDidLoad;	// IMP=0x00100000004727ff
- (id)initWithRootViewController:(id)arg1;	// IMP=0x001000000047277f

@end

