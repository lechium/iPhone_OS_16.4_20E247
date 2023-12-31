//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsAds/SVVideoAdEventTracker-Protocol.h>
#import <NewsAds/SVVideoProviding-Protocol.h>

@class UIButton, UIView;

@protocol SVVideoAdProviding <SVVideoProviding, SVVideoAdEventTracker>
@property(readonly, nonatomic) double prerollReadyToPlayTimeout;
@property(readonly, nonatomic) _Bool hasAction;
@property(readonly, nonatomic) unsigned long long skipThreshold;
- (void)presentAction;

@optional
@property(readonly, nonatomic) UIButton *privacyMarker;
@property(readonly, nonatomic) UIView *metricsView;
@end

