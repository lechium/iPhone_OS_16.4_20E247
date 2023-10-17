//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CXCallSource, MISSING_TYPE, NSArray, NSDate, NSDictionary, NSString, NSUUID, TUCallDisplayContext, TUCallProvider, TUCallScreenShareAttributes, TUHandle;
@protocol CXAudioSessionActivationStateObserver;

@interface CSDMockCall
{
    _Bool _mockPTT;	// 8 = 0x8
    _Bool _mockIsVideo;	// 9 = 0x9
    _Bool _mockIsVideoPaused;	// 10 = 0xa
    _Bool _mockHostedOnCurrentDevice;	// 11 = 0xb
    _Bool _mockEndpointOnCurrentDevice;	// 12 = 0xc
    _Bool _mockBlocked;	// 13 = 0xd
    _Bool _mockVoicemail;	// 14 = 0xe
    _Bool _mockEmergency;	// 15 = 0xf
    _Bool _mockFailureExpected;	// 16 = 0x10
    MISSING_TYPE *_mockSupportsEmergencyFallback;	// 17 = 0x11
    _Bool _mockSOS;	// 18 = 0x12
    _Bool _mockOutgoing;	// 19 = 0x13
    _Bool _mockConferenced;	// 20 = 0x14
    _Bool _mockUsingBaseband;	// 21 = 0x15
    _Bool _mockSupportsTTYWithVoice;	// 22 = 0x16
    _Bool _mockNeedsManualInCallSounds;	// 23 = 0x17
    _Bool _mockHasStartedOutgoing;	// 24 = 0x18
    _Bool _mockHasSentInvitation;	// 25 = 0x19
    _Bool _mockConnecting;	// 26 = 0x1a
    _Bool _mockConnected;	// 27 = 0x1b
    _Bool _mockUplinkMuted;	// 28 = 0x1c
    _Bool _mockUplinkWasExplicitlyMuted;	// 29 = 0x1d
    _Bool _mockMayRequireBreakBeforeMake;	// 30 = 0x1e
    _Bool _mockPrefersExclusiveAccessToCellularNetwork;	// 31 = 0x1f
    _Bool _mockIsThirdPartyVideo;	// 32 = 0x20
    _Bool _mockShouldSuppressInCallUI;	// 33 = 0x21
    _Bool _mockKnownCaller;	// 34 = 0x22
    _Bool _mockConversation;	// 35 = 0x23
    _Bool _mockSharingScreen;	// 36 = 0x24
    _Bool _mockHasBeenRedirected;	// 37 = 0x25
    int _mockService;	// 40 = 0x28
    int _mockCallStatus;	// 44 = 0x2c
    int _mockTTYType;	// 48 = 0x30
    int _mockDisconnectedReason;	// 52 = 0x34
    int _mockSubtype;	// 56 = 0x38
    int _mockCallRelaySupport;	// 60 = 0x3c
    NSString *_mockUniqueProxyIdentifier;	// 64 = 0x40
    double _mockCallDuration;	// 72 = 0x48
    TUHandle *_mockHandle;	// 80 = 0x50
    NSString *_mockLocalizedLabel;	// 88 = 0x58
    NSString *_mockCompanyName;	// 96 = 0x60
    NSString *_mockCallUUID;	// 104 = 0x68
    NSString *_mockCallerNameFromNetwork;	// 112 = 0x70
    long long _mockBytesOfDataUsed;	// 120 = 0x78
    NSString *_mockAudioCategory;	// 128 = 0x80
    NSString *_mockAudioMode;	// 136 = 0x88
    NSUUID *_mockCallGroupUUID;	// 144 = 0x90
    TUCallProvider *_mockProvider;	// 152 = 0x98
    NSDictionary *_mockProviderContext;	// 160 = 0xa0
    long long _mockProviderErrorCode;	// 168 = 0xa8
    TUCallDisplayContext *_mockDisplayContext;	// 176 = 0xb0
    long long _mockVideoStreamToken;	// 184 = 0xb8
    long long _mockAudioInterruptionProviderType;	// 192 = 0xc0
    NSString *_mockDisplayName;	// 200 = 0xc8
    NSArray *_mockContactIdentifiers;	// 208 = 0xd0
    NSDate *_mockDateCreated;	// 216 = 0xd8
    NSDate *_mockDateConnected;	// 224 = 0xe0
    id <CXAudioSessionActivationStateObserver> _mockAudioInterruptionActivationStateObserver;	// 232 = 0xe8
    CXCallSource *_mockBackingCallSource;	// 240 = 0xf0
    unsigned long long _mockInitialLinkType;	// 248 = 0xf8
    long long _mockJunkConfidence;	// 256 = 0x100
    TUCallScreenShareAttributes *_mockScreenShareAttributes;	// 264 = 0x108
}

