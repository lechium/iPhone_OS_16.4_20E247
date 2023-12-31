//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSRunLoop.h>

@interface NSRunLoop (Foundation)
+ (id)mainRunLoop;	// IMP=0x00800000004df057
+ (id)currentRunLoop;	// IMP=0x00800000004df028
+ (id)_new:(id)arg1;	// IMP=0x00800000004def8d
- (void)runLoopScheduledWithAction:(id)arg1;	// IMP=0x00100000000c0730
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000004e0049
- (void)performInModes:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000004dff5c
- (_Bool)runBeforeDate:(id)arg1;	// IMP=0x00100000004dff3d
- (void)runUntilDate:(id)arg1;	// IMP=0x00100000004dfebc
- (void)run;	// IMP=0x00100000004dfe5d
- (_Bool)runMode:(id)arg1 untilDate:(id)arg2;	// IMP=0x00100000004dfcf2
- (_Bool)runMode:(id)arg1 beforeDate:(id)arg2;	// IMP=0x00100000004dfbb8
- (void)acceptInputForMode:(id)arg1 beforeDate:(id)arg2;	// IMP=0x00100000004dfa8e
- (void)_wakeup;	// IMP=0x00100000004dfa56
- (id)limitDateForMode:(id)arg1;	// IMP=0x00100000004df90d
- (void)_invalidateTimers;	// IMP=0x00100000004df907
- (id)currentMode;	// IMP=0x00100000004df8dc
- (id)allModes;	// IMP=0x00100000004df8a0
- (_Bool)containsTimer:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000004df78a
- (id)timersForMode:(id)arg1;	// IMP=0x00100000004df771
- (void)removeTimer:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000004df65c
- (void)addTimer:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000004df547
- (id)portsForMode:(id)arg1;	// IMP=0x00100000004df52e
- (_Bool)containsPort:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000004df40d
- (void)removePort:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000004df2ee
- (void)addPort:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000004df1ba
- (id)description;	// IMP=0x00100000004df12e
- (void)dealloc;	// IMP=0x00100000004df094
- (id)init;	// IMP=0x00100000004df086
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000004def82
- (void)_removePort:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000004dece8
- (void)_addPort:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000004deb5e
- (_Bool)_containsPort:(id)arg1 forMode:(id)arg2;	// IMP=0x00100000004dea2a
- (void)_portInvalidated:(id)arg1;	// IMP=0x00100000004de705
- (void)_enumerateInfoPairsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000004de5be
- (void)cancelPerformSelectorsWithTarget:(id)arg1;	// IMP=0x00100000004e08f3
- (void)cancelPerformSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;	// IMP=0x00100000004e05b5
- (void)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 order:(unsigned long long)arg4 modes:(id)arg5;	// IMP=0x00100000004e00cb
@end

