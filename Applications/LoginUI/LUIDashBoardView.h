//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CNContact, LUIPrivacyView, LUIUserAvatarView, MTLumaDodgePillView, NSString, SBUICallToActionLabel, UIActivityIndicatorView, UILabel;

@interface LUIDashBoardView : UIView
{
    _Bool _callToActionLabelEnabled;	// 8 = 0x8
    _Bool _gettingReadyViewEnabled;	// 9 = 0x9
    NSString *_gettingReadyString;	// 16 = 0x10
    NSString *_subtitleString;	// 24 = 0x18
    UILabel *_greetingLabel;	// 32 = 0x20
    UILabel *_subtitleLabel;	// 40 = 0x28
    UILabel *_legalTextLabel;	// 48 = 0x30
    LUIPrivacyView *_privacyView;	// 56 = 0x38
    LUIUserAvatarView *_userAvatarView;	// 64 = 0x40
    SBUICallToActionLabel *_callToActionLabel;	// 72 = 0x48
    NSString *_callToActionLabelText;	// 80 = 0x50
    UIActivityIndicatorView *_spinner;	// 88 = 0x58
    MTLumaDodgePillView *_dynamicHomeAffordance;	// 96 = 0x60
    CNContact *_contact;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000331e8
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) MTLumaDodgePillView *dynamicHomeAffordance; // @synthesize dynamicHomeAffordance=_dynamicHomeAffordance;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(copy, nonatomic) NSString *callToActionLabelText; // @synthesize callToActionLabelText=_callToActionLabelText;
@property(retain, nonatomic) SBUICallToActionLabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;
@property(retain, nonatomic) LUIUserAvatarView *userAvatarView; // @synthesize userAvatarView=_userAvatarView;
@property(retain, nonatomic) LUIPrivacyView *privacyView; // @synthesize privacyView=_privacyView;
@property(retain, nonatomic) UILabel *legalTextLabel; // @synthesize legalTextLabel=_legalTextLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *greetingLabel; // @synthesize greetingLabel=_greetingLabel;
@property(retain, nonatomic) NSString *subtitleString; // @synthesize subtitleString=_subtitleString;
@property(retain, nonatomic) NSString *gettingReadyString; // @synthesize gettingReadyString=_gettingReadyString;
@property(nonatomic) _Bool gettingReadyViewEnabled; // @synthesize gettingReadyViewEnabled=_gettingReadyViewEnabled;
@property(nonatomic, getter=isCallToActionLabelEnabled) _Bool callToActionLabelEnabled; // @synthesize callToActionLabelEnabled=_callToActionLabelEnabled;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0010000000033045
- (id)_animationKeyForKeyPath:(id)arg1 iteration:(unsigned long long)arg2 reset:(_Bool)arg3;	// IMP=0x001000000003300f
- (void)_removeNormalAnimationsForKeyPath:(id)arg1 onLayer:(id)arg2;	// IMP=0x0010000000032f82
- (void)_removeResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;	// IMP=0x0010000000032f02
- (void)_addResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;	// IMP=0x0010000000032ccf
- (void)_addRepeatedAnimationWithProvider:(CDUnknownBlockType)arg1 animationDuration:(double)arg2 toLayer:(id)arg3;	// IMP=0x00100000000329fd
- (id)_textAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;	// IMP=0x0010000000032925
- (id)_textPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;	// IMP=0x001000000003272d
- (void)_addTextResetAnimation;	// IMP=0x0010000000032698
- (void)_addTextAnimation;	// IMP=0x0010000000032444
- (struct CGRect)_homeAffordanceRestingFrame;	// IMP=0x001000000003231a
- (void)_addHomeAffordanceResetAnimation;	// IMP=0x001000000003229b
- (void)_addHomeAffordanceAnimation;	// IMP=0x00100000000320af
- (id)_homeAffordancePositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;	// IMP=0x0010000000031ebc
- (void)stopProgressAnimation;	// IMP=0x0010000000031e36
- (void)startProgressAnimation;	// IMP=0x0010000000031dc4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000031d29
- (void)_setupDynamicHomeAffordance;	// IMP=0x0010000000031b2c
- (id)_legalString;	// IMP=0x00100000000319c9
- (void)_hideCallToAction;	// IMP=0x0010000000031554
- (void)_showCallToAction;	// IMP=0x00100000000314d2
- (void)_addTeachableMomentsResetAnimation;	// IMP=0x0010000000031483
- (void)_addTeachableMomentsAnimation;	// IMP=0x0010000000031455
- (void)didMoveToWindow;	// IMP=0x00100000000313e4
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00100000000313a8
- (void)setUser:(id)arg1 isTemporarySession:(_Bool)arg2;	// IMP=0x0010000000030698
- (void)applyStyle:(id)arg1;	// IMP=0x0010000000030398
- (id)_topConstraints;	// IMP=0x001000000002fb12
- (void)layoutSubviews;	// IMP=0x001000000002f45a
- (void)activateConstraints;	// IMP=0x001000000002f40a
- (void)dealloc;	// IMP=0x001000000002f3ca
- (void)commonInit;	// IMP=0x001000000002f1c2
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002f176
- (id)initWithFrame:(struct CGRect)arg1 callToActionLabelText:(id)arg2;	// IMP=0x001000000002f0d6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000002f0c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

