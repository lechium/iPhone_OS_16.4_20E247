//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RideBookingCurrencyAmount, UILabel;

@interface RidesharingTippingOptionView
{
    UILabel *_tipLabel;	// 8 = 0x8
    _Bool _selected;	// 16 = 0x10
    _Bool _other;	// 17 = 0x11
    RideBookingCurrencyAmount *_amount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000ae696b
@property(retain, nonatomic) RideBookingCurrencyAmount *amount; // @synthesize amount=_amount;
@property(nonatomic, getter=isOther) _Bool other; // @synthesize other=_other;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (id)description;	// IMP=0x0010000000ae68fe
- (void)updateTheme;	// IMP=0x0010000000ae650f
- (void)_commonInit;	// IMP=0x0010000000ae6003
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000ae5fa5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000ae5f36

@end

