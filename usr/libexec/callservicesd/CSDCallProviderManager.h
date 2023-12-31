//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDDeviceLockStateObserver, CSDUserIntentManager, NSDictionary, NSMapTable, NSMutableDictionary, NSString;
@protocol CSDCallProviderManagerDataSource, OS_dispatch_queue, TUFeatureFlags;

@interface CSDCallProviderManager : NSObject
{
    CSDUserIntentManager *_userIntentManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSDCallProviderManagerDataSource> _dataSource;	// 24 = 0x18
    NSMutableDictionary *_localProvidersByIdentifier;	// 32 = 0x20
    NSMutableDictionary *_pairedHostDeviceProvidersByIdentifier;	// 40 = 0x28
    NSDictionary *_providersByIdentifier;	// 48 = 0x30
    NSMapTable *_delegateToQueue;	// 56 = 0x38
    CSDDeviceLockStateObserver *_lockStateObserver;	// 64 = 0x40
    id <TUFeatureFlags> _featureFlags;	// 72 = 0x48
}

+ (id)_providersByIdentifierByFilteringForRemoteClientsFromProvidersByIdentifier:(id)arg1;	// IMP=0x002000000017c672
- (void).cxx_destruct;	// IMP=0x002000000017efb1
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) CSDDeviceLockStateObserver *lockStateObserver; // @synthesize lockStateObserver=_lockStateObserver;
@property(retain, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(copy, nonatomic) NSDictionary *providersByIdentifier; // @synthesize providersByIdentifier=_providersByIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *pairedHostDeviceProvidersByIdentifier; // @synthesize pairedHostDeviceProvidersByIdentifier=_pairedHostDeviceProvidersByIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *localProvidersByIdentifier; // @synthesize localProvidersByIdentifier=_localProvidersByIdentifier;
@property(readonly, nonatomic) id <CSDCallProviderManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CSDUserIntentManager *userIntentManager; // @synthesize userIntentManager=_userIntentManager;
- (void)installedProvidersChangedForDataSource:(id)arg1;	// IMP=0x001000000017eedf
- (void)relayCallingStateChangedForDataSource:(id)arg1;	// IMP=0x001000000017ee87
- (_Bool)appShouldUseDeprecatedCallingIntents:(id)arg1;	// IMP=0x001000000017ea6e
- (void)launchAppForDialRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000017e015
- (_Bool)validateUserIntentForCallSource:(id)arg1;	// IMP=0x001000000017deb1
- (void)donateUserIntentForProviderWithIdentifier:(id)arg1;	// IMP=0x001000000017dde2
- (void)registerPairedHostDeviceProviders:(id)arg1;	// IMP=0x001000000017d913
- (void)registerLocalProvider:(id)arg1;	// IMP=0x001000000017d120
- (id)pairedHostDeviceProvidersByIdentifierForRemoteClients:(_Bool)arg1;	// IMP=0x001000000017cf6b
- (id)localProvidersByIdentifierForRemoteClients:(_Bool)arg1;	// IMP=0x001000000017cdb6
- (id)providersByIdentifierForRemoteClients:(_Bool)arg1;	// IMP=0x001000000017cbdc
- (void)removeDelegate:(id)arg1;	// IMP=0x001000000017cad9
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x001000000017c9a8
- (void)_donateUserIntentForProviderWithIdentifier:(id)arg1;	// IMP=0x001000000017c897
- (id)uniqueRingtoneSoundLinkFilenameWithOriginalFilename:(id)arg1;	// IMP=0x001000000017c5ba
- (void)_unregisterUninstalledProvidersAndNotify:(_Bool)arg1;	// IMP=0x001000000017c0d7
- (void)_updateProvidersByIdentifierAndNotify:(_Bool)arg1;	// IMP=0x001000000017bd29
- (void)retrieveSavedProvidersByIdentifier;	// IMP=0x001000000017b884
- (id)initWithDataSource:(id)arg1 serialQueue:(id)arg2 featureFlags:(id)arg3;	// IMP=0x001000000017b216
- (id)initWithDataSource:(id)arg1 serialQueue:(id)arg2;	// IMP=0x001000000017b192
- (id)init;	// IMP=0x001000000017b118

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

