//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol ACAlertXPCClient
- (void)dismissAlertWithActivityIdentifier:(NSString *)arg1;
- (oneway void)presentAlertWithActivityIdentifier:(NSString *)arg1 payload:(NSData *)arg2 options:(NSData *)arg3 completion:(void (^)(NSError *))arg4;
@end

