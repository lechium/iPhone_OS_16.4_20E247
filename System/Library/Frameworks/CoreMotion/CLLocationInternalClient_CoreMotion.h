//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CLLocationInternalClient_CoreMotion : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)sharedServiceClient;	// IMP=0x00600000001b6563
- (void)notifyWeatherForecast:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 latitude:(double)arg5 longitude:(double)arg6;	// IMP=0x00000000001bc57d
- (void)notifyPassKitPayment:(id)arg1 transaction:(id)arg2 info:(id)arg3;	// IMP=0x00000000001bc538
- (unsigned char)timeSyncMachTimeStamp:(unsigned long long *)arg1 oscarTimeStamp:(unsigned long long *)arg2;	// IMP=0x00000000001bc44c
- (unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int *)arg1;	// IMP=0x00000000001bc373
- (unsigned char)setBackgroundIndicatorForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 enabled:(unsigned char)arg3;	// IMP=0x00000000001bc28b
- (unsigned char)setLocationButtonUseMode:(int)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x00000000001bc1a8
- (unsigned char)setIncidentalUseMode:(int)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x00000000001bc0c5
- (unsigned char)updateCorrectiveCompensationChoiceForOutstandingPrompt:(int)arg1;	// IMP=0x00000000001bbff6
- (unsigned char)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 andZoneIdentifier:(const struct __CFString *)arg3 andSubIdentityIdentifier:(const struct __CFString *)arg4 forBundleID:(const struct __CFString *)arg5 orBundlePath:(const struct __CFString *)arg6;	// IMP=0x00000000001bbef3
- (const struct __CFArray *)copyActivityAlarms;	// IMP=0x00000000001bbe1c
- (unsigned char)setTemporaryAuthorizationGranted:(unsigned char)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3 orAuditToken:(CDStruct_6ad76789)arg4 byLocationButton:(unsigned char)arg5 voiceInteractionEnabled:(unsigned char)arg6;	// IMP=0x00000000001bbcfa
- (id)getAccessoryMotionSensorLogs;	// IMP=0x00000000001bbce1
- (id)getMotionSensorLogs;	// IMP=0x00000000001bbcc8
- (unsigned char)getGyroCalibrationDatabaseBiasFit:(CDStruct_8d89f794 *)arg1 atTemperature:(float)arg2;	// IMP=0x00000000001bbbc5
- (id)getPipelinedCache;	// IMP=0x00000000001bba81
- (int)getStatusBarIconState;	// IMP=0x00000000001bb9b8
- (unsigned char)getStatusBarIconEnabled:(_Bool *)arg1 forEntityClass:(unsigned int)arg2;	// IMP=0x00000000001bb77d
- (unsigned char)setStatusBarIconEnabled:(_Bool)arg1 forEntityClass:(unsigned int)arg2;	// IMP=0x00000000001bb548
- (unsigned char)copyLastLog;	// IMP=0x00000000001bb3da
- (id)getOdometryBatchedLocations;	// IMP=0x00000000001bb029
- (int)getAccessoryPASCDTransmissionState;	// IMP=0x00000000001badc2
- (int)getAccessoryTypeBitSet;	// IMP=0x00000000001bab5b
- (void)setTrackRunHint:(CDStruct_dce2ee30 *)arg1;	// IMP=0x00000000001ba998
- (void)setMapMatchingRouteHint:(CDStruct_b7b5e951 *)arg1 count:(int)arg2 routingType:(int)arg3 stepType:(int)arg4;	// IMP=0x00000000001ba694
- (unsigned char)getGroundAltitudeForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 location:(id)arg3 groundAltitude:(CDStruct_b141a4d0 *)arg4;	// IMP=0x00000000001ba577
- (unsigned char)getLocationForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 dynamicAccuracyReductionEnabled:(unsigned char)arg3 allowsAlteredAccessoryLocations:(unsigned char)arg4 location:(CDStruct_7cf4616f *)arg5;	// IMP=0x00000000001ba442
- (_Bool)deleteInterestZoneWithId:(id)arg1 registeredForBundleId:(id)arg2 orBundlePath:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001ba2b8
- (_Bool)setRelevance:(_Bool)arg1 forInterestZoneWithId:(id)arg2 registeredForBundleId:(id)arg3 orBundlePath:(id)arg4 error:(id *)arg5;	// IMP=0x00000000001ba122
- (_Bool)registerPhenolicInterestZoneWithId:(id)arg1 phenolicLocation:(int)arg2 serviceMaskOperator:(int)arg3 provenanceType:(int)arg4 forBundleId:(id)arg5 orBundlePath:(id)arg6 error:(id *)arg7;	// IMP=0x00000000001b9f7b
- (_Bool)registerCircularInterestZoneWithId:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 radius:(double)arg4 serviceMaskOperator:(int)arg5 provenanceType:(int)arg6 forBundleId:(id)arg7 orBundlePath:(id)arg8 error:(id *)arg9;	// IMP=0x00000000001b9db6
- (_Bool)checkAndExerciseAuthorizationForBundleID:(id)arg1 orBundlePath:(id)arg2 services:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000001b9b23
- (const struct __CFDictionary *)copyMonitoredRegionsForBundleIdentifier:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2;	// IMP=0x00000000001b9a33
- (unsigned char)dumpLogs:(const struct __CFString *)arg1;	// IMP=0x00000000001b98bb
- (unsigned char)displayStatistics;	// IMP=0x00000000001b974d
- (unsigned char)shutdownDaemon;	// IMP=0x00000000001b95e2
- (unsigned char)performMigration;	// IMP=0x00000000001b9474
- (unsigned char)getPrecisionPermission:(char *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x00000000001b9190
- (unsigned char)getAuthorizationStatus:(int *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x00000000001b90a3
- (unsigned char)getAuthorizationStatusForApp:(int *)arg1 withAuditToken:(CDStruct_6ad76789)arg2;	// IMP=0x00000000001b8fb6
- (unsigned char)getGestureServiceEnabled:(char *)arg1;	// IMP=0x00000000001b8ecf
- (void)setGestureServiceEnabled:(unsigned char)arg1;	// IMP=0x00000000001b8de6
- (id)triggerExpiredAuthorizationPurgeOnClientManager;	// IMP=0x00000000001b8baf
- (double)modifyOrSetAuthorizationTime:(double)arg1 forBundleID:(id)arg2 orBundlePath:(id)arg3;	// IMP=0x00000000001b895a
- (id)getTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001b86cf
- (id)setTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 statusData:(id)arg3;	// IMP=0x00000000001b83e7
- (unsigned char)getAuthorizationPromptMapDisplayEnabled:(char *)arg1;	// IMP=0x00000000001b8300
- (id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)arg1;	// IMP=0x00000000001b814c
- (unsigned char)getLocationServicesEnabled:(char *)arg1;	// IMP=0x00000000001b8061
- (void)setLocationServicesEnabled:(unsigned char)arg1;	// IMP=0x00000000001b7f5a
- (unsigned char)pingDaemon;	// IMP=0x00000000001b7e95
- (unsigned char)getPrivateMode;	// IMP=0x00000000001b7dce
- (void)setPrivateMode:(unsigned char)arg1;	// IMP=0x00000000001b7ce5
- (id)timeZoneAtLocation:(id)arg1;	// IMP=0x00000000001b7ac8
- (const void *)getLocationDefaultForKey:(const struct __CFString *)arg1;	// IMP=0x00000000001b78d0
- (void)setLocationDefaultForKey:(const struct __CFString *)arg1 value:(const void *)arg2;	// IMP=0x00000000001b76e3
- (const struct __CFArray *)copyGnssBandsInUse;	// IMP=0x00000000001b7607
- (const struct __CFDictionary *)copyZaxisStats;	// IMP=0x00000000001b752b
- (const struct __CFString *)copyMicroLocationInternalVersion;	// IMP=0x00000000001b744f
- (const struct __CFArray *)copyTechnologiesInUse;	// IMP=0x00000000001b7373
- (const struct __CFDictionary *)copyActiveClientsUsingLocation;	// IMP=0x00000000001b7284
- (const struct __CFDictionary *)copyAppsUsingLocation;	// IMP=0x00000000001b7195
- (id)applyArchivedAuthorizationDecisions:(id)arg1;	// IMP=0x00000000001b6fa3
- (id)getArchivedAuthorizationDecisionsWithError:(id *)arg1;	// IMP=0x00000000001b6d4e
- (unsigned char)clearLocationAuthorizations;	// IMP=0x00000000001b6c89
- (void)clearLocationAuthorizationForBundleId:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2;	// IMP=0x00000000001b6bba
- (unsigned char)getIncidentalUseMode:(int *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x00000000001b6acd
- (unsigned char)setAuthorizationStatus:(unsigned char)arg1 withCorrectiveCompensation:(int)arg2 forBundleID:(const struct __CFString *)arg3 orBundlePath:(const struct __CFString *)arg4;	// IMP=0x00000000001b69d7
- (id)synchronousRemoteObject;	// IMP=0x00000000001b6863
- (id)connection;	// IMP=0x00000000001b65a8

@end
