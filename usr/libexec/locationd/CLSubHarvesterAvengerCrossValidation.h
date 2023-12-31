//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLTimer, MISSING_TYPE, NSDate, SPBeaconManager, SPFinderStateManager, SPOwnerInterface, SPPairingManager;
@protocol CLIntersiloUniverse, SPOwnerSessionPrivateProtocol;

@interface CLSubHarvesterAvengerCrossValidation : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    SPOwnerInterface *_ownerInterface;	// 16 = 0x10
    id <SPOwnerSessionPrivateProtocol> _ownerSession;	// 24 = 0x18
    SPPairingManager *_pairingManager;	// 32 = 0x20
    SPBeaconManager *_beaconManager;	// 40 = 0x28
    SPFinderStateManager *_finderManager;	// 48 = 0x30
    CLTimer *_crossValidationDurationTimer;	// 56 = 0x38
    CLTimer *_crossValidationFinalQueryTimer;	// 64 = 0x40
    CLTimer *_periodicBAQueryTimer;	// 72 = 0x48
    CLTimer *_periodicLocationRequestTimer;	// 80 = 0x50
    CLTimer *_activeLocationRequestTimer;	// 88 = 0x58
    _Bool getBALocation;	// 96 = 0x60
    _Bool hasBeenFound;	// 97 = 0x61
    _Bool isRunningCrossValidation;	// 98 = 0x62
    _Bool isRunningFinalCrossValidation;	// 99 = 0x63
    _Bool isRunningInnerLoopOfCrossValidation;	// 100 = 0x64
    _Bool isActiveVisit;	// 101 = 0x65
    _Bool isLastDownload;	// 102 = 0x66
    _Bool firstDownloadFromBA;	// 103 = 0x67
    _Bool finalDownloadAllFromBA;	// 104 = 0x68
    _Bool isActivelyRequestingLocation;	// 105 = 0x69
    struct CLMotionActivity _recentMotionActivity;	// 112 = 0x70
    int _recentSignalEnvironment;	// 240 = 0xf0
    NSDate *_startBeaconingDate;	// 248 = 0xf8
    NSDate *_startDownloadDate;	// 256 = 0x100
    NSDate *_recentLastPublishDate;	// 264 = 0x108
    double observeLatency;	// 272 = 0x110
    double downloadLatency;	// 280 = 0x118
    double locationAge;	// 288 = 0x120
    double selfPublishTime;	// 296 = 0x128
    void *_proactiveRequestMonitor;	// 304 = 0x130
    struct CLSubHarvesterAvengerCrossValidationAnalytics _analytics;	// 312 = 0x138
    struct CLSubHarvesterAvengerCrossValidationFinalAnalytics _finalAnalytics;	// 400 = 0x190
    struct CLSubHarvesterAvengerSettings _settings;	// 488 = 0x1e8
    struct vector<CLDaemonLocation, std::allocator<CLDaemonLocation>> _locationsDuringCrossValidation;	// 744 = 0x2e8
    shared_ptr_c7246d68 _external;	// 768 = 0x300
}

- (id).cxx_construct;	// IMP=0x0020000000542da1
- (void).cxx_destruct;	// IMP=0x0010000000542d67
- (void)setRecentLastPublishDate:(id)arg1;	// IMP=0x0010000000542cee
- (double)randomDoubleWithMin:(double)arg1 max:(double)arg2;	// IMP=0x0010000000542caf
- (int)binAccuracy:(double)arg1;	// IMP=0x0010000000542b6d
- (int)binRatio:(double)arg1;	// IMP=0x00100000005429fd
- (int)binTimeInterval:(double)arg1;	// IMP=0x0010000000542848
- (int)binLocationAge:(double)arg1;	// IMP=0x0010000000542693
- (void)receiveCLVisit:(id)arg1;	// IMP=0x00100000005424cd
- (void)retrieveOwnerLocationsDuringValidationPeriod:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000542419
- (void)queryForBAResult;	// IMP=0x0010000000541d19
- (void)processAvengerLocations:(id)arg1;	// IMP=0x001000000053ff8b
- (id)getDeviceLocationsWithinBeaconingInterval;	// IMP=0x001000000053fe0a
- (struct CLDaemonLocation)findNearestDeviceLocationWithBALocationTime:(id)arg1;	// IMP=0x001000000053fbbe
- (id)covertLocationToString:(id)arg1 withFirstLocationTimeStamp:(id)arg2 withPublicKey:(id)arg3;	// IMP=0x001000000053facc
- (double)calculateDispersion:(id)arg1;	// IMP=0x001000000053f950
- (id)collectLocationData:(id)arg1 outputLocation:(id)arg2 deviceLocation:(struct CLDaemonLocation)arg3;	// IMP=0x001000000053f0ef
- (id)shiftLocation:(id)arg1 referenceLocation:(struct CLDaemonLocation)arg2 latitudeShift:(double)arg3 longitudeShift:(double)arg4 directionShift:(double)arg5;	// IMP=0x001000000053ed9a
- (MISSING_TYPE *)rotateWithAxis:(double)arg1 angle:originVector: /* Error: Ran out of types for this method. */;	// IMP=0x001000000053ec79
- (id)convertLocationResult:(id)arg1;	// IMP=0x001000000053e9a5
- (void)receiveSignalEnvironment:(int)arg1;	// IMP=0x001000000053e999
- (void)receiveMotionActivity:(struct CLMotionActivity)arg1;	// IMP=0x001000000053e93b
- (void)submitEmptyFinalResult;	// IMP=0x001000000053e55f
- (void)submitEmptyResult;	// IMP=0x001000000053e27f
- (void)terminateFinalCrossValidation;	// IMP=0x001000000053e138
- (void)terminateBeaconing;	// IMP=0x001000000053ddd7
- (long long)getTimeOfDayForAnalytics;	// IMP=0x001000000053dd7c
- (_Bool)logFinalCoreAnalytics:(id)arg1;	// IMP=0x001000000053dd27
- (_Bool)logCoreAnalytics:(id)arg1;	// IMP=0x001000000053dcd2
- (void)receiveLocation:(struct CLDaemonLocation)arg1;	// IMP=0x001000000053d1b4
- (void)dealloc;	// IMP=0x001000000053d0a2
- (id)initInUniverse:(id)arg1 withExternal:(shared_ptr_c7246d68)arg2 andSettings:(struct CLSubHarvesterAvengerSettings)arg3;	// IMP=0x001000000053ce08
- (void)terminateActiveLocationRequest;	// IMP=0x001000000053cc42

@end

