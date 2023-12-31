//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CLSNotificationBannerView, NSLayoutConstraint;

@interface CLSNotificationBannerViewController : UIViewController
{
    _Bool _bannerVisible;	// 8 = 0x8
    _Bool _bannerAnimating;	// 9 = 0x9
    CLSNotificationBannerView *_bannerView;	// 16 = 0x10
    NSLayoutConstraint *_bannerYPositionConstraint;	// 24 = 0x18
    NSLayoutConstraint *_bannerWidthConstraint;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000526a
@property(retain, nonatomic) NSLayoutConstraint *bannerWidthConstraint; // @synthesize bannerWidthConstraint=_bannerWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bannerYPositionConstraint; // @synthesize bannerYPositionConstraint=_bannerYPositionConstraint;
@property(nonatomic) _Bool bannerAnimating; // @synthesize bannerAnimating=_bannerAnimating;
@property(nonatomic) _Bool bannerVisible; // @synthesize bannerVisible=_bannerVisible;
@property(retain, nonatomic) CLSNotificationBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (struct CGPoint)_visibleBannerCenterPosition:(struct CGSize)arg1;	// IMP=0x000000000000500e
- (struct CGPoint)_hiddenBannerPosition:(struct CGSize)arg1;	// IMP=0x0000000000004f29
- (void)addConstraintsForBannerView;	// IMP=0x0000000000004a31
- (double)bannerWidthForViewSize:(struct CGSize)arg1;	// IMP=0x000000000000499f
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000046b7
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000004523
- (void)hideBannerQuickly:(_Bool)arg1;	// IMP=0x000000000000419a
- (void)showCurrentBanner;	// IMP=0x0000000000003db5
- (void)addBannerView:(id)arg1;	// IMP=0x0000000000003c71
- (void)handleWindowPan:(id)arg1;	// IMP=0x0000000000003bcd
- (_Bool)windowPointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000000397f

@end

