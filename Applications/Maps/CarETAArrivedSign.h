//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CarCardRoundedButton, GuidanceETA, NSArray, NSString, UIStackView;
@protocol CarETACardSignDelegate;

@interface CarETAArrivedSign : UIView
{
    UIStackView *_buttonsStackView;	// 8 = 0x8
    CarCardRoundedButton *_nextStopButton;	// 16 = 0x10
    CarCardRoundedButton *_endNavigationButton;	// 24 = 0x18
    GuidanceETA *_latestETA;	// 32 = 0x20
    id <CarETACardSignDelegate> _delegate;	// 40 = 0x28
    long long _state;	// 48 = 0x30
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00200000004097df
- (void).cxx_destruct;	// IMP=0x002000000040a75c
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <CarETACardSignDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GuidanceETA *latestETA; // @synthesize latestETA=_latestETA;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)_onNextStopPressed:(id)arg1;	// IMP=0x001000000040a580
- (void)_onEndPressed:(id)arg1;	// IMP=0x001000000040a50e
- (void)_updateContents;	// IMP=0x001000000040a014
- (void)_setupStyling;	// IMP=0x0010000000409bf4
- (void)_setupConstraints;	// IMP=0x0010000000409a6d
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000004097e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

