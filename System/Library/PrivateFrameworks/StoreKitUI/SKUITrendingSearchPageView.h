//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SKUITrendingSearchPage, SKUITrendingSearchView;
@protocol SKUITrendingSearchPageViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUITrendingSearchPageView : UIView
{
    id <SKUITrendingSearchPageViewDelegate> _delegate;	// 8 = 0x8
    SKUITrendingSearchPage *_page;	// 16 = 0x10
    SKUITrendingSearchView *_trendingSearchView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000dfc6e
@property(retain, nonatomic) SKUITrendingSearchPage *page; // @synthesize page=_page;
@property(nonatomic) __weak id <SKUITrendingSearchPageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000000dfb2c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000dfaff
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000dfa8d
@property(nonatomic) struct UIEdgeInsets contentInset;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000df6b4

@end
