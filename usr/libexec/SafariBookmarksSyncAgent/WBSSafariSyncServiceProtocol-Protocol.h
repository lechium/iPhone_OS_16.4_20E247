//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WBSSafariSyncServiceProtocol <NSObject>
- (void)didReceiveLocalNotificationWithPushTopic:(NSString *)arg1;
- (void)didReceiveIncomingMessageForSubscriptionID:(NSString *)arg1 withPushTopic:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end
