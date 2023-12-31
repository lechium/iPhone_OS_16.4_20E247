//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextField.h>

@class MISSING_TYPE, NSAttributedString, NSNumberFormatter, NSString, NSUndoManager, UIColor, UITextRange;
@protocol UITextFieldDelegate;

@interface _TtC8Freeform20CRLiOSValueTextField : UITextField
{
    MISSING_TYPE *info;	// 8 = 0x8
    MISSING_TYPE *needsReloadInputViews;	// 147 = 0x93
    MISSING_TYPE *cachedInputAssistantGroups;	// 152 = 0x98
    MISSING_TYPE *updatesValueOnTextChanged;	// 168 = 0xa8
    MISSING_TYPE *inspectorBlockAppearanceColor;	// 176 = 0xb0
    MISSING_TYPE *blockLayer;	// 184 = 0xb8
    MISSING_TYPE *blockMaskLayer;	// 192 = 0xc0
    MISSING_TYPE *isReplacingText;	// 200 = 0xc8
    MISSING_TYPE *cachedLastInfo;	// 208 = 0xd0
    MISSING_TYPE *forwardDelegate;	// 352 = 0x160
    MISSING_TYPE *allowsSelectionChanges;	// 360 = 0x168
    MISSING_TYPE *blockMetrics;	// 368 = 0x170
    MISSING_TYPE *contentSizeNotificationToken;	// 384 = 0x180
    MISSING_TYPE *hideSelectionUI;	// 392 = 0x188
}

- (void).cxx_destruct;	// IMP=0x0040000000a69060
@property(nonatomic, retain) NSAttributedString *accessibilityAttributedValue;
@property(nonatomic) double maximumValue;
@property(nonatomic) double minimumValue;
@property(nonatomic) _Bool hasMaximumValue;
@property(nonatomic) _Bool hasMinimumValue;
- (_Bool)scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint)arg2;	// IMP=0x0010000000a65650
- (_Bool)_scribbleInteractionShouldDisableInputAssistant:(id)arg1;	// IMP=0x0010000000a65640
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0010000000a65510
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x0010000000a65440
- (void)textFieldDidChangeSelection:(id)arg1;	// IMP=0x0010000000a653f0
- (void)textDidChange:(id)arg1;	// IMP=0x0010000000a65370
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0010000000a652e0
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;	// IMP=0x0010000000a65280
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x0010000000a65260
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0010000000a65210
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x0010000000a651b0
@property(nonatomic) struct CGRect bounds;
- (_Bool)resignFirstResponder;	// IMP=0x0010000000a64e80
- (void)didMoveToWindow;	// IMP=0x0010000000a64d30
@property(nonatomic, retain) UITextRange *selectedTextRange;
@property(nonatomic, retain) UIColor *inspectorBlockAppearanceColor; // @synthesize inspectorBlockAppearanceColor;
@property(nonatomic) long long blockAppearance;
@property(nonatomic, readonly) _Bool isUserCurrentlyInteracting;
@property(nonatomic, copy) NSString *text;
@property(nonatomic, retain) id <UITextFieldDelegate> delegate;
@property(nonatomic) double value;
@property(nonatomic, retain) NSNumberFormatter *formatter;
@property(nonatomic, retain) UIColor *tintColor;
- (void)tintColorDidChange;	// IMP=0x0010000000a639d0
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x0010000000a63900
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x0010000000a63780
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x0010000000a63560
- (void)layoutSubviews;	// IMP=0x0010000000a634d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000a59b50
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000a59ab0

@end

