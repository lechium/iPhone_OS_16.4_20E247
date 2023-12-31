//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IDSDevice, NSNumber, NSString, NSUUID;

@protocol CSDPinExchangeDelegate <NSObject>
- (void)resetOneTimeMessage;
- (void)pinCodeEnteredSuccessfully:(_Bool)arg1 cancelled:(_Bool)arg2 onPrimaryDevice:(IDSDevice *)arg3;
- (void)displayIncomingPinCode:(NSNumber *)arg1 fromID:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)displayPinRequestFailure;
- (void)displayServiceConfirmationWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)unenrollDevice:(IDSDevice *)arg1;
- (void)enrollDevice:(IDSDevice *)arg1 forSenderIdentityUUID:(NSUUID *)arg2;
- (void)displayPinMessageForDevice:(IDSDevice *)arg1 completionHandler:(void (^)(_Bool, NSString *))arg2;
- (NSString *)serviceDescription;
@end

