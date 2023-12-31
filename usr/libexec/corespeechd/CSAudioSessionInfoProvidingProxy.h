//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSXPCConnection, NSString;
@protocol CSAudioSessionInfoProviding;

@interface CSAudioSessionInfoProvidingProxy : NSObject
{
    id <CSAudioSessionInfoProviding> _audioSessionInfoProvider;	// 8 = 0x8
    CSXPCConnection *_xpcConnection;	// 16 = 0x10
    unsigned long long _streamClientType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000061dd1
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSAudioSessionInfoProviding> audioSessionInfoProvider; // @synthesize audioSessionInfoProvider=_audioSessionInfoProvider;
- (void)_sendDelegateMessageToClient:(id)arg1;	// IMP=0x0010000000061c7b
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x0010000000061b93
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x0010000000061aab
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000619c3
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000618db
- (void)_handleSessionIDRequestMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000616e5
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000006162a
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000615c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

