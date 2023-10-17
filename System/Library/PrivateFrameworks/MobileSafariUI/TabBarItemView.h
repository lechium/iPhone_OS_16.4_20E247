//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, SFAvatarStackView, SFUnreadIndicator, TabBar, UIButton, UIHoverGestureRecognizer, UIImage, UIImageView, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface TabBarItemView : UIView
{
    UIVisualEffectView *_contentEffectsView;	// 8 = 0x8
    UIVisualEffectView *_borderEffectsView;	// 16 = 0x10
    UIVisualEffectView *_closeButtonEffectsView;	// 24 = 0x18
    UIView *_iconClipperView;	// 32 = 0x20
    UIView *_titleClipperView;	// 40 = 0x28
    UIImageView *_iconView;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    NSString *_titleText;	// 64 = 0x40
    TabBar *_tabBar;	// 72 = 0x48
    NSString *_truncatedTitleText;	// 80 = 0x50
    struct CGSize _truncatedTitleTextSize;	// 88 = 0x58
    _Bool _titleWasTruncated;	// 104 = 0x68
    UIImageView *_closeButtonImageView;	// 112 = 0x70
    UIView *_highlightView;	// 120 = 0x78
    UIHoverGestureRecognizer *_hoverRecognizer;	// 128 = 0x80
    SFAvatarStackView *_participantsView;	// 136 = 0x88
    SFUnreadIndicator *_unreadIndicator;	// 144 = 0x90
    _Bool _active;	// 152 = 0x98
    _Bool _reordering;	// 153 = 0x99
    _Bool _isPlaceholder;	// 154 = 0x9a
    _Bool _pinned;	// 155 = 0x9b
    _Bool _unread;	// 156 = 0x9c
    _Bool _hidesTitleText;	// 157 = 0x9d
    UIButton *_closeButton;	// 160 = 0xa0
    UIButton *_mediaStateMuteButton;	// 168 = 0xa8
    UIImage *_icon;	// 176 = 0xb0
    unsigned long long _mediaStateIcon;	// 184 = 0xb8
    NSArray *_shareParticipants;	// 192 = 0xc0
    long long _visibleEdge;	// 200 = 0xc8
    double _titleLayoutWidth;	// 208 = 0xd0
    long long _titleAnchorEdge;	// 216 = 0xd8
    double _titleAnchorAdditionalOffset;	// 224 = 0xe0
    double _contentOffset;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0000000000110674
@property(nonatomic) double contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) double titleAnchorAdditionalOffset; // @synthesize titleAnchorAdditionalOffset=_titleAnchorAdditionalOffset;
@property(nonatomic) long long titleAnchorEdge; // @synthesize titleAnchorEdge=_titleAnchorEdge;
@property(nonatomic) double titleLayoutWidth; // @synthesize titleLayoutWidth=_titleLayoutWidth;
@property(nonatomic) _Bool hidesTitleText; // @synthesize hidesTitleText=_hidesTitleText;
@property(nonatomic) long long visibleEdge; // @synthesize visibleEdge=_visibleEdge;
@property(copy, nonatomic) NSArray *shareParticipants; // @synthesize shareParticipants=_shareParticipants;
@property(nonatomic, getter=isUnread) _Bool unread; // @synthesize unread=_unread;
@property(nonatomic, getter=isPinned) _Bool pinned; // @synthesize pinned=_pinned;
@property(nonatomic) unsigned long long mediaStateIcon; // @synthesize mediaStateIcon=_mediaStateIcon;
@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(nonatomic, getter=isReordering) _Bool reordering; // @synthesize reordering=_reordering;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) UIButton *mediaStateMuteButton; // @synthesize mediaStateMuteButton=_mediaStateMuteButton;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)configureForDragPreview;	// IMP=0x000000000011041d
- (_Bool)_isPinnedAndNarrow;	// IMP=0x000000000011031c
- (void)_updateHighlightAlpha;	// IMP=0x0000000000110153
- (_Bool)_isHoveringOverCloseButton;	// IMP=0x00000000001100c2
- (_Bool)_isHovering;	// IMP=0x0000000000110048
- (void)_hover:(id)arg1;	// IMP=0x000000000010ff50
- (_Bool)_showsCloseButton;	// IMP=0x000000000010feec
- (void)_updateCloseButtonEffect;	// IMP=0x000000000010fe3e
- (void)_updateCloseButtonImage;	// IMP=0x000000000010fda4
- (void)_updateCloseButtonAlpha;	// IMP=0x000000000010fc2a
- (void)_showOrHideCloseButton;	// IMP=0x000000000010fbd5
- (void)setTitleText:(id)arg1;	// IMP=0x000000000010f89d
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000010f763
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000010f629
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000010f553
- (id)initWithTabBar:(id)arg1;	// IMP=0x000000000010e846
- (double)_contentWidthIgnoringCollaborationViews;	// IMP=0x000000000010e723
- (_Bool)_showsParticipants;	// IMP=0x000000000010e66c
- (void)_updateShowsParticipants;	// IMP=0x000000000010e412
- (void)_layOutParticipantsView;	// IMP=0x000000000010e241
- (_Bool)_showsUnreadIndicator;	// IMP=0x000000000010e126
- (void)_updateShowsUnreadIndicator;	// IMP=0x000000000010de14
- (void)_layOutUnreadIndicator;	// IMP=0x000000000010db9b
- (void)_updateMediaStateButtonButtonAlpha;	// IMP=0x000000000010da7c
- (void)_layoutMediaStateIndicator;	// IMP=0x000000000010d919
- (struct CGRect)_closeButtonFrame;	// IMP=0x000000000010d87a
- (void)_layoutCloseButton;	// IMP=0x000000000010d655
- (void)_layoutEdges;	// IMP=0x000000000010d350
- (void)_layoutTitleClipperView;	// IMP=0x000000000010d1d5
- (void)updateTabBarStyle;	// IMP=0x000000000010d035
- (void)updateTitleTruncation;	// IMP=0x000000000010d023
- (void)_updateIconViewVisibility;	// IMP=0x000000000010cfd4
- (void)_updateMediaStateIndicator;	// IMP=0x000000000010ce52
- (long long)_iconPosition;	// IMP=0x000000000010cdde
- (_Bool)_hasRoomForIconAndCloseButton;	// IMP=0x000000000010cd39
- (void)_layoutTitleLabelUsingCachedTruncation;	// IMP=0x000000000010c445
- (void)_layoutTitleLabel;	// IMP=0x000000000010c40d
- (struct CGRect)_titleBoundingBox;	// IMP=0x000000000010c0c9
- (_Bool)_canUseCachedTitleTruncationOnBoundsChange;	// IMP=0x000000000010c0ae
- (struct CGRect)_titleBounds;	// IMP=0x000000000010c012
- (long long)_physicalEdgeForLogicalEdge:(long long)arg1;	// IMP=0x000000000010bfcf
- (id)_truncatedTitleWithFont:(id)arg1 desiredWidth:(double)arg2 truncatedSize:(struct CGSize *)arg3;	// IMP=0x000000000010bcad

@end
