//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class MTSDeviceSetupRequest, MTSXPCClientProxy;

@protocol MTSXPCDeviceSetupClientProxyDelegate <NSObject>
- (void)clientProxy:(MTSXPCClientProxy *)arg1 performDeviceSetupUsingRequest:(MTSDeviceSetupRequest *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

