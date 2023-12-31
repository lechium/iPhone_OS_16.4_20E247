//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary;
@protocol CLIntersiloUniverse, OS_dispatch_queue;

@interface CLFallLoggerManager : NSObject
{
    _Bool fLoggingEnabled;	// 8 = 0x8
    NSMutableDictionary *fLoggers;	// 16 = 0x10
    id <CLIntersiloUniverse> fUniverse;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *fQueue;	// 32 = 0x20
    NSMutableArray *fEventTimes;	// 40 = 0x28
    NSDate *fLastEvent;	// 48 = 0x30
    struct CLGizmoOrientation fOrientation;	// 56 = 0x38
}

+ (id)encodeHeartRate:(const struct CLCatherineData *)arg1;	// IMP=0x0040000000981606
+ (id)encodePressure:(const Pressure_df92a120 *)arg1;	// IMP=0x0010000000981594
+ (id)encodeFilteredPressure:(const FilteredPressure_e74e912d *)arg1;	// IMP=0x0010000000981541
+ (id)encodeBinaryLog:(const struct BinaryData *)arg1;	// IMP=0x00100000009813d4
+ (id)loggerDataTypeString:(unsigned char)arg1;	// IMP=0x0010000000980bc3
+ (unsigned char)loggerDataTypeFrom:(unsigned char)arg1;	// IMP=0x0010000000980ba4
@property(nonatomic) struct CLGizmoOrientation orientation; // @synthesize orientation=fOrientation;
@property(nonatomic, getter=isLoggingEnabled, setter=setLoggingEnabled:) _Bool loggingEnabled; // @synthesize loggingEnabled=fLoggingEnabled;
- (void)logOdometer:(const struct OdometerEntry *)arg1;	// IMP=0x0010000000981baa
- (void)logHeartRate:(const struct CLCatherineData *)arg1;	// IMP=0x0010000000981b6d
- (void)logPressure:(const Pressure_df92a120 *)arg1;	// IMP=0x0010000000981b30
- (void)logFilteredPressure:(const FilteredPressure_e74e912d *)arg1;	// IMP=0x0010000000981af3
- (void)logSensorType:(unsigned char)arg1 data:(id)arg2 startTime:(double)arg3 timestamp:(unsigned long long)arg4;	// IMP=0x00100000009819e0
- (void)logFalsePositiveSuppressionFeatures:(const FalsePositiveSuppressionFeatures_8c0e6519 *)arg1;	// IMP=0x0010000000981943
- (void)logImpactSensorData:(const struct ImpactData *)arg1;	// IMP=0x00100000009817f5
- (void)logImpactEventState:(const struct ImpactEvent *)arg1;	// IMP=0x001000000098175b
- (void)logImpactEvent:(const struct ImpactEvent *)arg1;	// IMP=0x00100000009816d8
- (void)_forEachLoggerWithType:(unsigned char)arg1 logItem:(const struct BinaryData *)arg2;	// IMP=0x001000000098168f
- (void)_forEachLoggerWithType:(unsigned char)arg1 logData:(id)arg2;	// IMP=0x0010000000981225
- (void)flushData:(CDUnknownBlockType)arg1 userProfile:(id)arg2;	// IMP=0x0010000000981035
- (void)clearAllLogs;	// IMP=0x0010000000980fde
- (void)stopLogging;	// IMP=0x0010000000980f9a
- (void)_forEachLogger:(CDUnknownBlockType)arg1;	// IMP=0x0010000000980e3a
- (id)addLogger:(unsigned char)arg1 toDirectory:(id)arg2 prefix:(id)arg3 rotation:(long long)arg4;	// IMP=0x0010000000980db8
- (id)addLogger:(unsigned char)arg1;	// IMP=0x0010000000980d63
- (void)_addLogger:(id)arg1 type:(unsigned char)arg2;	// IMP=0x0010000000980cd4
- (void)dealloc;	// IMP=0x0010000000980c81
- (id)initInUniverse:(id)arg1;	// IMP=0x0010000000980be0

@end

