//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEORouteMatch, NSString, NSUUID, RAPAuxiliaryControlsRecorder, RAPDirectionsRecording;
@protocol OS_dispatch_queue;

@interface RAPGraphDirectionsRecorder : NSObject
{
    NSObject<OS_dispatch_queue> *;	// 8 = 0x8
    RAPAuxiliaryControlsRecorder *_auxiliaryControlsRecorder;	// 16 = 0x10
    RAPDirectionsRecording *_recording;	// 24 = 0x18
    unsigned long long _numRecordedRoutes;	// 32 = 0x20
    _Bool _hasAuxiliaryControlsOrigin;	// 40 = 0x28
    long long _auxiliaryControlsOrigin;	// 48 = 0x30
    _Bool _isRecording;	// 56 = 0x38
    NSUUID *_historyItemIdentifier;	// 64 = 0x40
    GEOComposedRoute *_observedRoute;	// 72 = 0x48
    GEORouteMatch *_lastGoodLocation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000397ed8
@property(retain, nonatomic) GEORouteMatch *lastGoodLocation; // @synthesize lastGoodLocation=_lastGoodLocation;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) __weak GEOComposedRoute *observedRoute; // @synthesize observedRoute=_observedRoute;
@property(retain, nonatomic) NSUUID *historyItemIdentifier; // @synthesize historyItemIdentifier=_historyItemIdentifier;
- (void)navigationService:(id)arg1 didReroute:(id)arg2;	// IMP=0x0010000000397d31
- (id)_userPathEntryWithRouteIndex:(unsigned long long)arg1 stepIndex:(unsigned long long)arg2;	// IMP=0x0010000000397b82
- (void)_replaceUserPathWithRouteIndex:(unsigned long long)arg1 stepIndex:(unsigned long long)arg2 traversal:(int)arg3;	// IMP=0x00100000003978ab
- (void)_storeUserPathWithRouteIndex:(unsigned long long)arg1 stepIndex:(unsigned long long)arg2;	// IMP=0x00100000003976fd
- (void)navigationServiceWillReroute:(id)arg1;	// IMP=0x001000000039760b
- (void)navigationService:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00100000003974a9
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x001000000039727c
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;	// IMP=0x0010000000397276
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;	// IMP=0x0010000000397270
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;	// IMP=0x001000000039726a
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredSegment:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x0010000000397202
- (void)_dispatch:(CDUnknownBlockType)arg1;	// IMP=0x00100000003970ad
- (void)recordNewSessionID:(struct GEOSessionID)arg1;	// IMP=0x0010000000397034
- (void)clearAll;	// IMP=0x0010000000396f11
- (void)recordNewRoute:(id)arg1;	// IMP=0x0010000000396ccb
- (void)recordNewResponse:(id)arg1;	// IMP=0x0010000000396b59
- (void)recordNewRequest:(id)arg1;	// IMP=0x0010000000396a18
- (void)recordWaypoints:(id)arg1 startWaypointSearchTicket:(id)arg2 endWaypointSearchTicket:(id)arg3;	// IMP=0x0010000000396723
- (id)_userSearchInputForWaypoint:(id)arg1;	// IMP=0x0010000000396489
- (void)updateRideSelectionsWithComposedRoute:(id)arg1;	// IMP=0x00100000003963da
- (void)_updateRideSelectionsWithComposedRoute:(id)arg1;	// IMP=0x0010000000396319
- (void)setSelectedRoute:(id)arg1 fromRouteList:(id)arg2;	// IMP=0x0010000000395f1e
- (_Bool)_bucketHasOnlyMissedStep:(id)arg1;	// IMP=0x0010000000395d34
- (_Bool)_bucketHasOnlyStoredSteps:(id)arg1;	// IMP=0x0010000000395be3
- (void)_optimizeRecordingData;	// IMP=0x00100000003950d9
- (void)stopRecording;	// IMP=0x0010000000395048
- (void)savePartialRecordingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000394bd6
- (void)_savePartialRecording;	// IMP=0x0010000000394bc2
- (void)setOriginatingDeviceFromOrigin:(long long)arg1;	// IMP=0x0010000000394b9d
- (void)_immediatelyUpdateRecording:(id)arg1 withAuxiliaryControlsRecording:(id)arg2;	// IMP=0x0010000000394aa9
- (id)copyCurrentPartialRecording;	// IMP=0x00100000003948b8
- (void)startRecording;	// IMP=0x00100000003947f5
- (void)dealloc;	// IMP=0x001000000039475f
- (id)init;	// IMP=0x0010000000394688

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
