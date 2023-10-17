//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MUCompositionalStackLayout, MUSizeLayout, TwoLinesContentView, UGCRatingCategoryLikeDislikeView, UGCSuggestionViewModel, UIImageView, UILabel;
@protocol UGCSuggestionViewDelegate;

@interface UGCSuggestionView : UIView
{
    TwoLinesContentView *_twoLinesContentView;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    MUSizeLayout *_imageSizeLayout;	// 40 = 0x28
    unsigned long long _imageFetchCount;	// 48 = 0x30
    UGCRatingCategoryLikeDislikeView *_likeDislikeView;	// 56 = 0x38
    MUCompositionalStackLayout *_compositionalStackLayout;	// 64 = 0x40
    UGCSuggestionViewModel *_viewModel;	// 72 = 0x48
    id <UGCSuggestionViewDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000006bcbee
@property(retain, nonatomic) id <UGCSuggestionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UGCSuggestionViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)likeDislikeViewDidSelectDislike:(id)arg1;	// IMP=0x00100000006bcb6c
- (void)likeDislikeViewDidSelectLike:(id)arg1;	// IMP=0x00100000006bcb20
- (void)_suggestionTapped;	// IMP=0x00100000006bcad4
- (void)_updateFromViewModel;	// IMP=0x00100000006bc794
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000006bc661
- (id)_contentLayoutGroup;	// IMP=0x00100000006bc427
- (void)_updateConstraints;	// IMP=0x00100000006bc3d3
- (void)_setupConstraints;	// IMP=0x00100000006bc25f
- (void)_setupSubviews;	// IMP=0x00100000006bbf8e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000006bbe95

@end