+ (id)mockCallWithNotificationCenter:(id)arg1 fromBlock:(CDUnknownBlockType)arg2;	// IMP=0x00400000001b81a7
+ (id)mockCallFromBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b811a
+ (id)mockCallWithNotificationCenter:(id)arg1;	// IMP=0x00100000001b8106
+ (id)mockCall;	// IMP=0x00100000001b809e
- (void).cxx_destruct;	// IMP=0x00200000001b931e
@property(nonatomic, getter=hasBeenRedirected) _Bool mockHasBeenRedirected; // @synthesize mockHasBeenRedirected=_mockHasBeenRedirected;
@property(retain, nonatomic, getter=screenShareAttributes) TUCallScreenShareAttributes *mockScreenShareAttributes; // @synthesize mockScreenShareAttributes=_mockScreenShareAttributes;
@property(nonatomic, getter=isSharingScreen) _Bool mockSharingScreen; // @synthesize mockSharingScreen=_mockSharingScreen;
@property(nonatomic, getter=isConversation) _Bool mockConversation; // @synthesize mockConversation=_mockConversation;
@property(nonatomic, getter=isKnownCaller) _Bool mockKnownCaller; // @synthesize mockKnownCaller=_mockKnownCaller;
@property(nonatomic, getter=junkConfidence) long long mockJunkConfidence; // @synthesize mockJunkConfidence=_mockJunkConfidence;
@property(nonatomic, getter=shouldSuppressInCallUI) _Bool mockShouldSuppressInCallUI; // @synthesize mockShouldSuppressInCallUI=_mockShouldSuppressInCallUI;
@property(nonatomic, getter=callRelaySupport) int mockCallRelaySupport; // @synthesize mockCallRelaySupport=_mockCallRelaySupport;
@property(nonatomic, getter=initialLinkType) unsigned long long mockInitialLinkType; // @synthesize mockInitialLinkType=_mockInitialLinkType;
@property(nonatomic, getter=isThirdPartyVideo) _Bool mockIsThirdPartyVideo; // @synthesize mockIsThirdPartyVideo=_mockIsThirdPartyVideo;
@property(retain, nonatomic, getter=backingCallSource) CXCallSource *mockBackingCallSource; // @synthesize mockBackingCallSource=_mockBackingCallSource;
@property(retain, nonatomic, getter=audioInterruptionActivationStateObserver) id <CXAudioSessionActivationStateObserver> mockAudioInterruptionActivationStateObserver; // @synthesize mockAudioInterruptionActivationStateObserver=_mockAudioInterruptionActivationStateObserver;
@property(retain, nonatomic, getter=dateConnected) NSDate *mockDateConnected; // @synthesize mockDateConnected=_mockDateConnected;
@property(retain, nonatomic, getter=dateCreated) NSDate *mockDateCreated; // @synthesize mockDateCreated=_mockDateCreated;
@property(copy, nonatomic, getter=contactIdentifiers) NSArray *mockContactIdentifiers; // @synthesize mockContactIdentifiers=_mockContactIdentifiers;
@property(nonatomic, getter=prefersExclusiveAccessToCellularNetwork) _Bool mockPrefersExclusiveAccessToCellularNetwork; // @synthesize mockPrefersExclusiveAccessToCellularNetwork=_mockPrefersExclusiveAccessToCellularNetwork;
@property(copy, nonatomic, getter=displayName) NSString *mockDisplayName; // @synthesize mockDisplayName=_mockDisplayName;
@property(nonatomic, getter=audioInterruptionProviderType) long long mockAudioInterruptionProviderType; // @synthesize mockAudioInterruptionProviderType=_mockAudioInterruptionProviderType;
@property(nonatomic, getter=mayRequireBreakBeforeMake) _Bool mockMayRequireBreakBeforeMake; // @synthesize mockMayRequireBreakBeforeMake=_mockMayRequireBreakBeforeMake;
@property(nonatomic, getter=videoStreamToken) long long mockVideoStreamToken; // @synthesize mockVideoStreamToken=_mockVideoStreamToken;
@property(nonatomic, getter=uplinkWasExplicitlyMuted) _Bool mockUplinkWasExplicitlyMuted; // @synthesize mockUplinkWasExplicitlyMuted=_mockUplinkWasExplicitlyMuted;
@property(nonatomic, getter=isUplinkMuted, setter=setUplinkMuted:) _Bool mockUplinkMuted; // @synthesize mockUplinkMuted=_mockUplinkMuted;
@property(nonatomic, getter=isConnected) _Bool mockConnected; // @synthesize mockConnected=_mockConnected;
@property(nonatomic, getter=isConnecting) _Bool mockConnecting; // @synthesize mockConnecting=_mockConnecting;
@property(nonatomic, getter=hasSentInvitation) _Bool mockHasSentInvitation; // @synthesize mockHasSentInvitation=_mockHasSentInvitation;
@property(nonatomic, getter=hasStartedOutgoing) _Bool mockHasStartedOutgoing; // @synthesize mockHasStartedOutgoing=_mockHasStartedOutgoing;
@property(copy, nonatomic, getter=displayContext) TUCallDisplayContext *mockDisplayContext; // @synthesize mockDisplayContext=_mockDisplayContext;
@property(nonatomic, getter=providerErrorCode) long long mockProviderErrorCode; // @synthesize mockProviderErrorCode=_mockProviderErrorCode;
@property(copy, nonatomic, getter=providerContext) NSDictionary *mockProviderContext; // @synthesize mockProviderContext=_mockProviderContext;
@property(copy, nonatomic, getter=provider) TUCallProvider *mockProvider; // @synthesize mockProvider=_mockProvider;
@property(copy, nonatomic, getter=callGroupUUID) NSUUID *mockCallGroupUUID; // @synthesize mockCallGroupUUID=_mockCallGroupUUID;
@property(copy, nonatomic, getter=audioMode) NSString *mockAudioMode; // @synthesize mockAudioMode=_mockAudioMode;
@property(copy, nonatomic, getter=audioCategory) NSString *mockAudioCategory; // @synthesize mockAudioCategory=_mockAudioCategory;
@property(nonatomic, getter=needsManualInCallSounds) _Bool mockNeedsManualInCallSounds; // @synthesize mockNeedsManualInCallSounds=_mockNeedsManualInCallSounds;
@property(nonatomic, getter=subtype) int mockSubtype; // @synthesize mockSubtype=_mockSubtype;
@property(nonatomic, getter=bytesOfDataUsed) long long mockBytesOfDataUsed; // @synthesize mockBytesOfDataUsed=_mockBytesOfDataUsed;
@property(copy, nonatomic, getter=callerNameFromNetwork) NSString *mockCallerNameFromNetwork; // @synthesize mockCallerNameFromNetwork=_mockCallerNameFromNetwork;
@property(copy, nonatomic, getter=callUUID) NSString *mockCallUUID; // @synthesize mockCallUUID=_mockCallUUID;
@property(copy, nonatomic, getter=companyName) NSString *mockCompanyName; // @synthesize mockCompanyName=_mockCompanyName;
@property(copy, nonatomic, getter=localizedLabel) NSString *mockLocalizedLabel; // @synthesize mockLocalizedLabel=_mockLocalizedLabel;
@property(retain, nonatomic, getter=handle) TUHandle *mockHandle; // @synthesize mockHandle=_mockHandle;
@property(nonatomic, getter=disconnectedReason) int mockDisconnectedReason; // @synthesize mockDisconnectedReason=_mockDisconnectedReason;
@property(nonatomic, getter=supportsTTYWithVoice) _Bool mockSupportsTTYWithVoice; // @synthesize mockSupportsTTYWithVoice=_mockSupportsTTYWithVoice;
@property(nonatomic, getter=ttyType) int mockTTYType; // @synthesize mockTTYType=_mockTTYType;
@property(nonatomic, getter=isUsingBaseband) _Bool mockUsingBaseband; // @synthesize mockUsingBaseband=_mockUsingBaseband;
@property(nonatomic, getter=isConferenced) _Bool mockConferenced; // @synthesize mockConferenced=_mockConferenced;
@property(nonatomic, getter=isOutgoing) _Bool mockOutgoing; // @synthesize mockOutgoing=_mockOutgoing;
@property(nonatomic, getter=isSOS, setter=setSOS:) _Bool mockSOS; // @synthesize mockSOS=_mockSOS;
@property(nonatomic) _Bool mockSupportsEmergencyFallback; // @synthesize mockSupportsEmergencyFallback=_mockSupportsEmergencyFallback;
@property(nonatomic, getter=isFailureExpected) _Bool mockFailureExpected; // @synthesize mockFailureExpected=_mockFailureExpected;
@property(nonatomic, getter=isEmergency) _Bool mockEmergency; // @synthesize mockEmergency=_mockEmergency;
@property(nonatomic, getter=callDuration) double mockCallDuration; // @synthesize mockCallDuration=_mockCallDuration;
@property(nonatomic, getter=isVoicemail) _Bool mockVoicemail; // @synthesize mockVoicemail=_mockVoicemail;
@property(nonatomic, getter=isBlocked) _Bool mockBlocked; // @synthesize mockBlocked=_mockBlocked;
@property(nonatomic, getter=isEndpointOnCurrentDevice) _Bool mockEndpointOnCurrentDevice; // @synthesize mockEndpointOnCurrentDevice=_mockEndpointOnCurrentDevice;
@property(nonatomic, getter=isHostedOnCurrentDevice) _Bool mockHostedOnCurrentDevice; // @synthesize mockHostedOnCurrentDevice=_mockHostedOnCurrentDevice;
@property(nonatomic, getter=isVideoPaused) _Bool mockIsVideoPaused; // @synthesize mockIsVideoPaused=_mockIsVideoPaused;
@property(nonatomic, getter=isVideo) _Bool mockIsVideo; // @synthesize mockIsVideo=_mockIsVideo;
@property(nonatomic, getter=isPTT) _Bool mockPTT; // @synthesize mockPTT=_mockPTT;
@property(copy, nonatomic, getter=uniqueProxyIdentifier) NSString *mockUniqueProxyIdentifier; // @synthesize mockUniqueProxyIdentifier=_mockUniqueProxyIdentifier;
@property(nonatomic, getter=callStatus) int mockCallStatus; // @synthesize mockCallStatus=_mockCallStatus;
@property(nonatomic, getter=service) int mockService; // @synthesize mockService=_mockService;
- (void)setSharingScreen:(_Bool)arg1 attributes:(id)arg2;	// IMP=0x00100000001b8ac7
- (void)disconnectWithReason:(int)arg1;	// IMP=0x00100000001b8a6c
- (void)dialWithRequest:(id)arg1 displayContext:(id)arg2;	// IMP=0x00100000001b88f0
- (void)answerWithRequest:(id)arg1;	// IMP=0x00100000001b881f
- (void)unhold;	// IMP=0x00100000001b8808
- (void)hold;	// IMP=0x00100000001b87f1
- (void)setEndpointOnCurrentDevice:(_Bool)arg1;	// IMP=0x00100000001b87df
- (void)updateWithCall:(id)arg1;	// IMP=0x00100000001b8304
- (id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(_Bool)arg2 notificationCenter:(id)arg3;	// IMP=0x00100000001b821f

@end
