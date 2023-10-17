//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol PasscodeEmbeddedViewControllerDelegate;

@interface PasscodeEmbeddedCustomizableViewController
{
    unsigned long long _passcodeLength;	// 72 = 0x48
    _Bool _hasAlphanumericPasscode;	// 80 = 0x50
    id <PasscodeEmbeddedViewControllerDelegate> _delegate;	// 88 = 0x58
    NSString *_placeholderText;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000207a2
@property(retain, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(nonatomic) __weak id <PasscodeEmbeddedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_verifyTextField:(id)arg1;	// IMP=0x001000000002044e
- (_Bool)verifyPasscode:(id)arg1;	// IMP=0x0010000000020446
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00100000000203ad
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0010000000020189
- (long long)alphanumericFieldTextAlignment;	// IMP=0x001000000002017e
- (id)alphanumericFieldPlaceholder;	// IMP=0x001000000001ffdd
- (void)setPasscodeFocused:(_Bool)arg1;	// IMP=0x001000000001ffae
- (_Bool)hasAlphaNumericPasscode;	// IMP=0x001000000001ff9e
- (unsigned long long)passcodeLength;	// IMP=0x001000000001ff8d
- (id)initWithPasscodeLength:(long long)arg1 alphanumeric:(_Bool)arg2;	// IMP=0x001000000001fea3

@end
