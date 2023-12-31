//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIImageView, UILabel, UINavigationBar, UISnapshotView, UITabBar, UITabBarItem, UITabBarItemProxy;

__attribute__((visibility("hidden")))
@interface UITabBarCustomizeView : UIView
{
    UITabBar *_tabBar;	// 144 = 0x90
    NSMutableArray *_proxies;	// 152 = 0x98
    NSMutableArray *_fixedItems;	// 160 = 0xa0
    UITabBarItemProxy *_draggingProxy;	// 168 = 0xa8
    UITabBarItem *_draggingItem;	// 176 = 0xb0
    UISnapshotView *_dragImage;	// 184 = 0xb8
    UIImageView *_replacementGlow;	// 192 = 0xc0
    UITabBarItem *_replaceItem;	// 200 = 0xc8
    UILabel *_titleLabel;	// 208 = 0xd0
    struct CGPoint _startPoint;	// 216 = 0xd8
    long long _itemsInRowCount;	// 232 = 0xe8
    double _gridOffset;	// 240 = 0xf0
    struct CGRect _firstItemRect;	// 248 = 0xf8
    UITabBarItem *_selectedBeforeItem;	// 280 = 0x118
    _Bool _isBeingDismissed;	// 288 = 0x120
    NSArray *_availableItems;	// 296 = 0x128
    UINavigationBar *_navigationBar;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x0000000000229461
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) NSArray *availableItems; // @synthesize availableItems=_availableItems;
- (void)tabBarTouchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000229405
- (void)tabBarTouchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000229311
- (void)tabBarTouchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000229145
- (void)tabBarTouchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000022901c
- (id)itemInTabBarWithTouches:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000228e22
- (void)adjustDragImageWithTouches:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000228cdd
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000228ccb
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000228028
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000227caa
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000022733b
- (void)layoutSubviews;	// IMP=0x00000000002264d8
- (void)setTabBar:(id)arg1 currentItems:(id)arg2 availableItems:(id)arg3;	// IMP=0x0000000000226031
- (long long)_barMetrics;	// IMP=0x0000000000226014
- (void)setIsBeingDismissed;	// IMP=0x0000000000226003
- (void)updateProxiesSelection;	// IMP=0x0000000000225dff
- (void)tintTabBarItemsForEdit:(_Bool)arg1;	// IMP=0x0000000000225b4a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000225a3a
- (id)titleLabelFont;	// IMP=0x00000000002258df
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000225716

@end

