//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKIOHIDServiceMatcher, NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface BKMousePointerDeviceAvailabilityMonitor : NSObject
{
    NSMutableArray *_activeServices;	// 8 = 0x8
    BKIOHIDServiceMatcher *_hidServiceMatcher;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    NSMutableArray *_observerContexts;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001d6e0
- (void)_locked_notifyObserversDidRemoveDevices:(id)arg1;	// IMP=0x001000000001d490
- (void)_locked_notifyObserversDidAddDevices:(id)arg1;	// IMP=0x001000000001d240
- (void)_locked_notifyObserversDidChangeAvailability;	// IMP=0x001000000001d00f
- (void)removeObserver:(id)arg1;	// IMP=0x001000000001ce11
- (void)addObserver:(id)arg1 queue:(id)arg2;	// IMP=0x001000000001cc22
@property(readonly, nonatomic) NSArray *deviceServices;
@property(readonly, nonatomic) _Bool hasDeviceAvailable;
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x001000000001ca79
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x001000000001c7ad
- (void)dealloc;	// IMP=0x001000000001c64c
- (id)init;	// IMP=0x001000000001c4ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

