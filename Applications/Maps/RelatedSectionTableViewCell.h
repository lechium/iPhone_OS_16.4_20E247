//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class MKVibrantLabel, NSString;

@interface RelatedSectionTableViewCell : UITableViewCell
{
    NSString *_sectionName;	// 8 = 0x8
    MKVibrantLabel *_sectionNameLabel;	// 16 = 0x10
}

+ (double)cellHeight;	// IMP=0x00400000001632e2
+ (id)accessibilityIdentifier;	// IMP=0x0010000000163279
+ (id)identifier;	// IMP=0x0010000000163267
- (void).cxx_destruct;	// IMP=0x00200000001633f8
@property(retain, nonatomic) MKVibrantLabel *sectionNameLabel; // @synthesize sectionNameLabel=_sectionNameLabel;
@property(retain, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
- (void)prepareForReuse;	// IMP=0x00100000001632f0
- (void)configureSection;	// IMP=0x0010000000162e73
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000162e27

@end
