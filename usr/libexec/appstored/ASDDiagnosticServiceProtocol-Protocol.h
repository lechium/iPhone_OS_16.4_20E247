//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCListenerEndpoint;

@protocol ASDDiagnosticServiceProtocol
- (void)sendCommandWithDetailedReplyHandler:(long long)arg1 handler:(void (^)(NSDictionary *))arg2;
- (void)pingWithReplyHandler:(void (^)(void))arg1;
- (void)addSubscriberWithEndpoint:(NSXPCListenerEndpoint *)arg1;
- (void)activeClientsWithReplyHandler:(void (^)(NSArray *))arg1;
@end

