//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/TUCall.h>

@class CSDCallDataSource, CSDIDSTransport, CXCall, IDSDestination, NSDate, NSDictionary, NSMutableDictionary, NSObject, NSSet, NSString, TUDialRequest, TUDynamicCallDisplayContext;
@protocol CSDCallDelegate, OS_dispatch_source;

@interface CSDCall : TUCall
{
    _Bool _isSendingAudio;	// 8 = 0x8
    _Bool _isKnownCaller;	// 9 = 0x9
    _Bool _joinedFromLink;	// 10 = 0xa
    _Bool _uplinkWasExplicitlyMuted;	// 11 = 0xb
    _Bool _hasAudioInterruption;	// 12 = 0xc
    _Bool _hasAudioFinished;	// 13 = 0xd
    _Bool _ignoresBluetoothDeviceUID;	// 14 = 0xe
    _Bool _oneToOneModeEnabled;	// 15 = 0xf
    _Bool _faceTimeIDStatusRefreshed;	// 16 = 0x10
    long long _junkConfidence;	// 24 = 0x18
    long long _identificationCategory;	// 32 = 0x20
    id <CSDCallDelegate> _delegate;	// 40 = 0x28
    CSDCallDataSource *_dataSource;	// 48 = 0x30
    TUDialRequest *_dialRequest;	// 56 = 0x38
    NSDate *_dateStartedOutgoing;	// 64 = 0x40
    NSMutableDictionary *_silencingUserInfo;	// 72 = 0x48
    long long _bytesOfDataUsed;	// 80 = 0x50
    unsigned long long _initialLinkType;	// 88 = 0x58
    double _uplinkMutedSetTime;	// 96 = 0x60
    double _remoteUplinkMutedSetTime;	// 104 = 0x68
    NSSet *_activeRemoteParticipants;	// 112 = 0x70
    CSDIDSTransport *_relayClientTransport;	// 120 = 0x78
    IDSDestination *_expectedRelayClientDestination;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 136 = 0x88
    long long _transmissionState;	// 144 = 0x90
    TUDynamicCallDisplayContext *_dynamicDisplayContext;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00200000000e523d
@property(nonatomic) _Bool faceTimeIDStatusRefreshed; // @synthesize faceTimeIDStatusRefreshed=_faceTimeIDStatusRefreshed;
@property(retain, nonatomic) TUDynamicCallDisplayContext *dynamicDisplayContext; // @synthesize dynamicDisplayContext=_dynamicDisplayContext;
- (long long);	// IMP=0x00100000000e51e7
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) IDSDestination *expectedRelayClientDestination; // @synthesize expectedRelayClientDestination=_expectedRelayClientDestination;
@property(retain, nonatomic) CSDIDSTransport *relayClientTransport; // @synthesize relayClientTransport=_relayClientTransport;
@property(copy, nonatomic) NSSet *activeRemoteParticipants; // @synthesize activeRemoteParticipants=_activeRemoteParticipants;
@property(nonatomic) double remoteUplinkMutedSetTime; // @synthesize remoteUplinkMutedSetTime=_remoteUplinkMutedSetTime;
@property(nonatomic) double uplinkMutedSetTime; // @synthesize uplinkMutedSetTime=_uplinkMutedSetTime;
@property(readonly, nonatomic) unsigned long long initialLinkType; // @synthesize initialLinkType=_initialLinkType;
@property(nonatomic) long long bytesOfDataUsed; // @synthesize bytesOfDataUsed=_bytesOfDataUsed;
@property(retain, nonatomic) NSMutableDictionary *silencingUserInfo; // @synthesize silencingUserInfo=_silencingUserInfo;
@property(readonly, nonatomic, getter=isOneToOneModeEnabled) _Bool oneToOneModeEnabled; // @synthesize oneToOneModeEnabled=_oneToOneModeEnabled;
@property(readonly, nonatomic) _Bool ignoresBluetoothDeviceUID; // @synthesize ignoresBluetoothDeviceUID=_ignoresBluetoothDeviceUID;
@property(nonatomic) _Bool hasAudioFinished; // @synthesize hasAudioFinished=_hasAudioFinished;
@property(nonatomic) _Bool hasAudioInterruption; // @synthesize hasAudioInterruption=_hasAudioInterruption;
@property(nonatomic) _Bool uplinkWasExplicitlyMuted; // @synthesize uplinkWasExplicitlyMuted=_uplinkWasExplicitlyMuted;
@property(retain, nonatomic) NSDate *dateStartedOutgoing; // @synthesize dateStartedOutgoing=_dateStartedOutgoing;
@property(retain, nonatomic) TUDialRequest *dialRequest; // @synthesize dialRequest=_dialRequest;
@property(nonatomic) __weak CSDCallDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CSDCallDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool joinedFromLink; // @synthesize joinedFromLink=_joinedFromLink;
@property(nonatomic) _Bool isKnownCaller; // @synthesize isKnownCaller=_isKnownCaller;
@property(nonatomic) long long identificationCategory; // @synthesize identificationCategory=_identificationCategory;
@property(nonatomic) long long junkConfidence; // @synthesize junkConfidence=_junkConfidence;
@property(nonatomic) _Bool isSendingAudio; // @synthesize isSendingAudio=_isSendingAudio;
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)arg1;	// IMP=0x00100000000e4ee8
- (void)displayContextChanged:(id)arg1;	// IMP=0x00100000000e4ed6
- (void)handleUpdatedPropertiesAfterChangesInBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e43b7
- (void)propertiesChanged;	// IMP=0x00100000000e436b
@property(readonly, nonatomic) CXCall *cxCall;
@property(readonly, nonatomic) _Bool mediaPlaybackOnExternalDevice;
@property(readonly, nonatomic) _Bool mixesVoiceWithMedia;
@property(readonly, nonatomic) _Bool mayRequireBreakBeforeMake;
@property(readonly, nonatomic) long long providerEndedReason;
@property(readonly, nonatomic) long long providerErrorCode;
- (id)displayContext;	// IMP=0x00100000000e4002
- (void)_refreshFaceTimeIDSStatusIfNecessary;	// IMP=0x00100000000e3c7b
- (int)faceTimeIDStatus;	// IMP=0x00100000000e3c3d
@property(readonly, copy, nonatomic) NSDictionary *handoffActivityUserInfo;
@property(readonly, copy, nonatomic) NSString *handoffDynamicIdentifier;
- (_Bool)isSOS;	// IMP=0x00100000000e3b8b
- (_Bool)isEmergency;	// IMP=0x00100000000e3ae4
- (_Bool)isVoicemail;	// IMP=0x00100000000e3a3d
- (_Bool)isOutgoing;	// IMP=0x00100000000e39d8
- (id)handle;	// IMP=0x00100000000e3922
@property(readonly, nonatomic) long long audioInterruptionOperationMode;
@property(readonly, nonatomic) long long audioInterruptionProviderType;
@property(readonly, nonatomic) _Bool hasStartedOutgoing;
@property(readonly, nonatomic) int callStatusFromOverride;
@property(readonly, nonatomic) _Bool shouldOverrideCallStatus;
@property(readonly, nonatomic) int callStatusFromUnderlyingSource;
- (int)callStatus;	// IMP=0x00100000000e3834
@property(nonatomic) long long transmissionState; // @synthesize transmissionState=_transmissionState;
- (void)setUplinkMuted:(_Bool)arg1;	// IMP=0x00100000000e3720
- (void)setDateEnded:(id)arg1;	// IMP=0x00100000000e3632
- (void)setDateConnected:(id)arg1;	// IMP=0x00100000000e355a
- (void)setDateStartedConnecting:(id)arg1;	// IMP=0x00100000000e346a
- (void)setDateSentInvitation:(id)arg1;	// IMP=0x00100000000e337a
- (void)setModel:(id)arg1;	// IMP=0x00100000000e327e
- (void)setSoundRegion:(long long)arg1;	// IMP=0x00100000000e31c8
- (void)setFaceTimeIDStatus:(int)arg1;	// IMP=0x00100000000e3113
- (void)setShouldSuppressRingtone:(_Bool)arg1;	// IMP=0x00100000000e305d
- (void)setDisconnectedReason:(int)arg1;	// IMP=0x00100000000e2fa8
- (void)setEndpointOnCurrentDevice:(_Bool)arg1;	// IMP=0x00100000000e2ef2
- (void)setWasDialAssisted:(_Bool)arg1;	// IMP=0x00100000000e2e3c
- (void)setWantsHoldMusic:(_Bool)arg1;	// IMP=0x00100000000e2d86
- (void)setTransitionStatus:(int)arg1;	// IMP=0x00100000000e2cd1
- (void)playRemoteDTMFToneForKey:(unsigned char)arg1;	// IMP=0x00100000000e2a5c
- (void)playLocalDTMFToneForKey:(unsigned char)arg1;	// IMP=0x00100000000e2a56
- (void)updateWithProxyCall:(id)arg1;	// IMP=0x00100000000e29c5
- (void)updateForDisconnection;	// IMP=0x00100000000e29bf
- (void)unsuppressRingtoneIfNecessary;	// IMP=0x00100000000e25da
- (void)disconnect;	// IMP=0x00100000000e25c6
- (void)dialWithRequest:(id)arg1 displayContext:(id)arg2;	// IMP=0x00100000000e2366
- (int)callRelaySupport;	// IMP=0x00100000000e21cf
- (void)dealloc;	// IMP=0x00100000000e218f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
