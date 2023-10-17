//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UIAlertController, UIKBTree, UILabel, UILexicon, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutCursor
{
    UIKBTree *_indirectKeyboard;	// 720 = 0x2d0
    UIView *_selectionView;	// 728 = 0x2d8
    NSArray *_keyplaneKeys;	// 736 = 0x2e0
    long long _selectedKeyIndex;	// 744 = 0x2e8
    _Bool _ignoreEventsUntilPressEnds;	// 752 = 0x2f0
    UILexicon *_recentInputs;	// 760 = 0x2f8
    _Bool _disableTouchInput;	// 768 = 0x300
    UIKBTree *_cachedMultitapKeyplane;	// 776 = 0x308
    _Bool _cachedCanMultitap;	// 784 = 0x310
    UILabel *_dictationHelpLabel;	// 792 = 0x318
    _Bool _didVariantDelete;	// 800 = 0x320
    _Bool _isForwardingEvent;	// 801 = 0x321
    int _overridenSelectedKeyType;	// 804 = 0x324
    struct CGPoint _keyplaneSwitchSelectedKeyFrameCenter;	// 808 = 0x328
    _Bool _selectInitialKey;	// 824 = 0x338
    _Bool _suppressOperations;	// 825 = 0x339
    _Bool _overrideInitialKey;	// 826 = 0x33a
    _Bool _shouldConfigureFloatingContentView;	// 827 = 0x33b
    _Bool _shouldToggleLetterCaseNext;	// 828 = 0x33c
    UIAlertController *_recentInputsAlert;	// 832 = 0x340
    NSString *_keyplaneBeforeDictation;	// 840 = 0x348
    long long _selectedKeyBeforeDictation;	// 848 = 0x350
    unsigned long long _lastSelectedKeyIndex;	// 856 = 0x358
    UIWindow *_focusWindow;	// 864 = 0x360
}

