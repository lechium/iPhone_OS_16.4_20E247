//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionView.h"

@class NSMutableArray, UIKeyboardEmojiGraphicsTraits, UIResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionView : UICollectionView
{
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;	// 8 = 0x8
    NSMutableArray *_gestureRecognizersToEnable;	// 16 = 0x10
    _Bool _isInSearchPopover;	// 24 = 0x18
    UIResponder *_hitTestResponder;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b4d784
@property(nonatomic) _Bool isInSearchPopover; // @synthesize isInSearchPopover=_isInSearchPopover;
@property(nonatomic) __weak UIResponder *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(readonly) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // @synthesize emojiGraphicsTraits=_emojiGraphicsTraits;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b4d65f
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b4d59d
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b4d4ff
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b4d277
- (void)enableConflictingGestureRecognizers;	// IMP=0x0000000000b4d11c
- (void)disableConflictingGestureRecognizers;	// IMP=0x0000000000b4ceec
- (id)closestCellForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000b4c79e
- (id)backgroundColor;	// IMP=0x0000000000b4c785
- (double)_currentScreenScale;	// IMP=0x0000000000b4c773
- (void)layoutSubviews;	// IMP=0x0000000000b4c6c1
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 emojiGraphicsTraits:(id)arg3;	// IMP=0x0000000000b4c617

@end

