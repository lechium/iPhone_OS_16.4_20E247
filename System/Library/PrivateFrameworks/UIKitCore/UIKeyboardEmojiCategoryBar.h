//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKeyboardEmojiGraphicsTraits, UIResponder, UIView;
@protocol UIKBEmojiHitTestResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryBar
{
    unsigned long long _selectedIndex;	// 144 = 0x90
    UIView *_scrubView;	// 152 = 0x98
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;	// 160 = 0xa0
    _Bool _isScrubbing;	// 168 = 0xa8
    double _scrubStartXLocation;	// 176 = 0xb0
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;	// 184 = 0xb8
}

+ (_Bool)wantsScreenTraits;	// IMP=0x0060000000b3d07f
- (void).cxx_destruct;	// IMP=0x0000000000b3ea2c
@property(nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(retain, nonatomic) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // @synthesize emojiGraphicsTraits=_emojiGraphicsTraits;
@property(retain, nonatomic) UIView *scrubView; // @synthesize scrubView=_scrubView;
@property unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b3e855
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b3e6ac
- (unsigned long long)selectedIndexForTouches:(id)arg1;	// IMP=0x0000000000b3e561
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b3e1c2
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b3e0e3
- (struct CGRect)categorySelectedCircleRect:(long long)arg1;	// IMP=0x0000000000b3df77
- (void)animateScrubberToRect:(struct CGRect)arg1;	// IMP=0x0000000000b3dd90
- (struct CGRect)frameForDivider:(int)arg1;	// IMP=0x0000000000b3dc6d
- (unsigned long long)flippedIndexForIndex:(unsigned long long)arg1;	// IMP=0x0000000000b3dbf8
- (void)updateCategory;	// IMP=0x0000000000b3db1f
- (void)updateCategoryOnBar:(unsigned long long)arg1;	// IMP=0x0000000000b3da26
- (void)updateToCategory:(long long)arg1;	// IMP=0x0000000000b3d9ee
- (void)dimKeys:(id)arg1;	// IMP=0x0000000000b3d729
- (void)didMoveToWindow;	// IMP=0x0000000000b3d688
- (void)dealloc;	// IMP=0x0000000000b3d613
- (void)prepareForDisplay;	// IMP=0x0000000000b3d418
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x0000000000b3d403
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4;	// IMP=0x0000000000b3d087

@end

