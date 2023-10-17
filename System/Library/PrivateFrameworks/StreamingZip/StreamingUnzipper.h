//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection, StreamingUnzipState;
@protocol OS_dispatch_queue, OS_os_transaction, StreamingUnzipDelegateProtocol;

__attribute__((visibility("hidden")))
@interface StreamingUnzipper : NSObject
{
    long long _sandboxToken;	// 8 = 0x8
    void *_decompressionOutputBuffer;	// 16 = 0x10
    StreamingUnzipState *_currentState;	// 24 = 0x18
    NSObject<OS_os_transaction> *_sessionTransaction;	// 32 = 0x20
    int _activeDelegateMethods;	// 40 = 0x28
    double _lastExtractionProgressSent;	// 48 = 0x30
    NSXPCConnection *xpcConnection;	// 56 = 0x38
    id <StreamingUnzipDelegateProtocol> inProcessExtractorDelegate;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *inProcessDelegateQueue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000002f067
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *inProcessDelegateQueue; // @synthesize inProcessDelegateQueue;
@property(nonatomic) __weak id <StreamingUnzipDelegateProtocol> inProcessExtractorDelegate; // @synthesize inProcessExtractorDelegate;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection;
- (void)getPidForTestingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002efcb
- (void)terminateStreamWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002edbf
- (void)finishStreamWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e2a3
- (void)suspendStreamWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e01f
- (void)supplyBytes:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002db7a
- (void)_supplyBytes:(const char *)arg1 length:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000000002418c
- (void)_extractionEnteredPassThroughMode;	// IMP=0x000000000002402a
- (void)_sendExtractionCompleteAtArchivePath:(id)arg1;	// IMP=0x0000000000023e63
- (void)_sendExtractionProgress:(double)arg1;	// IMP=0x0000000000023cb0
- (id)_beginNonStreamablePassthroughWithRemainingBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000023482
- (void)_setErrorState;	// IMP=0x000000000002334a
- (void)dealloc;	// IMP=0x00000000000231f5
- (void)setActiveDelegateMethods:(int)arg1;	// IMP=0x0000000000023125
- (void)setupUnzipperWithOutputPath:(id)arg1 sandboxExtensionToken:(char *)arg2 options:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000022a79
- (id)initForClient:(id)arg1;	// IMP=0x00000000000229b8

@end
