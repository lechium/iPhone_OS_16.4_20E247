//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsKit/NCNotificationRequest.h>

@interface NCNotificationRequest (AlertSuppression)
+ (id)_notificationSoundFromSound:(id)arg1;	// IMP=0x00800000006fa9fa
+ (long long)_soundTypeForSBSoundType:(long long)arg1;	// IMP=0x00800000006fa9db
+ (id)_notificationOptionsForAlertController:(id)arg1 item:(id)arg2;	// IMP=0x00800000006fa839
+ (id)_notificationRequestForDestinations:(id)arg1 withAlertItem:(id)arg2 identifier:(id)arg3;	// IMP=0x00800000006f9f84
+ (id)notificationRequestForLockScreenWithAlertItem:(id)arg1;	// IMP=0x00800000006f9e1c
+ (id)notificationRequestForCarPlayWithAlertItem:(id)arg1;	// IMP=0x00800000006f9d24
+ (id)notificationRequestWithCardItem:(id)arg1;	// IMP=0x00800000008836a3
- (_Bool)sb_shouldSuppressAlert;	// IMP=0x0010000000099b0a
@end
