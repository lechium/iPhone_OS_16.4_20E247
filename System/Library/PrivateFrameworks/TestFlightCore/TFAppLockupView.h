//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, TFAppLockupViewSpecification, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface TFAppLockupView : UIView
{
    UIImageView *_iconView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_primarySubtitleLabel;	// 24 = 0x18
    UILabel *_secondarySubtitleLabel;	// 32 = 0x20
    TFAppLockupViewSpecification *_specification;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001823d
@property(retain, nonatomic) TFAppLockupViewSpecification *specification; // @synthesize specification=_specification;
@property(readonly, nonatomic) UILabel *secondarySubtitleLabel; // @synthesize secondarySubtitleLabel=_secondarySubtitleLabel;
@property(readonly, nonatomic) UILabel *primarySubtitleLabel; // @synthesize primarySubtitleLabel=_primarySubtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000018067
@property(readonly, nonatomic) struct CGSize displayedIconSize;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;	// IMP=0x0000000000017e28
- (void)_layoutLabelsInLayoutBounds:(struct CGRect)arg1;	// IMP=0x00000000000178a5
- (void)layoutSubviews;	// IMP=0x0000000000017469
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000173eb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000017280
- (void)_styleSubviews;	// IMP=0x0000000000016da1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000016b63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
