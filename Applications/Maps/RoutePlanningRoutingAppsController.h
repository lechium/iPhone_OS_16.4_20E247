//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface RoutePlanningRoutingAppsController
{
}

- (void)routingAppSelectionControllerDidSelectApp:(id)arg1;	// IMP=0x00200000006fa091
- (void)routingAppSelectionControllerDidCancel:(id)arg1;	// IMP=0x00100000006fa013
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000006f9f81
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateResolvedWaypointSet:(id)arg2;	// IMP=0x00100000006f9f6c
@property(readonly, nonatomic) long long observedRoutePlanningData;
- (void)_updateWaypointSet:(id)arg1;	// IMP=0x00100000006f9e1d
- (id)initWithDataCoordination:(id)arg1;	// IMP=0x00100000006f9cd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

