//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class DNDModeConfiguration, NCModeManager;

@protocol NCModeManagerObserver <NSObject>
- (void)modeManager:(NCModeManager *)arg1 didUpdateCurrentModeConfiguration:(DNDModeConfiguration *)arg2 previousModeConfiguration:(DNDModeConfiguration *)arg3;
@end
