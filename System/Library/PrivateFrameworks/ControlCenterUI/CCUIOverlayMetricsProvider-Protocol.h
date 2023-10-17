//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIStatusBarStyleSnapshot;

@protocol CCUIOverlayMetricsProvider <NSObject>
@property(readonly, nonatomic) double overlayReachabilityHeight;
@property(readonly, copy, nonatomic) CCUIStatusBarStyleSnapshot *overlayStatusBarStyle;
@property(readonly, nonatomic) long long overlayInterfaceOrientation;
@property(readonly, nonatomic) struct CGRect overlayContainerFrame;
@property(readonly, nonatomic) struct CGRect overlayBackgroundFrame;
@end
