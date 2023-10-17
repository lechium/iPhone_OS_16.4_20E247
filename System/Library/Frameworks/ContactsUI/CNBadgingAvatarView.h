//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CNAvatarAccessoryView, CNAvatarViewController, CNBadgingAvatarBadgeStyleSettings, UIImage, UIImageView;
@protocol CNCancelable;

__attribute__((visibility("hidden")))
@interface CNBadgingAvatarView : UIView
{
    _Bool _isMarkedForSyndication;	// 8 = 0x8
    _Bool _isDoNotDisturb;	// 9 = 0x9
    CNAvatarViewController *_avatarViewController;	// 16 = 0x10
    CNBadgingAvatarBadgeStyleSettings *_badgeStyleSettings;	// 24 = 0x18
    UIImageView *_badgeImageView;	// 32 = 0x20
    id <CNCancelable> _likenessBadgeRendererToken;	// 40 = 0x28
    CNAvatarAccessoryView *_mediaContextBadge;	// 48 = 0x30
    UIImageView *_mediaContextBadgeView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001d9e31
@property(nonatomic) _Bool isDoNotDisturb; // @synthesize isDoNotDisturb=_isDoNotDisturb;
@property(nonatomic) _Bool isMarkedForSyndication; // @synthesize isMarkedForSyndication=_isMarkedForSyndication;
@property(retain, nonatomic) UIImageView *mediaContextBadgeView; // @synthesize mediaContextBadgeView=_mediaContextBadgeView;
@property(retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge; // @synthesize mediaContextBadge=_mediaContextBadge;
@property(retain, nonatomic) id <CNCancelable> likenessBadgeRendererToken; // @synthesize likenessBadgeRendererToken=_likenessBadgeRendererToken;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings; // @synthesize badgeStyleSettings=_badgeStyleSettings;
@property(retain, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
- (void)renderLikenessBadge:(id)arg1;	// IMP=0x00000000001d9a39
- (void)renderMediaContextBadgeImage;	// IMP=0x00000000001d9907
- (void)updateBadgeImageViewPosition;	// IMP=0x00000000001d93ab
- (void)updateBadgeImageViewContentMode;	// IMP=0x00000000001d932c
- (void)updateBadgeImageViewBackgroundColor;	// IMP=0x00000000001d929f
- (void)updateBadgeCropStyle;	// IMP=0x00000000001d91f2
- (void)updateBadgeTintColor;	// IMP=0x00000000001d9165
- (void)setImage:(id)arg1 forAccessoryViewType:(unsigned long long)arg2;	// IMP=0x00000000001d8c90
- (void)updateBadgeImageViewFrame;	// IMP=0x00000000001d8b64
- (id)schedulerProvider;	// IMP=0x00000000001d8aaa
- (id)imageRenderer;	// IMP=0x00000000001d89f0
- (id)currentLikenessScope;	// IMP=0x00000000001d8936
@property(retain, nonatomic) UIImage *badgeImage;
- (void)layoutSubviews;	// IMP=0x00000000001d87ad
- (void)dealloc;	// IMP=0x00000000001d8742
- (id)initWithAvatarViewController:(id)arg1;	// IMP=0x00000000001d85c2

@end
