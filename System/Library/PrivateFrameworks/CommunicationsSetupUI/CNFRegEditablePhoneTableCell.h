//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CNFRegEditablePhoneTableCell
{
    SEL _countryCodeSelector;	// 240 = 0xf0
    NSString *_previousValue;	// 248 = 0xf8
}

- (CDStruct_856ef1b3)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;	// IMP=0x000000000006b43b
- (id)countryCode;	// IMP=0x000000000006b3ba
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;	// IMP=0x000000000006b331
- (void)dealloc;	// IMP=0x000000000006b2c3
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000006b230

@end

