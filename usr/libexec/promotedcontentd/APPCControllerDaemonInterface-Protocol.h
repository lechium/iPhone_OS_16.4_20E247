//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APContext, MISSING_TYPE, NSArray, NSDictionary, NSUUID;

@protocol APPCControllerDaemonInterface
- (void)sendAndRankContent:(NSArray *)arg1 forContext:(APContext *)arg2 placement:(unsigned long long)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)preWarm:(NSDictionary *)arg1;
- (void)proxyURLWithCompletionHandler:(void (^)(NSString *))arg1;
- (void)finishedWithRequestsForRequester:(NSUUID *)arg1;
- (MISSING_TYPE *)requestPromotedContentOfTypes:forRequester:forContext:withClientInfo:completionHandler: /* Error: Ran out of types for this method. */;
@end

