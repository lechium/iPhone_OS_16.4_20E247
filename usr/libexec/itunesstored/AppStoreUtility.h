//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface AppStoreUtility : NSObject
{
}

+ (void)_sendSoftwareManifest:(id)arg1 withReason:(id)arg2;	// IMP=0x00400000001d9553
+ (id)_newRequestWithManifest:(id)arg1;	// IMP=0x00100000001d94be
+ (id)_newManifestWithManifestType:(long long)arg1;	// IMP=0x00100000001d9483
+ (void)_checkClaimsForAccountID:(id)arg1 claimStyle:(long long)arg2 clientAuditTokenData:(id)arg3 establishActiveAccounts:(_Bool)arg4 ignoresPreviousClaimAttempts:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00100000001d8ef2
+ (void)_addDownloads:(id)arg1 toManifest:(id)arg2 forClientID:(id)arg3;	// IMP=0x00100000001d8bea
+ (void)sendAppStoreSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00100000001d89c4
+ (void)sendActivitySubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00100000001d879e
+ (void)sendNewsSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00100000001d857b
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 forClientID:(id)arg3 manifestType:(long long)arg4;	// IMP=0x00100000001d82ee
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 forClientID:(id)arg3;	// IMP=0x00100000001d82d9
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 manifestType:(long long)arg3;	// IMP=0x00100000001d82bd
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2;	// IMP=0x00100000001d82a1
+ (void)sendClusterMappings:(id)arg1;	// IMP=0x00100000001d79b1
+ (void)restoreDemotedAppsWithBundleIDs:(id)arg1;	// IMP=0x00100000001d74f3
+ (void)repairAppWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d7135
+ (void)reloadUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d6ed1
+ (void)postBulletinWithTitle:(id)arg1 message:(id)arg2 destinations:(unsigned long long)arg3 actionButtonTitle:(id)arg4 actionButtonURL:(id)arg5 launchURL:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00100000001d6b7d
+ (void)installManagedAppWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d67ef
+ (MISSING_TYPE *)hidePendingUpdatesBadge;	// IMP=0x00100000001d6607
+ (void)claimAppsWithPurchase:(id)arg1;	// IMP=0x00100000001d5fd5
+ (void)checkFirstPartyClaimsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d5fae
+ (void)checkFirstPartyClaimsWithAuditTokenData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d5f87
+ (void)checkDownloadQueue;	// IMP=0x00100000001d5b3a
+ (void)checkClaimsEstablishingActiveAccounts:(_Bool)arg1 ignoringPreviousClaimAttempts:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d5b0d

@end

