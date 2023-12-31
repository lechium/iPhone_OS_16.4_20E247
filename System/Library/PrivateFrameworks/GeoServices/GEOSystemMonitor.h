//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, geo_isolater;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOSystemMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    geo_isolater *_isolater;	// 16 = 0x10
    GEOObserverHashTable *_systemSleepObservers;	// 24 = 0x18
    struct IONotificationPort *_notifyPortRef;	// 32 = 0x20
    unsigned int _notifier;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x004000000140471e
- (void).cxx_destruct;	// IMP=0x0000000001405806
- (void)removeSystemSleepObserver:(id)arg1;	// IMP=0x0000000001405703
- (void)addSystemSleepObserver:(id)arg1 queue:(id)arg2;	// IMP=0x00000000014054b3
- (void)dealloc;	// IMP=0x00000000014048d3
- (_Bool)isBackgroundAppRefreshEnabledForBundleIdentifier:(id)arg1 isDisabledGlobally:(_Bool *)arg2;	// IMP=0x00000000014047fd
- (id)init;	// IMP=0x0000000001404773

@end

