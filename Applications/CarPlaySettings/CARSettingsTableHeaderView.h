//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel;

@interface CARSettingsTableHeaderView : UITableViewHeaderFooterView
{
    UILabel *_label;	// 8 = 0x8
}

+ (id)identifier;	// IMP=0x0020000000003229
- (void).cxx_destruct;	// IMP=0x00200000000039f1
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)_prepareForLayout;	// IMP=0x00100000000038df
- (void)setText:(id)arg1;	// IMP=0x00100000000037fc
- (void)prepareForReuse;	// IMP=0x001000000000378b
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0010000000003233

@end

