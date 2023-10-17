//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString, UIKBCacheToken, UIKBKeyView, UIKBKeyViewAnimator, UIKBRenderConfig, UIKBRenderFactory, UIKBRenderingContext, UIKBScreenTraits, UIKBSplitImageView, UIKBTree, UIKeyboardEmojiKeyDisplayController, UIView;
@protocol UIKBKeyplaneViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneView
{
    UIKBTree *_keyplane;	// 8 = 0x8
    UIKBTree *_defaultKeyplane;	// 16 = 0x10
    UIKBCacheToken *_cacheToken;	// 24 = 0x18
    UIKBCacheToken *_defaultKeyplaneCacheToken;	// 32 = 0x20
    UIKBKeyViewAnimator *_keyViewAnimator;	// 40 = 0x28
    UIKeyboardEmojiKeyDisplayController *_emojiKeyManager;	// 48 = 0x30
    UIKBKeyView *_candidateGapView;	// 56 = 0x38
    NSMutableDictionary *_subviewIndex;	// 64 = 0x40
    NSMutableDictionary *_activeViewIndex;	// 72 = 0x48
    NSMutableDictionary *_renderedKeyViews;	// 80 = 0x50
    NSMutableDictionary *_delayedDeactivationKeys;	// 88 = 0x58
    _Bool _shouldDrawRect;	// 96 = 0x60
    UIKBRenderConfig *_renderConfig;	// 104 = 0x68
    UIKBRenderingContext *_renderingContext;	// 112 = 0x70
    UIKBRenderFactory *_factory;	// 120 = 0x78
    UIKBSplitImageView *_keyBorders;	// 128 = 0x80
    UIKBSplitImageView *_keyBackgrounds;	// 136 = 0x88
    UIKBSplitImageView *_keyCaps;	// 144 = 0x90
    UIView *_keyplaneMaskView;	// 152 = 0x98
    _Bool _suppressDrawing;	// 160 = 0xa0
    UIKBScreenTraits *_overrideScreenTraits;	// 168 = 0xa8
    id <UIKBKeyplaneViewDelegate> _delegate;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000a485bc
@property(nonatomic) _Bool suppressDrawing; // @synthesize suppressDrawing=_suppressDrawing;
@property(nonatomic) __weak id <UIKBKeyplaneViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIKBScreenTraits *overrideScreenTraits; // @synthesize overrideScreenTraits=_overrideScreenTraits;
@property(retain, nonatomic) UIKeyboardEmojiKeyDisplayController *emojiKeyManager; // @synthesize emojiKeyManager=_emojiKeyManager;
@property(retain, nonatomic) UIKBKeyViewAnimator *keyViewAnimator; // @synthesize keyViewAnimator=_keyViewAnimator;
@property(retain, nonatomic) UIKBRenderFactory *factory; // @synthesize factory=_factory;
@property(retain, nonatomic) UIKBRenderingContext *renderingContext; // @synthesize renderingContext=_renderingContext;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(retain, nonatomic) UIKBCacheToken *defaultKeyplaneCacheToken; // @synthesize defaultKeyplaneCacheToken=_defaultKeyplaneCacheToken;
@property(retain, nonatomic) UIKBCacheToken *cacheToken; // @synthesize cacheToken=_cacheToken;
@property(retain, nonatomic) UIKBTree *defaultKeyplane; // @synthesize defaultKeyplane=_defaultKeyplane;
@property(retain, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=_keyplane;
@property(readonly, nonatomic) UIView *keyplaneMaskView; // @synthesize keyplaneMaskView=_keyplaneMaskView;
- (void)_updateKeyplaneMaskView;	// IMP=0x0000000000a4824a
- (void)purgeFactory;	// IMP=0x0000000000a48229
- (void)purgeLayerContents;	// IMP=0x0000000000a481cf
- (void)purgeSubviews;	// IMP=0x0000000000a48165
- (void)purgeKeyViews;	// IMP=0x0000000000a47a9e
- (void)purgeActiveKeyViews;	// IMP=0x0000000000a47913
- (void)activateKeys;	// IMP=0x0000000000a476ff
- (void)deactivateKeys;	// IMP=0x0000000000a471f2
- (void)deactivateKey:(id)arg1 previousState:(int)arg2 keyView:(id)arg3;	// IMP=0x0000000000a46dcc
- (void)deactivateKey:(id)arg1 previousState:(int)arg2;	// IMP=0x0000000000a46d4e
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0000000000a46c7f
- (void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0000000000a46bb0
- (id)_existingVariantsKeyViewForKey:(id)arg1;	// IMP=0x0000000000a46ac5
- (void)orientKeyCapForKey:(id)arg1 orientation:(long long)arg2;	// IMP=0x0000000000a4684b
- (void)hideKeyCaps:(_Bool)arg1 andControlKeysWithInteractionTypes:(id)arg2;	// IMP=0x0000000000a465e1
- (void)hideKeyCaps:(_Bool)arg1;	// IMP=0x0000000000a4647c
- (void)dimKeys:(id)arg1;	// IMP=0x0000000000a4620d
- (void)deactivateAdaptiveKey:(id)arg1;	// IMP=0x0000000000a46197
- (_Bool)shouldAnimateOutKeyView:(id)arg1;	// IMP=0x0000000000a460b6
- (_Bool)shouldAnimateInKeyView:(id)arg1;	// IMP=0x0000000000a46040
- (id)viewForKey:(id)arg1 state:(int)arg2;	// IMP=0x0000000000a45fd9
- (id)viewForKey:(id)arg1;	// IMP=0x0000000000a45eeb
- (void)updateFrameForKey:(id)arg1;	// IMP=0x0000000000a45c7b
- (id)activeKeyViews;	// IMP=0x0000000000a45c5e
- (int)stateForKey:(id)arg1;	// IMP=0x0000000000a45c49
- (struct CGRect)_safeFrameForKeyViewFrame:(struct CGRect)arg1 inContainer:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000a457b2
- (void)setState:(int)arg1 forKey:(id)arg2;	// IMP=0x0000000000a43d25
- (_Bool)_shouldAllowKey:(id)arg1;	// IMP=0x0000000000a43c68
- (id)containingViewForKey:(id)arg1 withState:(int)arg2 wantsActiveOut:(_Bool *)arg3;	// IMP=0x0000000000a4370f
- (unsigned long long)cornerMaskForKey:(id)arg1 recursive:(_Bool)arg2;	// IMP=0x0000000000a431cc
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;	// IMP=0x0000000000a43049
- (id)cacheIdentifierForKey:(id)arg1;	// IMP=0x0000000000a42f04
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;	// IMP=0x0000000000a42e7b
- (void)addKeyToDelayedDeactivationSet:(id)arg1;	// IMP=0x0000000000a42c4d
- (void)cancelDelayedDeactivation;	// IMP=0x0000000000a42c30
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a42be3
- (_Bool)_canDrawContent;	// IMP=0x0000000000a42bce
- (_Bool)_shouldInheritScreenScaleAsContentScaleFactor;	// IMP=0x0000000000a42bc6
- (void)setContentScaleFactor:(double)arg1;	// IMP=0x0000000000a42b3f
- (void)drawContentsOfRenderers:(id)arg1;	// IMP=0x0000000000a42379
@property(readonly, nonatomic) long long assetIdiom;
@property(readonly, nonatomic) _Bool keepNonPersistent;
@property(readonly, nonatomic) double cachedWidth;
@property(readonly, nonatomic) long long cacheDeferPriority;
@property(readonly, nonatomic) _Bool cacheDeferable;
- (void)displayLayer:(id)arg1;	// IMP=0x0000000000a41bde
- (id)cacheKeysForRenderFlags:(id)arg1;	// IMP=0x0000000000a4170b
- (_Bool)useDefaultKeyplaneCacheTokenForRenderFlags:(long long)arg1;	// IMP=0x0000000000a41691
@property(readonly, nonatomic) NSString *cacheKey;
- (void)layoutSubviews;	// IMP=0x0000000000a414e4
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000a41419
- (void)_generateFactoryIfNeeded;	// IMP=0x0000000000a412de
- (void)_generateRenderingContextIfNeeded;	// IMP=0x0000000000a411c2
- (void)prepareForDisplay;	// IMP=0x0000000000a40bb8
- (_Bool)isPasscodeStyle;	// IMP=0x0000000000a406a7
- (_Bool)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;	// IMP=0x0000000000a40655
- (void)dealloc;	// IMP=0x0000000000a405e0
- (void)removeFromSuperview;	// IMP=0x0000000000a4055e
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2;	// IMP=0x0000000000a403d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
