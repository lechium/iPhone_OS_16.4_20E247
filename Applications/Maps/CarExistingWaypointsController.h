//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RoutePlanningSession;

@interface CarExistingWaypointsController
{
    RoutePlanningSession *_routePlanningSession;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000072f4b3
@property(readonly, nonatomic) RoutePlanningSession *routePlanningSession; // @synthesize routePlanningSession=_routePlanningSession;
- (_Bool)shouldStartLoadWhenBecomingCurrent;	// IMP=0x001000000072f49a
- (id)subtitleForCurrentDestination;	// IMP=0x001000000072f420
- (id)titleForCurrentDestination;	// IMP=0x001000000072f3d0
- (id)destinationSearchResultIfAvailable;	// IMP=0x001000000072f380
- (id)originSearchResult;	// IMP=0x001000000072f330
- (id)initWithRoutePlanningSession:(id)arg1;	// IMP=0x001000000072f2c2

@end

