//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareSettingsMac
{
    _Bool _hiDefEncoding;	// 34 = 0x22
    _Bool _isGVAEncoderAvailableInitialized;	// 35 = 0x23
    _Bool _isGVAEncoderAvailable;	// 36 = 0x24
    int _machineType;	// 40 = 0x28
    int _cpuFamily;	// 44 = 0x2c
    int _numProcessors;	// 48 = 0x30
    int _mhrtz;	// 52 = 0x34
    int _isG5;	// 56 = 0x38
    int _hardwareScore;	// 60 = 0x3c
    NSString *_cpuType;	// 64 = 0x40
    NSString *_machineName;	// 72 = 0x48
    unsigned int _screenWidth;	// 80 = 0x50
    unsigned int _screenHeight;	// 84 = 0x54
    unsigned long long _maxScreenEncodingSizeSupported;	// 88 = 0x58
    NSString *_modelName;	// 96 = 0x60
    unsigned int _modelVersion;	// 104 = 0x68
    unsigned int _modelRevision;	// 108 = 0x6c
    NSData *_boardId;	// 112 = 0x70
}

+ (long long)deviceClass;	// IMP=0x0010000000035d94
+ (id)sharedInstance;	// IMP=0x00100000000355a6
@property(readonly, nonatomic) _Bool isViewPointCorrectionSupported;
@property(readonly, nonatomic) _Bool isCellularTappingSupported;
- (_Bool)preferPresentationTimestamp;	// IMP=0x000000000003663b
- (_Bool)supportsPortraitCameraCapture;	// IMP=0x0000000000036633
@property(readonly, nonatomic) long long screenShareCapabilities;
- (_Bool)disableMLScalarDuringSharing;	// IMP=0x0000000000036620
- (_Bool)supportsDedicatedSystemAudioStream;	// IMP=0x00000000000364a7
- (_Bool)limitCameraDownlinkBitrateDuringSharing;	// IMP=0x0000000000036492
@property(readonly, nonatomic) NSArray *supportedVideoPayloads;
- (id)queryBoardId;	// IMP=0x00000000000362f7
@property(readonly, nonatomic) _Bool shouldEnforceScreenFrameRateLimit;
@property(readonly, nonatomic) unsigned int maxFrameRateSupportedScreenShare;
@property(readonly, nonatomic) unsigned int maxActiveScreenEncoders;
@property(readonly, nonatomic) unsigned long long maxScreenEncodingSizeSupported;
- (double)previewPreferredAspectRatio;	// IMP=0x0000000000035f88
- (unsigned int)screenHeightForDisplayID:(unsigned int)arg1;	// IMP=0x0000000000035f76
@property(readonly, nonatomic) unsigned int screenHeight;
@property(readonly, nonatomic) _Bool shouldOverrideGPUMuxing;
- (unsigned int)screenWidthForDisplayID:(unsigned int)arg1;	// IMP=0x0000000000035ef2
@property(readonly, nonatomic) unsigned int screenWidth;
- (void)_initializeScreenDimension;	// IMP=0x0000000000035ebd
@property(readonly, nonatomic) _Bool supportsAVFCapture;
- (unsigned int)maxFpsCameraCaptureDuringSharing;	// IMP=0x0000000000035e5b
- (unsigned int)maxRemoteParticipants30fps;	// IMP=0x0000000000035d9c
@property(readonly, nonatomic) _Bool isPixelFormatAvailable;
- (void)addPixelFormat;	// IMP=0x0000000000035d1b
@property(readonly, nonatomic) _Bool supportsHEIFEncoding;
@property(readonly, nonatomic) _Bool isDeviceLargeScreen;
@property(readonly, nonatomic) unsigned int maxActiveVideoDecoders;
- (unsigned int)maxMultiwayFramerateSupported;	// IMP=0x0000000000035c05
@property(readonly, nonatomic) _Bool isCaptionsSupported;
- (unsigned int)maxOneToOneFramerateSupported;	// IMP=0x0000000000035bf2
@property(readonly, nonatomic) _Bool supportsMultiway720pStream;
@property(readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property(readonly, nonatomic) unsigned int maxDisplayRefreshRate;
@property(readonly, nonatomic) _Bool useSoftFramerateSwitching;
@property(readonly, nonatomic) int hardwareScore;
@property(readonly, nonatomic) NSString *machineName;
@property(readonly, nonatomic) unsigned int hwEncoderEnterBitrate;
@property(readonly, nonatomic) unsigned int hwEncoderExitBitrate;
- (_Bool)isAppleSiliconMac;	// IMP=0x00000000000356df
@property(readonly, nonatomic) _Bool isMacmini;
- (_Bool)isMacBookAir;	// IMP=0x00000000000356ad
- (_Bool)isIMacPro;	// IMP=0x0000000000035694
@property(readonly, nonatomic) _Bool isIMac;
@property(readonly, nonatomic) _Bool isMacPro;
@property(readonly, nonatomic) _Bool isMacBookWVGA;
@property(readonly, nonatomic) _Bool isSpatialAudioSupported;
@property(readonly, nonatomic) _Bool supports1080pDecoding;
@property(readonly, nonatomic) _Bool supports1080pEncoding;
@property(readonly, nonatomic) _Bool canDoHiDefDecoding;
@property(readonly, nonatomic) _Bool canDoHEVC;
@property(readonly, nonatomic) _Bool canDoHiDefEncoding;
- (_Bool)isGVAEncoderAvailable;	// IMP=0x0000000000034ed2
- (_Bool)_isModel:(id)arg1;	// IMP=0x0000000000034e7b
- (_Bool)_isMachineNewerThanSandybridge:(int)arg1;	// IMP=0x0000000000034e13
- (id)_getCPUTypeStringForMachineType:(int)arg1;	// IMP=0x0000000000034d89
- (int)_getCPUFamilyType;	// IMP=0x0000000000034be1
- (void)setupMachineName;	// IMP=0x0000000000034992
- (void)dealloc;	// IMP=0x0000000000034909
- (id)init;	// IMP=0x0000000000034683

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isSiriVoicePlayoutSupported;
@property(readonly, nonatomic) _Bool isSiriVoiceTapSupported;
@property(readonly) Class superclass;

@end

