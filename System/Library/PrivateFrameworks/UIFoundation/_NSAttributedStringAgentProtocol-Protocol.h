//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary;

@protocol _NSAttributedStringAgentProtocol
- (void)renderHTML:(NSData *)arg1 options:(NSDictionary *)arg2 bundleToken:(NSData *)arg3 baseURLToken:(NSData *)arg4 withReply:(void (^)(NSDictionary *, NSAttributedString *, NSError *))arg5;
- (void)startWithReply:(void (^)(void))arg1;
@end
