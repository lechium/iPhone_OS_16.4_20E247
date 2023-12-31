//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MapsSessionObserver-Protocol.h"

@class NSArray, NSDictionary, Result, RoutePlanningSession;

@protocol RoutePlanningSessionObserver <MapsSessionObserver>
- (void)routePlanningSession:(RoutePlanningSession *)arg1 didChangeCurrentTransportType:(long long)arg2 userInitiated:(_Bool)arg3;
- (void)routePlanningSession:(RoutePlanningSession *)arg1 didReceiveUpdates:(NSDictionary *)arg2 forRoutesResult:(Result *)arg3;
- (void)routePlanningSession:(RoutePlanningSession *)arg1 didUpdateRouteCollectionResult:(Result *)arg2 forTransportType:(long long)arg3;
- (void)routePlanningSession:(RoutePlanningSession *)arg1 didFinishResolvingWaypointSet:(Result *)arg2;

@optional
- (void)routePlanningSession:(RoutePlanningSession *)arg1 didUpdateAutomaticSharingContacts:(NSArray *)arg2;
@end

