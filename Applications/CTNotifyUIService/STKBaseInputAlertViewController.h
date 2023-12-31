//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, UITextField, UIView;

@interface STKBaseInputAlertViewController
{
    UITextField *_inputTextField;	// 8 = 0x8
    UIView *_sendingFieldView;	// 16 = 0x10
    UIButton *_button;	// 24 = 0x18
    UIView *_textBorderView;	// 32 = 0x20
    _Bool _digitsOnly;	// 40 = 0x28
    unsigned long long _minLength;	// 48 = 0x30
    unsigned long long _maxLength;	// 56 = 0x38
    UIView *_buttonBorderView;	// 64 = 0x40
}

+ (_Bool)wantsTextView;	// IMP=0x0020000000003885
- (void).cxx_destruct;	// IMP=0x00200000000049b0
@property(readonly, nonatomic) UIView *buttonBorderView; // @synthesize buttonBorderView=_buttonBorderView;
@property(readonly, nonatomic) UITextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(readonly, nonatomic) UIView *textBorderView; // @synthesize textBorderView=_textBorderView;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) UIView *sendingFieldView; // @synthesize sendingFieldView=_sendingFieldView;
- (void)leftNavigationButtonPressed;	// IMP=0x0010000000004955
- (void)_sendClicked;	// IMP=0x00100000000048c9
- (void)sendButtonPressed;	// IMP=0x00100000000048b7
- (void)setDigitsOnly:(_Bool)arg1;	// IMP=0x0010000000004885
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0010000000004768
- (id)newBottomBar;	// IMP=0x0010000000003c7b
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;	// IMP=0x0010000000003c42
- (id)newTopBar;	// IMP=0x0010000000003a17
- (void)setMaxLength:(unsigned long long)arg1;	// IMP=0x0010000000003a06
- (void)setMinLength:(unsigned long long)arg1;	// IMP=0x00100000000039f5
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000000039ac
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000003963
- (void)setText:(id)arg1;	// IMP=0x0010000000003951
- (void)viewDidLoad;	// IMP=0x0010000000003902
- (void)dealloc;	// IMP=0x001000000000388d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

