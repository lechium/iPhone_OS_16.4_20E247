//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

@interface RAPHoursDetailTableViewCell : UITableViewCell
{
    NSLayoutConstraint *_topToFirstBaselineConstraint;	// 8 = 0x8
    NSLayoutConstraint *_lastBaselineToBottomConstraint;	// 16 = 0x10
    UILabel *_textLabel;	// 24 = 0x18
    UILabel *_detailTextLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000009c5e2a
@property(readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)dimDetailLabel;	// IMP=0x00100000009c5d77
- (void)illuminateDetailLabel;	// IMP=0x00100000009c5ce9
- (void)updateWithDate:(id)arg1;	// IMP=0x00100000009c5bd1
- (void)_updateConstraints;	// IMP=0x00100000009c5b09
- (void)_updateFonts;	// IMP=0x00100000009c5a67
- (void)_contentSizeDidChange;	// IMP=0x00100000009c5a39
- (void)_setupConstraints;	// IMP=0x00100000009c5585
- (void)_setupSubviews;	// IMP=0x00100000009c5447
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000009c533e

@end

