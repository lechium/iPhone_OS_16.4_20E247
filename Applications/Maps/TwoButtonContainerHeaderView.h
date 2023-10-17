//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardButton, UIColor, UIMenu;

@interface TwoButtonContainerHeaderView
{
    CardButton *_quickActionButtonView;	// 8 = 0x8
    unsigned long long _cardButtonType;	// 16 = 0x10
    UIMenu *_quickActionButtonMenu;	// 24 = 0x18
    UIColor *_cardButtonTintColor;	// 32 = 0x20
    _Bool _cardButtonBlurred;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000905597
- (void)_customInitForSecondButton;	// IMP=0x0010000000905387
- (id)quickActionButtonView;	// IMP=0x0010000000905372
- (id)initWithAdditionalCardButtonType:(unsigned long long)arg1 tintColor:(id)arg2 buttonMenu:(id)arg3;	// IMP=0x001000000090528e

@end
