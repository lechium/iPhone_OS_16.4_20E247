//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit23AttributeStylingControl : UIControl
{
    MISSING_TYPE *contentInsets;	// 8 = 0x8
    MISSING_TYPE *useCompactStyle;	// 40 = 0x28
    MISSING_TYPE *contentStackView;	// 48 = 0x30
    MISSING_TYPE *titleLabel;	// 56 = 0x38
    MISSING_TYPE *imageView;	// 64 = 0x40
    MISSING_TYPE *titleLabelFont;	// 72 = 0x48
    MISSING_TYPE *isEnabled;	// 80 = 0x50
    MISSING_TYPE *title;	// 88 = 0x58
    MISSING_TYPE *font;	// 104 = 0x68
    MISSING_TYPE *image;	// 112 = 0x70
    MISSING_TYPE *wantsCapsuleCornerStyle;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000072550
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000724f0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000072470
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x0000000000072280
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;	// IMP=0x0000000000072240
- (void)layoutSubviews;	// IMP=0x0000000000072210
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000072120

@end
