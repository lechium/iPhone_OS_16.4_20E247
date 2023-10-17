//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, MISSING_TYPE, NSString, SDStatusMonitor, SFBluetoothPairingSession, SFClient, SFDevice, SFDeviceDiscovery, SFService, SFSession;
@protocol OS_dispatch_queue;

@interface SFShareAudioSessionDaemon : NSObject
{
    SFService *_bleNearbyActionAdvertiser;	// 8 = 0x8
    SFDeviceDiscovery *_bleNearbyInfoScanner;	// 16 = 0x10
    SFDeviceDiscovery *_bleProxPairingScanner;	// 24 = 0x18
    int _confirmState;	// 32 = 0x20
    NSString *_guestHeadphonesAddress;	// 40 = 0x28
    unsigned int _guestHeadphonesColorCode;	// 48 = 0x30
    MISSING_TYPE *_guestHeadphonesConnectState;	// 52 = 0x34
    SFBluetoothPairingSession *_guestHeadphonesPairingSession;	// 56 = 0x38
    unsigned int _guestHeadphonesProductID;	// 64 = 0x40
    NSString *_guestHeadphonesRouteUID;	// 72 = 0x48
    int _guestHeadphonesInstructionsState;	// 80 = 0x50
    int _guestiOSConnectState;	// 84 = 0x54
    CNContact *_guestiOSContact;	// 88 = 0x58
    NSString *_guestiOSDeviceAddress;	// 96 = 0x60
    int _guestiOSPairSetupPublicState;	// 104 = 0x68
    SFSession *_guestiOSSession;	// 112 = 0x70
    int _guestiOSShareAudioState;	// 120 = 0x78
    int _guestiOSWaitForRouteState;	// 124 = 0x7c
    _Bool _initialized;	// 128 = 0x80
    _Bool _invalidateCalled;	// 129 = 0x81
    _Bool _invalidateDone;	// 130 = 0x82
    _Bool _observingPickableRoutes;	// 131 = 0x83
    SFClient *_preventProxCardsClient;	// 136 = 0x88
    SFDevice *_triggeredDevice;	// 144 = 0x90
    SFDevice *_triggeredNeedsSetupDevice;	// 152 = 0x98
    _Bool _triggerediOS;	// 160 = 0xa0
    _Bool _prefHeadphoneTrigger;	// 161 = 0xa1
    _Bool _prefiOSTrigger;	// 162 = 0xa2
    int _prefOverrideColorCode;	// 164 = 0xa4
    int _prefOverrideProductID;	// 168 = 0xa8
    _Bool _prefRespectDeviceSupport;	// 172 = 0xac
    int _prefRSSIThreshold;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 184 = 0xb8
    CDUnknownBlockType _progressHandler;	// 192 = 0xc0
    SDStatusMonitor *_statusMonitor;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00200000000b33ac
@property(retain, nonatomic) SDStatusMonitor *statusMonitor; // @synthesize statusMonitor=_statusMonitor;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)userConfirmed;	// IMP=0x00100000000b3280
- (void)_reportProgressTriggeredDevice:(int)arg1;	// IMP=0x00100000000b307d
- (void)_reportProgress:(int)arg1 info:(id)arg2;	// IMP=0x00100000000b2e8d
- (void)_reportProgress:(int)arg1;	// IMP=0x00100000000b2cb8
- (void)_reportError:(id)arg1;	// IMP=0x00100000000b2baa
- (void)_pickableRoutesChanged;	// IMP=0x00100000000b28a2
- (void)_pickableRoutesChanged:(id)arg1;	// IMP=0x00100000000b27ec
- (void)_bleScannerProxPairingDeviceFound:(id)arg1;	// IMP=0x00100000000b1e74
- (void)_bleScannerNearbyInfoDeviceFound:(id)arg1;	// IMP=0x00100000000b1c34
- (void)_cleanup;	// IMP=0x00100000000b1aba
- (int)_runFinish;	// IMP=0x00100000000b18c8
- (int)_runWaitForGuestHeadphones;	// IMP=0x00100000000b1670
- (int)_runConnectGuestHeadphones;	// IMP=0x00100000000b1349
- (int)_runWaitForGuestHeadphonesPairingMode;	// IMP=0x00100000000b1331
- (int)_runShowHeadphonesPairingInstructions;	// IMP=0x00100000000b12a0
- (void)_runGuestiOSShareAudioProcessResponse:(id)arg1 error:(id)arg2;	// IMP=0x00100000000b0e5b
- (void)_runGuestiOSShareAudioSendRequest;	// IMP=0x00100000000b0ad9
- (int)_runGuestiOSShareAudio;	// IMP=0x00100000000b0a4a
- (int)_runGuestiOSPairSetupPublic;	// IMP=0x00100000000b07ad
- (int)_runGuestiOSConnect;	// IMP=0x00100000000b0129
- (int)_runConfirm;	// IMP=0x00100000000b0040
- (int)_runWaitForProxTrigger;	// IMP=0x00100000000b0028
- (int)_runAdvertiser;	// IMP=0x00100000000afd27
- (int)_runScannerNearbyInfo;	// IMP=0x00100000000af97a
- (int)_runScannerProxPairing;	// IMP=0x00100000000af5bf
- (int)_runInit;	// IMP=0x00100000000af3a9
- (void)_run;	// IMP=0x00100000000af1e1
- (void)_invalidate;	// IMP=0x00100000000af155
- (void)invalidate;	// IMP=0x00100000000af080
- (void)activate;	// IMP=0x00100000000aefb3
- (id)init;	// IMP=0x00100000000aef44

@end
