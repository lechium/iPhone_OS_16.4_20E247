//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell
{
    UIImageView *_symbol;	// 8 = 0x8
    UILabel *_title;	// 16 = 0x10
    UIView *_selectedCircle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000b5b1dd
@property(retain, nonatomic) UIView *selectedCircle; // @synthesize selectedCircle=_selectedCircle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *symbol; // @synthesize symbol=_symbol;
- (void)setSelectedCircleBlendMode:(_Bool)arg1;	// IMP=0x0000000000b5af80
- (void)setPressIndicatorHidden:(_Bool)arg1;	// IMP=0x0000000000b5af63
- (void)setTitleText:(id)arg1;	// IMP=0x0000000000b5af46
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000b5a7e4
- (id)titleFont;	// IMP=0x0000000000b5a747
- (id)symbolFont;	// IMP=0x0000000000b5a69e

@end

