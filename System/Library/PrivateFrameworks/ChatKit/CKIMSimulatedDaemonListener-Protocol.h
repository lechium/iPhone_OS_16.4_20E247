//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKIMDaemonController, NSArray, NSData, NSString;

@protocol CKIMSimulatedDaemonListener
- (void)simulatedDaemon:(CKIMDaemonController *)arg1 willSendBalloonPayload:(NSData *)arg2 attachments:(NSArray *)arg3 messageGUID:(NSString *)arg4 bundleID:(NSString *)arg5;
@end
