//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class CALNEventInvitationResponseNotificationInfo, NSArray, NSSet, NSString;

@protocol CALNEventInvitationResponseNotificationDataSource <NSObject>
- (void)declineEventInvitationResponseWithSourceClientIdentifier:(NSString *)arg1;
- (void)acceptEventInvitationResponseWithSourceClientIdentifier:(NSString *)arg1;
- (void)clearEventInvitationResponseWithSourceClientIdentifier:(NSString *)arg1;
- (CALNEventInvitationResponseNotificationInfo *)fetchEventInvitationResponseNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchEventInvitationResponseNotificationSourceClientIdentifiers:(NSSet *)arg1;
- (NSArray *)fetchEventInvitationResponseNotifications;
@end

