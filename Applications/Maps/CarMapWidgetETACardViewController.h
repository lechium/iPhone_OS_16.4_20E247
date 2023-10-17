//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CarDynamicBlurView, CarVisualEffectView, GuidanceETA, NSArray, NSString, UILabel, UIStackView;

@interface CarMapWidgetETACardViewController : UIViewController
{
    unsigned long long _destination;	// 8 = 0x8
    UILabel *_etaLabel;	// 16 = 0x10
    UILabel *_timeLabel;	// 24 = 0x18
    UILabel *_distanceLabel;	// 32 = 0x20
    NSArray *_currentArrangedSubviews;	// 40 = 0x28
    UIStackView *_labelStackView;	// 48 = 0x30
    CarVisualEffectView *_dashboardBackgroundView;	// 56 = 0x38
    CarDynamicBlurView *_hybridICBackgroundView;	// 64 = 0x40
    _Bool _shouldUseWideLayout;	// 72 = 0x48
    GuidanceETA *_latestETA;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000898045
@property(nonatomic) _Bool shouldUseWideLayout; // @synthesize shouldUseWideLayout=_shouldUseWideLayout;
@property(retain, nonatomic) GuidanceETA *latestETA; // @synthesize latestETA=_latestETA;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (id)_cardBackgroundView;	// IMP=0x0010000000897e60
- (id)_effectForInterfaceStyle:(long long)arg1;	// IMP=0x0010000000897e36
- (CDStruct_0af47fae)cornerMaskForCarCardLayout:(CDStruct_de0926f2)arg1;	// IMP=0x0010000000897dfa
- (id)backgroundViewForCarCardLayout:(CDStruct_de0926f2)arg1 scale:(double)arg2 userInterfaceStyle:(long long)arg3;	// IMP=0x0010000000897de8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000897b70
- (void)_updateContents;	// IMP=0x0010000000897538
- (void)_updateArrangedSubviewsIfNeeded;	// IMP=0x00100000008973ae
- (void)_setupConstraints;	// IMP=0x0010000000896e29
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000896de8
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000896cbe
- (void)viewDidLoad;	// IMP=0x001000000089687c
- (id)initWithDestination:(unsigned long long)arg1;	// IMP=0x0010000000896834

// Remaining properties
@property(nonatomic) struct CGSize availableCardSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic, getter=isTransitioning) _Bool transitioning;

@end
