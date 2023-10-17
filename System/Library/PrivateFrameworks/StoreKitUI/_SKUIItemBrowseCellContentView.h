//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SKUICellImageView, UILabel;

__attribute__((visibility("hidden")))
@interface _SKUIItemBrowseCellContentView : UIView
{
    UILabel *_indexNumberLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_userRatingLabel;	// 32 = 0x20
    SKUICellImageView *_userRatingImageView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000255c7f
@property(retain, nonatomic) SKUICellImageView *userRatingImageView; // @synthesize userRatingImageView=_userRatingImageView;
@property(retain, nonatomic) UILabel *userRatingLabel; // @synthesize userRatingLabel=_userRatingLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *indexNumberLabel; // @synthesize indexNumberLabel=_indexNumberLabel;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000255afc
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000002558f5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000255852

@end
