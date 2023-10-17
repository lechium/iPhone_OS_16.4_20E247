//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UNUserNotificationCenter;
@protocol ANNotificationProviderDelegate;

@interface ANNotificationProvider : NSObject
{
    id <ANNotificationProviderDelegate> _delegate;	// 8 = 0x8
    UNUserNotificationCenter *_notificationCenter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000004ee0
@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property __weak id <ANNotificationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateOfAction:(id)arg1 forNotification:(id)arg2;	// IMP=0x0010000000004c63
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000497d
- (void)deliveredNotifications:(CDUnknownBlockType)arg1;	// IMP=0x001000000000471e
- (void)removeNotificationWithIdentifier:(id)arg1;	// IMP=0x0010000000004574
- (id)_notificationContent:(id)arg1;	// IMP=0x001000000000432a
- (void)postNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000040c0
- (id)_defaultNotificationCategories;	// IMP=0x0010000000004030
- (id)init;	// IMP=0x0010000000003f56
- (id)initForSectionWithID:(id)arg1;	// IMP=0x0010000000003f44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
