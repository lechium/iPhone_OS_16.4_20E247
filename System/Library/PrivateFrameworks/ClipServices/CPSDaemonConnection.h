//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPSSessionProxy, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CPSDaemonConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
    NSXPCConnection *_xpcConnectionNotEntitled;	// 24 = 0x18
    CPSSessionProxy *_sessionProxy;	// 32 = 0x20
}

+ (id)sharedConnection;	// IMP=0x001000000002e37a
- (void).cxx_destruct;	// IMP=0x0000000000032577
@property(retain, nonatomic) CPSSessionProxy *sessionProxy; // @synthesize sessionProxy=_sessionProxy;
- (void)fetchABRMetadataForDiagnosticsWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003237f
- (void)fetchAMPMetadataForDiagnosticsWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000321a2
- (void)performValidationWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032023
- (void)confirmLocationWithURL:(id)arg1 inRegion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000031e70
- (void)checkAndConsumeShowsAppAttributionBannerForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031c96
- (void)getLastLaunchOptionsWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031b17
- (void)notifyWebClipActivationWithBundleID:(id)arg1 referrerBundleID:(id)arg2;	// IMP=0x0000000000031942
- (void)getUserNotificationConsentForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031675
- (void)openClipWithURL:(id)arg1 launchOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000031396
- (void)stopStallingCurrentInstallationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031195
- (void)openClipWithInvocationUIIfNeededWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030f4f
- (void)fetchClipURLWithURLHash:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030d12
- (void)fetchClipMetadataWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030abd
- (void)uninstallClipsWithBundleIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003086a
- (void)uninstallClipWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030617
- (void)installClipWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000303c4
- (void)openClipWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003009c
- (void)cancelPrewarmingClipWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fd76
- (void)prewarmClipWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fa50
- (void)fetchClipMetadataAndImagesWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f72a
- (void)isClipURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f4e4
- (void)unregisterSessionProxy:(id)arg1;	// IMP=0x000000000002f2b6
- (void)registerSessionProxy:(id)arg1;	// IMP=0x000000000002f03a
- (void)didRetrieveBusinessIcon:(id)arg1;	// IMP=0x000000000002ef91
- (void)didFinishTestingAtTime:(double)arg1;	// IMP=0x000000000002eef8
- (void)didRetrieveHeroImage:(id)arg1;	// IMP=0x000000000002ee4f
- (void)didRetrieveApplicationIcon:(id)arg1;	// IMP=0x000000000002eda6
- (void)didInstallApplicationPlaceholder;	// IMP=0x000000000002ed41
- (void)didUpdateInstallProgress:(id)arg1;	// IMP=0x000000000002ec98
- (void)didFinishLoadingWithError:(id)arg1;	// IMP=0x000000000002ebef
- (void)didUpdateMetadata:(id)arg1;	// IMP=0x000000000002eb46
- (void)didDetermineAvailability:(_Bool)arg1 options:(id)arg2;	// IMP=0x000000000002e96b
- (void)remoteServiceDidCrash;	// IMP=0x000000000002e8e6
@property(readonly, nonatomic) NSXPCConnection *xpcConnectionNotEntitled; // @synthesize xpcConnectionNotEntitled=_xpcConnectionNotEntitled;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)init;	// IMP=0x000000000002e3cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

