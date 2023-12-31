//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKNetworkSessionDelegate : NSObject
{
    struct WeakPtr<WebKit::NetworkSessionCocoa, WTF::DefaultWeakPtrImpl> _session;	// 8 = 0x8
    struct WeakPtr<WebKit::SessionWrapper, WTF::DefaultWeakPtrImpl> _sessionWrapper;	// 16 = 0x10
    _Bool _withCredentials;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000165cb9
- (void).cxx_destruct;	// IMP=0x0000000000165c5d
- (void)URLSession:(id)arg1 webSocketTask:(id)arg2 didCloseWithCode:(long long)arg3 reason:(id)arg4;	// IMP=0x0000000000165b70
- (void)URLSession:(id)arg1 webSocketTask:(id)arg2 didOpenWithProtocol:(id)arg3;	// IMP=0x0000000000165ad9
- (void *)existingWebSocketTask:(id)arg1;	// IMP=0x0000000000165a91
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;	// IMP=0x00000000001657d0
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x0000000000165739
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x00000000001656b8
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000000001654db
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000164f26
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x0000000000163b95
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000000163467
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001618f4
- (void *)sessionFromTask:(id)arg1;	// IMP=0x00000000001617e9
- (void)URLSession:(id)arg1 task:(id)arg2 _schemeUpgraded:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000161424
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000160f2c
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x0000000000160e0d
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x0000000000160cfe
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0000000000160cf8
- (void *)existingTask:(id)arg1;	// IMP=0x0000000000160c07
- (void)sessionInvalidated;	// IMP=0x0000000000160bdb
- (id)initWithNetworkSession:(NakedRef_b86aa07f)arg1 wrapper:(void *)arg2 withCredentials:(_Bool)arg3;	// IMP=0x0000000000160b09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

