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

+ (id)sharedLeecher;	// IMP=0x0020000000100fdc
- (void).cxx_destruct;	// IMP=0x0020000000102a77
- (void)locationProvider:(id)arg1 didChangeCoarseMode:(_Bool)arg2;	// IMP=0x0010000000102895
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;	// IMP=0x001000000010288f
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;	// IMP=0x00100000001026c3
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x001000000010244a
- (void)_handleShiftedCoordinate:(CDStruct_c3b9c2ee)arg1 fromClientLocation:(CDStruct_7cf4616f)arg2;	// IMP=0x00100000001022be
- (void)_handleLeechedLocation:(id)arg1;	// IMP=0x0010000000101fa2
- (void)_notifyObserversAboutPrecision;	// IMP=0x0010000000101e12
- (void)_notifyObserversAboutError:(id)arg1;	// IMP=0x0010000000101cb3
- (void)_notifyObserversAboutLocation:(id)arg1;	// IMP=0x0010000000101b54
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000101aa9
- (void)addObserver:(id)arg1;	// IMP=0x00100000001019fe
@property(readonly, nonatomic) _Bool coarseModeEnabled;
@property(readonly, nonatomic) NSArray *leechedLocations;
- (id)lastLeechedLocation;	// IMP=0x0010000000101863
- (void)_recordLeechedLocation:(id)arg1;	// IMP=0x00100000001016c1
- (void)_clearLeachedLocations;	// IMP=0x00100000001016ab
- (void)_pruneLeachedLocations;	// IMP=0x001000000010151f
- (void)stopLeeching;	// IMP=0x001000000010143a
- (void)resumeLeeching;	// IMP=0x001000000010136e
- (void)pauseLeeching;	// IMP=0x00100000001012a2
- (void)startLeeching;	// IMP=0x00100000001011bd
- (id)init;	// IMP=0x0010000000101031

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

