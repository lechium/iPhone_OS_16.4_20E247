//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSManualDuckingHandler, CSXPCConnection, NSString;
@protocol CSAudioSessionProviding;

@interface CSAudioSessionProvidingProxy : NSObject
{
    id <CSAudioSessionProviding> _audioSessionProvider;	// 8 = 0x8
    CSXPCConnection *_xpcConnection;	// 16 = 0x10
    unsigned long long _streamClientType;	// 24 = 0x18
    CSManualDuckingHandler *_manualDuckingHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000dd335
@property(retain, nonatomic) CSManualDuckingHandler *manualDuckingHandler; // @synthesize manualDuckingHandler=_manualDuckingHandler;
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) id <CSAudioSessionProviding> audioSessionProvider; // @synthesize audioSessionProvider=_audioSessionProvider;
- (void)_sendDelegateMessageToClient:(id)arg1;	// IMP=0x00100000000dd1d0
- (void)audioSessionProvider:(id)arg1 didChangeContext:(_Bool)arg2;	// IMP=0x00100000000dd11c
- (void)audioSessionProvider:(id)arg1 providerInvalidated:(_Bool)arg2;	// IMP=0x00100000000dd01e
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000dcf36
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000dce4e
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000dcd66
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000dcc7e
- (void)audioSessionProvider:(id)arg1 didSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00100000000dcbc4
- (void)audioSessionProvider:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00100000000dcb0a
- (void)audioSessionProviderEndInterruption:(id)arg1;	// IMP=0x00100000000dca6e
- (void)audioSessionProviderBeginInterruption:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000000dc986
- (void)audioSessionProviderBeginInterruption:(id)arg1;	// IMP=0x00100000000dc8ea
- (void)_sendReplyMessageWithResult:(_Bool)arg1 error:(id)arg2 event:(id)arg3 client:(id)arg4;	// IMP=0x00100000000dc7f6
- (void)_handleSessionProvidingRequestTypeReportDynamicActivityAttribute:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000dc757
- (void)_handleSessionProvidingRequestTypeEnableSmartRoutingConsideration:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000dc65b
- (void)_handleSessionProvidingRequestTypeEnableMiniDucking:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000dc55f
- (void)_handleSessionProvidingRequestTypeDuckDefaultOutputAudioDevice:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000dc48d
- (void)_handleSessionProvidingRequestTypeDuckAudioDevice:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000dc3a5
- (void)_handleSessionProvidingRequestTypeSetDuckOthersOption:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000dc2b8
- (void)_handleSessionProvidingRequestTypeDeactivateMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000dc0ba
- (void)_handleSessionProvidingRequestTypeActivateMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000dbe67
- (void)_handleSessionProvidingRequestTypePrewarmMessage:(id)arg1 client:(id)arg2;	// IMP=0x00100000000dbd24
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000dbb40
- (void)dealloc;	// IMP=0x00100000000dba9c
- (void)CSXPCConnectionReceivedClientError:(id)arg1 clientError:(id)arg2 client:(id)arg3;	// IMP=0x00100000000db92c
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000db8c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
