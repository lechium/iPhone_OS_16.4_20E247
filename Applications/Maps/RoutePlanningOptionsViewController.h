//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ModalCardHeaderView, RoutePlanningOptionsDataSource, UIButton, UIStackView, UIView;
@protocol RoutePlanningDataCoordination;

@interface RoutePlanningOptionsViewController
{
    _Bool _didStartObservingUnsavedChanges;	// 16 = 0x10
    _Bool _didStartObservingCollectionViewBounds;	// 17 = 0x11
    _Bool _inUpdatePreferredContentSize;	// 18 = 0x12
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    unsigned long long _preferredPresentationStyle;	// 32 = 0x20
    id <RoutePlanningDataCoordination> _dataCoordinator;	// 40 = 0x28
    ModalCardHeaderView *_modalHeaderView;	// 48 = 0x30
    UIStackView *_stackView;	// 56 = 0x38
    UIView *_footerView;	// 64 = 0x40
    UIButton *_cancelButton;	// 72 = 0x48
    UIButton *_applyButton;	// 80 = 0x50
}

+ (Class)_dataSourceClass;	// IMP=0x0040000000636d3c
+ (_Bool)useCollectionView;	// IMP=0x0010000000636d34
- (void).cxx_destruct;	// IMP=0x0020000000639789
@property(nonatomic) __weak UIButton *applyButton; // @synthesize applyButton=_applyButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) ModalCardHeaderView *modalHeaderView; // @synthesize modalHeaderView=_modalHeaderView;
@property(readonly, nonatomic) __weak id <RoutePlanningDataCoordination> dataCoordinator; // @synthesize dataCoordinator=_dataCoordinator;
- (void)setPreferredPresentationStyle:(unsigned long long)arg1;	// IMP=0x0010000000639696
- (unsigned long long)preferredPresentationStyle;	// IMP=0x0010000000639685
- (int)_analyticsTarget;	// IMP=0x0010000000639625
- (int)_analyticsTargetForTransportType:(long long)arg1;	// IMP=0x0010000000639608
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0010000000639564
- (void)_presentRAP;	// IMP=0x00100000006393a6
- (void)dataSourceDidRebuildSections:(id)arg1;	// IMP=0x0010000000639365
- (void)_didTapDoneButton:(id)arg1;	// IMP=0x0010000000639246
- (void)_didTapCancelButton:(id)arg1;	// IMP=0x0010000000639154
- (void)handleDismissAction:(id)arg1;	// IMP=0x0010000000639142
- (void)_updateDoneButtonIfNeeded;	// IMP=0x001000000063904b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000638d34
- (id)_titleForTransportType:(long long)arg1;	// IMP=0x0010000000638c3e
- (struct CGSize)_calculatePreferredContentSize;	// IMP=0x0010000000638a8d
- (void)_updatePreferredContentSize;	// IMP=0x00100000006389e5
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000006388da
- (id)initialConstraints;	// IMP=0x0010000000637f76
- (void)setupSubviews;	// IMP=0x00100000006374bc
- (void)viewDidLoad;	// IMP=0x00100000006370f5
@property(readonly, nonatomic) RoutePlanningOptionsDataSource *routeOptionsDataSource;
- (id)initWithDataCoordinator:(id)arg1 automaticallySaveChanges:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000636e6d
- (void)dealloc;	// IMP=0x0010000000636d86
- (_Bool)shouldCollapseFirstCollectionViewSectionHeader;	// IMP=0x0010000000636d7e
- (long long)collectionViewConfigurationSeparatorStyle;	// IMP=0x0010000000636d67
- (long long)collectionViewListLayoutAppearanceStyle;	// IMP=0x0010000000636d4d

@end
