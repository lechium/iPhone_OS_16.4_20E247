//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AppInstallsDatabaseTransaction, NSOrderedSet;

@protocol AppInstallPipeline <NSObject>
- (void)stopInstallID:(long long)arg1 withReason:(long long)arg2 transaction:(AppInstallsDatabaseTransaction *)arg3;
- (void)startPostProcessingForID:(long long)arg1 transaction:(AppInstallsDatabaseTransaction *)arg2;
- (void)startInstallIDs:(NSOrderedSet *)arg1 transaction:(AppInstallsDatabaseTransaction *)arg2;
- (void)finishPostProcessingForID:(long long)arg1 transaction:(AppInstallsDatabaseTransaction *)arg2;
- (void)finishInstallID:(long long)arg1 transaction:(AppInstallsDatabaseTransaction *)arg2;
@end

