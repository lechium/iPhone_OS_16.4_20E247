//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKPhotoTileBadgeView : UIView
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _selected;	// 9 = 0x9
    UIButton *_actionButton;	// 16 = 0x10
    UIView *__backgroundView;	// 24 = 0x18
    UIImageView *__badgeImageView;	// 32 = 0x20
    UILabel *__textLabel;	// 40 = 0x28
}

+ (double)verticalBadgeInset;	// IMP=0x00600000002d8c83
+ (double)horizontalBadgeInset;	// IMP=0x00600000002d8c75
- (void).cxx_destruct;	// IMP=0x00000000002d90d8
@property(readonly, nonatomic) UILabel *_textLabel; // @synthesize _textLabel=__textLabel;
@property(readonly, nonatomic) UIImageView *_badgeImageView; // @synthesize _badgeImageView=__badgeImageView;
@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (struct CGSize)maximumSize;	// IMP=0x00000000002d8c91
- (void)_updateBadgeImage;	// IMP=0x00000000002d8a2e
- (void)_updateBadgeText;	// IMP=0x00000000002d8952
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000002d88cb
- (void)layoutSubviews;	// IMP=0x00000000002d8490
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002d836b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002d7eaf

@end
