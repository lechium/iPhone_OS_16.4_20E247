//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class IKLockupElement, MPUContentSizeLayoutConstraint, NSLayoutConstraint, UILabel, UIView, VideosExtrasConstrainedArtworkContainerView;

__attribute__((visibility("hidden")))
@interface VideosExtrasGridCollectionViewCell : UICollectionViewCell
{
    UIView *_spacerView;	// 8 = 0x8
    NSLayoutConstraint *_artworkContainerWidthConstraint;	// 16 = 0x10
    NSLayoutConstraint *_artworkContainerHeightConstraint;	// 24 = 0x18
    MPUContentSizeLayoutConstraint *_topLineHeight;	// 32 = 0x20
    MPUContentSizeLayoutConstraint *_subtitleLineHeight;	// 40 = 0x28
    NSLayoutConstraint *_spacerHeight;	// 48 = 0x30
    NSLayoutConstraint *_spacerTop;	// 56 = 0x38
    IKLockupElement *_lockupElement;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    UILabel *_subtitleLabel;	// 80 = 0x50
    VideosExtrasConstrainedArtworkContainerView *_artworkContainer;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000001e784f
@property(readonly, nonatomic) VideosExtrasConstrainedArtworkContainerView *artworkContainer; // @synthesize artworkContainer=_artworkContainer;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak IKLockupElement *lockupElement; // @synthesize lockupElement=_lockupElement;
- (void)prepareForReuse;	// IMP=0x00000000001e753c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001e74bd
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2;	// IMP=0x00000000001e74a8
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2 withSizing:(_Bool)arg3;	// IMP=0x00000000001e5b36
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001e53ce

@end

