//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData, NSMutableDictionary, NSProgress, NSString, NSURL, SDAirDropFileZipper, SDStatusMonitor;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_transaction, SDAirDropConnectionDelegate;

@interface SDAirDropConnection : NSObject
{
    _Bool _discover;	// 8 = 0x8
    _Bool _personAdded;	// 9 = 0x9
    _Bool _stopDeferred;	// 10 = 0xa
    _Bool _userAccepted;	// 11 = 0xb
    _Bool _senderTrusted;	// 12 = 0xc
    _Bool _delayedFinish;	// 13 = 0xd
    _Bool _queueSuspended;	// 14 = 0xe
    _Bool _endEncountered;	// 15 = 0xf
    _Bool _connectionClosed;	// 16 = 0x10
    _Bool _transactionStarted;	// 17 = 0x11
    struct __SFNode *_person;	// 24 = 0x18
    NSURL *_destination;	// 32 = 0x20
    char *_requestBuffer;	// 40 = 0x28
    NSProgress *_progress;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    struct __SecTrust *_clientTrust;	// 64 = 0x40
    double _startTime;	// 72 = 0x48
    SDStatusMonitor *_monitor;	// 80 = 0x50
    long long _lastEvent;	// 88 = 0x58
    NSMutableData *_requestData;	// 96 = 0x60
    struct __CFReadStream *_readStream;	// 104 = 0x68
    SDAirDropFileZipper *_zipper;	// 112 = 0x70
    NSMutableDictionary *_properties;	// 120 = 0x78
    unsigned int _powerAssertionID;	// 128 = 0x80
    NSObject<OS_dispatch_semaphore> *_askSemaphore;	// 136 = 0x88
    struct _CFHTTPServerRequest *_askRequest;	// 144 = 0x90
    struct _CFHTTPServerRequest *_uploadRequest;	// 152 = 0x98
    struct _CFHTTPServerRequest *_discoverRequest;	// 160 = 0xa0
    struct _CFHTTPServerConnection *_connection;	// 168 = 0xa8
    NSData *_mediaCapabilities;	// 176 = 0xb0
    NSObject<OS_os_transaction> *_transaction;	// 184 = 0xb8
    _Bool _contactsOnly;	// 192 = 0xc0
    _Bool _shouldExtractMediaFromPhotosBundles;	// 193 = 0xc1
    NSString *_sessionID;	// 200 = 0xc8
    id <SDAirDropConnectionDelegate> _delegate;	// 208 = 0xd0
}

