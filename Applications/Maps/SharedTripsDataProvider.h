//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSArray, NSString;

@interface SharedTripsDataProvider : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    NSArray *_sharedTrips;	// 16 = 0x10
    _Bool _active;	// 24 = 0x18
    _Bool _hasInitialData;	// 25 = 0x19
    _Bool _combineAllTrips;	// 26 = 0x1a
    NSArray *_sharedTripSummaries;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000041a41d
@property(readonly, nonatomic) NSArray *sharedTripSummaries; // @synthesize sharedTripSummaries=_sharedTripSummaries;
@property(readonly, nonatomic) _Bool combineAllTrips; // @synthesize combineAllTrips=_combineAllTrips;
@property(readonly, nonatomic) _Bool hasInitialData; // @synthesize hasInitialData=_hasInitialData;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)sharedTripService:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2;	// IMP=0x001000000041a3e1
- (void)sharedTripService:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2;	// IMP=0x001000000041a3ca
- (void)sharedTripService:(id)arg1 didUpdateETAForSharedTrip:(id)arg2;	// IMP=0x001000000041a3b3
- (void)sharedTripService:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2;	// IMP=0x001000000041a39c
- (void)sharedTripService:(id)arg1 didUpdateClosedTrip:(id)arg2;	// IMP=0x001000000041a385
- (void)sharedTripService:(id)arg1 didRemoveSharedTrip:(id)arg2;	// IMP=0x001000000041a36e
- (void)sharedTripService:(id)arg1 didReceiveSharedTrip:(id)arg2;	// IMP=0x001000000041a357
- (void)sharedTripServiceDidUpdateReceivingAvailability:(id)arg1;	// IMP=0x001000000041a340
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (void)_updateAndNotifyObservers:(_Bool)arg1;	// IMP=0x0010000000419ec1
- (id)initWithCombineAllTrips:(_Bool)arg1;	// IMP=0x0010000000419dc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
