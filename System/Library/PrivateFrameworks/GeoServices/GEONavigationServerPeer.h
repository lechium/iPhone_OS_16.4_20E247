//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEONavdPeer.h"

@class GEONavigationServer, NSString;

__attribute__((visibility("hidden")))
@interface GEONavigationServerPeer : GEONavdPeer
{
    GEONavigationServer *_delegate;	// 40 = 0x28
    _Bool _hasEntitlement;	// 48 = 0x30
    _Bool _wantsRoutes;	// 49 = 0x31
}

- (void).cxx_destruct;	// IMP=0x0000000001446cdb
@property(readonly, nonatomic) _Bool wantsRoutes; // @synthesize wantsRoutes=_wantsRoutes;
@property(nonatomic) _Bool hasEntitlement; // @synthesize hasEntitlement=_hasEntitlement;
@property(nonatomic) __weak GEONavigationServer *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x0000000001446b95
- (void)setWantsRoutes:(_Bool)arg1;	// IMP=0x0000000001446b85
- (void)requestUpdates;	// IMP=0x0000000001446ac8
- (void)requestNavigationVoiceVolume;	// IMP=0x00000000014469c6
- (void)requestPositionFromDestination;	// IMP=0x00000000014468c4
- (void)requestPositionFromManeuver;	// IMP=0x00000000014467c2
- (void)requestPositionFromSign;	// IMP=0x00000000014466c0
- (void)requestRideSelections;	// IMP=0x00000000014465be
- (void)requestStepNameInfo;	// IMP=0x00000000014464bc
- (void)requestStepIndex;	// IMP=0x00000000014463ba
- (void)requestActiveRouteDetailsData;	// IMP=0x00000000014462b8
- (void)requestGuidanceState;	// IMP=0x00000000014461b6
- (void)requestTransitSummary;	// IMP=0x00000000014460b4
- (void)requestRouteSummary;	// IMP=0x0000000001445fb2
- (void)requestETAUpdate;	// IMP=0x0000000001445ebb
- (void)requestRoute;	// IMP=0x0000000001445dc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

