//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsTransport/NTPBTelemetryNetworkEventGroup.h>

@class FCNetworkEventStats, NSDate;

@interface NTPBTelemetryNetworkEventGroup (FCNetworkBehaviorMonitorAdditions)
@property(readonly, nonatomic) unsigned long long cacheMissCount;
@property(readonly, nonatomic) unsigned long long cacheHitCount;
@property(readonly, nonatomic) FCNetworkEventStats *timeToFirstByteStats;
@property(readonly, nonatomic) FCNetworkEventStats *connectDurationStats;
@property(readonly, nonatomic) FCNetworkEventStats *dnsDurationStats;
@property(readonly, nonatomic) FCNetworkEventStats *totalDurationStats;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@end
