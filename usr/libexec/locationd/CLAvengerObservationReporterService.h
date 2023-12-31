//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLAvengerBeaconPayloadDedupingCache, CLAvengerScannerClient, NSString, SPFinderInterface;
@protocol CLAvengerScannerServiceProtocol;

@interface CLAvengerObservationReporterService : CLIntersiloService
{
    struct CLAvengerObservationReporterServiceStateContext _currentContext;	// 8 = 0x8
    long long _currentState;	// 16 = 0x10
    id <CLAvengerScannerServiceProtocol> _avengerScannerProxy;	// 24 = 0x18
    struct unique_ptr<CLAppMonitor_Type::Client, std::default_delete<CLAppMonitor_Type::Client>> _appMonitorClient;	// 32 = 0x20
    SPFinderInterface *_spFinderInterface;	// 40 = 0x28
    CLAvengerBeaconPayloadDedupingCache *_beaconPayloadCache;	// 48 = 0x30
    CLAvengerScannerClient *_scannerClient;	// 56 = 0x38
}

+ (_Bool)isSupported;	// IMP=0x002000000071734c
+ (id)getSilo;	// IMP=0x00100000007172f0
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000007172d7
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000071727a
- (id).cxx_construct;	// IMP=0x00200000007184f7
- (void).cxx_destruct;	// IMP=0x00100000007184cf
- (void)onAppMonitorNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x00100000007181a1
- (void)unregisterForAppMonitorNotification;	// IMP=0x00100000007180f1
- (void)registerForAppMonitorNotification;	// IMP=0x0010000000717f6b
- (void)onAvengerAdvertisement:(id)arg1 address:(id)arg2 advertisementData:(id)arg3 status:(unsigned char)arg4 rssi:(long long)arg5 reserved:(id)arg6 channel:(id)arg7 reconciledInformation:(id)arg8;	// IMP=0x0010000000717aeb
- (void)onAggressiveScanStarted;	// IMP=0x0010000000717ae5
- (void)onAggressiveScanEnded;	// IMP=0x0010000000717adf
- (void)onAdvertisementBufferEmptied;	// IMP=0x0010000000717ad9
- (void)unregisterForAvengerScanner;	// IMP=0x00100000007179d0
- (void)registerForAvengerScanner;	// IMP=0x00100000007177ec
- (id)clientIdentifier;	// IMP=0x00100000007177df
- (long long)determineStateWithContext:(struct CLAvengerObservationReporterServiceStateContext)arg1;	// IMP=0x00100000007177d1
- (void)updateContext:(struct CLAvengerObservationReporterServiceStateContext)arg1;	// IMP=0x00100000007176a6
- (void)endService;	// IMP=0x0010000000717655
- (void)beginService;	// IMP=0x001000000071753c
- (id)init;	// IMP=0x00100000007174ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

