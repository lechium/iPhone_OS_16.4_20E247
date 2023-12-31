//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLBarometerCalibrationAbsoluteAltitude, CLBarometerCalibrationBiasEstimator, CLBarometerCalibrationSourceAggregator, CLTimer, CLWaterStateInterface, NSMutableSet, NSString;
@protocol CLRoutineMonitorServiceProtocol;

@interface CLBarometerCalibration : CLIntersiloService
{
    array_c343414b fDataBuffers;	// 8 = 0x8
    struct array<CLBarometerCalibrationContextManager *, 9UL> _contextManagers;	// 440 = 0x1b8
    CLBarometerCalibrationSourceAggregator *_sourceAggregator;	// 512 = 0x200
    NSMutableSet *_clientSets[5];	// 520 = 0x208
    CLBarometerCalibrationBiasEstimator *_biasEstimator;	// 560 = 0x230
    CLTimer *_releaseAltimeterContextTimer;	// 568 = 0x238
    CLBarometerCalibrationAbsoluteAltitude *_latestAbsoluteAltitude;	// 576 = 0x240
    double _lastEstimatedBias;	// 584 = 0x248
    double _lastEstimatedBiasTimestamp;	// 592 = 0x250
    struct unique_ptr<CLOdometerNotifier_Type::Client, std::default_delete<CLOdometerNotifier_Type::Client>> fOdometerClient;	// 600 = 0x258
    _Bool _isSensorWet;	// 608 = 0x260
    struct unique_ptr<CLMotionStateObserver_Type::Client, std::default_delete<CLMotionStateObserver_Type::Client>> fMotionStateObserverClient;	// 616 = 0x268
    unsigned long long _wetState;	// 624 = 0x270
    _Bool _isCompanionConnected;	// 632 = 0x278
    unsigned int _prevElevationAscended;	// 636 = 0x27c
    unsigned int _prevElevationDescended;	// 640 = 0x280
    int _sameElevationCounter;	// 644 = 0x284
    id <CLRoutineMonitorServiceProtocol> _routineMonitorProxy;	// 648 = 0x288
    _Bool _inVisit;	// 656 = 0x290
    _Bool _logLois;	// 657 = 0x291
    double _lastAltimeterClientRegisterTime;	// 664 = 0x298
    CLTimer *_fetchRoutineVisitsTimer;	// 672 = 0x2a0
    struct unique_ptr<CLDaemonStatus_Type::Client, std::default_delete<CLDaemonStatus_Type::Client>> fStatusClient;	// 680 = 0x2a8
    _Bool _charging;	// 688 = 0x2b0
    CLWaterStateInterface *waterStateInterface;	// 696 = 0x2b8
    _Bool _lastWaterStateSent;	// 704 = 0x2c0
    double _lastWetSummaryDailyTimestamp;	// 712 = 0x2c8
    unsigned int _numDryEpochsWithHidShower;	// 720 = 0x2d0
    _Bool _inOutdoorWorkout;	// 724 = 0x2d4
    double _lastAltitude;	// 728 = 0x2d8
    double _lastAltitudeAccuracy;	// 736 = 0x2e0
    double _lastAltitudeTime;	// 744 = 0x2e8
}

