//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMPhotoProcessMonitor : NSObject
{
}

+ (_Bool)isForegroundApp;	// IMP=0x008000000008bd0a
+ (_Bool)isManagedByRunningBoard;	// IMP=0x008000000008bd02
+ (id)getShared;	// IMP=0x008000000008bcfa
- (int)unregisterBackgroundNotificationForContext:(void *)arg1;	// IMP=0x000000000008bd82
- (int)registerBackgroundNotificationHandlerForContext:(void *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008bd77
- (int)releaseAssertionForContext:(void *)arg1;	// IMP=0x000000000008bd6c
- (int)takeAssertionUntilTime:(unsigned long long)arg1 forContext:(void *)arg2;	// IMP=0x000000000008bd61
- (void)_takeOSTransactionForContext:(void *)arg1;	// IMP=0x000000000008bd5b
- (void)_takeRBSAssertionForContext:(void *)arg1 until:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;	// IMP=0x000000000008bd55
- (void)waitForPendingNotifications;	// IMP=0x000000000008bd4f
- (void)dealloc;	// IMP=0x000000000008bd20
- (id)init;	// IMP=0x000000000008bd12

@end

