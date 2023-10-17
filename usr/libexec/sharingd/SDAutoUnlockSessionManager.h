//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, SDAutoUnlockIconTransferStore, SDAutoUnlockLocalDeviceController, SDAutoUnlockPeer, SDAutoUnlockSuggestionManager, SFAutoUnlockDevice, SFDeviceDiscovery;
@protocol OS_dispatch_queue, OS_dispatch_source, SDAutoUnlockTransportProtocol, SDKeyManaging, SDUnlockMagnetTransport;

@interface SDAutoUnlockSessionManager : NSObject
{
    _Bool _attemptInProgress;	// 8 = 0x8
    _Bool _watchUnlockEnabled;	// 9 = 0x9
    _Bool _previousNearbyState;	// 10 = 0xa
    _Bool _attemptPrewarmed;	// 11 = 0xb
    _Bool _extendedTimer;	// 12 = 0xc
    _Bool _notifiedForProxy;	// 13 = 0xd
    _Bool _proxyNotAvailableForUnlock;	// 14 = 0xe
    _Bool _presentedBluetoothError;	// 15 = 0xf
    _Bool _presentedWiFiError;	// 16 = 0x10
    _Bool _currentlyAdvertising;	// 17 = 0x11
    _Bool _previousConnectedState;	// 18 = 0x12
    _Bool _autoRelockAssertionTimerActive;	// 19 = 0x13
    _Bool _cachedDeviceWiFiState;	// 20 = 0x14
    _Bool _cachedWatchWiFiState;	// 21 = 0x15
    _Bool _wifiStateNeedsUpdating;	// 22 = 0x16
    _Bool _useBTPipe;	// 23 = 0x17
    _Bool _preventRadarNotification;	// 24 = 0x18
    _Bool _lastUnlockedByWatch;	// 25 = 0x19
    _Bool _lastLockedByRelock;	// 26 = 0x1a
    _Bool _doNotPostUnlockConfirmation;	// 27 = 0x1b
    _Bool _suppressAlert;	// 28 = 0x1c
    _Bool _needsArming;	// 29 = 0x1d
    _Bool _isBeingUsedForSiri;	// 30 = 0x1e
    _Bool _needsStrictMotionCheck;	// 31 = 0x1f
    int _proxyRSSI;	// 32 = 0x20
    int _screenDisplayChangedToken;	// 36 = 0x24
    NSString *_state;	// 40 = 0x28
    NSData *_attemptExternalACMContext;	// 48 = 0x30
    unsigned long long _stateHandle;	// 56 = 0x38
    NSDictionary *_awdlInfo;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_sessionManagerQueue;	// 72 = 0x48
    NSHashTable *_observerTable;	// 80 = 0x50
    SDAutoUnlockSuggestionManager *_suggestionManager;	// 88 = 0x58
    NSMutableDictionary *_lockAuthSessions;	// 96 = 0x60
    NSMutableArray *_canceledPairingKeySessions;	// 104 = 0x68
    NSMutableArray *_canceledAuthLockSessions;	// 112 = 0x70
    NSMutableDictionary *_keyAuthSessions;	// 120 = 0x78
    NSMutableDictionary *_lockPairingSessions;	// 128 = 0x80
    NSMutableDictionary *_keyPairingSessions;	// 136 = 0x88
    NSMutableDictionary *_proxySessions;	// 144 = 0x90
    NSMutableArray *_locksWithAKSTokens;	// 152 = 0x98
    NSMutableArray *_keysWithAKSTokens;	// 160 = 0xa0
    NSMutableDictionary *_keyRegistrationSessionsByDeviceID;	// 168 = 0xa8
    NSMutableDictionary *_lockRegistrationSessionsByDeviceID;	// 176 = 0xb0
    NSMutableSet *_serviceClients;	// 184 = 0xb8
    NSData *_previousMacAddressData;	// 192 = 0xc0
    NSObject<OS_dispatch_source> *_nearbyPushTimer;	// 200 = 0xc8
    NSDate *_prewarmStart;	// 208 = 0xd0
    NSDate *_attemptStart;	// 216 = 0xd8
    SFDeviceDiscovery *_scanner;	// 224 = 0xe0
    SFAutoUnlockDevice *_attemptDevice;	// 232 = 0xe8
    long long _attemptType;	// 240 = 0xf0
    NSString *_attemptBundlePath;	// 248 = 0xf8
    NSString *_attemptAppName;	// 256 = 0x100
    NSString *_attemptNavBarTitle;	// 264 = 0x108
    CDUnknownBlockType _attemptActivatedHandler;	// 272 = 0x110
    NSObject<OS_dispatch_source> *_scanTimer;	// 280 = 0x118
    double _proxyDiscoverTime;	// 288 = 0x120
    NSString *_scanErrorString;	// 296 = 0x128
    NSError *_authSessionError;	// 304 = 0x130
    long long _proxyErrorCode;	// 312 = 0x138
    NSString *_proxyDeviceModel;	// 320 = 0x140
    long long _lastProxyState;	// 328 = 0x148
    double _proxyConnectionTime;	// 336 = 0x150
    NSSet *_scanAutoUnlockDevices;	// 344 = 0x158
    NSSet *_scanWatchIDs;	// 352 = 0x160
    NSSet *_scanPhoneIDs;	// 360 = 0x168
    long long _attemptCount;	// 368 = 0x170
    NSString *_attemptID;	// 376 = 0x178
    NSString *_incrementedCountID;	// 384 = 0x180
    long long _connectedBluetoothDevices;	// 392 = 0x188
    long long _timeSinceLastMachineWake;	// 400 = 0x190
    long long _lastSleepType;	// 408 = 0x198
    NSSet *_eligibleDevices;	// 416 = 0x1a0
    long long _wifiErrorCount;	// 424 = 0x1a8
    long long _bluetoothErrorCount;	// 432 = 0x1b0
    long long _idsMacCountCache;	// 440 = 0x1b8
    NSDate *_advertisingChangedDate;	// 448 = 0x1c0
    NSDate *_wristStateChangedDate;	// 456 = 0x1c8
    NSDate *_lockStateChangedDate;	// 464 = 0x1d0
    NSDate *_nearbyDeviceChangedDate;	// 472 = 0x1d8
    NSDate *_pipeConnectionChangedDate;	// 480 = 0x1e0
    NSMutableDictionary *_cachedMetrics;	// 488 = 0x1e8
    NSMutableArray *_previousSessionIDs;	// 496 = 0x1f0
    SDAutoUnlockIconTransferStore *_iconTransferStore;	// 504 = 0x1f8
    SDAutoUnlockLocalDeviceController *_localDeviceController;	// 512 = 0x200
    NSObject<OS_dispatch_source> *_magnetLinkTimer;	// 520 = 0x208
    NSDate *_lastUnlockDate;	// 528 = 0x210
    long long _periocularStatus;	// 536 = 0x218
    id <SDAutoUnlockTransportProtocol> _autoUnlockTransport;	// 544 = 0x220
    id <SDUnlockMagnetTransport> _magnetTransport;	// 552 = 0x228
    id <SDKeyManaging> _keyManager;	// 560 = 0x230
    CDUnknownBlockType _isSignedIntoPrimaryiCloudAccount;	// 568 = 0x238
    CDUnknownBlockType _isFaceIDEnabled;	// 576 = 0x240
    CDUnknownBlockType _isWifiEnabled;	// 584 = 0x248
    CDUnknownBlockType _isBluetoothEnabled;	// 592 = 0x250
    CDUnknownBlockType _isActiveDeviceNearby;	// 600 = 0x258
    SDAutoUnlockPeer *_remotePeer;	// 608 = 0x260
}

