//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextField.h>

@class NSString, UITextInputPasswordRules;

__attribute__((visibility("hidden")))
@interface SKUISignInTextView : UITextField
{
    long long _keyboardType;	// 8 = 0x8
}

@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) long long autocapitalizationType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end
