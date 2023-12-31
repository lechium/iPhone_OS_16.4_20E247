//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SKUIScrollingSegmentedController, SKUIScrollingTabBarController, SKUIStackedBar, _UIBackdropView;

@interface UIViewController (SKUIExtensions)
- (id)_SKUIView;	// IMP=0x00300000000c09ec
- (void)unregisterForPreviewing:(id)arg1;	// IMP=0x00300000000dc5a7
- (id)registerForPreviewingFromSourceView:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00300000000dc493
@property(nonatomic) double SKUIStackedBarSplit;
@property(readonly, nonatomic) SKUIStackedBar *SKUIStackedBar;
- (void)setNeedsNestedPagingScrollViewUpdate;	// IMP=0x0030000000152c3a
@property(readonly, nonatomic) SKUIScrollingTabBarController *scrollingTabBarController;
- (void)setNeedsScrollingSegmentContentScrollViewUpdate;	// IMP=0x003000000017e257
@property(readonly, nonatomic) SKUIScrollingSegmentedController *scrollingSegmentedController;
@property(readonly, nonatomic) _UIBackdropView *SKUIPinnedHeaderView;
- (void)setNeedsNavigationBarAppearanceUpdate;	// IMP=0x003000000038add8
@end