+ (id)sharedManager;	// IMP=0x00200000000757ea
- (void).cxx_destruct;	// IMP=0x002000000008d4af
@property(retain, nonatomic) SDAutoUnlockPeer *remotePeer; // @synthesize remotePeer=_remotePeer;
@property(copy, nonatomic) CDUnknownBlockType isActiveDeviceNearby; // @synthesize isActiveDeviceNearby=_isActiveDeviceNearby;
@property(copy, nonatomic) CDUnknownBlockType isBluetoothEnabled; // @synthesize isBluetoothEnabled=_isBluetoothEnabled;
@property(copy, nonatomic) CDUnknownBlockType isWifiEnabled; // @synthesize isWifiEnabled=_isWifiEnabled;
@property(copy, nonatomic) CDUnknownBlockType isFaceIDEnabled; // @synthesize isFaceIDEnabled=_isFaceIDEnabled;
@property(copy, nonatomic) CDUnknownBlockType isSignedIntoPrimaryiCloudAccount; // @synthesize isSignedIntoPrimaryiCloudAccount=_isSignedIntoPrimaryiCloudAccount;
@property(readonly, nonatomic) __weak id <SDKeyManaging> keyManager; // @synthesize keyManager=_keyManager;
@property(readonly, nonatomic) __weak id <SDUnlockMagnetTransport> magnetTransport; // @synthesize magnetTransport=_magnetTransport;
@property(readonly, nonatomic) __weak id <SDAutoUnlockTransportProtocol> autoUnlockTransport; // @synthesize autoUnlockTransport=_autoUnlockTransport;
@property(nonatomic) _Bool needsStrictMotionCheck; // @synthesize needsStrictMotionCheck=_needsStrictMotionCheck;
@property(nonatomic) _Bool isBeingUsedForSiri; // @synthesize isBeingUsedForSiri=_isBeingUsedForSiri;
@property(nonatomic) _Bool needsArming; // @synthesize needsArming=_needsArming;
@property(nonatomic) int screenDisplayChangedToken; // @synthesize screenDisplayChangedToken=_screenDisplayChangedToken;
@property(nonatomic) long long periocularStatus; // @synthesize periocularStatus=_periocularStatus;
@property(nonatomic) _Bool suppressAlert; // @synthesize suppressAlert=_suppressAlert;
@property(nonatomic) _Bool doNotPostUnlockConfirmation; // @synthesize doNotPostUnlockConfirmation=_doNotPostUnlockConfirmation;
@property(nonatomic) _Bool lastLockedByRelock; // @synthesize lastLockedByRelock=_lastLockedByRelock;
@property(nonatomic) _Bool lastUnlockedByWatch; // @synthesize lastUnlockedByWatch=_lastUnlockedByWatch;
@property(retain, nonatomic) NSDate *lastUnlockDate; // @synthesize lastUnlockDate=_lastUnlockDate;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *magnetLinkTimer; // @synthesize magnetLinkTimer=_magnetLinkTimer;
@property(retain, nonatomic) SDAutoUnlockLocalDeviceController *localDeviceController; // @synthesize localDeviceController=_localDeviceController;
@property(retain, nonatomic) SDAutoUnlockIconTransferStore *iconTransferStore; // @synthesize iconTransferStore=_iconTransferStore;
@property(retain, nonatomic) NSMutableArray *previousSessionIDs; // @synthesize previousSessionIDs=_previousSessionIDs;
@property(retain, nonatomic) NSMutableDictionary *cachedMetrics; // @synthesize cachedMetrics=_cachedMetrics;
@property(nonatomic) _Bool preventRadarNotification; // @synthesize preventRadarNotification=_preventRadarNotification;
@property(nonatomic) _Bool useBTPipe; // @synthesize useBTPipe=_useBTPipe;
@property(nonatomic) _Bool wifiStateNeedsUpdating; // @synthesize wifiStateNeedsUpdating=_wifiStateNeedsUpdating;
@property(nonatomic) _Bool cachedWatchWiFiState; // @synthesize cachedWatchWiFiState=_cachedWatchWiFiState;
@property(nonatomic) _Bool cachedDeviceWiFiState; // @synthesize cachedDeviceWiFiState=_cachedDeviceWiFiState;
@property(nonatomic) _Bool autoRelockAssertionTimerActive; // @synthesize autoRelockAssertionTimerActive=_autoRelockAssertionTimerActive;
@property(nonatomic) _Bool previousConnectedState; // @synthesize previousConnectedState=_previousConnectedState;
@property(retain, nonatomic) NSDate *pipeConnectionChangedDate; // @synthesize pipeConnectionChangedDate=_pipeConnectionChangedDate;
@property(retain, nonatomic) NSDate *nearbyDeviceChangedDate; // @synthesize nearbyDeviceChangedDate=_nearbyDeviceChangedDate;
@property(retain, nonatomic) NSDate *lockStateChangedDate; // @synthesize lockStateChangedDate=_lockStateChangedDate;
@property(retain, nonatomic) NSDate *wristStateChangedDate; // @synthesize wristStateChangedDate=_wristStateChangedDate;
@property(retain, nonatomic) NSDate *advertisingChangedDate; // @synthesize advertisingChangedDate=_advertisingChangedDate;
@property(nonatomic) long long idsMacCountCache; // @synthesize idsMacCountCache=_idsMacCountCache;
@property(nonatomic) _Bool currentlyAdvertising; // @synthesize currentlyAdvertising=_currentlyAdvertising;
@property(nonatomic) _Bool presentedWiFiError; // @synthesize presentedWiFiError=_presentedWiFiError;
@property(nonatomic) _Bool presentedBluetoothError; // @synthesize presentedBluetoothError=_presentedBluetoothError;
@property(nonatomic) long long bluetoothErrorCount; // @synthesize bluetoothErrorCount=_bluetoothErrorCount;
@property(nonatomic) long long wifiErrorCount; // @synthesize wifiErrorCount=_wifiErrorCount;
@property(retain, nonatomic) NSSet *eligibleDevices; // @synthesize eligibleDevices=_eligibleDevices;
@property(nonatomic) long long lastSleepType; // @synthesize lastSleepType=_lastSleepType;
@property(nonatomic) long long timeSinceLastMachineWake; // @synthesize timeSinceLastMachineWake=_timeSinceLastMachineWake;
@property(nonatomic) long long connectedBluetoothDevices; // @synthesize connectedBluetoothDevices=_connectedBluetoothDevices;
@property(retain, nonatomic) NSString *incrementedCountID; // @synthesize incrementedCountID=_incrementedCountID;
@property(retain, nonatomic) NSString *attemptID; // @synthesize attemptID=_attemptID;
@property(nonatomic) long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(retain, nonatomic) NSSet *scanPhoneIDs; // @synthesize scanPhoneIDs=_scanPhoneIDs;
@property(retain, nonatomic) NSSet *scanWatchIDs; // @synthesize scanWatchIDs=_scanWatchIDs;
@property(retain, nonatomic) NSSet *scanAutoUnlockDevices; // @synthesize scanAutoUnlockDevices=_scanAutoUnlockDevices;
@property(nonatomic) _Bool proxyNotAvailableForUnlock; // @synthesize proxyNotAvailableForUnlock=_proxyNotAvailableForUnlock;
@property(nonatomic) double proxyConnectionTime; // @synthesize proxyConnectionTime=_proxyConnectionTime;
@property(nonatomic) long long lastProxyState; // @synthesize lastProxyState=_lastProxyState;
@property(nonatomic) int proxyRSSI; // @synthesize proxyRSSI=_proxyRSSI;
// Error: Property attributes should begin with the type ('T') attribute, property name: proxyDeviceModel
// Property attributes: (null)

