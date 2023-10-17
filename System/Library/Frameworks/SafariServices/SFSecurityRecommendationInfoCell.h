//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIImage, UIImageView, UILabel, UIView, WBSSavedAccount;
@protocol SFSecurityRecommendationInfoCellDelegate;

__attribute__((visibility("hidden")))
@interface SFSecurityRecommendationInfoCell : UITableViewCell
{
    UIImageView *_iconView;	// 8 = 0x8
    UIImageView *_completedUpgradeCheckmarkView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    UILabel *_monogramLabel;	// 40 = 0x28
    UIView *_monogramBackgroundView;	// 48 = 0x30
    unsigned long long _configuration;	// 56 = 0x38
    NSArray *_completedUpgradeCheckmarkViewConstraints;	// 64 = 0x40
    NSLayoutConstraint *_standardTitleTrailingConstraint;	// 72 = 0x48
    UIButton *_hideButton;	// 80 = 0x50
    NSArray *_hideButtonConstraints;	// 88 = 0x58
    WBSSavedAccount *_savedAccount;	// 96 = 0x60
    id <SFSecurityRecommendationInfoCellDelegate> _delegate;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001486d8
@property(nonatomic) __weak id <SFSecurityRecommendationInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WBSSavedAccount *savedAccount; // @synthesize savedAccount=_savedAccount;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (double)_iconWidth;	// IMP=0x000000000014862d
- (void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x00000000001482cc
- (void)setSavedAccount:(id)arg1;	// IMP=0x00000000001482b8
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)_hideButtonPressed:(id)arg1;	// IMP=0x00000000001481b5
- (void)_createHideButton;	// IMP=0x0000000000147d6e
- (void)setShowsHideButton:(_Bool)arg1;	// IMP=0x0000000000147be3
- (void)setShowsUpgradeCompletionCheckmark:(_Bool)arg1;	// IMP=0x0000000000147a11
- (void)showCheckmarkForDetailView;	// IMP=0x0000000000147901
@property(retain, nonatomic) UIImage *icon;
- (void)layoutSubviews;	// IMP=0x000000000014781d
- (id)initWithConfiguration:(unsigned long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000014697a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
