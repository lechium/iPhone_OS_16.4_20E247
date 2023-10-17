//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ActionCoordinator, NSArray, UIColor, UIStackView;

@interface RouteAdvisoriesView : UIView
{
    UIColor *_overrideTextColor;	// 8 = 0x8
    _Bool _isSelected;	// 16 = 0x10
    _Bool _hasLoggedAdvisoryAnalytics;	// 17 = 0x11
    UIStackView *_advisoryStackView;	// 24 = 0x18
    NSArray *_viewModels;	// 32 = 0x20
    ActionCoordinator *_coordinator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000009e3eb7
@property(nonatomic) __weak ActionCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(retain, nonatomic) UIStackView *advisoryStackView; // @synthesize advisoryStackView=_advisoryStackView;
- (void)refreshContent;	// IMP=0x00100000009e3830
- (void)_logAnalyticsIfNeeded;	// IMP=0x00100000009e35cf
- (void)setAdvisories:(id)arg1 coordinator:(id)arg2;	// IMP=0x00100000009e3518
@property(readonly, nonatomic) _Bool isVisible;
- (void)setOverrideTextColor:(id)arg1 isSelected:(_Bool)arg2;	// IMP=0x00100000009e32c7
- (void)setupSubViews;	// IMP=0x00100000009e2e82
- (void)didMoveToWindow;	// IMP=0x00100000009e2e14
- (id)init;	// IMP=0x00100000009e2db1

@end
