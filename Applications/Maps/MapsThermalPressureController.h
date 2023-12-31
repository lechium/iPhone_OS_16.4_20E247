//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MapsThermalPressureController : NSObject
{
    NSMutableDictionary *_mitigationObservers;	// 8 = 0x8
    GEOObserverHashTable *_thermalPressureObservers;	// 16 = 0x10
    _Bool _notifyInitialized;	// 24 = 0x18
    int _token;	// 28 = 0x1c
    unsigned long long _currentThermalPressureLevel;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 40 = 0x28
}

+ (id)mitigations;	// IMP=0x00200000008b56bb
+ (id)sharedController;	// IMP=0x00100000008b5666
- (void).cxx_destruct;	// IMP=0x00200000008b6dcd
- (void)_updateAllObservers;	// IMP=0x00100000008b6c26
- (void)_updateObserversOfMitigationNamed:(id)arg1;	// IMP=0x00100000008b6bba
- (void)_handleNotifyCallback;	// IMP=0x00100000008b6ab1
- (id)_observersOfMitigationNamed:(id)arg1;	// IMP=0x00100000008b6a18
- (_Bool)shouldActivateMitigationNamed:(id)arg1;	// IMP=0x00100000008b67df
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000008b6563
- (void)removeThermalPressureObserver:(id)arg1;	// IMP=0x00100000008b63d7
- (void)addThermalPressureObserver:(id)arg1;	// IMP=0x00100000008b624b
- (void)removeObserver:(id)arg1 forMitigationNamed:(id)arg2;	// IMP=0x00100000008b605f
- (void)addObserver:(id)arg1 forMitigationNamed:(id)arg2;	// IMP=0x00100000008b5e73
@property(readonly, nonatomic) int currentThermalPressureLevel;
- (void)dealloc;	// IMP=0x00100000008b5b73
- (id)init;	// IMP=0x00100000008b570b

@end