+ (_Bool)isNotificationSupported:(unsigned long long)arg1;	// IMP=0x00200000004d6c34
+ (_Bool)isSupported;	// IMP=0x00100000004d6bba
+ (id)getSilo;	// IMP=0x00100000004d6b21
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000004d6b08
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000004d6aab
- (id).cxx_construct;	// IMP=0x00100000004db670
- (void).cxx_destruct;	// IMP=0x00100000004db5e8
@property(nonatomic, getter=getLastAltitudeTime) double lastAltitudeTime; // @synthesize lastAltitudeTime=_lastAltitudeTime;
@property(nonatomic, getter=getLastAltitudeAccuracy) double lastAltitudeAccuracy; // @synthesize lastAltitudeAccuracy=_lastAltitudeAccuracy;
@property(nonatomic, getter=getLastAltitude) double lastAltitude; // @synthesize lastAltitude=_lastAltitude;
@property(nonatomic, getter=isInOutdoorWorkout) _Bool inOutdoorWorkout; // @synthesize inOutdoorWorkout=_inOutdoorWorkout;
- (void)fetchLoiFromId:(id)arg1 atTimestamp:(double)arg2;	// IMP=0x00100000004daa5c
- (_Bool)isIHAAuthorized;	// IMP=0x00100000004daa10
- (void)fetchVisitStatusAtStart;	// IMP=0x00100000004da561
- (void)sendClientRegisterAnalyticsWithCurrentUncertainty:(double)arg1 andTime:(double)arg2;	// IMP=0x00100000004d9dfc
- (_Bool)isInVisit;	// IMP=0x00100000004d9dec
- (void)announceMostRecentForcedGPS:(double)arg1;	// IMP=0x00100000004d9dcf
- (void)onVisit:(id)arg1;	// IMP=0x00100000004d986c
- (id)latestAbsoluteAltitude;	// IMP=0x00100000004d985b
- (void)setAltimeterReleaseTimer;	// IMP=0x00100000004d9836
- (void)setupAltimeterReleaseTimer;	// IMP=0x00100000004d96fc
- (_Bool)inOutdoorWorkout;	// IMP=0x00100000004d96ea
- (void)updateWetState;	// IMP=0x00100000004d956e
- (void)updateCompanionConnected:(_Bool)arg1;	// IMP=0x00100000004d9460
- (void)onDaemonStatusNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x00100000004d92d0
- (void)onMotionStateObserverNotification:(int)arg1 data:(NotificationData_6024acef)arg2;	// IMP=0x00100000004d9075
- (int)getFlightOfStairsIn24Hr;	// IMP=0x00100000004d8f8a
- (void)onOdometerNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x00100000004d8b44
- (void)updateEstimatedWeatherWithCumulativeAscendingDelta:(unsigned int)arg1 andDescendingDelta:(unsigned int)arg2 andIosTimestamp:(double)arg3;	// IMP=0x00100000004d8b27
- (void)updateBiasUncertaintyWithPressure:(double)arg1 andTime:(double)arg2 andLat:(double)arg3 andLon:(double)arg4;	// IMP=0x00100000004d8b0a
- (id)copyCurrentBias;	// IMP=0x00100000004d8aed
- (void)logBuffers;	// IMP=0x00100000004d8465
- (void)submersionMeasurementUpdate:(id)arg1;	// IMP=0x00100000004d8348
- (void)submersionStateUpdate:(id)arg1;	// IMP=0x00100000004d822b
- (void)absoluteAltitudeUpdate:(id)arg1;	// IMP=0x00100000004d809a
- (void)stopTrack:(id)arg1;	// IMP=0x00100000004d7c5b
- (void)startTrack:(id)arg1;	// IMP=0x00100000004d7b5a
- (void)didUpdateDataBuffer:(unsigned long long)arg1;	// IMP=0x00100000004d7b09
- (void)acknowledgeNotification:(unsigned long long)arg1;	// IMP=0x00100000004d7ab8
- (void)unregisterClient:(byref id)arg1 forNotification:(unsigned long long)arg2;	// IMP=0x00100000004d7962
- (void)registerClient:(byref id)arg1 forNotification:(unsigned long long)arg2;	// IMP=0x00100000004d766e
- (void)initAllDayContextManagers;	// IMP=0x00100000004d752a
- (void)releaseAllContextManagers;	// IMP=0x00100000004d74d9
- (void)releaseContextManagersForNotification:(unsigned long long)arg1;	// IMP=0x00100000004d74a1
- (void)initContextManagersForNotification:(unsigned long long)arg1;	// IMP=0x00100000004d73c9
- (void)releaseAndClearManager:(id *)arg1;	// IMP=0x00100000004d7394
- (void)endService;	// IMP=0x00100000004d7292
- (void)beginService;	// IMP=0x00100000004d6d9c
- (id)init;	// IMP=0x00100000004d6b7d
- (void)updateElevationBiasBetweenStartTime:(double)arg1 andEndTime:(double)arg2;	// IMP=0x0010000000204f5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

