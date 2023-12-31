//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UIScrollView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface SKUIModernChartsView : UIView
{
    _UIBackdropView *_backdropView;	// 8 = 0x8
    struct UIEdgeInsets _contentInset;	// 16 = 0x10
    UIView *_headerView;	// 48 = 0x30
    NSMutableArray *_headerViews;	// 56 = 0x38
    _Bool _hideHeader;	// 64 = 0x40
    UIScrollView *_scrollView;	// 72 = 0x48
    NSArray *_viewControllers;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000020d9f1
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)_updateHeader;	// IMP=0x000000000020d669
- (void)_layoutViewControllersWithColumnSize:(struct CGSize)arg1 contentInset:(struct UIEdgeInsets)arg2;	// IMP=0x000000000020d2dc
- (void)_layoutHeadersWithColumnSize:(struct CGSize)arg1;	// IMP=0x000000000020d084
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000020d056
- (void)layoutSubviews;	// IMP=0x000000000020cd25
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000020cc75
- (void)setColumnViewControllers:(id)arg1;	// IMP=0x000000000020c8af
@property(readonly, nonatomic) _UIBackdropView *backdropView;
- (void)dealloc;	// IMP=0x000000000020c818
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000020c5e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

