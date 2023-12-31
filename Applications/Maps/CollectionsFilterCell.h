//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class CollectionsFilterViewModel, UILabel;

@interface CollectionsFilterCell : UICollectionViewCell
{
    UILabel *_filterLabel;	// 8 = 0x8
    CollectionsFilterViewModel *_viewModel;	// 16 = 0x10
}

+ (id)reuseIdentifier;	// IMP=0x004000000068196c
- (void).cxx_destruct;	// IMP=0x0020000000682e14
@property(retain, nonatomic) CollectionsFilterViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *filterLabel; // @synthesize filterLabel=_filterLabel;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000682c94
- (void)updateUI;	// IMP=0x0010000000682a33
- (void)setUpUnselectedBorder;	// IMP=0x0010000000682969
- (void)setUpSelectedBorder;	// IMP=0x00100000006828b4
- (void)setUpCornerRadius;	// IMP=0x001000000068268c
- (void)setUpUnselectedShadows;	// IMP=0x0010000000682605
- (void)setUpSelectedShadows;	// IMP=0x00100000006824a1
- (void)setupConstraints;	// IMP=0x0010000000681d16
- (void)setFilterLabel;	// IMP=0x0010000000681b3c
- (void)setupSelectedBackgroundView;	// IMP=0x0010000000681abe
- (void)setupSubviews;	// IMP=0x0010000000681a86
- (void)prepareForReuse;	// IMP=0x0010000000681976
- (void)configureWithModel:(id)arg1;	// IMP=0x00100000006818a8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000006817f1

@end

