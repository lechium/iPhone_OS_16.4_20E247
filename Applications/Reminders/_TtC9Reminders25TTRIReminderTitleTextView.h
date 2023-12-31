//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_$s15RemindersUICore21TTRIExpandingTextViewCN.h"

@class MISSING_TYPE, NSString;
@protocol UITextInputDelegate;

@interface _TtC9Reminders25TTRIReminderTitleTextView : _$s15RemindersUICore21TTRIExpandingTextViewCN
{
    MISSING_TYPE *tokenInteraction;	// 56 = 0x38
    MISSING_TYPE *isChangingSelection;	// 64 = 0x40
    MISSING_TYPE *reminderTextStorage;	// 72 = 0x48
    MISSING_TYPE *suggestions;	// 80 = 0x50
    MISSING_TYPE *firstCharNeedsCapitalization;	// 96 = 0x60
    MISSING_TYPE *needsAdjustSelectionToSelectToken;	// 97 = 0x61
    MISSING_TYPE *needsAdjustInternalTypingAttributes;	// 98 = 0x62
    MISSING_TYPE *wantsCapitalizeNextCharacter;	// 99 = 0x63
    MISSING_TYPE *styleTypingAttributeState;	// 100 = 0x64
}

- (void).cxx_destruct;	// IMP=0x00400000002634d0
- (void)convertTextToHashtag:(id)arg1;	// IMP=0x00100000002621d0
- (void)adoptForeignHashtag:(id)arg1;	// IMP=0x00100000002621b0
- (void)removeHashtagAttributedText:(id)arg1;	// IMP=0x0010000000262120
- (void)removeHashtagAttribute:(id)arg1;	// IMP=0x0010000000262100
- (void)numberedListStyleAction:(id)arg1;	// IMP=0x00100000002620f0
- (void)dashedListStyleAction:(id)arg1;	// IMP=0x0010000000261fe0
- (void)bulletedListStyleAction:(id)arg1;	// IMP=0x0010000000261fd0
@property(nonatomic, readonly) _Bool canBecomeFocused;
@property(nonatomic, copy) NSString *accessibilityValue;
- (void)layoutSubviews;	// IMP=0x0010000000261ed0
- (void)endSelectionChange;	// IMP=0x0010000000261d40
- (void)beginSelectionChange;	// IMP=0x0010000000261ce0
- (void)validateCommand:(id)arg1;	// IMP=0x0010000000261c90
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000261b40
- (void)toggleUnderline:(id)arg1;	// IMP=0x0010000000261540
- (void)toggleItalics:(id)arg1;	// IMP=0x0010000000261440
- (void)toggleBoldface:(id)arg1;	// IMP=0x0010000000261340
- (void)paste:(id)arg1;	// IMP=0x00100000002612a0
- (void)copy:(id)arg1;	// IMP=0x0010000000261120
- (void)insertTextSuggestion:(id)arg1;	// IMP=0x0010000000260ef0
@property(nonatomic, retain) id <UITextInputDelegate> inputDelegate;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000260740

@end

