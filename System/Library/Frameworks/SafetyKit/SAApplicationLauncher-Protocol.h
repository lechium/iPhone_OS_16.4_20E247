//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyKit/NSObject-Protocol.h>

@class NSString;

@protocol SAApplicationLauncher <NSObject>
- (void)openApplicationInBackgroundWithBundleId:(NSString *)arg1 withReason:(long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

