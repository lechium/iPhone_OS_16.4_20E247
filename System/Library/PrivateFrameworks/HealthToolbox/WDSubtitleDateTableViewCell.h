//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface WDSubtitleDateTableViewCell : UITableViewCell
{
    UILabel *_mainTextLabel;	// 8 = 0x8
    UILabel *_subtitleTextLabel;	// 16 = 0x10
    UILabel *_dateTextLabel;	// 24 = 0x18
    NSLayoutConstraint *_baselineConstraint;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006ce18
@property(retain, nonatomic) NSLayoutConstraint *baselineConstraint; // @synthesize baselineConstraint=_baselineConstraint;
@property(retain, nonatomic) UILabel *dateTextLabel; // @synthesize dateTextLabel=_dateTextLabel;
@property(retain, nonatomic) UILabel *subtitleTextLabel; // @synthesize subtitleTextLabel=_subtitleTextLabel;
@property(retain, nonatomic) UILabel *mainTextLabel; // @synthesize mainTextLabel=_mainTextLabel;
- (void)_updateForCurrentSizeCategory;	// IMP=0x000000000006cbab
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000006cab1
- (void)setupConstraints;	// IMP=0x000000000006c396
- (void)setupSubviews;	// IMP=0x000000000006c176
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000006c0fe

@end
