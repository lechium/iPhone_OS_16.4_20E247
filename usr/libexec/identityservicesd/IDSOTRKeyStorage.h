//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMTimer, NSMutableDictionary, NSRecursiveLock;

@interface IDSOTRKeyStorage : NSObject
{
    NSRecursiveLock *_lock;	// 8 = 0x8
    NSMutableDictionary *_sessionKeyStorage;	// 16 = 0x10
    IMTimer *_purgeTimer;	// 24 = 0x18
    IMTimer *_saveTimer;	// 32 = 0x20
    CDUnknownBlockType _saveCancelBlock;	// 40 = 0x28
    CDUnknownBlockType _saveEnqueueBlock;	// 48 = 0x30
    CDUnknownBlockType _purgeCancelBlock;	// 56 = 0x38
    CDUnknownBlockType _purgeEnqueueBlock;	// 64 = 0x40
    _Bool _isClassDStoreAvailable;	// 72 = 0x48
    _Bool _isClassCStoreAvailable;	// 73 = 0x49
    _Bool _isClassAStoreAvailable;	// 74 = 0x4a
    _Bool _changedSinceLastSave;	// 75 = 0x4b
}

+ (id)sharedInstance;	// IMP=0x0040000000458350
- (void).cxx_destruct;	// IMP=0x002000000045d790
- (void)removeSessionKeyForAllTokenFromMainQueue;	// IMP=0x001000000045d340
- (void)removeSessionKeyForToken:(id)arg1;	// IMP=0x001000000045d0d0
- (void)storeSessionKey:(id)arg1 token:(id)arg2;	// IMP=0x001000000045cde0
- (void)_purgeMap;	// IMP=0x001000000045cdd0
- (void)_setSaveTimer;	// IMP=0x001000000045cd80
- (void)_saveNow;	// IMP=0x001000000045cbc0
- (id)sessionKeyForToken:(id)arg1;	// IMP=0x001000000045c740
- (void)_daemonWillShutdown:(id)arg1;	// IMP=0x001000000045c6e0
- (void)unlock;	// IMP=0x001000000045c6b0
- (void)lock;	// IMP=0x001000000045c680
- (void)dealloc;	// IMP=0x001000000045c600
- (void)_purgeTimerFiredOnMain;	// IMP=0x001000000045c530
- (void)_saveTimerFiredOnMain;	// IMP=0x001000000045c460
- (id)init;	// IMP=0x001000000045bc70
- (void)_removeObjectForKey:(id)arg1;	// IMP=0x001000000045b820
- (id)_objectForKey:(id)arg1;	// IMP=0x001000000045b180
- (void)_setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000045aa40
- (_Bool)isSessionStoreAvailableForDataProtectionClass:(unsigned int)arg1;	// IMP=0x001000000045a980
- (void)loadStoreForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000459550
- (void)_loadIfNeeded;	// IMP=0x00100000004594c0
- (_Bool)__saveStoreForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000458ed0
- (void)_save;	// IMP=0x0010000000458aa0
- (void)systemDidEnterDataProtectionLock;	// IMP=0x0010000000458910
- (void)systemDidLeaveDataProtectionLock;	// IMP=0x0010000000458660
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x00100000004584d0
- (_Bool)isUnderLock;	// IMP=0x0010000000458470
- (_Bool)_isUnderFirstDataProtectionLock;	// IMP=0x0010000000458410

@end
