//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UIActivityIndicatorView, UIView;

__attribute__((visibility("hidden")))
@interface PUImportOneUpCellBadgeView : UICollectionReusableView
{
    _Bool _selectable;	// 8 = 0x8
    _Bool _inUpdateBlock;	// 9 = 0x9
    _Bool _needsBadgeUpdate;	// 10 = 0xa
    long long _badgeType;	// 16 = 0x10
    UIView *_badgeContainerView;	// 24 = 0x18
    UIView *_badgeView;	// 32 = 0x20
    UIActivityIndicatorView *_spinner;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001ec353
@property(nonatomic) _Bool needsBadgeUpdate; // @synthesize needsBadgeUpdate=_needsBadgeUpdate;
@property(nonatomic) _Bool inUpdateBlock; // @synthesize inUpdateBlock=_inUpdateBlock;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *badgeContainerView; // @synthesize badgeContainerView=_badgeContainerView;
@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
- (void)_createSpinnerIfNecessary;	// IMP=0x00000000001ec1bf
- (void)performBadgeUpdates:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ec180
- (void)updateBadgeUIIfNeeded;	// IMP=0x00000000001ec014
- (void)setNeedsBadgeUpdate;	// IMP=0x00000000001ebffd
- (void)prepareForReuse;	// IMP=0x00000000001ebed7
- (void)layoutSubviews;	// IMP=0x00000000001ebc72
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001ebc5c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ebbb7

@end

