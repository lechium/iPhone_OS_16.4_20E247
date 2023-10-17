//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocationManager, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DMDLostDeviceLocationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CLLocationManager *_locationManager;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
    NSString *_originator;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timeoutTimerDispatchSource;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x002000000005dca5
- (void).cxx_destruct;	// IMP=0x002000000005f3f5
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimerDispatchSource; // @synthesize timeoutTimerDispatchSource=_timeoutTimerDispatchSource;
@property(copy, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_updateLostModeFileForOriginator:(id)arg1;	// IMP=0x001000000005ef05
- (void)_cleanupAfterResponseFromLocationManagerOrTimeout;	// IMP=0x001000000005ee5e
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x001000000005eda1
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x001000000005ec07
@property(readonly, copy, nonatomic) NSString *lastLocationRequestedDateMessage;
- (void)clearLastLocationRequestedDate;	// IMP=0x001000000005e258
- (void)getCurrentLocationForOriginator:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005dd2a
- (id)init;	// IMP=0x001000000005dbef

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
