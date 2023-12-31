//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel;
@protocol RAPTwoLinesViewModel;

@interface RAPTwoLinesMenuTableViewCell : UITableViewCell
{
    UILabel *_mainTitleLabel;	// 8 = 0x8
    UILabel *_secondTitleLabel;	// 16 = 0x10
    NSLayoutConstraint *_topToTitleConstraint;	// 24 = 0x18
    NSLayoutConstraint *_titleToSubtitleConstraint;	// 32 = 0x20
    NSLayoutConstraint *_subtitleToBottomConstraint;	// 40 = 0x28
    id <RAPTwoLinesViewModel> _viewModel;	// 48 = 0x30
    UIImageView *_leftImageView;	// 56 = 0x38
}

+ (id)reuseIdentifier;	// IMP=0x002000000065cf9d
- (void).cxx_destruct;	// IMP=0x002000000065cfcc
@property(readonly, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) id <RAPTwoLinesViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)prepareForReuse;	// IMP=0x001000000065cec7
- (void)_contentSizeChanged;	// IMP=0x001000000065cd32
- (void)_updateContent;	// IMP=0x001000000065cc55
- (void)_setupConstraints;	// IMP=0x001000000065c4bc
- (void)_setupSubviews;	// IMP=0x001000000065c134
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000065c037

@end

