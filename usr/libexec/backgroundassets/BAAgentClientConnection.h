//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BABlockQueue, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface BAAgentClientConnection
{
    _Bool _isApplication;	// 8 = 0x8
    _Bool _connectionIsValid;	// 9 = 0x9
    NSString *_applicationBundleIdentifier;	// 16 = 0x10
    NSString *_clientBundleIdentifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_clientHandlerQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_clientWorkQueue;	// 40 = 0x28
    NSString *_signingIdentifier;	// 48 = 0x30
    BABlockQueue *_exclusiveAccessBlockQueue;	// 56 = 0x38
    NSUUID *_lastExclusiveAccessBlockToken;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000003f225
@property(retain) NSUUID *lastExclusiveAccessBlockToken; // @synthesize lastExclusiveAccessBlockToken=_lastExclusiveAccessBlockToken;
@property(retain) BABlockQueue *exclusiveAccessBlockQueue; // @synthesize exclusiveAccessBlockQueue=_exclusiveAccessBlockQueue;
@property(retain) NSString *signingIdentifier; // @synthesize signingIdentifier=_signingIdentifier;
@property _Bool connectionIsValid; // @synthesize connectionIsValid=_connectionIsValid;
@property(retain) NSObject<OS_dispatch_queue> *clientWorkQueue; // @synthesize clientWorkQueue=_clientWorkQueue;
@property(retain) NSObject<OS_dispatch_queue> *clientHandlerQueue; // @synthesize clientHandlerQueue=_clientHandlerQueue;
@property(retain) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(retain) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property _Bool isApplication; // @synthesize isApplication=_isApplication;
@property(readonly, copy) NSString *debugDescription;
- (id)extendClientSandboxForStagedURL:(id)arg1 allowWrites:(_Bool)arg2;	// IMP=0x001000000003eec0
- (void)downloadIdentifierDidFinish:(id)arg1 sandboxExtensionToken:(id)arg2 wasHandled:(CDUnknownBlockType)arg3;	// IMP=0x001000000003ecd5
- (void)downloadIdentifier:(id)arg1 didFailWithError:(id)arg2 wasHandled:(CDUnknownBlockType)arg3;	// IMP=0x001000000003eaea
- (void)downloadIdentifier:(id)arg1 didReceiveChallenge:(id)arg2 authChallengeHandler:(CDUnknownBlockType)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003e7b4
- (void)downloadIdentifier:(id)arg1 didWriteBytes:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;	// IMP=0x001000000003e65e
- (void)downloadIdentifierDidPause:(id)arg1;	// IMP=0x001000000003e519
- (void)downloadIdentifierDidBegin:(id)arg1;	// IMP=0x001000000003e3d4
- (void)removeDownloadIdentifier:(id)arg1;	// IMP=0x001000000003e28f
- (void)callBlockWhenConnectionReady:(CDUnknownBlockType)arg1 onQueue:(id)arg2;	// IMP=0x001000000003e110
- (void)syncDownloads:(id)arg1;	// IMP=0x001000000003e020
- (void)markPurgeableWithFileURL:(id)arg1 sandboxToken:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003de4d
- (void)cancelDownload:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003dbb8
- (void)startForegroundDownload:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d93d
@property(readonly) _Bool isActive;
- (_Bool)_entitledForCloudKitWithDownload:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000003d336
- (void)_validateAndSetClientIdentifier;	// IMP=0x001000000003c2ae
- (void)exclusiveControlExitedWithToken:(id)arg1;	// IMP=0x001000000003c14f
- (void)performWithExclusiveControlBeforeDate:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003be99
- (void)performWithExclusiveControlWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003bbdc
- (void)scheduleDownload:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b7f7
- (void)currentDownloads:(CDUnknownBlockType)arg1;	// IMP=0x001000000003b63f
- (void)dealloc;	// IMP=0x001000000003b59a
- (void)connectionInvalidated;	// IMP=0x001000000003b453
- (id)initWithNSXPCConnection:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a55b

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
