//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIStackView;

@interface RouteAnnotationCell : UITableViewCell
{
    UIStackView *_stackView;	// 8 = 0x8
    UIImageView *_iconImageView;	// 16 = 0x10
    UILabel *_detailsLabel;	// 24 = 0x18
    UILabel *_metadataLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000084c84d
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000084bb9f

@end
