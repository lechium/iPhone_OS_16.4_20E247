//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class ACUISActivityHostViewController, BSAction;

@protocol ACUISActivityHostViewControllerDelegate <NSObject>

@optional
- (void)activityHostViewControllerSignificantUserInteractionEnded:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerSignificantUserInteractionBegan:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerHostShouldCancelTouches:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerTextColorDidChange:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerBackgroundTintColorDidChange:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewController:(ACUISActivityHostViewController *)arg1 requestsLaunchWithAction:(BSAction *)arg2;
@end
