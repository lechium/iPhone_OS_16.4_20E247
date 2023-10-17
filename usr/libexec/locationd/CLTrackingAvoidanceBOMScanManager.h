//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLAvengerScannerClient;
@protocol OS_dispatch_queue;

@interface CLTrackingAvoidanceBOMScanManager : NSObject
{
    unsigned int _dailyStartingValue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CLAvengerScannerClient *_controller;	// 24 = 0x18
    double _coolDownScan;	// 32 = 0x20
}

@property(readonly, nonatomic) unsigned int dailyStartingValue; // @synthesize dailyStartingValue=_dailyStartingValue;
@property(readonly, nonatomic) double coolDownScan; // @synthesize coolDownScan=_coolDownScan;
@property(nonatomic) CLAvengerScannerClient *controller; // @synthesize controller=_controller;
@property(readonly, retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)scheduleDailyResetBOMScan;	// IMP=0x00100000000dea21
- (_Bool)checkDailyResetEligible:(id)arg1;	// IMP=0x00100000000de8ed
- (void)resetBOMScanIfNeeded;	// IMP=0x00100000000de7b8
- (void)submitBOMMetricsScansCompleted:(unsigned long long)arg1 andTimeSinceLastDisable:(double)arg2;	// IMP=0x00100000000de58a
- (void)submitBOMMetricsBoot;	// IMP=0x00100000000de565
- (void)scanCompleted;	// IMP=0x00100000000de409
- (void)dispatchEnableBomScanAfterBackoff;	// IMP=0x00100000000de363
- (double)computeBOMScanBackoffOfDate:(id)arg1;	// IMP=0x00100000000de300
- (void)enableBOMScan;	// IMP=0x00100000000de135
- (void)handleUnRegisterController;	// IMP=0x00100000000de06d
- (void)handleRegisterWithController:(id)arg1;	// IMP=0x00100000000ddf8e
- (unsigned int)remainingBOMScans;	// IMP=0x00100000000dde7d
- (void)setRemainingBOMScansTo:(unsigned int)arg1;	// IMP=0x00100000000ddd96
- (id)timestampOfLastBOMDailyLimitResetDate;	// IMP=0x00100000000ddc4d
- (void)setTimestampLastBOMDailyLimitResetDate:(double)arg1;	// IMP=0x00100000000ddb3f
- (id)timestampOfLastBeepOnMoveScanDate;	// IMP=0x00100000000dd9f6
- (void)setTimeStampLastBeepOnMoveScan:(double)arg1;	// IMP=0x00100000000dd8e8
- (id)initAndStartWithQueue:(id)arg1 andController:(id)arg2;	// IMP=0x00100000000dd896
- (id)initWithQueue:(id)arg1 andController:(id)arg2;	// IMP=0x00100000000dd640

@end
