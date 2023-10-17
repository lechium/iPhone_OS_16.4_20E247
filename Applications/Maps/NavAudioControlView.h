//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class EventTap, GCDTimer, NSArray, NSLayoutConstraint;
@protocol NavAudioControlViewDelegate;

@interface NavAudioControlView : UIView
{
    GCDTimer *_timer;	// 8 = 0x8
    _Bool _expanded;	// 16 = 0x10
    id <NavAudioControlViewDelegate> _delegate;	// 24 = 0x18
    NSArray *_availableAudioTypes;	// 32 = 0x20
    unsigned long long _currentAudioType;	// 40 = 0x28
    NSArray *_buttons;	// 48 = 0x30
    EventTap *_eventTap;	// 56 = 0x38
    UIView *_maskView;	// 64 = 0x40
    UIView *_containerView;	// 72 = 0x48
    NSLayoutConstraint *_containerViewTopConstraint;	// 80 = 0x50
    UIView *_highlightView;	// 88 = 0x58
    NSLayoutConstraint *_highlightViewTopConstraint;	// 96 = 0x60
}

+ (unsigned long long)navAudioTypeForGuidanceLevel:(unsigned long long)arg1;	// IMP=0x00400000009124e9
- (void).cxx_destruct;	// IMP=0x0020000000912613
@property(readonly, nonatomic) NSLayoutConstraint *highlightViewTopConstraint; // @synthesize highlightViewTopConstraint=_highlightViewTopConstraint;
@property(readonly, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(readonly, nonatomic) NSLayoutConstraint *containerViewTopConstraint; // @synthesize containerViewTopConstraint=_containerViewTopConstraint;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) EventTap *eventTap; // @synthesize eventTap=_eventTap;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
// Error: Property attributes should begin with the type ('T') attribute, property name: currentAudioType
// Property attributes: (null)

@property(copy, nonatomic) NSArray *availableAudioTypes; // @synthesize availableAudioTypes=_availableAudioTypes;
@property(nonatomic) __weak id <NavAudioControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (int)analyticsTarget;	// IMP=0x001000000091250a
- (void)_handleEvent:(id)arg1;	// IMP=0x0010000000912215
- (void)_updateContent;	// IMP=0x00100000009120eb
- (double)highlightTopPosition;	// IMP=0x0010000000912034
- (double)containerTopPositionWhenCollapsedForAudioType:(unsigned long long)arg1;	// IMP=0x0010000000911f9b
- (double)expandedHeight;	// IMP=0x0010000000911c61
- (void)_animateContentUpdate;	// IMP=0x0010000000911a21
- (void)_rescheduleCollapse;	// IMP=0x00100000009118ef
- (void)_selectAudioType:(unsigned long long)arg1;	// IMP=0x001000000091176c
- (void)_pressedAudioTypeButton:(id)arg1;	// IMP=0x001000000091155a
- (id)_accessibilityTextForAudioType:(unsigned long long)arg1;	// IMP=0x001000000091147b
- (id)_accessibilityIdenfifierPrefixForAudioType:(unsigned long long)arg1;	// IMP=0x0010000000911450
- (id)_imageForAudioType:(unsigned long long)arg1;	// IMP=0x0010000000911352
- (void)_updateButtons;	// IMP=0x0010000000910c60
- (id)createButton;	// IMP=0x0010000000910c47
- (id)createBackgroundView;	// IMP=0x0010000000910bd9
- (void)didMoveToWindow;	// IMP=0x0010000000910b02
- (void)_setup;	// IMP=0x001000000090ffa9
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000090fbd5
- (double)highlightWidth;	// IMP=0x001000000090fbba
- (double)fullHeight;	// IMP=0x001000000090fbac
- (double)collapsedDimension;	// IMP=0x001000000090fb9e
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000090fb44
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000090fa76

@end
