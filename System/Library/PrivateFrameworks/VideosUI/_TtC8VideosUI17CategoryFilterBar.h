//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI17CategoryFilterBar : UIScrollView
{
    MISSING_TYPE *categories;	// 8 = 0x8
    MISSING_TYPE *selectionHandler;	// 16 = 0x10
    MISSING_TYPE *selectedCategory;	// 32 = 0x20
    MISSING_TYPE *lastKnownBounds;	// 88 = 0x58
    MISSING_TYPE *buttons;	// 120 = 0x78
    MISSING_TYPE *selectedButton;	// 128 = 0x80
    MISSING_TYPE *$__lazy_storage_$_selectedButtonBackgroundView;	// 136 = 0x88
    MISSING_TYPE *needsButtonsLayout;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000039a4d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000039a470
- (void)categoryButtonTapped:(id)arg1;	// IMP=0x000000000039a420
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000399450
- (void)layoutSubviews;	// IMP=0x00000000003992e0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000398f40
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000398da0
- (id)init;	// IMP=0x0000000000398d80

@end
