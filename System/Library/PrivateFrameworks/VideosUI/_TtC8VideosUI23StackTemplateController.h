//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI23StackTemplateController
{
    MISSING_TYPE *supportsTabBarChildControllerBehaviours;	// 0 = 0x0
    MISSING_TYPE *supportsTabBarChildContentInsets;	// 2108306827 = 0x7daa358b
    MISSING_TYPE *anchorIdToHighlight;	// 4069084415 = 0xf2894cff
    MISSING_TYPE *showcasePercentageObserver;	// 2337068543 = 0x8b4cd5ff
    MISSING_TYPE *lastShowcasePercentage;	// 3750316032 = 0xdf894800
    MISSING_TYPE *notificationCenter;	// 4282515337 = 0xff41ff89
    MISSING_TYPE *hasEnabledShowcasing;	// 2283935231 = 0x882215ff
    MISSING_TYPE *statusBarStyle;	// 3145927429 = 0xbb830b05
    MISSING_TYPE *navBarGradientView;	// 3494198088 = 0xd0453b48
    MISSING_TYPE *statusBarGradientView;	// 1096489156 = 0x415b18c4
    MISSING_TYPE *accountMessageViewModel;	// 1566523742 = 0x5d5f415e
    MISSING_TYPE *_accountMessageViewController;	// 1213530264 = 0x48550098
    MISSING_TYPE *viewIsVisibleForAccountMessage;	// 3379870469 = 0xc974bb05
    MISSING_TYPE *pastFirstViewDidAppear;	// 1438866695 = 0x55c35d07
    MISSING_TYPE *accountMessageAdditionTargetOffset;	// 1957313795 = 0x74aa3d03
    MISSING_TYPE *accountMessageNeedsDeferredAnimationIn;	// 669605334 = 0x27e95dd6
    MISSING_TYPE *accountMessageDismissalTargetOffset;	// 1223002440 = 0x48e58948
    MISSING_TYPE *targetParentController;	// 4130406601 = 0xf63100c9
    MISSING_TYPE *didEnqueueImpressionMetrics;	// 1213530264 = 0x48550098
    MISSING_TYPE *waitingForPresentationDismissal;	// 3520080445 = 0xd1d02a3d
    MISSING_TYPE *pagePerformanceProvider;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000767ea0
- (void)dealloc;	// IMP=0x0000000000767e10
- (void)vuiScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x0000000000767520
- (void)vuiScrollViewDidScroll:(id)arg1;	// IMP=0x00000000007671f0
- (_Bool)shouldRubberbandElementWithCategory:(unsigned long long)arg1 in:(id)arg2 at:(id)arg3;	// IMP=0x0000000000765df0
- (_Bool)vuiScrollViewShouldScrollToTop:(id)arg1;	// IMP=0x0000000000765d90
- (void)vuiScrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000000765d40
- (void)willEnterForeground:(id)arg1;	// IMP=0x0000000000763e30
@property(nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)vui_didMoveToParentViewController:(id)arg1;	// IMP=0x0000000000763c70
- (void)vui_willMoveToParentViewController:(id)arg1;	// IMP=0x0000000000763be0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000763b80
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000007639e0
- (void)vui_viewDidLayoutSubviews;	// IMP=0x0000000000763840
- (void)vui_viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000762020
- (void)vui_viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000761d30
- (void)vui_viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000007619e0
- (void)vui_viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000761450
- (void)vui_viewDidLoad;	// IMP=0x000000000075f700
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000075f200

@end

