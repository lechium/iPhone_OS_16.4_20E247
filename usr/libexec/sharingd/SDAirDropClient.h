//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSMutableSet, NSNumber, NSProgress, NSString, NSURL, NSURLResponse, NSURLSession, NSURLSessionUploadTask, PHMediaFormatConversionManager, SDAirDropFileZipper, SDAirDropPeerMetric, SDBonjourResolver, SDStatusMonitor, SDXPCHelperConnection;
@protocol OS_dispatch_queue, OS_os_transaction, SDAirDropClientDelegate;

@interface SDAirDropClient : NSObject
{
    NSURLResponse *_askResponse;	// 8 = 0x8
    NSURLSessionUploadTask *_askTask;	// 16 = 0x10
    _Bool _cancelled;	// 24 = 0x18
    NSString *_clientBundleID;	// 32 = 0x20
    NSString *_connectionKey;	// 40 = 0x28
    PHMediaFormatConversionManager *_conversionManager;	// 48 = 0x30
    _Bool _conversionNotified;	// 56 = 0x38
    _Bool _conversionObserver;	// 57 = 0x39
    NSProgress *_conversionProgress;	// 64 = 0x40
    _Bool _discover;	// 72 = 0x48
    NSURLResponse *_discoverResponse;	// 80 = 0x50
    NSURLSessionUploadTask *_discoverTask;	// 88 = 0x58
    int _failCount;	// 96 = 0x60
    struct CGImage *_fileIcon;	// 104 = 0x68
    NSMutableArray *_fileURLs;	// 112 = 0x70
    NSMutableDictionary *_fileURLToConversionNeeded;	// 120 = 0x78
    NSMutableSet *_generatedFiles;	// 128 = 0x80
    struct __SecIdentity *_identity;	// 136 = 0x88
    NSArray *_items;	// 144 = 0x90
    long long _lastEvent;	// 152 = 0x98
    NSMutableArray *_mediaFormatConversionDestinations;	// 160 = 0xa0
    SDAirDropPeerMetric *_metric;	// 168 = 0xa8
    SDStatusMonitor *_monitor;	// 176 = 0xb0
    NSMutableArray *_otherStuff;	// 184 = 0xb8
    _Bool _p2pRetained;	// 192 = 0xc0
    struct __SFNode *_person;	// 200 = 0xc8
    _Bool _personAdded;	// 208 = 0xd0
    unsigned int _powerAssertionID;	// 212 = 0xd4
    NSProgress *_progress;	// 216 = 0xd8
    NSMutableDictionary *_properties;	// 224 = 0xe0
    _Bool _providedStream;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_queue;	// 240 = 0xf0
    _Bool _queueSuspended;	// 248 = 0xf8
    NSMutableData *_receiverData;	// 256 = 0x100
    _Bool _receiverSupportsDVZip;	// 264 = 0x108
    SDBonjourResolver *_resolver;	// 272 = 0x110
    NSNumber *_sendingLivePhotoJPEGs;	// 280 = 0x118
    struct __SecTrust *_serverTrust;	// 288 = 0x120
    NSURL *_serverURL;	// 296 = 0x128
    NSURLSession *_session;	// 304 = 0x130
    _Bool _shouldPublishProgress;	// 312 = 0x138
    struct CGImage *_smallFileIcon;	// 320 = 0x140
    double _startTime;	// 328 = 0x148
    NSURL *_tmpDirectoryToCleanUp;	// 336 = 0x150
    NSObject<OS_os_transaction> *_transaction;	// 344 = 0x158
    _Bool _transactionStarted;	// 352 = 0x160
    NSProgress *_transferProgress;	// 360 = 0x168
    _Bool _uploadFinished;	// 368 = 0x170
    NSURLResponse *_uploadResponse;	// 376 = 0x178
    NSURLSessionUploadTask *_uploadTask;	// 384 = 0x180
    NSMutableArray *_weblocURLs;	// 392 = 0x188
    SDXPCHelperConnection *_xpcHelperConnection;	// 400 = 0x190
    SDAirDropFileZipper *_zipper;	// 408 = 0x198
    _Bool _zipperFinished;	// 416 = 0x1a0
    int _clientPid;	// 420 = 0x1a4
    NSDictionary *_discoveryMetrics;	// 424 = 0x1a8
    id <SDAirDropClientDelegate> _delegate;	// 432 = 0x1b0
    CDStruct_4c969caf _auditToken;	// 440 = 0x1b8
}

