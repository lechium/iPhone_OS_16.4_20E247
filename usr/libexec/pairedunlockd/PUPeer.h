//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableDictionary, NSString, PUKeyStore;
@protocol OS_dispatch_queue, PUPeerDelegate;

@interface PUPeer : NSObject
{
    IDSService *_service;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_idsQueue;	// 16 = 0x10
    unsigned int _pairedDeviceVersion;	// 24 = 0x18
    _Bool _unlockEnabled;	// 28 = 0x1c
    id <PUPeerDelegate> _delegate;	// 32 = 0x20
    PUKeyStore *_keyStore;	// 40 = 0x28
    NSMutableDictionary *_responseHandlers;	// 48 = 0x30
    NSMutableDictionary *_errorHandlers;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_handlerManagementQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000008586
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerManagementQueue; // @synthesize handlerManagementQueue=_handlerManagementQueue;
@property(retain, nonatomic) NSMutableDictionary *errorHandlers; // @synthesize errorHandlers=_errorHandlers;
@property(retain, nonatomic) NSMutableDictionary *responseHandlers; // @synthesize responseHandlers=_responseHandlers;
- (void)setKeyStore:(id)arg1;	// IMP=0x0010000000008524
- (id)keyStore;	// IMP=0x001000000000851a
@property(nonatomic, getter=isUnlockEnabled) _Bool unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property(nonatomic) id <PUPeerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyPairResult:(_Bool)arg1 error:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000083f2
- (void)getPasscodeState:(id)arg1;	// IMP=0x00100000000082d8
- (void)didGetPasscodeState:(id)arg1;	// IMP=0x001000000000816d
- (id)_convertRemotePasscodeStateToRemoteDeviceState:(id)arg1;	// IMP=0x0010000000007f33
- (id)_convertToRemoteDeviceState:(id)arg1;	// IMP=0x0010000000007e84
- (void)setShouldNotifyNextUnlock:(id)arg1;	// IMP=0x0010000000007dc6
- (void)didUnlock:(id)arg1;	// IMP=0x0010000000007d7f
- (void)removeLockout:(id)arg1;	// IMP=0x0010000000007c73
- (void)disableOnlyRemoteUnlock:(id)arg1;	// IMP=0x0010000000007adc
- (void)startRemoteAction:(id)arg1;	// IMP=0x001000000000670b
- (void)_logResponse:(id)arg1;	// IMP=0x0010000000006664
- (void)_logProtobuf:(id)arg1;	// IMP=0x0010000000006560
- (void)notifyThisDeviceDidUnlock;	// IMP=0x00100000000064d5
- (void)disableOnlyRemoteUnlockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006180
- (void)_notifyCurrentStateReliably:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006077
- (id)_retrieveUnlockOnlyPasscode;	// IMP=0x001000000000600d
- (id)_passcodeStringFromPasscodeData:(id)arg1;	// IMP=0x0010000000005f9c
- (void)enableOnlyRemoteUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005df8
- (void)enableWristDetectBeforeEnableOnlyRemoteUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005bd7
- (void)completeEnableOnlyRemoteUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000521c
- (id)_createAndStoreNewPasscodeWithCurrentPasscode:(id)arg1;	// IMP=0x0010000000004e5e
- (void)notifyCurrentState;	// IMP=0x0010000000004e48
- (void)resetDeviceWristDetectionSetting:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004c3a
- (void)requestDeviceSetWristDetectionDisabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004aa0
- (void)queryRemoteDeviceState:(CDUnknownBlockType)arg1;	// IMP=0x00100000000047e6
- (void)unpairForUnlockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000475d
- (void)requestRemoteDeviceRemoveLockout:(CDUnknownBlockType)arg1;	// IMP=0x00100000000046b8
- (void)requestRemoteDeviceDisableOnlyRemoteUnlock;	// IMP=0x0010000000004516
- (void)requestRemoteDeviceUnlockNotification;	// IMP=0x0010000000004362
- (void)requestRemoteDeviceRemoteAction:(long long)arg1 type:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000424a
- (void)pairForUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003fa4
- (void)didCompleteRequest:(id)arg1;	// IMP=0x0010000000003b90
- (id)_sendProtobuf:(id)arg1 reliably:(_Bool)arg2 expectsResponse:(_Bool)arg3 responseIdentifier:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000003912
- (void)_sendResponse:(unsigned short)arg1 toRequestID:(id)arg2 data:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000003856
- (id)_sendRequest:(unsigned short)arg1 data:(id)arg2 reliably:(_Bool)arg3 expectResponse:(_Bool)arg4 handler:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x001000000000371d
- (void)_sendResultOfMessage:(unsigned short)arg1 requestID:(id)arg2 success:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000003441
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x001000000000323f
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000003163
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000030bc
- (void)removeErrorHandlerForRequest:(id)arg1;	// IMP=0x0010000000003011
- (void)setErrorHandler:(CDUnknownBlockType)arg1 forRequest:(id)arg2;	// IMP=0x0010000000002ece
- (CDUnknownBlockType)errorHandlerForRequest:(id)arg1;	// IMP=0x0010000000002d8b
- (void)removeResponseHandlerForRequestMessageID:(id)arg1;	// IMP=0x0010000000002c96
- (void)setResponseHandler:(id)arg1 forRequestMessageID:(id)arg2;	// IMP=0x0010000000002b5c
- (id)responseHandlerForRequestMessageID:(id)arg1;	// IMP=0x0010000000002976
- (void)setPairedDeviceVersion:(unsigned int)arg1;	// IMP=0x001000000000296d
- (unsigned int)pairedDeviceVersion;	// IMP=0x0010000000002964
- (id)init;	// IMP=0x0010000000002660

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

