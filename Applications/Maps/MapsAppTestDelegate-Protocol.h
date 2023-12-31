//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MKMapView, VKMapView;

@protocol MapsAppTestDelegate <NSObject>
@property(readonly, nonatomic) VKMapView *mainVKMapView;
@property(readonly, nonatomic) MKMapView *mainMKMapView;
- (_Bool)isRunningOnCarPlay;
- (void)didTearDownForVKTest;
- (void)willSetupForVKTest;
- (void)switchToViewMode:(long long)arg1;
- (void)switchToMapType:(unsigned long long)arg1;
@end