- (void).cxx_destruct;	// IMP=0x0020000000068cfe
@property __weak id <SDAirDropClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldPublishProgress; // @synthesize shouldPublishProgress=_shouldPublishProgress;
@property(copy) NSDictionary *discoveryMetrics; // @synthesize discoveryMetrics=_discoveryMetrics;
@property(copy) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property int clientPid; // @synthesize clientPid=_clientPid;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (void)donateTransferInteractionToDuet;	// IMP=0x00100000000684f5
- (void)convertWideGamutToClampedPhoto;	// IMP=0x0010000000067de0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000067bb7
- (void)convertMediaItemFromURL:(id)arg1 forMediaCapabilities:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000066f0a
- (void)convertLivePhotoBundleIfNeeded:(id)arg1 capabilities:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000669ef
- (_Bool)receiverDeviceModelNameSuggestsMacPlatform;	// IMP=0x0010000000066976
- (id)receiverMediaCapabilities;	// IMP=0x0010000000066876
- (void)convertMediaItemsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000065465
- (void)generatePreviewForFileURL:(id)arg1;	// IMP=0x0010000000064736
- (void)invalidate;	// IMP=0x0010000000064206
@property(readonly) NSString *personID;
- (_Bool)send;	// IMP=0x001000000006401d
- (void)resolve;	// IMP=0x0010000000063edd
- (void)activate;	// IMP=0x001000000006397b
- (void)startSending;	// IMP=0x00100000000633d0
- (id)tmpDirectory;	// IMP=0x0010000000063239
- (void)cancelSendingClassroom;	// IMP=0x0010000000063186
- (void)startSendingClassroom;	// IMP=0x0010000000062f51
- (void)startPublishingProgress;	// IMP=0x0010000000062d0c
- (void)removeFileIconsFromProperties;	// IMP=0x0010000000062c18
- (MISSING_TYPE *)appendFileURL:withBase:toItems: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000062662
- (void)validateAirDropItemsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006200c
- (_Bool)splitOutFileURLs;	// IMP=0x001000000006192b
- (id)realPathURL:(struct __CFURL *)arg1;	// IMP=0x001000000006171b
- (id)webURLFromInternetLocationFile:(id)arg1;	// IMP=0x0010000000061664
- (id)internetLocationFile:(struct __CFURL *)arg1;	// IMP=0x00100000000614d6
- (id)temporaryWeblocURL:(struct __CFURL *)arg1;	// IMP=0x00100000000612f1
- (void)startZipping;	// IMP=0x00100000000611e1
- (void)sendRequest:(id)arg1;	// IMP=0x0010000000060b06
- (id)discoverBodyDataInFormat:(long long)arg1;	// IMP=0x0010000000060aa0
- (id)askBodyDataInFormat:(long long)arg1;	// IMP=0x00100000000607d3
- (id)askRequestClientBundleID;	// IMP=0x0010000000060702
- (void)addHashesAndValidationRecordToRequest:(id)arg1;	// IMP=0x001000000006063f
- (void)bonjourResolverDidChange:(id)arg1;	// IMP=0x00100000000601f8
- (void)fileZipper:(id)arg1 event:(long long)arg2 withProperty:(void *)arg3;	// IMP=0x0010000000060068
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x001000000005ff2f
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005fa37
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x001000000005f5fe
@property(readonly) struct __SecTrust *secTrustRef;
- (void)logInterfaceUsedForSending:(id)arg1;	// IMP=0x001000000005f5a3
- (void)releasePeerToPeerIfPossible:(id)arg1;	// IMP=0x001000000005f521
- (_Bool)connectionOverP2P:(struct __CFData *)arg1;	// IMP=0x001000000005f2ed
- (struct __SecKey *)copyReceiverPublicKey;	// IMP=0x001000000005f1e1
- (void)evaluateReceiverTrust:(struct __SecTrust *)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f03d
- (void)didFail:(id)arg1;	// IMP=0x001000000005ed9f
- (_Bool)shouldCancelTransferForError:(id)arg1;	// IMP=0x001000000005ecb1
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x001000000005ebb6
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x001000000005eb26
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x001000000005ea84
- (void)didFinishLoading;	// IMP=0x001000000005e871
- (void)retryRequestForError:(id)arg1;	// IMP=0x001000000005e6c6
- (void)finishOperation;	// IMP=0x001000000005e2cd
- (void)notifyClientOfBytesCopied:(id)arg1 timeRemaining:(id)arg2;	// IMP=0x001000000005e181
- (_Bool)parseDiscoverResponse:(struct __CFError **)arg1;	// IMP=0x001000000005dfd1
- (_Bool)parseAskResponse:(struct __CFError **)arg1;	// IMP=0x001000000005de70
- (void)storeStringValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x001000000005ddd9
- (void)storeDataValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x001000000005dd42
- (void)storePropertyValue:(void *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x001000000005dc47
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000005dc2e
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005d6db
- (void)setSpotlightMetadata:(id)arg1;	// IMP=0x001000000005d6d5
- (id)whereFromInfo;	// IMP=0x001000000005d630
- (void)didFinishSendingAskBodyData;	// IMP=0x001000000005d5f4
- (void)didStartSendingAskBodyData;	// IMP=0x001000000005d561
- (void)postNotificationForTransferStatus:(long long)arg1 progress:(double)arg2;	// IMP=0x001000000005d36c
- (void)notifyClientForEvent:(long long)arg1 withProperty:(void *)arg2;	// IMP=0x001000000005ca50
- (void)releaseIdleSleepAssertion;	// IMP=0x001000000005c92c
- (double)getTransferSize;	// IMP=0x001000000005c8c4
- (double)getTransferRate;	// IMP=0x001000000005c82c
- (void)createSession;	// IMP=0x001000000005c551
- (_Bool)requireAWDL;	// IMP=0x001000000005c50f
- (void)removeObservers;	// IMP=0x001000000005c4bc
- (void)addObservers;	// IMP=0x001000000005c433
- (void)wirelessPowerChanged:(id)arg1;	// IMP=0x001000000005c3d0
- (void)systemWillSleep:(id)arg1;	// IMP=0x001000000005c38a
- (void)dealloc;	// IMP=0x001000000005c281
- (id)initWithPerson:(struct __SFNode *)arg1 items:(id)arg2 forDiscovery:(_Bool)arg3;	// IMP=0x001000000005be14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

