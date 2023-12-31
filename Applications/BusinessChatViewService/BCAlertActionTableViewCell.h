//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface BCAlertActionTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subTitleLabel;	// 16 = 0x10
    UIImageView *_mainImageView;	// 24 = 0x18
}

+ (double)heightForActionItem:(id)arg1 forWidth:(double)arg2;	// IMP=0x004000000000825c
+ (id)reuseIdentifierForItem:(id)arg1;	// IMP=0x00100000000081f6
- (void).cxx_destruct;	// IMP=0x002000000000979a
@property(readonly, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(readonly, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)loadContentView;	// IMP=0x001000000000848f
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000000081aa

@end

