//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKDataCollector, HKHealthStore;
@protocol CLIntersiloUniverse;

@interface CLSubmersionDataCollector : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    struct unique_ptr<CLDataProtectionManager_Type::Client, std::default_delete<CLDataProtectionManager_Type::Client>> _dataProtectionClient;	// 16 = 0x10
    _Bool _unlockedSinceFirstBoot;	// 24 = 0x18
    HKHealthStore *_healthStore;	// 32 = 0x20
    HKDataCollector *_depthCollector;	// 40 = 0x28
    HKDataCollector *_tempCollector;	// 48 = 0x30
    double _lastSampleTime;	// 56 = 0x38
    struct deque<std::shared_ptr<CLSubmersionQuantities>, std::allocator<std::shared_ptr<CLSubmersionQuantities>>> _submersionCollection;	// 64 = 0x40
    int _decimationCount;	// 112 = 0x70
    int _maxQuantities;	// 116 = 0x74
}

- (id).cxx_construct;	// IMP=0x00200000007abde0
- (void).cxx_destruct;	// IMP=0x00100000007abdaa
- (void)onDataProtectionNotification:(int)arg1 data:(NotificationData_6933e140)arg2;	// IMP=0x00100000007abd5c
- (void)writeDataOnUnlock;	// IMP=0x00100000007abb37
- (void)logCollectionData;	// IMP=0x00100000007ab983
- (void)dealloc;	// IMP=0x00100000007ab925
- (id)initWithUniverse:(id)arg1;	// IMP=0x00100000007ab7f7
- (void)finishUnlocked;	// IMP=0x00100000007ab518
- (void)finish;	// IMP=0x00100000007ab3a2
- (void)collectAt:(double)arg1 measurement:(id)arg2 atSensorLimit:(_Bool)arg3;	// IMP=0x00100000007ab0c1
- (void)collectWithSubmersionQuantities:(shared_ptr_51c930a6)arg1 shouldLog:(_Bool)arg2;	// IMP=0x00100000007aa715
- (void)startAt:(double)arg1;	// IMP=0x00100000007aa6f6
- (void)startUnlocked;	// IMP=0x00100000007aa353

@end