+ (struct CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;	// IMP=0x0010000000a9c453
+ (id)carKeyboardNameForKeyboard:(id)arg1 screenTraits:(id)arg2;	// IMP=0x0010000000a9c334
- (void).cxx_destruct;	// IMP=0x0000000000aa61d6
@property(nonatomic) __weak UIWindow *focusWindow; // @synthesize focusWindow=_focusWindow;
@property(nonatomic) _Bool shouldToggleLetterCaseNext; // @synthesize shouldToggleLetterCaseNext=_shouldToggleLetterCaseNext;
@property(nonatomic) _Bool shouldConfigureFloatingContentView; // @synthesize shouldConfigureFloatingContentView=_shouldConfigureFloatingContentView;
@property(nonatomic) unsigned long long lastSelectedKeyIndex; // @synthesize lastSelectedKeyIndex=_lastSelectedKeyIndex;
@property(nonatomic) _Bool overrideInitialKey; // @synthesize overrideInitialKey=_overrideInitialKey;
@property(nonatomic) _Bool suppressOperations; // @synthesize suppressOperations=_suppressOperations;
@property(nonatomic) long long selectedKeyBeforeDictation; // @synthesize selectedKeyBeforeDictation=_selectedKeyBeforeDictation;
@property(retain, nonatomic) NSString *keyplaneBeforeDictation; // @synthesize keyplaneBeforeDictation=_keyplaneBeforeDictation;
@property(retain, nonatomic) UIAlertController *recentInputsAlert; // @synthesize recentInputsAlert=_recentInputsAlert;
- (_Bool)isKeyboardRightToLeft;	// IMP=0x0000000000aa6026
- (_Bool)isAppRightToLeft;	// IMP=0x0000000000aa6002
@property(readonly, nonatomic, getter=isSlimLinearKeyboardTV) _Bool slimLinearKeyboardTV;
- (double)defaultCursorAdjustDistance;	// IMP=0x0000000000aa5fec
- (id)getRomanAccentVariantsForString:(id)arg1 inputMode:(id)arg2 keyboardVariantIndludes:(int)arg3;	// IMP=0x0000000000aa5fd9
- (_Bool)_isKeyboardReverseOfAppLayoutDirection;	// IMP=0x0000000000aa5f32
- (unsigned long long)_indexOfFirstKeyPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000aa5ddc
- (_Bool)_handleMoveWithEvent:(id)arg1;	// IMP=0x0000000000aa5cb4
- (_Bool)_isDirectionalHeading:(unsigned long long)arg1;	// IMP=0x0000000000aa5ca0
- (void)_moveWithEvent:(id)arg1;	// IMP=0x0000000000aa5c56
- (_Bool)_handleWheelChangedWithEvent:(id)arg1;	// IMP=0x0000000000aa5c03
- (void)_wheelChangedWithEvent:(id)arg1;	// IMP=0x0000000000aa5bb9
- (_Bool)_handleRemoteControlReceivedWithEvent:(id)arg1;	// IMP=0x0000000000aa5b5f
- (void)remoteControlReceivedWithEvent:(id)arg1;	// IMP=0x0000000000aa5b15
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;	// IMP=0x0000000000aa578f
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000aa54e2
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000aa51ab
- (_Bool)_menuTapShouldExitVariants;	// IMP=0x0000000000aa50fe
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000aa50f8
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000aa4c51
- (void)returnToKeyplaneAfterDictation;	// IMP=0x0000000000aa4a6d
- (void)switchToDictationKeyplaneWithActivationIdentifier:(id)arg1;	// IMP=0x0000000000aa4717
- (unsigned long long)getNextKeyplaneIndex:(unsigned long long)arg1;	// IMP=0x0000000000aa4444
- (_Bool)handleVisualDirectionalInput:(int)arg1;	// IMP=0x0000000000aa3b0f
- (_Bool)handleLinearDirectionalInput:(int)arg1;	// IMP=0x0000000000aa36d4
- (void)handleVariantDeleteIfNecessaryForKey:(id)arg1;	// IMP=0x0000000000aa3388
- (void)clearVariantStateForKey:(id)arg1;	// IMP=0x0000000000aa32dc
- (void)takeKeyAction:(id)arg1;	// IMP=0x0000000000aa2478
- (_Bool)canHandleEvent:(id)arg1;	// IMP=0x0000000000aa2254
- (id)keyHitTestInSameRowAsCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000000aa1e8c
- (long long)targetKeyIndexAtOffset:(struct CGPoint)arg1 fromKey:(id)arg2;	// IMP=0x0000000000aa1abe
- (long long)targetKeyIndexFromPoint:(struct CGPoint)arg1 inKeys:(id)arg2;	// IMP=0x0000000000aa1a63
- (long long)targetKeyIndexFromPoint:(struct CGPoint)arg1;	// IMP=0x0000000000aa1a46
- (void)setHighlightedVariantIndex:(long long)arg1 key:(id)arg2;	// IMP=0x0000000000aa19aa
- (_Bool)refreshSelectedCellIfNecessaryForKey:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000aa17d3
- (_Bool)refreshSelectedCellIfNecessaryForKey:(id)arg1;	// IMP=0x0000000000aa17bc
- (void)setSelectedKeyIndex:(long long)arg1;	// IMP=0x0000000000aa1344
- (void)deactivateKey:(id)arg1;	// IMP=0x0000000000aa127e
- (struct CGRect)selectionFrameForKeyIndex:(long long)arg1;	// IMP=0x0000000000aa1144
- (_Bool)shouldDeactivateWithoutWindow;	// IMP=0x0000000000aa1126
- (void)restoreFocusFromEntryPoint:(struct CGPoint)arg1;	// IMP=0x0000000000aa1084
- (void)setCursorLocation:(unsigned long long)arg1;	// IMP=0x0000000000aa0edd
- (unsigned long long)cursorLocation;	// IMP=0x0000000000aa09e3
- (unsigned long long)downActionFlagsForKey:(id)arg1;	// IMP=0x0000000000aa0901
- (int)enabledStateForKey:(id)arg1;	// IMP=0x0000000000aa0865
- (int)activeStateForKey:(id)arg1;	// IMP=0x0000000000aa07c5
- (void)showPopupKeyplaneSwitcher;	// IMP=0x0000000000aa05d4
- (void)longPressAction;	// IMP=0x0000000000aa0410
- (void)endMultitapForKey:(id)arg1;	// IMP=0x0000000000aa0319
- (_Bool)canMultitap;	// IMP=0x0000000000aa0185
- (long long)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2;	// IMP=0x0000000000aa015b
- (int)stateForCandidateListKey:(id)arg1;	// IMP=0x0000000000aa0150
- (int)stateForKeyplaneSwitchKey:(id)arg1;	// IMP=0x0000000000aa004c
- (_Bool)shouldMergeKey:(id)arg1;	// IMP=0x0000000000a9ff71
- (_Bool)isKeyplaneDisabledWithName:(id)arg1;	// IMP=0x0000000000a9fde9
- (_Bool)shouldToggleKeyplaneWithName:(id)arg1;	// IMP=0x0000000000a9fd74
- (unsigned long long)targetEdgesForScreenGestureRecognition;	// IMP=0x0000000000a9fd6c
- (void)setDisableTouchInput:(_Bool)arg1;	// IMP=0x0000000000a9fd5c
- (_Bool)diacriticForwardCompose;	// IMP=0x0000000000a9fd0e
- (_Bool)supportsContinuousPath;	// IMP=0x0000000000a9fce7
- (_Bool)isKanaPlane;	// IMP=0x0000000000a9fca3
- (_Bool)isAlphabeticPlane;	// IMP=0x0000000000a9fc55
- (void)setShift:(_Bool)arg1;	// IMP=0x0000000000a9fc26
- (_Bool)ignoresShiftState;	// IMP=0x0000000000a9fbd8
- (_Bool)usesAutoShift;	// IMP=0x0000000000a9fb8a
- (id)_keyplaneForKeyplaneProperties;	// IMP=0x0000000000a9faf3
- (_Bool)isPossibleToTypeFast;	// IMP=0x0000000000a9faeb
- (_Bool)supportsEmoji;	// IMP=0x0000000000a9fae3
- (unsigned char)getHandRestRecognizerState;	// IMP=0x0000000000a9fadb
- (_Bool)shouldRetestKey:(id)arg1 slidOffKey:(id)arg2 withKeyplane:(id)arg3;	// IMP=0x0000000000a9fad3
- (_Bool)shouldPreventInputManagerHitTestingForKey:(id)arg1;	// IMP=0x0000000000a9facb
- (void)setRecentInputs:(id)arg1;	// IMP=0x0000000000a9fa83
- (void)acceptRecentInputIfNecessary;	// IMP=0x0000000000a9f94b
- (void)updateRecentInputsKeyIfNecessary;	// IMP=0x0000000000a9f89e
- (void)didSelectRecentInputString:(id)arg1;	// IMP=0x0000000000a9f726
- (void)alertDidDismiss;	// IMP=0x0000000000a9f5d9
- (void)showRecentInputsAlert;	// IMP=0x0000000000a9f156
- (_Bool)shouldMatchCaseForDomainKeys;	// IMP=0x0000000000a9f13c
- (void)updateDictationHelpString;	// IMP=0x0000000000a9e4e2
- (void)updateKeyplaneSwitchEdgeBiases;	// IMP=0x0000000000a9e17d
- (void)selectInitialKeyIfNecessary;	// IMP=0x0000000000a9dc62
- (_Bool)shouldAllowCurrentKeyplaneReload;	// IMP=0x0000000000a9dc18
- (void)setKeyplaneName:(id)arg1;	// IMP=0x0000000000a9c8f0
- (void)flushKeyCache:(id)arg1;	// IMP=0x0000000000a9c8ea
- (id)cacheTokenForKeyplane:(id)arg1;	// IMP=0x0000000000a9c871
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000a9c830
- (void)setKeyboardAppearance:(long long)arg1;	// IMP=0x0000000000a9c7e2
- (void)setKeyboardName:(id)arg1 appearance:(long long)arg2;	// IMP=0x0000000000a9c6e0
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;	// IMP=0x0000000000a9c204
- (id)keyViewAnimator;	// IMP=0x0000000000a9c11a
- (void)configureFloatingContentViewsIfNeeded;	// IMP=0x0000000000a9bc3b
- (unsigned long long)variantCountForKey:(id)arg1;	// IMP=0x0000000000a9bb96
@property(readonly, nonatomic) UIKBTree *currentKey;
- (void)runWithSuppressedActions:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a9bafa
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000a9bab4
- (void)dealloc;	// IMP=0x0000000000a9ba64
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a9b9a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
