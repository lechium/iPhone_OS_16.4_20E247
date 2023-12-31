//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CloudArtworkImporter, NSString;

@interface SubscriptionRequestHandler
{
    CloudArtworkImporter *_artworkImporter;	// 8 = 0x8
}

+ (id)handlers;	// IMP=0x00200000000e770b
- (void).cxx_destruct;	// IMP=0x00200000000e6c17
@property(readonly, nonatomic) CloudArtworkImporter *artworkImporter; // @synthesize artworkImporter=_artworkImporter;
- (void)_removeAllSubscriptionContentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e686a
- (void)_importAllItemArtworkWithClientIdentity:(id)arg1;	// IMP=0x00100000000e6736
- (void)_loadArtworkInfoForSubscriptionPersistentIDs:(id)arg1 artworkType:(long long)arg2 entityType:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000e5ea4
- (void)environmentMonitorDidChangePower:(id)arg1;	// IMP=0x00100000000e5d07
- (void)handleMusicAppRemovedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e5c79
- (void)loadMissingArtworkWithClientIdentity:(id)arg1;	// IMP=0x00100000000e5c67
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e5c3d
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e5c10
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e5be6
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1;	// IMP=0x00100000000e5b95
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1;	// IMP=0x00100000000e5b44
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1;	// IMP=0x00100000000e5af3
- (void)importContainerArtworkForPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e57bd
- (void)importScreenshotForPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e542c
- (void)importItemArtworkForPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e509b
- (void)becomeInactiveWithDeauthentication:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e4eca
- (void)becomeActive;	// IMP=0x00100000000e4eb3
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000e4ddc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

