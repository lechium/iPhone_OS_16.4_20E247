//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CNContactSuggestionsViewSectionHeader : UICollectionReusableView
{
    UILabel *_titleLabel;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x006000000014a8a3
- (void).cxx_destruct;	// IMP=0x000000000014a890
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)prepareForReuse;	// IMP=0x000000000014a813
- (void)setupConstraints;	// IMP=0x000000000014a499
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000014a353

@end

