//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class BNBannerSource, BannerItem, MapsBannerContentView, NSString;
@protocol SBUISystemApertureAccessoryView;

@interface MapsBannerView : UIView
{
    _Bool _aperturePresentation;	// 8 = 0x8
    BNBannerSource *_target;	// 16 = 0x10
    BannerItem *_item;	// 24 = 0x18
    MapsBannerContentView *_contentView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000099f128
@property(readonly, nonatomic) MapsBannerContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) _Bool aperturePresentation; // @synthesize aperturePresentation=_aperturePresentation;
@property(readonly, nonatomic) BannerItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) __weak BNBannerSource *target; // @synthesize target=_target;
@property(readonly, nonatomic) double bannerAccessoryViewTrailingInset;
@property(readonly, nonatomic) double bannerAccessoryViewLeadingInset;
- (id)initWithTarget:(id)arg1 item:(id)arg2 aperturePresentation:(_Bool)arg3;	// IMP=0x001000000099ebfb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property(nonatomic) _Bool expanded;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property(nonatomic) _Bool showsControls;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;

@end

