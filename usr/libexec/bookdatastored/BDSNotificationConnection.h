//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSDate, NSString;
@protocol OS_dispatch_queue;

@interface BDSNotificationConnection : NSObject
{
    struct os_unfair_lock_s _unfairLock;	// 8 = 0x8
    APSConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 24 = 0x18
    NSDate *_lastConnectionDate;	// 32 = 0x20
}

+ (_Bool)isWithinConnectionDateRange;	// IMP=0x002000000005a052
- (void).cxx_destruct;	// IMP=0x002000000005ab16
@property(retain, nonatomic) NSDate *lastConnectionDate; // @synthesize lastConnectionDate=_lastConnectionDate;
@property(nonatomic) struct os_unfair_lock_s unfairLock; // @synthesize unfairLock=_unfairLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x001000000005a7ab
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000005a76a
- (void)didAcceptConnection:(id)arg1;	// IMP=0x001000000005a666
- (void)startListeningForNotifications;	// IMP=0x001000000005a35e
- (id)init;	// IMP=0x001000000005a1d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

