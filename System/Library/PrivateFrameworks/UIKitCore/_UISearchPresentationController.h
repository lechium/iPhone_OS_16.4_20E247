//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPresentationController.h"

@class NSMapTable, NSString, UIView, _UISearchPresentationAssistant;
@protocol _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchPresentationController : UIPresentationController
{
    _UISearchPresentationAssistant *_assistant;	// 8 = 0x8
    UIView *_placeholderView;	// 16 = 0x10
    NSMapTable *_excisedSearchBarConstraitMap;	// 24 = 0x18
    NSMapTable *_placeholderConstraitMap;	// 32 = 0x20
    struct CGRect _finalFrameForContainerView;	// 40 = 0x28
    struct {
        unsigned int searchBarWasTableHeaderView:1;
        unsigned int excisedSearchBarDuringPresentation:1;
        unsigned int searchBarWantedAutolayoutBeforeExcision:1;
    } _controllerFlags;	// 72 = 0x48
}

+ (_Bool)shouldExciseSearchBar:(id)arg1 duringPresentationWithPresenter:(id)arg2;	// IMP=0x0010000000ecd981
@property(readonly, nonatomic) struct CGRect finalFrameForContainerView; // @synthesize finalFrameForContainerView=_finalFrameForContainerView;
@property(readonly, nonatomic) unsigned long long edgeForHidingNavigationBar;
@property(readonly, nonatomic) _Bool forceObeyNavigationBarInsets;
@property(readonly, nonatomic) _Bool animatorShouldLayoutPresentationViews;
@property(readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property(readonly, nonatomic) double resultsControllerContentOffset;
@property(readonly, nonatomic) _Bool searchBarToBecomeTopAttached;
- (void)setContentVisible:(_Bool)arg1;	// IMP=0x0000000000ed1d9f
@property(readonly, nonatomic) double statusBarAdjustment;
@property(readonly, nonatomic) _Bool searchBarShouldClipToBounds;
@property(readonly, nonatomic) _Bool searchBarCanContainScopeBar;
@property(readonly, nonatomic) _Bool resultsUnderlapsSearchBar;
@property(readonly, nonatomic) _Bool shouldAccountForStatusBar;
@property(readonly, retain, nonatomic) UIView *searchBarContainerView;
- (id)_createVisualStyleForProvider:(id)arg1;	// IMP=0x0000000000ed1cdd
- (_Bool)_inheritsPresentingViewControllerThemeLevel;	// IMP=0x0000000000ed1cd5
- (id)_presentationControllerForTraitCollection:(id)arg1;	// IMP=0x0000000000ed1c30
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000ed1c1e
- (long long)adaptivePresentationStyle;	// IMP=0x0000000000ed1c13
- (void)_updatePresentingViewControllerContentScrollViewWithOffsets:(struct CGSize)arg1 transitionCoordinator:(id)arg2;	// IMP=0x0000000000ed1a8a
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000ed1a2e
- (void)_layoutPresentationWithSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;	// IMP=0x0000000000ed12f9
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000ed1247
- (void)containerViewWillLayoutSubviews;	// IMP=0x0000000000ed11b6
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x0000000000ed0e04
- (_Bool)_shouldKeepCurrentFirstResponder;	// IMP=0x0000000000ed0dfc
- (_Bool)shouldPresentInFullscreen;	// IMP=0x0000000000ed0df4
- (_Bool)_shouldRespectDefinesPresentationContext;	// IMP=0x0000000000ed0dec
- (_Bool)_shouldDisableInteractionDuringTransitions;	// IMP=0x0000000000ed0de4
- (double)_visibleRefreshControlHeightForTableView:(id)arg1;	// IMP=0x0000000000ed0d36
- (void)_placeSearchBarBackIntoOriginalContext;	// IMP=0x0000000000ed0a18
- (void)_exciseSearchBarFromCurrentContext;	// IMP=0x0000000000ed02b3
- (id)_constraintCopyOfConstraint:(id)arg1 replaceItem:(id)arg2 withItem:(id)arg3;	// IMP=0x0000000000ed01b4
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000ed0021
- (void)_transitionFromDidEnd;	// IMP=0x0000000000ed000a
- (void)_transitionFromWillBegin;	// IMP=0x0000000000ecfff8
- (void)_transitionToDidEnd;	// IMP=0x0000000000ecffe1
- (void)_transitionToWillBegin;	// IMP=0x0000000000ecffcf
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000ecff74
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000000ecff28
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000ecfecd
- (void)presentationTransitionWillBegin;	// IMP=0x0000000000ecfe81
- (void)_dismissalTransitionWithSearchBarHostedByNavBarDidEnd:(_Bool)arg1;	// IMP=0x0000000000ecfca7
- (void)_dismissalTransitionWithSearchBarHostedByNavBarWillBegin;	// IMP=0x0000000000ecfa08
- (void)_presentationTransitionWithSearchBarHostedByNavBarDidEnd:(_Bool)arg1;	// IMP=0x0000000000ecf97c
- (void)_presentationTransitionWithSearchBarHostedByNavBarWillBegin;	// IMP=0x0000000000ecf368
- (void)_dismissalTransitionWithSearchBarNotHostedByNavBarDidEnd:(_Bool)arg1;	// IMP=0x0000000000ecf16a
- (void)_dismissalTransitionWithSearchBarNotHostedByNavBarWillBegin;	// IMP=0x0000000000ecea04
- (void)_presentationTransitionWithSearchBarNotHostedByNavBarDidEnd:(_Bool)arg1;	// IMP=0x0000000000ece8f9
- (void)_presentationTransitionWithSearchBarNotHostedByNavBarWillBegin;	// IMP=0x0000000000ecdbca
- (void)hideBackgroundObscuringView;	// IMP=0x0000000000ecdb92
- (void)showBackgroundObscuringView;	// IMP=0x0000000000ecdb57
@property(readonly, nonatomic) UIView *backgroundObscuringView;
- (void)_updateContainerFinalFrameForNonExcisedSearchBar;	// IMP=0x0000000000ecda39
- (void)dealloc;	// IMP=0x0000000000ecd8f2
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0000000000ecd808

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

