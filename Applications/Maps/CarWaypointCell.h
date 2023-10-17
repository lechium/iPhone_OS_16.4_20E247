//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface CarWaypointCell : UITableViewCell
{
    UIImageView *_contactImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_arrivalLabel;	// 24 = 0x18
    UILabel *_tapToRemoveLabel;	// 32 = 0x20
}

+ (id)reuseIdentifier;	// IMP=0x004000000057d081
- (void).cxx_destruct;	// IMP=0x002000000057dfec
- (void)_updateLabelColors:(_Bool)arg1;	// IMP=0x001000000057df32
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000057dee7
- (_Bool)displaysThirdDetailLine;	// IMP=0x001000000057dedf
- (void)setupWithWaypoint:(id)arg1 isRemovable:(_Bool)arg2;	// IMP=0x001000000057db2d
- (void)_setupStyles;	// IMP=0x001000000057d95c
- (void)_setupConstraints;	// IMP=0x001000000057d2ee
- (void)_setupSubviews;	// IMP=0x001000000057d130
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000057d08b

@end
