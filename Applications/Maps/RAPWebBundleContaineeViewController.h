//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPReport, RAPWebBundleHomeViewController, UINavigationController;

@interface RAPWebBundleContaineeViewController
{
    RAPReport *_report;	// 8 = 0x8
    RAPWebBundleHomeViewController *_contentViewController;	// 16 = 0x10
    UINavigationController *_navController;	// 24 = 0x18
    double _cardContentsHeight;	// 32 = 0x20
    double _keyboardHeight;	// 40 = 0x28
    _Bool _keyboardShown;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000018d9ed
- (void)_keyboardAboutToHide:(id)arg1;	// IMP=0x001000000018d9cb
- (void)_keyboardAboutToChangeFrame:(id)arg1;	// IMP=0x001000000018d9a8
- (void)_keyboardAboutToShow:(id)arg1;	// IMP=0x001000000018d989
- (void)_handleKeyboardNotification:(id)arg1 aboutToHide:(_Bool)arg2;	// IMP=0x001000000018d710
- (void)updatePreferredContentSize;	// IMP=0x001000000018d3cd
- (void)saveInitialCardHeight:(double)arg1;	// IMP=0x001000000018d1a9
- (void)updateCardHeight:(double)arg1;	// IMP=0x001000000018d128
- (void)enableDismissByGesture:(_Bool)arg1;	// IMP=0x001000000018d037
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x001000000018d025
- (void)didDismissByGesture;	// IMP=0x001000000018d008
- (_Bool)_supportsFullHeightCardsOnly;	// IMP=0x001000000018cf9a
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x001000000018cde7
- (id)webBundleQuestion;	// IMP=0x001000000018cd58
- (void)_setInitialCardHeightIfNeeded;	// IMP=0x001000000018cc2b
- (void)_setupConstraints;	// IMP=0x001000000018c89f
- (void)_setupViews;	// IMP=0x001000000018c6ae
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000018c639
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000018c51d
- (void)viewDidLoad;	// IMP=0x001000000018c4ab
- (id)initWithReport:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018c3bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

