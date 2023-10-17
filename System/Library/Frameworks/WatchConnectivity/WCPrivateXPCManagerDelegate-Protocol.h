//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WatchConnectivity/NSObject-Protocol.h>

@class NSString, WCPrivateXPCManager;

@protocol WCPrivateXPCManagerDelegate <NSObject>
- (void)xpcManager:(WCPrivateXPCManager *)arg1 handlePairedSyncComplicationsStartedWithCompletionHandler:(void (^)(NSError *))arg2;
- (void)xpcManager:(WCPrivateXPCManager *)arg1 isExtensionPrivileged:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)xpcManager:(WCPrivateXPCManager *)arg1 handlePingForExtensionBundleID:(NSString *)arg2;
@end
