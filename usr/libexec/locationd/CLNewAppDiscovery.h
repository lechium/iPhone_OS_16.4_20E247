//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLAvailabilityRegionChangeMonitor, NSString;
@protocol CLAppTileDataProviderProtocol, CLRoutineMonitorServiceProtocol, CLTilesManagerProtocol;

@interface CLNewAppDiscovery : CLIntersiloService
{
    struct unique_ptr<CLLocationController_Type::Client, std::default_delete<CLLocationController_Type::Client>> _locationClient;	// 8 = 0x8
    struct unique_ptr<CLNADController, std::default_delete<CLNADController>> _controller;	// 16 = 0x10
    CLAvailabilityRegionChangeMonitor *_geoRegionChangeMonitor;	// 24 = 0x18
    _Bool _canInstallApps;	// 32 = 0x20
    unsigned int _maxAgeAllowed;	// 36 = 0x24
    id <CLTilesManagerProtocol> _tilesManagerProxy;	// 40 = 0x28
    id <CLAppTileDataProviderProtocol> _appTileDataProviderProxy;	// 48 = 0x30
    id <CLRoutineMonitorServiceProtocol> _routineMonitorProxy;	// 56 = 0x38
}

+ (id)getSilo;	// IMP=0x00100000005c47cd
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000005c47b4
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000005c4757
+ (_Bool)isSupported;	// IMP=0x00100000005c45b0
- (id).cxx_construct;	// IMP=0x00200000005c73b5
- (void).cxx_destruct;	// IMP=0x00100000005c7361
@property(nonatomic) unsigned int maxAgeAllowed; // @synthesize maxAgeAllowed=_maxAgeAllowed;
@property(nonatomic) _Bool canInstallApps; // @synthesize canInstallApps=_canInstallApps;
@property(retain, nonatomic) id <CLRoutineMonitorServiceProtocol> routineMonitorProxy; // @synthesize routineMonitorProxy=_routineMonitorProxy;
@property(retain, nonatomic) id <CLAppTileDataProviderProtocol> appTileDataProviderProxy; // @synthesize appTileDataProviderProxy=_appTileDataProviderProxy;
@property(retain, nonatomic) id <CLTilesManagerProtocol> tilesManagerProxy; // @synthesize tilesManagerProxy=_tilesManagerProxy;
- (void)onRegionChangeNotification;	// IMP=0x00100000005c7177
- (_Bool)isServiceEnabledViaGeoCountryOverrides;	// IMP=0x00100000005c6fd4
- (_Bool)isUsableLocation:(id)arg1;	// IMP=0x00100000005c6f89
- (void)onLocation:(id)arg1;	// IMP=0x00100000005c53fa
- (void)endService;	// IMP=0x00100000005c5357
- (void)beginService;	// IMP=0x00100000005c4866
- (id)init;	// IMP=0x00100000005c4829

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

