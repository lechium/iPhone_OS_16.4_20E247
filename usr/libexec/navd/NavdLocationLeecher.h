//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, GEOLocationShifter, NSArray, NSDate, NSMutableArray, NSString;
@protocol NavdLocationProvider, OS_dispatch_queue;

@interface NavdLocationLeecher : NSObject
{
    id <NavdLocationProvider> _locationProvider;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    _Bool _leechingLocations;	// 24 = 0x18
    _Bool _leechingPaused;	// 25 = 0x19
    GEOLocationShifter *_locationShifter;	// 32 = 0x20
    CLLocation *_lastLeechedLocation;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serialQueue;	// 48 = 0x30
    NSMutableArray *_leechedLocations;	// 56 = 0x38
    NSDate *_lastRecordDate;	// 64 = 0x40
    double _maxLeechingTimeInterval;	// 72 = 0x48
}

+ (id)sharedLeecher;	// IMP=0x002000000002a720
- (void).cxx_destruct;	// IMP=0x002000000002c1bb
- (void)locationProvider:(id)arg1 didChangeCoarseMode:(_Bool)arg2;	// IMP=0x001000000002bfd9
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;	// IMP=0x001000000002bfd3
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;	// IMP=0x001000000002be07
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x001000000002bb8e
- (void)_handleShiftedCoordinate:(CDStruct_c3b9c2ee)arg1 fromClientLocation:(CDStruct_7cf4616f)arg2;	// IMP=0x001000000002ba02
- (void)_handleLeechedLocation:(id)arg1;	// IMP=0x001000000002b6e6
- (void)_notifyObserversAboutPrecision;	// IMP=0x001000000002b556
- (void)_notifyObserversAboutError:(id)arg1;	// IMP=0x001000000002b3f7
- (void)_notifyObserversAboutLocation:(id)arg1;	// IMP=0x001000000002b298
- (void)removeObserver:(id)arg1;	// IMP=0x001000000002b1ed
- (void)addObserver:(id)arg1;	// IMP=0x001000000002b142
@property(readonly, nonatomic) _Bool coarseModeEnabled;
@property(readonly, nonatomic) NSArray *leechedLocations;
- (id)lastLeechedLocation;	// IMP=0x001000000002afa7
- (void);	// IMP=0x001000000002ae05
- (void)_clearLeachedLocations;	// IMP=0x001000000002adef
- (void)_pruneLeachedLocations;	// IMP=0x001000000002ac63
- (void)stopLeeching;	// IMP=0x001000000002ab7e
- (void)resumeLeeching;	// IMP=0x001000000002aab2
- (void)pauseLeeching;	// IMP=0x001000000002a9e6
- (void)startLeeching;	// IMP=0x001000000002a901
- (id)init;	// IMP=0x001000000002a775

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

