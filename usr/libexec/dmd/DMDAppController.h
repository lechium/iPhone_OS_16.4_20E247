//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DMFOSStateHandler, MISSING_TYPE, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface DMDAppController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_manifest;	// 16 = 0x10
    DMFOSStateHandler *_stateHandler;	// 24 = 0x18
}

+ (void)_sendAppStatusChangeNotification;	// IMP=0x0020000000019d6d
+ (id)metadataPath;	// IMP=0x0010000000016a66
+ (id)sharedController;	// IMP=0x0010000000013987
- (void).cxx_destruct;	// IMP=0x002000000001adad
@property(readonly, nonatomic) DMFOSStateHandler *stateHandler; // @synthesize stateHandler=_stateHandler;
@property(readonly, nonatomic) NSMutableDictionary *manifest; // @synthesize manifest=_manifest;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_getEnterpriseAppMetadataFromData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a914
- (void)_getEnterpriseAppMetadataForManifestURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a511
- (id)_newMetadataDictionary;	// IMP=0x001000000001a492
- (id)_metadataByBundleIdentifier;	// IMP=0x001000000001a43b
- (_Bool)_setMetadata:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000019fe8
- (id)_metadataForBundleIdentifier:(id)arg1;	// IMP=0x0010000000019d91
- (void)_stopObservingLifeCycle:(id)arg1;	// IMP=0x0010000000019c73
- (_Bool)_isManagedBundleIdentifier:(id)arg1;	// IMP=0x0010000000019b9e
- (void)_resetStateForChangeInLifeCycle:(id)arg1 newState:(unsigned long long)arg2;	// IMP=0x00100000000196b6
- (void)_applyChangeInLifeCycle:(id)arg1 stateMap:(id)arg2;	// IMP=0x00100000000192a3
- (void)_cleanUpStaleManagementStatesAndStartObservingApps;	// IMP=0x0010000000018955
- (void)advanceTransientStates;	// IMP=0x00100000000182a1
- (_Bool)setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000018099
- (unsigned long long)stateForBundleIdentifier:(id)arg1;	// IMP=0x0010000000018014
- (void)setVPNUUIDString:(id)arg1 contentFilterUUIDString:(id)arg2 DNSProxyUUIDString:(id)arg3 associatedDomains:(id)arg4 enableDirectDownloads:(id)arg5 configuration:(id)arg6 options:(unsigned long long)arg7 forBundleIdentifier:(id)arg8;	// IMP=0x0010000000017aed
- (void)setVPNUUIDString:(id)arg1 associatedDomains:(id)arg2 enableDirectDownloads:(id)arg3 configuration:(id)arg4 options:(unsigned long long)arg5 forBundleIdentifier:(id)arg6;	// IMP=0x0010000000017ab5
@property(readonly, copy, nonatomic) NSArray *managedBundleIdentifiers;
- (void)didResetStateForLifeCycle:(id)arg1 state:(unsigned long long)arg2;	// IMP=0x00100000000177b4
- (void)didFinishUninstallingForLifeCycle:(id)arg1;	// IMP=0x00100000000176ed
- (void)didFinishUpdatingForLifeCycle:(id)arg1;	// IMP=0x0010000000017626
- (void)didFailUpdatingForLifeCycle:(id)arg1;	// IMP=0x0010000000017614
- (void)didCancelUpdatingForLifeCycle:(id)arg1;	// IMP=0x0010000000017602
- (void)didStartUpdatingForLifeCycle:(id)arg1;	// IMP=0x001000000001753b
- (void)didFinishInstallingForLifeCycle:(id)arg1;	// IMP=0x0010000000017474
- (void)didFailInstallingForLifeCycle:(id)arg1;	// IMP=0x00100000000173ad
- (void)didCancelInstallingForLifeCycle:(id)arg1;	// IMP=0x001000000001739b
- (void)didStartInstallingForLifeCycle:(id)arg1;	// IMP=0x00100000000172ae
- (void)startUninstallingAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000171fe
- (void)resumeAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001714e
- (void)cancelAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001709e
- (void)startUpdatingAppForRequest:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000016fee
- (void)resumeAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016f3e
- (void)cancelAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016e8e
- (void)startRedeemingAppWithCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016dde
- (void)startInstallingNonEnterpriseAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016d2e
- (void)startInstallingEnterpriseAppWithManifestURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016c7e
- (void)handleFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016bce
- (void)getMetadataForNonEnterpriseAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016b1e
- (void)getBundleIdentifierForStoreItemIdentifier:(id)arg1 personaIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000016a6e
- (_Bool)setFeedback:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000169b5
- (id)feedbackForBundleIdentifier:(id)arg1;	// IMP=0x0010000000016904
- (_Bool)setConfiguration:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000016853
- (id)configurationForBundleIdentifier:(id)arg1;	// IMP=0x00100000000167a2
- (void)setTapToPayScreenLock:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000016433
- (id)tapToPayScreenLockForBundleIdentifier:(id)arg1;	// IMP=0x00100000000163ac
- (void)setRemovability:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015dd4
- (id)removabilityForBundleIdentifier:(id)arg1;	// IMP=0x0010000000015d4d
- (_Bool)setAssociatedDomainsEnableDirectDownloads:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000015bc4
- (id)associatedDomainsEnableDirectDownloadsForBundleIdentifier:(id)arg1;	// IMP=0x0010000000015b3d
- (_Bool)setAssociatedDomains:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000159b4
- (id)associatedDomainsForBundleIdentifier:(id)arg1;	// IMP=0x001000000001592d
- (_Bool)setDNSProxyUUIDString:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000157a4
- (id)DNSProxyUUIDStringForBundleIdentifier:(id)arg1;	// IMP=0x001000000001571d
- (_Bool)setContentFilterUUIDString:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000015594
- (id)contentFilterUUIDStringForBundleIdentifier:(id)arg1;	// IMP=0x001000000001550d
- (_Bool)setVPNUUIDString:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000015384
- (id)VPNUUIDStringForBundleIdentifier:(id)arg1;	// IMP=0x00100000000152fd
- (_Bool)removePersonaMappingForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000014f1b
- (void)updateBundleIDPersonaIDMappingForPersonaID:(id)arg1 addingBundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014d11
- (_Bool)writeManagementInformationToDiskWithError:(id *)arg1;	// IMP=0x0010000000014ad9
- (_Bool)setManagementInformation:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001487e
- (MISSING_TYPE *)managementInformationForBundleIdentifier: /* Error: Ran out of types for this method. */;	// IMP=0x001000000001467f
- (void)getMetadataForAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001444c
- (void)getBundleIdentifierForAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001412f
- (void)getBundleIdentifierForManifestURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013e89
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *foregroundBundleIdentifiers;
- (id)initPrivate;	// IMP=0x00100000000139f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
