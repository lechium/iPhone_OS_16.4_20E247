//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIStackView;
@protocol CuratedCollectionItemAppClipViewModel;

@interface CuratedCollectionItemAppClipView : UIView
{
    UIStackView *_contentStackView;	// 8 = 0x8
    UIStackView *_titleStackView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    UIImageView *_artworkImageView;	// 40 = 0x28
    UIImageView *_appClipSymbolImageView;	// 48 = 0x30
    id <CuratedCollectionItemAppClipViewModel> _viewModel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000006ef3c1
@property(retain, nonatomic) id <CuratedCollectionItemAppClipViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)_updateFromModel;	// IMP=0x00100000006ef0e8
- (void)_updateFonts;	// IMP=0x00100000006eef76
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000006eedbd
- (void)updateUI;	// IMP=0x00100000006eed1f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000006ee4c0

@end

