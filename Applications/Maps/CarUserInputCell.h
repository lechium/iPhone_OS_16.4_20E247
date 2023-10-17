//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CarDictationButton, CarFocusableButton, NSArray, NSString;
@protocol CarUserInputCellDelegate;

@interface CarUserInputCell : UITableViewCell
{
    CarDictationButton *_dictationButton;	// 8 = 0x8
    CarFocusableButton *_keyboardButton;	// 16 = 0x10
    NSArray *_keyboardDisabledConstraints;	// 24 = 0x18
    NSArray *_keyboardEnabledConstraints;	// 32 = 0x20
    NSArray *_currentKeyboardConstraints;	// 40 = 0x28
    _Bool _keyboardDisabled;	// 48 = 0x30
    id <CarUserInputCellDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000118fec
@property(nonatomic, getter=isKeyboardDisabled) _Bool keyboardDisabled; // @synthesize keyboardDisabled=_keyboardDisabled;
@property(nonatomic) __weak id <CarUserInputCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (_Bool)canBecomeFocused;	// IMP=0x0010000000118e85
- (void)_handleKeyboardTouchGesture:(id)arg1;	// IMP=0x0010000000118e2e
- (void)_handleKeyboardSelectPressGesture:(id)arg1;	// IMP=0x0010000000118dd7
- (void)_handleDictationTouchGesture:(id)arg1;	// IMP=0x0010000000118d83
- (void)_handleDictationSelectPressGesture:(id)arg1;	// IMP=0x0010000000118d2f
- (void)_updateConstraintsAnimated:(_Bool)arg1 alongWithAnimation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000011892f
- (void)setKeyboardDisabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000011889f
- (void)_externalDeviceChanged:(id)arg1;	// IMP=0x0010000000118826
- (void)_installGestureRecognizers;	// IMP=0x001000000011866d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000011862c
- (void)didMoveToWindow;	// IMP=0x00100000001185eb
- (_Bool)_siriButtonShouldBeExpanded;	// IMP=0x00100000001185db
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000117a42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
