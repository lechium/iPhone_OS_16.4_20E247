//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface OctaneManager : NSObject
{
    long long _cachedPort;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (id)testAccountID;	// IMP=0x0020000000022797
+ (id)sharedInstance;	// IMP=0x0010000000022688
- (void).cxx_destruct;	// IMP=0x0020000000027b8a
- (id)_refreshReceiptForBundleID:(id)arg1;	// IMP=0x0010000000027877
- (id)_octanePathForBundleID:(id)arg1;	// IMP=0x00100000000277a7
- (void)_deleteDataWithContext:(id)arg1;	// IMP=0x0010000000027707
- (_Bool)_deleteConfigurationFileWithContext:(id)arg1;	// IMP=0x001000000002756b
- (id)_appNameForContext:(id)arg1;	// IMP=0x00100000000274d6
- (id)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x00100000000270dc
- (id)getStringValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x0010000000026e67
- (id)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x0010000000026a99
- (long long)getIntegerValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x0010000000026850
- (id)setBoolValue:(_Bool)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x001000000002683c
- (_Bool)getBoolValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x0010000000026811
- (id)validateSKAdNetworkSignature:(id)arg1 withPublicKey:(id)arg2 source:(long long)arg3 andParameters:(id)arg4 withContext:(id)arg5;	// IMP=0x0010000000026407
- (id)generateSKANPostbackSignature:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000000261b2
- (void)useConfigurationDirectory:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00100000000260a6
- (void)unregisterForEventWithIdentifier:(id)arg1;	// IMP=0x0010000000025fcd
- (id)registerForEventOfType:(long long)arg1 filterData:(id)arg2;	// IMP=0x0010000000025e57
- (id)setStorefront:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000025b5b
- (id)saveConfigurationData:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000025609
- (id)saveSigningData:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000025601
- (void)restartServerIfNecessary;	// IMP=0x00100000000252ab
- (void)portUpdated:(long long)arg1;	// IMP=0x0010000000025238
- (id)performAction:(long long)arg1 withContext:(id)arg2;	// IMP=0x0010000000024a28
- (_Bool)octaneEnabledForApplicationWithBundleID:(id)arg1;	// IMP=0x00100000000249f5
- (id)messageOfTypeForBundleID:(id)arg1 messageReason:(id)arg2;	// IMP=0x001000000002495a
- (id)messageForBundleID:(id)arg1;	// IMP=0x00100000000248d3
- (void)handleAppsUninstalledWithBundleIDs:(id)arg1;	// IMP=0x001000000002459b
- (void)handleAppsInstalledWithBundleIDs:(id)arg1;	// IMP=0x0010000000024085
- (id)getTransactionDataWithContext:(id)arg1;	// IMP=0x0010000000023efc
- (id)getStorefrontWithContext:(id)arg1;	// IMP=0x0010000000023d73
- (id)expireOrRenewSubscriptionWithIdentifier:(id)arg1 expire:(_Bool)arg2 withContext:(id)arg3;	// IMP=0x0010000000023a03
- (_Bool)dialogsDisabledForBundleID:(id)arg1;	// IMP=0x00100000000239a4
- (void)deleteDataWithContext:(id)arg1;	// IMP=0x00100000000238d4
- (id)deleteAllTransactionsWithContext:(id)arg1;	// IMP=0x0010000000023634
- (id)configurationDirectoryForBundleID:(id)arg1;	// IMP=0x00100000000235b3
- (id)completeAskToBuyRequestWithResponse:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x0010000000023278
- (id)clearOverridesWithContext:(id)arg1;	// IMP=0x0010000000022fa8
- (id)changeAutoRenewStatus:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x0010000000022c9f
- (id)buyProductWithID:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000022907
- (long long)activePort;	// IMP=0x00100000000227a4
- (id)init;	// IMP=0x001000000002270d

@end

