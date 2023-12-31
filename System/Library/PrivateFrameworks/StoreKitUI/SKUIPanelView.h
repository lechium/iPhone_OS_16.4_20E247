//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString, UIResponder;

__attribute__((visibility("hidden")))
@interface SKUIPanelView
{
    NSMapTable *_animators;	// 8 = 0x8
    UIResponder *_inputResponder;	// 16 = 0x10
    NSMapTable *_viewElements;	// 24 = 0x18
    NSMapTable *_viewMargins;	// 32 = 0x20
}

+ (_Bool)_useEditorialLayoutForLabelElement:(id)arg1;	// IMP=0x00100000001f14b7
+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000001f13d0
+ (_Bool)_shouldDisplayViewElement:(id)arg1;	// IMP=0x00100000001f13b3
+ (struct UIEdgeInsets)_marginsForViewElement:(id)arg1 index:(unsigned long long)arg2 width:(double)arg3 context:(id)arg4;	// IMP=0x00100000001f125a
+ (_Bool)_isValidTextInputViewElement:(id)arg1;	// IMP=0x00100000001f11a7
+ (void)_enumerateChildrenOfViewElement:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f0eb0
+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;	// IMP=0x00100000001f0dab
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000001ef41d
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000001ef097
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000001ef081
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000001eef45
- (void).cxx_destruct;	// IMP=0x00000000001f153b
- (void)animatorFeature:(id)arg1 performAnimationWithName:(id)arg2 options:(id)arg3;	// IMP=0x00000000001f0c94
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000001f0c29
- (void)layoutSubviews;	// IMP=0x00000000001f0202
- (_Bool)resignFirstResponder;	// IMP=0x00000000001f01ae
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000001f015a
- (_Bool)becomeFirstResponder;	// IMP=0x00000000001f0106
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001f00fe
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001f00f6
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000001efdbd
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001efdb7
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001ef624
- (void)dealloc;	// IMP=0x00000000001eede4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001eece8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

