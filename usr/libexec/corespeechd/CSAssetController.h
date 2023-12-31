//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CSAssetController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_assetsMigrationQueue;	// 16 = 0x10
    NSDictionary *_csAssetsDictionary;	// 24 = 0x18
    NSMutableDictionary *_observers;	// 32 = 0x20
}

+ (id)getAssetTypeStringForType:(unsigned long long)arg1;	// IMP=0x001000000006208d
+ (id)sharedController;	// IMP=0x0010000000062038
+ (unsigned long long)getSpeakerRecognitionCurrentCompatibilityVersion;	// IMP=0x0010000000066cae
+ (id)getSpeakerRecognitionAssetTypeString;	// IMP=0x0010000000066ca1
+ (unsigned long long)getAdBlockerCurrentCompatibilityVersion;	// IMP=0x0010000000066c96
+ (id)getAdBlockerAssetTypeString;	// IMP=0x0010000000066c89
+ (unsigned long long)getLanguageDetectorCurrentCompatibilityVersion;	// IMP=0x0010000000066c7e
+ (id)getLanguageDetectorAssetTypeString;	// IMP=0x0010000000066c71
+ (unsigned long long)getEndpointAssetCurrentCompatibilityVersion;	// IMP=0x0010000000066c39
+ (id)getEndpointAssetTypeString;	// IMP=0x0010000000066c06
+ (unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;	// IMP=0x0010000000066bed
+ (id)getVoiceTriggerAssetTypeString;	// IMP=0x0010000000066bd4
+ (void)addKeyValuePairForQuery:(id *)arg1 assetType:(unsigned long long)arg2;	// IMP=0x0010000000066a39
+ (id)filteredAssetsForAssets:(id)arg1 assetType:(unsigned long long)arg2 language:(id)arg3;	// IMP=0x00100000000666c6
+ (id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)arg1 assetType:(unsigned long long)arg2;	// IMP=0x00100000000666a3
- (void).cxx_destruct;	// IMP=0x0020000000066665
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSDictionary *csAssetsDictionary; // @synthesize csAssetsDictionary=_csAssetsDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetsMigrationQueue; // @synthesize assetsMigrationQueue=_assetsMigrationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;	// IMP=0x00100000000665f3
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x001000000006642c
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x00100000000661e9
- (void)_startDownloadingAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065d48
- (void)_downloadAsset:(id)arg1 withComplete:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065a48
- (id)_defaultDownloadOptions;	// IMP=0x00100000000659f2
- (void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000064ffc
- (_Bool)_isRetryRecommendedWithResult:(long long)arg1;	// IMP=0x0010000000064fcf
- (void)_downloadAssetCatalogForAssetType:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0010000000064d72
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 query:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000649ca
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000648aa
- (void)fetchRemoteMetaOfType:(unsigned long long)arg1 allowRetry:(_Bool)arg2;	// IMP=0x00100000000645d8
- (void)fetchRemoteMetaOfType:(unsigned long long)arg1;	// IMP=0x00100000000645c1
- (_Bool)_isReadyToUse;	// IMP=0x0010000000064576
- (void)_runAssetQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000064238
- (id)_assetQueryForAssetType:(unsigned long long)arg1;	// IMP=0x00100000000640dc
- (id)_findLatestInstalledAsset:(id)arg1;	// IMP=0x0010000000063e18
- (void)_installedAssetOfType:(unsigned long long)arg1 query:(id)arg2 withLanguage:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000063a81
- (void)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000639ed
- (id)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;	// IMP=0x0010000000063740
- (void)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000634f6
- (id)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;	// IMP=0x0010000000063334
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000063211
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x0010000000063177
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 compatibilityVersion:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000062d6f
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062bc3
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x001000000006271d
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x00100000000625e8
- (void)_cleanUpMobileAssetV1Directory;	// IMP=0x00100000000624ab
- (id)init;	// IMP=0x0010000000062134

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

