//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SPFinderInterface;
@protocol CLIntersiloUniverse;

@interface CLActivityBasedBeaconPayloadCache : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    shared_ptr_c7246d68 _external;	// 16 = 0x10
    struct CLSubHarvesterAvengerSettings _settings;	// 32 = 0x20
    SPFinderInterface *_finderInterface;	// 288 = 0x120
    int _recentSignalEnvironment;	// 296 = 0x128
    NSMutableArray *_beaconPayloadCache;	// 304 = 0x130
    NSMutableArray *_beaconPayloadsToUpload;	// 312 = 0x138
    _Bool _isCameraAppRunning;	// 320 = 0x140
}

- (id).cxx_construct;	// IMP=0x00200000009e4051
- (void).cxx_destruct;	// IMP=0x00100000009e4043
@property(retain) NSMutableArray *beaconPayloadsToUpload; // @synthesize beaconPayloadsToUpload=_beaconPayloadsToUpload;
@property(retain) NSMutableArray *beaconPayloadCache; // @synthesize beaconPayloadCache=_beaconPayloadCache;
- (double)computeCircleIntersectionAreaWithDistance:(double)arg1 firstRadius:(double)arg2 secondRadius:(double)arg3;	// IMP=0x00100000009e3e9b
- (int)binAccuracy:(double)arg1;	// IMP=0x00100000009e3d59
- (void)updateCameraRunning:(_Bool)arg1;	// IMP=0x00100000009e3d41
- (void)uploadBeaconPayloadsIfAllowed;	// IMP=0x00100000009e394f
- (_Bool)isResubmitNeededwithOldLocationHacc:(double)arg1 newLocationHacc:(double)arg2 distance:(double)arg3;	// IMP=0x00100000009e38c8
- (id)createNewBeaconPayloadwithNewLocation:(id)arg1 oldBeaconPayload:(id)arg2;	// IMP=0x00100000009e3746
- (id)createActivityRefreshBeaconPayloadIfNeededWithLocation:(id)arg1 payload:(id)arg2;	// IMP=0x00100000009e2df5
- (void)regeotagBeaconPayloads;	// IMP=0x00100000009e26fc
- (void)collectSecondGeotagMetricWithResult:(long long)arg1 firstHorizontalAccuracy:(double)arg2;	// IMP=0x00100000009e26df
- (void)collectSecondGeotagMetricWithResult:(long long)arg1 firstHorizontalAccuracy:(double)arg2 secondHorizontalAccuracy:(double)arg3 distance:(double)arg4;	// IMP=0x00100000009e2401
- (void)receiveSignalEnvironment:(int)arg1;	// IMP=0x00100000009e23f5
- (void)pruneActivityBasedBeaconPayloadCache;	// IMP=0x00100000009e1ee8
- (void)receiveBeaconPayload:(id)arg1;	// IMP=0x00100000009e1eb3
- (void)dealloc;	// IMP=0x00100000009e1e52
- (id)initInUniverse:(id)arg1 withExternal:(shared_ptr_c7246d68)arg2 withSettings:(struct CLSubHarvesterAvengerSettings)arg3;	// IMP=0x00100000009e1d90

@end

