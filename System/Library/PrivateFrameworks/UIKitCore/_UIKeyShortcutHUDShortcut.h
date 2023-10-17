//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UICommandAlternate, UIKeyCommand;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDShortcut
{
    NSString *_overrideTitle;	// 16 = 0x10
    UIKeyCommand *_discoverabilityUIKeyCommand;	// 24 = 0x18
    NSMutableArray *_displayableAlternates;	// 32 = 0x20
    NSMutableDictionary *_alternatesMap;	// 40 = 0x28
    _UIKeyShortcutHUDShortcut *_baseShortcutForAlternate;	// 48 = 0x30
    UICommandAlternate *_alternateForBaseShortcut;	// 56 = 0x38
    id _originalTarget;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000010891b3
+ (id)shortcutWithUIKeyCommand:(id)arg1;	// IMP=0x0010000001088b58
- (void).cxx_destruct;	// IMP=0x000000000108963e
@property(nonatomic) __weak id originalTarget; // @synthesize originalTarget=_originalTarget;
@property(nonatomic) __weak UICommandAlternate *alternateForBaseShortcut; // @synthesize alternateForBaseShortcut=_alternateForBaseShortcut;
@property(nonatomic) __weak _UIKeyShortcutHUDShortcut *baseShortcutForAlternate; // @synthesize baseShortcutForAlternate=_baseShortcutForAlternate;
@property(readonly, nonatomic) NSMutableDictionary *alternatesMap; // @synthesize alternatesMap=_alternatesMap;
@property(readonly, nonatomic) NSMutableArray *displayableAlternates; // @synthesize displayableAlternates=_displayableAlternates;
@property(retain, nonatomic) UIKeyCommand *discoverabilityUIKeyCommand; // @synthesize discoverabilityUIKeyCommand=_discoverabilityUIKeyCommand;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000010892be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000010891bb
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 shortcutVisit:(CDUnknownBlockType)arg2;	// IMP=0x000000000108919c
@property(readonly, nonatomic) UIKeyCommand *uiKeyCommand;
- (_Bool)_isEquivalentToPasteAndMatchStyleShortcut;	// IMP=0x000000000108913e
- (_Bool)_isEquivalentToPasteShortcut;	// IMP=0x00000000010890f2
@property(readonly, nonatomic) _Bool isPasteShortcut;
- (id)shortcutToDisplayForModifierFlags:(long long)arg1;	// IMP=0x0000000001088fe6
@property(readonly, nonatomic) NSArray *shortcutAlternates;
@property(readonly, nonatomic) unsigned long long attributes;
@property(readonly, nonatomic) NSString *input;
@property(readonly, nonatomic) long long modifierFlags;
- (void)_updateOverrideTitle;	// IMP=0x0000000001088d90
@property(readonly, nonatomic) NSString *hudTitle;
@property(readonly, nonatomic) NSString *discoverabilityTitle;
- (id)init;	// IMP=0x0000000001088bab

@end
