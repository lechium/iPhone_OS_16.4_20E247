//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCV9PassKitUI23EnterCurrencyAmountView11Coordinator : NSObject
{
    MISSING_TYPE *_nextDisabled;	// 8 = 0x8
    MISSING_TYPE *_amount;	// 32 = 0x20
    MISSING_TYPE *_amountGuide;	// 72 = 0x48
    MISSING_TYPE *_amountGuideColor;	// 104 = 0x68
    MISSING_TYPE *currencyCode;	// 128 = 0x80
    MISSING_TYPE *currentBalance;	// 144 = 0x90
    MISSING_TYPE *availableBalance;	// 164 = 0xa4
    MISSING_TYPE *minLoadAmount;	// 184 = 0xb8
    MISSING_TYPE *maxLoadAmount;	// 204 = 0xcc
    MISSING_TYPE *fundsActionType;	// 224 = 0xe0
    MISSING_TYPE *view;	// 232 = 0xe8
    MISSING_TYPE *keypadSuggestionSelected;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00000000003b6160
- (id)init;	// IMP=0x00000000003b6100
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;	// IMP=0x00000000003b6090
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;	// IMP=0x00000000003b6030
- (_Bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;	// IMP=0x00000000003b57b0

@end

