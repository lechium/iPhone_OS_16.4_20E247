//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCMediaNegotiatorResultsCaptions;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiator
{
    _Bool _usePreNegotiation;	// 72 = 0x48
    _Bool _negotiationDone;	// 73 = 0x49
    _Bool _isCellular16x9Capable;	// 74 = 0x4a
    VCMediaNegotiatorResultsCaptions *_negotiatedCaptionsSettings;	// 80 = 0x50
    long long _negotiationMode;	// 88 = 0x58
}

+ (id)streamGroupIDsWithMediaBlob:(id)arg1;	// IMP=0x00600000002cd556
+ (unsigned int)mappedRemoteQualityIndexForQualityIndex:(unsigned int)arg1;	// IMP=0x00600000002cc797
+ (id)newCompressedBlob:(id)arg1;	// IMP=0x00600000002c5b3c
+ (id)newDecompressedBlob:(id)arg1;	// IMP=0x00600000002c5998
+ (void)dumpBlob:(id)arg1 prefix:(id)arg2 force:(_Bool)arg3;	// IMP=0x00600000002c519a
+ (_Bool)validateLocalConfiguration:(id)arg1;	// IMP=0x00600000002c5121
+ (_Bool)validateMultiwayAudioStreamConfigurations:(id)arg1;	// IMP=0x00600000002c4fcf
+ (_Bool)validateMultiwayVideoStreamConfigurations:(id)arg1;	// IMP=0x00600000002c4cb2
+ (id)negotiatedFeaturesStringWithLocalFeaturesString:(id)arg1 remoteFeaturesString:(id)arg2;	// IMP=0x00600000002c47da
+ (_Bool)initializeLocalConfiguration:(id)arg1 negotiationData:(id)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;	// IMP=0x00600000002c2a64
+ (id)localConfigurationWithData:(id)arg1 deviceRole:(int)arg2 preferredAudioPayload:(int)arg3;	// IMP=0x00600000002c295c
+ (id)negotiationBlobFromData:(id)arg1;	// IMP=0x00600000002c284e
@property(readonly, nonatomic) _Bool isCellular16x9Capable; // @synthesize isCellular16x9Capable=_isCellular16x9Capable;
@property(readonly, nonatomic) long long negotiationMode; // @synthesize negotiationMode=_negotiationMode;
@property(readonly, nonatomic) VCMediaNegotiatorResultsCaptions *negotiatedCaptionsSettings; // @synthesize negotiatedCaptionsSettings=_negotiatedCaptionsSettings;
@property(readonly, nonatomic) _Bool usePreNegotiation; // @synthesize usePreNegotiation=_usePreNegotiation;
- (_Bool)negotiateCaptionsWithCaptionsSettings:(id)arg1;	// IMP=0x00000000002cd355
- (void)setupCaptionsForMediaBlob:(id)arg1;	// IMP=0x00000000002cd34f
- (id)localeWithMediaBlobLanguage:(int)arg1;	// IMP=0x00000000002cd24d
- (int)mediaBlobLanguageWithLocale:(id)arg1;	// IMP=0x00000000002cd1d0
- (id)newStreamConfigFromMultiwayVideoStream:(id)arg1;	// IMP=0x00000000002cc7a8
- (id)newStreamConfigFromMultiwayAudioStream:(id)arg1;	// IMP=0x00000000002cc3b8
- (id)newStreamGroupCodecConfigForPayload:(int)arg1;	// IMP=0x00000000002cc274
- (_Bool)negotiateMultiwayVideoStreams:(id)arg1;	// IMP=0x00000000002cb58f
- (_Bool)isVideoStreamSupported:(int)arg1;	// IMP=0x00000000002cb52e
- (void)setupMultiwayVideoStreamsForMediaBlob:(id)arg1;	// IMP=0x00000000002cb3b2
- (_Bool)negotiateMultiwayAudioStreams:(id)arg1;	// IMP=0x00000000002cab32
- (void)setupMultiwayAudioStreamsForMediaBlob:(id)arg1;	// IMP=0x00000000002ca9b6
- (_Bool)negotiateMomentsWithMomentsSettings:(id)arg1;	// IMP=0x00000000002ca7ca
- (void)setupMomentsForMediaBlob:(id)arg1;	// IMP=0x00000000002ca5b4
- (_Bool)negotiateFaceTimeSettings:(id)arg1;	// IMP=0x00000000002ca108
- (void)setupFaceTimeSettingsForMediaBlob:(id)arg1 isResponse:(_Bool)arg2;	// IMP=0x00000000002c9c40
- (_Bool)selectBestScreenRule:(id)arg1 preferredPayloadOrder:(id)arg2;	// IMP=0x00000000002c983c
- (_Bool)setupScreenWithNegotiatedSettings:(id)arg1;	// IMP=0x00000000002c92a0
- (_Bool)negotiateScreenSettings:(id)arg1;	// IMP=0x00000000002c88dd
- (id)getPreferredScreenPayloadList;	// IMP=0x00000000002c88b3
- (_Bool)setupVideoWithNegotiatedSettings:(id)arg1;	// IMP=0x00000000002c843b
- (_Bool)negotiateVideoSettings:(id)arg1;	// IMP=0x00000000002c7891
- (_Bool)processParameterSets:(id)arg1 videoResults:(id)arg2;	// IMP=0x00000000002c75ad
- (_Bool)negotiateHDRMode:(id)arg1 videoResults:(id)arg2;	// IMP=0x00000000002c74b5
- (_Bool)processPixelFormats:(id)arg1 videoResults:(id)arg2;	// IMP=0x00000000002c737b
- (void)negotiateTilesPerFrame:(id)arg1 negotiatedSettings:(id)arg2;	// IMP=0x00000000002c731e
- (void)negotiateRTCPFB:(id)arg1;	// IMP=0x00000000002c72b4
- (_Bool)selectBestVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 localVideoRuleCollection:(id)arg4 remoteVideoSettings:(id)arg5 negotiatedVideoSettings:(id)arg6 isScreen:(_Bool)arg7;	// IMP=0x00000000002c6d7e
- (id)selectVideoFeatureString:(id)arg1 selectedPayload:(int)arg2;	// IMP=0x00000000002c6b71
- (_Bool)setupAudioWithNegotiatedSettings:(id)arg1;	// IMP=0x00000000002c67e6
- (_Bool)negotiateAudioSettings:(id)arg1;	// IMP=0x00000000002c6664
- (void)negotiateAudioSecondaryPayloads:(id)arg1;	// IMP=0x00000000002c6388
- (_Bool)negotiateAudioREDPayload:(id)arg1;	// IMP=0x00000000002c620f
- (_Bool)negotiateAudioDTXPayload:(id)arg1;	// IMP=0x00000000002c611f
- (_Bool)negotiateAudioPrimaryPayload:(id)arg1;	// IMP=0x00000000002c5de4
- (void)negotiateAudioUseSBR:(id)arg1;	// IMP=0x00000000002c5da5
- (void)negotiateAudioAllowRecording:(id)arg1;	// IMP=0x00000000002c5d2b
- (void)saveRemoteBandwidthSettingsWithMediaBlob:(id)arg1;	// IMP=0x00000000002c5821
- (_Bool)setupBandwidthSettingsForMediaBlob:(id)arg1;	// IMP=0x00000000002c5652
- (_Bool)addBandwidthSettingsForMediaBlob:(id)arg1 operatingMode:(int)arg2 connectionType:(int)arg3 maxBitrate:(unsigned int)arg4;	// IMP=0x00000000002c533c
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;	// IMP=0x00000000002c47ba
- (_Bool)processResponseBlob:(id)arg1;	// IMP=0x00000000002c4000
- (id)newResponseBlob;	// IMP=0x00000000002c334a
- (_Bool)processRemoteNegotiationData:(id)arg1;	// IMP=0x00000000002c1f06
- (id)negotiationData;	// IMP=0x00000000002c1606
- (void)dealloc;	// IMP=0x00000000002c15a1
- (_Bool)isCellular16x9EncodeCapable;	// IMP=0x00000000002c11a6
@property(readonly, nonatomic) _Bool isCaller;
- (id)initWithMode:(long long)arg1 localSettings:(id)arg2;	// IMP=0x00000000002c1107
- (id)initWithLocalSettings:(id)arg1;	// IMP=0x00000000002c0faa

@end