+ (id)disambiguatedModelName;	// IMP=0x00200000001be957
+ (id)validatedItemsArray:(id)arg1;	// IMP=0x00100000001b8ee3
+ (id)validatedFilesArray:(id)arg1;	// IMP=0x00100000001b8c13
+ (id)validatedFileInfo:(id)arg1;	// IMP=0x00100000001b881d
+ (id)fileInfoExpectedClassForKeyMap;	// IMP=0x00100000001b86c0
- (void).cxx_destruct;	// IMP=0x00200000001bf10a
@property __weak id <SDAirDropConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool shouldExtractMediaFromPhotosBundles; // @synthesize shouldExtractMediaFromPhotosBundles=_shouldExtractMediaFromPhotosBundles;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) NSURL *destination; // @synthesize destination=_destination;
@property _Bool contactsOnly; // @synthesize contactsOnly=_contactsOnly;
- (void)stop;	// IMP=0x00100000001bedad
- (_Bool)accept;	// IMP=0x00100000001bec91
- (void)start;	// IMP=0x00100000001beadf
- (void)startPublishingProgressForPlaceholderFiles:(id)arg1;	// IMP=0x00100000001bead9
- (void)schedule;	// IMP=0x00100000001beaac
- (void)fileZipper:(id)arg1 event:(long long)arg2 withProperty:(void *)arg3;	// IMP=0x00100000001be7c7
- (_Bool)transferIsOverPrebufferLimit;	// IMP=0x00100000001be768
- (void)setCombinedFileURLsAndItems:(id)arg1;	// IMP=0x00100000001be696
- (void)setSpotlightMetadata:(id)arg1;	// IMP=0x00100000001be690
- (id)whereFromInfo;	// IMP=0x00100000001be5f1
- (void)handleClosedConnection;	// IMP=0x00100000001be413
- (void)didFailToSendResponse:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x00100000001be359
- (void)didSendResponse:(struct _CFHTTPServerResponse *)arg1 forRequest:(struct _CFHTTPServerRequest *)arg2;	// IMP=0x00100000001bdfcb
- (void)finishOperation;	// IMP=0x00100000001bdbe8
- (void)notifyClientOfBytesCopied:(id)arg1 timeRemaining:(id)arg2;	// IMP=0x00100000001bdaad
- (long long)getStatusCode:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x00100000001bda68
- (void)didReceiveRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x00100000001bcf9e
- (void)enqueueBadResponseForRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x00100000001bce10
- (void)makeDestinationDirectory;	// IMP=0x00100000001bcc1f
- (_Bool)oneHundredContinue:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x00100000001bcbd1
- (void)enqueueResponse:(struct _CFHTTPServerRequest *)arg1 code:(long long)arg2 body:(struct __CFData *)arg3;	// IMP=0x00100000001bcb5c
- (void)silentlyCancelRequest;	// IMP=0x00100000001bca83
- (_Bool)senderInfoAvailable;	// IMP=0x00100000001bca00
- (_Bool)thereIsEnoughFreeSpace;	// IMP=0x00100000001bc8d4
- (_Bool)startReceivingFile:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x00100000001bc4e1
- (id)compressionType;	// IMP=0x00100000001bc419
- (_Bool)startReceivingBody:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x00100000001bc275
- (void)handleReadStreamEvent:(struct __CFReadStream *)arg1 event:(unsigned long long)arg2;	// IMP=0x00100000001bc0ed
- (void)processRequest;	// IMP=0x00100000001bc02b
- (void)cancelAndDecline;	// IMP=0x00100000001bbf77
- (void)handleAskRequest;	// IMP=0x00100000001bbad7
- (void)adjustPropertiesForPhotosBundles;	// IMP=0x00100000001bb7d3
- (void)adjustPropertiesForAutoAcceptSenderIsMe:(_Bool)arg1;	// IMP=0x00100000001bb6ca
- (_Bool)transferContainsPhotosAssetBundles;	// IMP=0x00100000001bb527
- (_Bool)allowAskRequestFromPerson:(struct __SFNode *)arg1;	// IMP=0x00100000001bb454
- (void)parseAskRequest;	// IMP=0x00100000001bb239
- (void)handleDiscoverRequest;	// IMP=0x00100000001bb0a5
- (void)parseDiscoverRequest;	// IMP=0x00100000001baf6b
- (void)convertURLStringsToURLs;	// IMP=0x00100000001badb0
- (void)silentlyCancelRequestOnMainThread;	// IMP=0x00100000001bad4f
- (_Bool)senderIsMe;	// IMP=0x00100000001bab24
- (_Bool)senderIsTrusted:(id)arg1;	// IMP=0x00100000001ba966
- (_Bool)senderIsBlocked;	// IMP=0x00100000001ba6db
- (void)logSenderIsBlocked;	// IMP=0x00100000001ba67e
- (struct __SFNode *)createPersonForAskRequest;	// IMP=0x00100000001ba204
- (void)sendUploadResponse:(long long)arg1;	// IMP=0x00100000001ba009
- (void)releaseIdleSleepAssertion;	// IMP=0x00100000001b9f00
- (void)sendAskResponse:(long long)arg1;	// IMP=0x00100000001b9b70
- (void)sendDiscoverResponse:(long long)arg1 forKnownAlias:(id)arg2;	// IMP=0x00100000001b962d
- (void)storeIconValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b9551
- (void)storeBooleanValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b94ba
- (void)storeNumberValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b9423
- (void)storeStringValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b938c
- (void)storeDataValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b92f5
- (void)storeRequestValue:(struct _CFHTTPServerRequest *)arg1 forKey:(struct __CFString *)arg2 convertToNumber:(_Bool)arg3;	// IMP=0x00100000001b918e
- (void)storeArrayValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b8ff6
- (void)setProperty:(void *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001b86a4
- (void)didReceiveError:(struct __CFError *)arg1;	// IMP=0x00100000001b85b7
- (void)notifyClientForEvent:(long long)arg1;	// IMP=0x00100000001b7cc2
- (void)performBlockForAllProgresses:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b7cb0
- (double)getTransferSize;	// IMP=0x00100000001b7c4b
- (double)getTransferRate;	// IMP=0x00100000001b7bb9
- (void)notifyClient:(long long)arg1 withResults:(id)arg2;	// IMP=0x00100000001b7b2f
- (void)handleTerminalCallBack;	// IMP=0x00100000001b7ac8
- (void)removeObservers;	// IMP=0x00100000001b7a75
- (void)addObservers;	// IMP=0x00100000001b7a0e
- (void)wirelessPowerChanged:(id)arg1;	// IMP=0x00100000001b7925
- (void)systemWillSleep:(id)arg1;	// IMP=0x00100000001b7855
- (void)didCloseConnection;	// IMP=0x00100000001b77ec
- (void)dealloc;	// IMP=0x00100000001b76bd
- (id)initWithConnection:(struct _CFHTTPServerConnection *)arg1;	// IMP=0x00100000001b7508

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

