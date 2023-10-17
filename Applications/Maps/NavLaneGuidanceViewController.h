//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MUBlurView, NSLayoutConstraint, NSString, NavSignLaneGuidanceInfo, NavSignLaneGuidanceView;
@protocol NavLaneGuidanceViewControllerDelegate;

@interface NavLaneGuidanceViewController : UIViewController
{
    NSString *_blurGroup;	// 8 = 0x8
    id <NavLaneGuidanceViewControllerDelegate> _delegate;	// 16 = 0x10
    double _layoutProgress;	// 24 = 0x18
    MUBlurView *_backgroundView;	// 32 = 0x20
    NavSignLaneGuidanceView *_laneGuidanceView;	// 40 = 0x28
    NSLayoutConstraint *_laneGuidanceHeightConstraint;	// 48 = 0x30
    NavSignLaneGuidanceInfo *_laneGuidanceInfo;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000004602f0
@property(retain, nonatomic) NavSignLaneGuidanceInfo *laneGuidanceInfo; // @synthesize laneGuidanceInfo=_laneGuidanceInfo;
@property(retain, nonatomic) NSLayoutConstraint *laneGuidanceHeightConstraint; // @synthesize laneGuidanceHeightConstraint=_laneGuidanceHeightConstraint;
@property(retain, nonatomic) NavSignLaneGuidanceView *laneGuidanceView; // @synthesize laneGuidanceView=_laneGuidanceView;
@property(retain, nonatomic) MUBlurView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double layoutProgress; // @synthesize layoutProgress=_layoutProgress;
@property(nonatomic) __weak id <NavLaneGuidanceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_insertBackgroundView;	// IMP=0x00100000004600dd
- (void)_updateLaneGuidanceAnimated:(_Bool)arg1;	// IMP=0x001000000045fec2
- (void)navigationService:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x001000000045fe8d
- (void)navigationService:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x001000000045fd70
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000045fb67
@property(readonly, nonatomic) _Bool hasLaneGuidance;
- (void)viewDidLoad;	// IMP=0x001000000045f535
- (id)initWithDelegate:(id)arg1 blurGroup:(id)arg2;	// IMP=0x001000000045f410
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000045f408

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
