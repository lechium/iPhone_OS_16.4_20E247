//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, HMDNetworkObserver, HMDThreadNetworkObserver, NSArray;

@protocol HMDHouseholdMetricsDataSource
@property(readonly, nonatomic) HMDThreadNetworkObserver *threadNetworkObserver;
@property(readonly, nonatomic) HMDNetworkObserver *networkObserver;
@property(readonly, nonatomic) NSArray *homeDataSources;
@property(readonly, nonatomic) NSArray *devicesOnCurrentAccount;
@property(readonly, nonatomic) HMDDevice *currentDevice;
@end

