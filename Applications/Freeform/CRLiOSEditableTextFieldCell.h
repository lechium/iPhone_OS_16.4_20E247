//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITextField;

@interface CRLiOSEditableTextFieldCell
{
    UITextField *mTextField;	// 8 = 0x8
    _Bool _useNaturalAlignment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001a12f3
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=mTextField;
@property(nonatomic) _Bool useNaturalAlignment; // @synthesize useNaturalAlignment=_useNaturalAlignment;
- (_Bool)accessibilityActivate;	// IMP=0x00100000001a1299
- (unsigned long long)accessibilityTraits;	// IMP=0x00100000001a1289
- (id)accessibilityValue;	// IMP=0x00100000001a126c
- (_Bool)isAccessibilityElement;	// IMP=0x00100000001a1257
- (void)textFieldTextDidBeginEditing:(id)arg1;	// IMP=0x00100000001a1157
- (void)endEditing;	// IMP=0x00100000001a113a
- (void)beginEditing;	// IMP=0x00100000001a111d
- (_Bool)isTextFieldEditing;	// IMP=0x00100000001a1100
- (void)updateConstraints;	// IMP=0x00100000001a0e24
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000001a0cd7

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: textFieldEditing
// Property attributes: (null)


@end