@property(nonatomic) long long proxyErrorCode; // @synthesize proxyErrorCode=_proxyErrorCode;
@property(retain, nonatomic) NSError *authSessionError; // @synthesize authSessionError=_authSessionError;
@property(retain, nonatomic) NSString *scanErrorString; // @synthesize scanErrorString=_scanErrorString;
@property(nonatomic) _Bool notifiedForProxy; // @synthesize notifiedForProxy=_notifiedForProxy;
@property(nonatomic) double proxyDiscoverTime; // @synthesize proxyDiscoverTime=_proxyDiscoverTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *scanTimer; // @synthesize scanTimer=_scanTimer;
@property(copy, nonatomic) CDUnknownBlockType attemptActivatedHandler; // @synthesize attemptActivatedHandler=_attemptActivatedHandler;
@property(retain, nonatomic) NSString *attemptNavBarTitle; // @synthesize attemptNavBarTitle=_attemptNavBarTitle;
@property(retain, nonatomic) NSString *attemptAppName; // @synthesize attemptAppName=_attemptAppName;
@property(retain, nonatomic) NSString *attemptBundlePath; // @synthesize attemptBundlePath=_attemptBundlePath;
@property(nonatomic) long long attemptType; // @synthesize attemptType=_attemptType;
@property(retain, nonatomic) SFAutoUnlockDevice *attemptDevice; // @synthesize attemptDevice=_attemptDevice;
@property(retain, nonatomic) SFDeviceDiscovery *scanner; // @synthesize scanner=_scanner;
@property(nonatomic) _Bool extendedTimer; // @synthesize extendedTimer=_extendedTimer;
@property(retain, nonatomic) NSDate *attemptStart; // @synthesize attemptStart=_attemptStart;
@property(retain, nonatomic) NSDate *prewarmStart; // @synthesize prewarmStart=_prewarmStart;
@property(nonatomic) _Bool attemptPrewarmed; // @synthesize attemptPrewarmed=_attemptPrewarmed;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *nearbyPushTimer; // @synthesize nearbyPushTimer=_nearbyPushTimer;
@property(nonatomic) _Bool previousNearbyState; // @synthesize previousNearbyState=_previousNearbyState;
@property(retain, nonatomic) NSData *previousMacAddressData; // @synthesize previousMacAddressData=_previousMacAddressData;
@property(nonatomic) _Bool watchUnlockEnabled; // @synthesize watchUnlockEnabled=_watchUnlockEnabled;
@property(retain, nonatomic) NSMutableSet *serviceClients; // @synthesize serviceClients=_serviceClients;
@property(retain, nonatomic) NSMutableDictionary *lockRegistrationSessionsByDeviceID; // @synthesize lockRegistrationSessionsByDeviceID=_lockRegistrationSessionsByDeviceID;
@property(retain, nonatomic) NSMutableDictionary *keyRegistrationSessionsByDeviceID; // @synthesize keyRegistrationSessionsByDeviceID=_keyRegistrationSessionsByDeviceID;
@property(retain, nonatomic) NSMutableArray *keysWithAKSTokens; // @synthesize keysWithAKSTokens=_keysWithAKSTokens;
@property(retain, nonatomic) NSMutableArray *locksWithAKSTokens; // @synthesize locksWithAKSTokens=_locksWithAKSTokens;
@property(retain, nonatomic) NSMutableDictionary *proxySessions; // @synthesize proxySessions=_proxySessions;
@property(retain, nonatomic) NSMutableDictionary *keyPairingSessions; // @synthesize keyPairingSessions=_keyPairingSessions;
@property(retain, nonatomic) NSMutableDictionary *lockPairingSessions; // @synthesize lockPairingSessions=_lockPairingSessions;
@property(retain, nonatomic) NSMutableDictionary *keyAuthSessions; // @synthesize keyAuthSessions=_keyAuthSessions;
@property(retain, nonatomic) NSMutableArray *canceledAuthLockSessions; // @synthesize canceledAuthLockSessions=_canceledAuthLockSessions;
@property(retain, nonatomic) NSMutableArray *canceledPairingKeySessions; // @synthesize canceledPairingKeySessions=_canceledPairingKeySessions;
@property(retain, nonatomic) NSMutableDictionary *lockAuthSessions; // @synthesize lockAuthSessions=_lockAuthSessions;
@property(retain, nonatomic) SDAutoUnlockSuggestionManager *suggestionManager; // @synthesize suggestionManager=_suggestionManager;
@property(retain, nonatomic) NSHashTable *observerTable; // @synthesize observerTable=_observerTable;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionManagerQueue; // @synthesize sessionManagerQueue=_sessionManagerQueue;
@property(copy, nonatomic) NSDictionary *awdlInfo; // @synthesize awdlInfo=_awdlInfo;
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) NSData *attemptExternalACMContext; // @synthesize attemptExternalACMContext=_attemptExternalACMContext;
@property(nonatomic) _Bool attemptInProgress; // @synthesize attemptInProgress=_attemptInProgress;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
- (void)loadPreviousSessionIDs;	// IMP=0x001000000008c958
- (_Bool)previousSessionExists:(id)arg1;	// IMP=0x001000000008c8b6
- (void)storePreviousSessionID:(id)arg1;	// IMP=0x001000000008c6fc
- (struct os_state_data_s *)dumpState;	// IMP=0x001000000008bdbb
- (void)initializeCaptureBlock;	// IMP=0x001000000008bd1c
- (void)generateStateDump;	// IMP=0x001000000008bcdb
- (void)savePresentedWiFiError;	// IMP=0x001000000008bc67
- (void)savePresentedBluetoothError;	// IMP=0x001000000008bbf3
- (void)loadPresentedWiFiError;	// IMP=0x001000000008bb8c
- (void)loadPresentedBluetoothError;	// IMP=0x001000000008bb25
- (_Bool)shouldShowErrorForWiFiEnabled:(_Bool)arg1;	// IMP=0x001000000008b9b0
- (_Bool)shouldShowErrorForBluetoothEnabled:(_Bool)arg1;	// IMP=0x001000000008b83b
- (long long)errorCodeForBluetoothEnabled:(_Bool)arg1 wifiEnabled:(_Bool)arg2 faceIDEnabled:(_Bool)arg3;	// IMP=0x001000000008b80a
- (id)errorStringForBluetoothEnabled:(_Bool)arg1 wifiEnabled:(_Bool)arg2 faceIDEnabled:(_Bool)arg3;	// IMP=0x001000000008b797
- (void)handleWiFiPowerChanged:(id)arg1;	// IMP=0x001000000008b698
- (void)handleBluetoothPowerChanged:(id)arg1;	// IMP=0x001000000008b581
- (id)baseResultsDictionaryForError:(id)arg1;	// IMP=0x001000000008b33e
- (void)createRadarForError:(id)arg1 devices:(id)arg2 rangingResults:(id)arg3;	// IMP=0x001000000008b338
- (void)cancelMagnetLinkTimer;	// IMP=0x001000000008b0f2
- (void)btPipeConnectionChanged:(id)arg1;	// IMP=0x001000000008ad3a
- (void)setUpMagnetLinkTimer;	// IMP=0x001000000008a94d
- (_Bool)deviceCurrentlyUnlockedByWatch;	// IMP=0x001000000008a8dd
- (void)releaseLanguageAssertionForAutoRelock;	// IMP=0x001000000008a838
- (void)grabLanguageAssertionForAutoRelock;	// IMP=0x001000000008a6dc
- (void)handleAuthenticationSessionStarted;	// IMP=0x001000000008a512
- (void)handlePairedDeviceLockStateChanged;	// IMP=0x001000000008a50c
- (void)handleBioLockout;	// IMP=0x001000000008a2b7
- (void)beginKeyRegistrationIfNecessary;	// IMP=0x0010000000089fcb
- (void)handleDisplayStateChanged:(unsigned long long)arg1;	// IMP=0x0010000000089f0f
- (void)handleNearbyStateChanged;	// IMP=0x0010000000089efd
- (void)pipeConnectionChanged:(id)arg1;	// IMP=0x0010000000089e35
- (id)unlockedOnWristDate;	// IMP=0x0010000000089e2d
- (void)wristStateChanged:(id)arg1;	// IMP=0x0010000000089e27
- (void)handleLockStateChanged;	// IMP=0x0010000000089a7f
- (void)handleUnexpectedDisablement:(id)arg1;	// IMP=0x0010000000089950
- (_Bool)shouldNotify;	// IMP=0x00100000000896b3
- (void)upsellPhoneAutoUnlock;	// IMP=0x0010000000088cfb
- (id)getUpsellNotificationBodyTextForEvent:(id)arg1;	// IMP=0x0010000000088b0f
- (void)upsellBehaviorChangedAfterUpgradeIfNecessary;	// IMP=0x00100000000887bc
- (_Bool)behaviorChangedAfterUpgrade;	// IMP=0x001000000008862b
- (void)clearPhoneAutoUnlockNotification:(_Bool)arg1;	// IMP=0x0010000000088532
- (void)screenLockUnlocked:(id)arg1;	// IMP=0x001000000008852c
- (void)onqueue_keyBagLockStateChange:(id)arg1;	// IMP=0x00100000000883a3
- (void)keyBagLockStateChange:(id)arg1;	// IMP=0x00100000000882d5
- (void)handleRelockMessage;	// IMP=0x0010000000088206
- (void)handleBLEDataReceivedNotification:(id)arg1;	// IMP=0x0010000000087719
- (void)removeServiceClientForIdentifier:(id)arg1;	// IMP=0x001000000008769a
- (void)addServiceClientForIdentifier:(id)arg1;	// IMP=0x001000000008761b
- (long long)idsMacCount;	// IMP=0x0010000000087570
- (_Bool)watchLockedAndOnWrist;	// IMP=0x0010000000087568
- (_Bool)advertisingEnabled;	// IMP=0x0010000000087560
- (void)updateAdvertising;	// IMP=0x0010000000087277
- (_Bool)watchLockedOnWristForPeer:(id)arg1;	// IMP=0x001000000008724a
- (_Bool)proxyAdvertisementForPeer:(id)arg1;	// IMP=0x001000000008721d
- (_Bool)unlockEnabledForPeer:(id)arg1;	// IMP=0x00100000000871f0
- (void)handleScanTimerFired;	// IMP=0x0010000000086bc1
- (void)handleBLEScanTimerFired;	// IMP=0x0010000000086b6a
- (void)invalidateScanTimer;	// IMP=0x0010000000086a94
- (void)restartScanTimer:(unsigned long long)arg1;	// IMP=0x001000000008685b
- (void)handleFoundPeer:(id)arg1;	// IMP=0x0010000000086337
- (void)invalidateScanner;	// IMP=0x00100000000861c2
- (void)startScannerWithWatchBluetoothIDs:(id)arg1 phoneBluetoothIDs:(id)arg2;	// IMP=0x0010000000085753
- (void)idsController:(id)arg1 didReceiveProtoData:(id)arg2 forType:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x0010000000085226
- (void)transport:(id)arg1 didReceiveKeyOriginatingRegistrationRequestWithSessionID:(id)arg2 deviceID:(id)arg3 requestData:(id)arg4;	// IMP=0x001000000008509d
- (void)transport:(id)arg1 didReceiveRegistrationRequestWithSessionID:(id)arg2 deviceID:(id)arg3 requestData:(id)arg4;	// IMP=0x0010000000084f49
- (void)transport:(id)arg1 didReceivePairingRequestWithSessionID:(id)arg2 deviceID:(id)arg3 requestData:(id)arg4;	// IMP=0x0010000000084e1c
- (void)transportDidChangeNearbyState:(id)arg1;	// IMP=0x0010000000084cd3
- (void)transportDidChangeDevices:(id)arg1;	// IMP=0x0010000000084bc1
- (void)performRegistrationIfNecessaryForLockSession:(id)arg1 error:(id)arg2;	// IMP=0x00100000000849ce
- (_Bool)isDisplayOff;	// IMP=0x0010000000084984
- (void)sessionDidSendInitialData:(id)arg1;	// IMP=0x001000000008497e
- (void)sessionDidReceiveKeyDeviceLocked:(id)arg1;	// IMP=0x00100000000848c0
- (void)handleProxyConnectionStartedForSession:(id)arg1;	// IMP=0x00100000000844b4
- (void)handleLockConnectionStartedForSession:(id)arg1;	// IMP=0x0010000000083b3d
- (void)sessionDidStartConnection:(id)arg1;	// IMP=0x0010000000083ac8
- (void)handleProxySessionCompleted:(id)arg1 error:(id)arg2;	// IMP=0x001000000008381d
- (void)handleLockSessionCompleted:(id)arg1 error:(id)arg2;	// IMP=0x0010000000082c2d
- (void)session:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0010000000081c32
- (void)cancelParallelRegistrationSessionsForDeviceID:(id)arg1 newSessionID:(id)arg2;	// IMP=0x0010000000081a1e
- (void)registerRemotePeerIfNecessary;	// IMP=0x0010000000081604
- (void)initializeRemotePeer;	// IMP=0x00100000000813fb
- (void)armDevicesWaitingForUnlock;	// IMP=0x0010000000081337
- (void)createRegistrationLockSessionWithDeviceID:(id)arg1 sessionID:(id)arg2 requestData:(id)arg3;	// IMP=0x0010000000081092
- (void)createRegistrationKeySessionWithIdentifier:(id)arg1 deviceID:(id)arg2 requestData:(id)arg3 locallyGenerated:(_Bool)arg4;	// IMP=0x0010000000080dfd
- (void)invalidateExistingSessionsForBLEDevice:(id)arg1 incomingSessionID:(id)arg2;	// IMP=0x0010000000080985
- (void)cancelAllLockSessionsForScanTimeout;	// IMP=0x00100000000807f1
- (void)clearAllKeysWithTokens;	// IMP=0x001000000008074d
- (void)cleanUpProxySessions;	// IMP=0x001000000008054f
- (void)updateStringForProxySession;	// IMP=0x00100000000802cf
- (void)createProxySessionWithDeviceID:(id)arg1;	// IMP=0x0010000000080012
- (void)createKeySessionWithBLEDevice:(id)arg1 sessionID:(id)arg2 wrapper:(id)arg3 useEncryption:(_Bool)arg4;	// IMP=0x001000000007fbfb
- (void)createLockSessionWithWatchDevice:(id)arg1;	// IMP=0x001000000007f515
- (void)createPairingKeySessionWithIdentifier:(id)arg1 deviceID:(id)arg2 requestData:(id)arg3;	// IMP=0x001000000007f29d
- (void)createPairingLockSessionWithDevice:(id)arg1 passcode:(id)arg2;	// IMP=0x001000000007ee62
- (void)disableKeyPairingForDeviceID:(id)arg1;	// IMP=0x001000000007ecc2
- (void)handleDisableMessageForLock:(id)arg1 fromDeviceID:(id)arg2;	// IMP=0x001000000007eae6
- (void)handleDisableMessageForKey:(id)arg1 fromDeviceID:(id)arg2;	// IMP=0x001000000007e6c4
- (void)transport:(id)arg1 didReceiveDisableMessage:(id)arg2 fromDeviceID:(id)arg3;	// IMP=0x001000000007e421
- (void)sendDisableMessageToDeviceID:(id)arg1 pairingID:(id)arg2;	// IMP=0x001000000007e196
- (_Bool)disablePairingForDeviceID:(id)arg1 pairingID:(id)arg2;	// IMP=0x001000000007e071
- (void)authPromptInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007dfe0
- (id)stringForState:(long long)arg1;	// IMP=0x001000000007dfc1
- (void)autoUnlockStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007de06
- (void)requestRelock;	// IMP=0x001000000007dc99
- (void)generateAppIconImageWithOptions:(unsigned int)arg1;	// IMP=0x001000000007dc93
- (void)decrementAttemptCount;	// IMP=0x001000000007dbf8
- (void)incrementAttemptCount;	// IMP=0x001000000007da4f
- (void)logUnintentionalAutoUnlockAttempt:(unsigned long long)arg1;	// IMP=0x001000000007d80b
- (void)cancelAttemptsForDeviceUnlocked;	// IMP=0x001000000007d61a
- (void)cancelAutoUnlockWithCancelReason:(long long)arg1 usingTool:(_Bool)arg2;	// IMP=0x001000000007cb76
- (void)cancelAutoUnlock;	// IMP=0x001000000007cb5b
- (void)completeSuccessfulAttempt;	// IMP=0x001000000007cb28
- (void)invalidateAttempt;	// IMP=0x001000000007c829
- (void)donateDeviceUnlockedWithMask:(_Bool)arg1;	// IMP=0x001000000007c769
- (void)completeAutoUnlockWithNotification:(_Bool)arg1;	// IMP=0x001000000007bfc1
- (void)attemptAutoUnlockWithoutNotifyingWatch;	// IMP=0x001000000007bf32
- (void)attemptAutoUnlockForSiri;	// IMP=0x001000000007bea3
- (void)prewarmAutoUnlock;	// IMP=0x001000000007bd89
- (void)attemptAutoUnlock;	// IMP=0x001000000007a4f4
- (void)failedAttemptBeforeStarting:(id)arg1 metricErrorString:(id)arg2;	// IMP=0x001000000007a1c4
- (void)dropEscrowRecordsIfNecessary;	// IMP=0x001000000007a1be
- (void)generateAttemptForType:(long long)arg1;	// IMP=0x00100000000799ed
- (void)attemptAutoUnlockForType:(long long)arg1 externalACMContext:(id)arg2 preventRadarNotification:(_Bool)arg3 bundlePath:(id)arg4 appName:(id)arg5 navBarTitle:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x001000000007974d
- (void)attemptAutoUnlockForType:(long long)arg1 preventRadarNotification:(_Bool)arg2;	// IMP=0x001000000007971a
- (void)attemptAutoUnlockForType:(long long)arg1;	// IMP=0x0010000000079703
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000079481
- (void)disableAutoUnlockForAllDevices;	// IMP=0x00100000000792da
- (void)cancelEnablingAutoUnlockForDeviceID:(id)arg1;	// IMP=0x001000000007910f
- (void)cancelEnablingAutoUnlockForDevice:(id)arg1;	// IMP=0x001000000007900d
- (void)cancelEnablingAllDevices;	// IMP=0x0010000000078ddf
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2;	// IMP=0x0010000000078a4d
- (void)eligibleDevicesRequestFromBundleID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000078559
- (_Bool)phoneAutoUnlockSupportedByDevice:(id)arg1;	// IMP=0x001000000007846d
- (void)eligibleDevicesFilterCompatibleDevices:(id)arg1;	// IMP=0x0010000000078201
- (void)repairCloudPairing;	// IMP=0x0010000000078125
- (void)notifyObserversOfUnlockFailureWithResults:(id)arg1 error:(id)arg2;	// IMP=0x0010000000077dd2
- (void)notifyObserversOfUnlockCompletionWithDevice:(id)arg1;	// IMP=0x0010000000077b07
- (void)notifyObserverOfAttemptBeganWithDevice:(id)arg1;	// IMP=0x001000000007785b
- (void)notifyObserverOfFailedToEnableDevice:(id)arg1 error:(id)arg2;	// IMP=0x001000000007757c
- (void)notifyObserverOfEnabledDevice:(id)arg1;	// IMP=0x00100000000772d0
- (void)notifyObserverOfKeyDeviceLockWithDevice:(id)arg1;	// IMP=0x0010000000077024
- (void)unregisterObserver:(id)arg1;	// IMP=0x0010000000076e9e
- (void)registerObserver:(id)arg1;	// IMP=0x0010000000076d18
- (void)addNotificationsObservers;	// IMP=0x001000000007688f
- (void)initializeAttemptState;	// IMP=0x001000000007648c
- (void)onqueue_start;	// IMP=0x0010000000075f92
- (void)start;	// IMP=0x0010000000075f0b
- (id)initWithTransport:(id)arg1 magnetTransport:(id)arg2 keyManager:(id)arg3;	// IMP=0x00100000000758ef
- (id)init;	// IMP=0x001000000007583f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
