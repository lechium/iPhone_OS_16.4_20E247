//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UNUserNotificationCenter;

@interface NotificationManager : NSObject
{
    UNUserNotificationCenter *_notificationCenter;	// 8 = 0x8
}

+ (unsigned long long)_authorizationOptions;	// IMP=0x004000000008414d
+ (id)_notificationCategories;	// IMP=0x0010000000083fb7
+ (id)sharedManager;	// IMP=0x0010000000083ad9
- (void).cxx_destruct;	// IMP=0x0020000000084158
- (void)removeNotificationRequestWithIdentifier:(id)arg1;	// IMP=0x0010000000083f0c
- (void)postNotificationRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000083b5e
- (id)init;	// IMP=0x001000000008396c

@end

