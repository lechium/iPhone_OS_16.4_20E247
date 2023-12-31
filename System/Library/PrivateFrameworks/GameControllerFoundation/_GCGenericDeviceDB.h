//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _GCConfigurationBundleLocator, _GCDeviceOnDiskDB;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface _GCGenericDeviceDB : NSObject
{
    NSObject<OS_dispatch_workloop> *_workloop;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _GCConfigurationBundleLocator *_configurationBundleLocator;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_configurationBundleLocatorUpdatedSource;	// 32 = 0x20
    _GCDeviceOnDiskDB *_onDiskDB;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004dbc3
- (id)preparedModelForDevice:(id)arg1;	// IMP=0x000000000004db1f
- (id)hasModelForDevice:(id)arg1;	// IMP=0x000000000004da90
- (id)preparedModelForDevice:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004d332
- (id)modelForDevice:(id)arg1;	// IMP=0x000000000004d25a
- (void)_configurationBundlesDidChange:(id)arg1;	// IMP=0x000000000004d247
- (_Bool)_onqueue_updateConfigurationBundles;	// IMP=0x000000000004d0be
- (id)configurationBundles;	// IMP=0x000000000004cfef
- (void)dealloc;	// IMP=0x000000000004cf66
- (id)init;	// IMP=0x000000000004cf3b
- (id)initWithProvider:(id)arg1;	// IMP=0x000000000004caac
- (void)preparedModelForDevice:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000293d3
- (void)hasModelForDevice:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000292f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

