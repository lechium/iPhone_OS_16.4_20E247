//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface WDDataProviderTableViewCell : UITableViewCell
{
    UILabel *_inactiveLabel;	// 8 = 0x8
    UIButton *_checkmarkButton;	// 16 = 0x10
    NSLayoutConstraint *_iconImageWidth;	// 24 = 0x18
    _Bool _active;	// 32 = 0x20
    NSLayoutConstraint *_checkmarkLeadingConstraint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006ad66
@property(retain, nonatomic) NSLayoutConstraint *checkmarkLeadingConstraint; // @synthesize checkmarkLeadingConstraint=_checkmarkLeadingConstraint;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)setIconImage:(id)arg1;	// IMP=0x000000000006acaf
- (void)setDisplayName:(id)arg1;	// IMP=0x000000000006ac3d
@property(readonly, nonatomic) struct CGSize iconSize;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000006aa9b
- (void)prepareForReuse;	// IMP=0x000000000006aa0d
- (void)layoutSubviews;	// IMP=0x000000000006a4ee
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000006a463
- (void)_setupUI;	// IMP=0x0000000000069d9a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000069d4e

@end

