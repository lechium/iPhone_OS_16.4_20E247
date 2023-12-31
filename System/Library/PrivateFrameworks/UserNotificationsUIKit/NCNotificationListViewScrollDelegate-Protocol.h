//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationListView;

@protocol NCNotificationListViewScrollDelegate <NSObject>
- (void)notificationListViewDidEndDecelerating:(NCNotificationListView *)arg1;
- (void)notificationListViewDidEndDragging:(NCNotificationListView *)arg1 willDecelerate:(_Bool)arg2;
- (void)notificationListViewWillEndDragging:(NCNotificationListView *)arg1 withTargetContentOffset:(inout struct CGPoint *)arg2;
- (void)notificationListDidScroll:(NCNotificationListView *)arg1;
- (void)notificationListWillBeginDragging:(NCNotificationListView *)arg1;
@end

