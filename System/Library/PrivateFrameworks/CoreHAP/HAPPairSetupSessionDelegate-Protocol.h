//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPPairSetupSession, HAPPairingIdentity, NSData, NSError;

@protocol HAPPairSetupSessionDelegate <NSObject>
- (void)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveSetupExchangeData:(NSData *)arg2;
- (_Bool)pairSetupSession:(HAPPairSetupSession *)arg1 didPairWithPeer:(HAPPairingIdentity *)arg2 error:(id *)arg3;
- (HAPPairingIdentity *)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;

@optional
- (void)pairSetupSession:(HAPPairSetupSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)pairSetupSessionDidStart:(HAPPairSetupSession *)arg1;
@end
