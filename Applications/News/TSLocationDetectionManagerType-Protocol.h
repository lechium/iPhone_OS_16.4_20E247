//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, FCObservable;

@protocol TSLocationDetectionManagerType
@property(readonly, nonatomic) FCObservable *observableMostFrequentLocation;
@property(readonly, nonatomic) CLLocation *mostFrequentLocation;
@property(readonly, nonatomic) _Bool authorized;
@property(readonly, nonatomic) _Bool locationServicesEnabled;
@end
