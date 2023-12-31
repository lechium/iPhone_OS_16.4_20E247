//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardPresentationController, MKViewWithHairline, MacMenuPresentationController, MacPopoverPresentationController, NSArray, NSLayoutConstraint, NSString, UIView;
@protocol ActionCoordination;

@interface ControlContaineeViewController
{
    UIView *_headerView;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    MKViewWithHairline *_grabberSafeAreaView;	// 24 = 0x18
    NSLayoutConstraint *_grabberSafeAreaHeightConstraint;	// 32 = 0x20
    id <ActionCoordination> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000090522c
@property(nonatomic) __weak id <ActionCoordination> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long floatingControlsOptions;
- (void)didChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x0010000000905171
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000009050ee
- (void)initConstraints;	// IMP=0x0010000000904ed7
- (void)viewDidLoad;	// IMP=0x0010000000904b70
- (id)contentView;	// IMP=0x0010000000904b5b
- (id);	// IMP=0x0010000000904b46

// Remaining properties
@property(readonly, nonatomic) _Bool allowsLongPressToMarkLocation;
@property(readonly, nonatomic) _Bool allowsQuickActionMenuInMap;
@property(readonly, nonatomic) CardPresentationController *cardPresentationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double headerHeight;
@property(readonly, nonatomic) MacMenuPresentationController *macMenuPresentationController;
@property(readonly, nonatomic) MacPopoverPresentationController *macPopoverPresentationController;
@property(nonatomic) unsigned long long preferredPresentationStyle;
@property(readonly, nonatomic) unsigned long long retainedLayout;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *topBannerItems;

@end

