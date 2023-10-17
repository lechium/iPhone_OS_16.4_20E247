//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ODRDiagnosticsClient : NSObject
{
}

- (void)prefetchThenRequestSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00400000001f2545
- (void)prefetchSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withPrefetchCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f2535
- (void)prefetchAndRequestSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f2525
- (void)setSpaceReduction:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f23f0
- (void)getSpaceReductionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f23b4
- (void)setSimulatedBandwidth:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f235f
- (void);	// IMP=0x00100000001f2318
- (void)purgeAssetWithIdentifier:(id)arg1 withRequestCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f21ea
- (void)purgeAllAssetsForApplications:(id)arg1 withRequestCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f2072
- (void)purgeAllAssetsForApplication:(id)arg1 withRequestCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f1f44
- (void)testPurgeBytes:(long long)arg1 urgency:(int)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f1e8e
- (void)purgeBytes:(long long)arg1 odrOnly:(_Bool)arg2 urgency:(int)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001f1e7c
- (void)nonPurgeableAssetsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f1cb7
- (void)purgeableAssetsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f1af2
- (void)registerManifest:(id)arg1 forBundleID:(id)arg2 withRequestCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f1826
- (void)fetchManifestForAdamID:(id)arg1 externalVersionID:(id)arg2 variant:(id)arg3 withFetchCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001f1580
- (void)resumeRequestWithUUID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f14ff
- (void)pauseRequestWithUUID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f147e
- (void)cancelRequestWithUUID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f13fd
- (void)loadSourceURL:(id)arg1 intoDestinationURL:(id)arg2 isUrgent:(_Bool)arg3 isStreaming:(_Bool)arg4 withRequestCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001f137b
- (void)setSampler:(id)arg1 enabled:(_Bool)arg2 samplingInterval:(double)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001f1084
- (void)setLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f0f96
- (void)cancelMaintenanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f0f36
- (void)performMaintenanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f0ed6
- (void)statusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f0ba5
- (void)fakeWorkWithCount:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f0ac4
- (void)expireAssetURLSForBundleIDs:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f09f9
- (void)assetsForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001efaa4
- (void)allRegisteredODRAppsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ef968
- (void)manifestDictionaryForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ef5c4

@end
