//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SYDUserNotifications : NSObject
{
}

+ (id)queue;	// IMP=0x004000000000a535
+ (_Bool)shouldShowNotifications;	// IMP=0x001000000000a509
+ (id)userNotificationCenter;	// IMP=0x001000000000a3fa
+ (void)requestAuthorizationIfNecessary;	// IMP=0x001000000000a27a
+ (void)showNotificationWithTitle:(id)arg1 body:(id)arg2 threadIdentifier:(id)arg3;	// IMP=0x0010000000009f93
+ (void)showUserNotificationIfEnabledForStoreIdentifier:(id)arg1 format:(id)arg2;	// IMP=0x0010000000009d40

@end
