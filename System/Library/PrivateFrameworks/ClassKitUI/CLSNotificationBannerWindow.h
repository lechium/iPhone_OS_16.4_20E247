//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

@class CLSNotificationBannerViewController, NSObject;
@protocol OS_dispatch_semaphore;

@interface CLSNotificationBannerWindow : UIWindow
{
    CLSNotificationBannerViewController *_currentBannerViewController;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_bannerSemaphore;	// 16 = 0x10
}

+ (void)enqueBanner:(id)arg1;	// IMP=0x00600000000021ab
+ (id)queue;	// IMP=0x0060000000002154
+ (id)bannerWindow;	// IMP=0x0060000000001d9e
- (void).cxx_destruct;	// IMP=0x00000000000023f1
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *bannerSemaphore; // @synthesize bannerSemaphore=_bannerSemaphore;
@property(retain, nonatomic) CLSNotificationBannerViewController *currentBannerViewController; // @synthesize currentBannerViewController=_currentBannerViewController;
- (void)_hideBanner:(id)arg1 quickly:(_Bool)arg2;	// IMP=0x0000000000002108
- (void)_showBanner:(id)arg1;	// IMP=0x000000000000206b
- (void)handlePan:(id)arg1;	// IMP=0x0000000000001ff9
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000001f6b
- (id)init;	// IMP=0x0000000000001de8
- (_Bool)_includeInDefaultImageSnapshot;	// IMP=0x0000000000001de0
- (_Bool)_canAffectStatusBarAppearance;	// IMP=0x0000000000001dd8

@end

