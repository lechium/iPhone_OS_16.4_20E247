//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TabBar, TabBarItem, TabBarItemView, UIView;

__attribute__((visibility("hidden")))
@interface TabBarItemLayoutInfo : NSObject
{
    TabBarItemView *_tabBarItemView;	// 8 = 0x8
    TabBarItemView *_tabBarItemPreviewView;	// 16 = 0x10
    UIView *_itemSnapshotView;	// 24 = 0x18
    _Bool _canClose;	// 32 = 0x20
    _Bool _reordering;	// 33 = 0x21
    _Bool _leadingEdgeVisible;	// 34 = 0x22
    _Bool _trailingEdgeVisible;	// 35 = 0x23
    _Bool _trailingActiveItem;	// 36 = 0x24
    _Bool _hidesTitleText;	// 37 = 0x25
    _Bool _visibleInTabBar;	// 38 = 0x26
    _Bool _removedFromTabBar;	// 39 = 0x27
    TabBar *_tabBar;	// 40 = 0x28
    TabBarItem *_tabBarItem;	// 48 = 0x30
    double _titleLayoutWidth;	// 56 = 0x38
    double _titleAnchorAdditionalOffset;	// 64 = 0x40
    double _contentOffset;	// 72 = 0x48
    unsigned long long _activeAnimationCount;	// 80 = 0x50
    struct CGRect _frame;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000df93b
@property(nonatomic) unsigned long long activeAnimationCount; // @synthesize activeAnimationCount=_activeAnimationCount;
@property(nonatomic, getter=isRemovedFromTabBar) _Bool removedFromTabBar; // @synthesize removedFromTabBar=_removedFromTabBar;
@property(nonatomic, getter=isVisibleInTabBar) _Bool visibleInTabBar; // @synthesize visibleInTabBar=_visibleInTabBar;
@property(nonatomic) double contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) double titleAnchorAdditionalOffset; // @synthesize titleAnchorAdditionalOffset=_titleAnchorAdditionalOffset;
@property(nonatomic) _Bool hidesTitleText; // @synthesize hidesTitleText=_hidesTitleText;
@property(nonatomic) double titleLayoutWidth; // @synthesize titleLayoutWidth=_titleLayoutWidth;
@property(nonatomic, getter=isTrailingActiveItem) _Bool trailingActiveItem; // @synthesize trailingActiveItem=_trailingActiveItem;
@property(nonatomic, getter=isTrailingEdgeVisible) _Bool trailingEdgeVisible; // @synthesize trailingEdgeVisible=_trailingEdgeVisible;
@property(nonatomic, getter=isLeadingEdgeVisible) _Bool leadingEdgeVisible; // @synthesize leadingEdgeVisible=_leadingEdgeVisible;
@property(nonatomic, getter=isReordering) _Bool reordering; // @synthesize reordering=_reordering;
@property(nonatomic) _Bool canClose; // @synthesize canClose=_canClose;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) __weak TabBarItem *tabBarItem; // @synthesize tabBarItem=_tabBarItem;
@property(readonly, nonatomic) __weak TabBar *tabBar; // @synthesize tabBar=_tabBar;
- (void)_updateHidesTitleText;	// IMP=0x00000000000df60f
- (_Bool)_requiresViews;	// IMP=0x00000000000df5ef
@property(readonly, nonatomic) _Bool hasViews;
@property(readonly, nonatomic) TabBarItemView *tabBarItemView;
- (void)clearPreviewView;	// IMP=0x00000000000df545
- (void)_clearViews;	// IMP=0x00000000000df4ea
- (void)_clearViewsIfNeeded;	// IMP=0x00000000000df4b3
- (void)_clearView:(id)arg1;	// IMP=0x00000000000df3d4
@property(readonly, nonatomic) TabBarItemView *tabBarItemPreviewView;
@property(readonly, nonatomic) TabBarItemView *viewForDragPreview;
- (id)_reusableView;	// IMP=0x00000000000dee5f
- (void)updateTabBarStyle;	// IMP=0x00000000000dee49
- (void)updateTitleTruncation;	// IMP=0x00000000000dee33
- (long long)_visibleEdge;	// IMP=0x00000000000deb5b
- (void)mediaStateMuteButtonTapped:(id)arg1;	// IMP=0x00000000000dea0a
- (void)closeButtonTapped:(id)arg1;	// IMP=0x00000000000de9a6
- (void)itemDidUpdateShareParticipants;	// IMP=0x00000000000de93f
- (void)itemDidUpdateIsUnread;	// IMP=0x00000000000de8ee
- (void)itemDidUpdateIsPinned;	// IMP=0x00000000000de87d
- (void)itemDidUpdateMediaState;	// IMP=0x00000000000de828
- (void)itemDidUpdateIsPlaceholder;	// IMP=0x00000000000de7c5
- (void)itemDidUpdateIsActive;	// IMP=0x00000000000de6d2
- (void)itemDidUpdateIcon;	// IMP=0x00000000000de635
- (void)itemDidUpdateTitle;	// IMP=0x00000000000de598
- (void)dealloc;	// IMP=0x00000000000de545
- (id)initWithTabBar:(id)arg1 item:(id)arg2;	// IMP=0x00000000000de4a4
- (id)init;	// IMP=0x00000000000de496

@end

