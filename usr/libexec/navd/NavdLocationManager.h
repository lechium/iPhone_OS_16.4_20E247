//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLInUseAssertion, CLLocation, GEOLocationShifter, NSMutableArray, NSString;
@protocol NavdLocationProvider, OS_dispatch_queue, OS_dispatch_source;

@interface NavdLocationManager : NSObject
{
    id <NavdLocationProvider> _locationProvider;	// 8 = 0x8
    CLInUseAssertion *_inUseAssertion;	// 16 = 0x10
    _Bool _updatingLocations;	// 24 = 0x18
    GEOLocationShifter *_locationShifter;	// 32 = 0x20
    unsigned long long _numberOfRetriesForLocation;	// 40 = 0x28
    CLLocation *_pivotLocation;	// 48 = 0x30
    CLLocation *_currentLocation;	// 56 = 0x38
    CLLocation *_candidateStaleLocation;	// 64 = 0x40
    int _transportTypeToRequestAccuracyFor;	// 72 = 0x48
    NSMutableArray *_locationHandlers;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_serialQueue;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_staleLocationTimer;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x00200000000064c8
- (void).cxx_destruct;	// IMP=0x0020000000008908
@property(nonatomic) unsigned long long numberOfRetriesForLocation; // @synthesize numberOfRetriesForLocation=_numberOfRetriesForLocation;
- (void)locationProvider:(id)arg1 didChangeCoarseMode:(_Bool)arg2;	// IMP=0x00100000000088ee
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;	// IMP=0x00100000000088e8
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;	// IMP=0x0010000000008762
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x00100000000083ec
- (void)_q_processErrorWhenUpdatingCurrentLocation:(id)arg1;	// IMP=0x0010000000008302
- (void)_q_processCandidateLocation:(id)arg1;	// IMP=0x0010000000007de0
- (void)_q_goodCandidateLocation:(id)arg1 shouldUpdatePivot:(_Bool)arg2;	// IMP=0x0010000000007c36
- (void)_q_badCandidateLocation:(id)arg1;	// IMP=0x0010000000007be0
- (void)_q_createActivityForLocationUpdate;	// IMP=0x001000000000798c
- (void)_q_locationRefreshActivityFired;	// IMP=0x00100000000078f3
- (void)_q_createActivityForStaleLocationUse:(id)arg1;	// IMP=0x00100000000077e5
- (void)_q_createActivityToUseStaleLocation:(id)arg1 fireAtAbsoluteTime:(double)arg2;	// IMP=0x00100000000075d1
- (void)_q_cancelStaleLocationTimer;	// IMP=0x001000000000759e
- (void)_q_staleLocationUseActivityFired:(id)arg1;	// IMP=0x001000000000749d
- (void)_q_updateDesiredAccuracyBasedOnCadidateDistanceToPivot:(double)arg1 candidateDistanceToCurrent:(double)arg2;	// IMP=0x00100000000072c0
- (double)_q_desiredAccuracyForTransportType:(int)arg1 motionType:(unsigned long long)arg2;	// IMP=0x0010000000006ff5
- (_Bool)_q_pivotShouldBeUpdatedDistanceToCandidate:(double)arg1;	// IMP=0x0010000000006f24
- (_Bool)_q_isNewLocation:(id)arg1 tolerableWithLocation:(id)arg2 distance:(double)arg3;	// IMP=0x0010000000006e5b
- (void)getCurrentLocationWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006b4f
@property(readonly, nonatomic) _Bool coarseModeEnabled;
@property(readonly, nonatomic) double desiredAccuracy;
- (void)stopLocationUpdate;	// IMP=0x0010000000006ac2
- (void)_q_stopLocationUpdate;	// IMP=0x001000000000697c
- (void)startLocationUpdate;	// IMP=0x001000000000691b
- (void)_q_startLocationUpdate;	// IMP=0x0010000000006799
- (void)dealloc;	// IMP=0x001000000000674b
- (id)initWithLocationProvider:(id)arg1;	// IMP=0x00100000000065c8
- (id)init;	// IMP=0x001000000000656e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
