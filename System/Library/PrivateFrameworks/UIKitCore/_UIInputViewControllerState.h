//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, TIDocumentState, TITextInputTraits, UITextInputMode;

__attribute__((visibility("hidden")))
@interface _UIInputViewControllerState : NSObject
{
    _Bool _needsInputModeSwitchKey;	// 8 = 0x8
    TIDocumentState *_documentState;	// 16 = 0x10
    TITextInputTraits *_textInputTraits;	// 24 = 0x18
    UITextInputMode *_documentInputMode;	// 32 = 0x20
    NSUUID *_documentIdentifier;	// 40 = 0x28
}

+ (id)stateForKeyboardState:(id)arg1;	// IMP=0x00100000009daab2
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009daaaa
- (void).cxx_destruct;	// IMP=0x00000000009db489
@property(nonatomic) _Bool needsInputModeSwitchKey; // @synthesize needsInputModeSwitchKey=_needsInputModeSwitchKey;
@property(copy, nonatomic) NSUUID *documentIdentifier; // @synthesize documentIdentifier=_documentIdentifier;
@property(retain, nonatomic) UITextInputMode *documentInputMode; // @synthesize documentInputMode=_documentInputMode;
@property(retain, nonatomic) TITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property(retain, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;
- (id)description;	// IMP=0x00000000009db27a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009db026
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009daf61
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009dae08
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009dad61
- (void)createDocumentStateIfNecessary;	// IMP=0x00000000009daca1

@end
