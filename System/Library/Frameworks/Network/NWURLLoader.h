//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURLCache, NSURLProtocol, NSURLRequest, NSURLResponse, NWURLSessionReadRequest, NWURLSessionTaskConfiguration;
@protocol NWURLLoaderClient, OS_dispatch_data, OS_dispatch_queue, OS_nw_connection;

__attribute__((visibility("hidden")))
@interface NWURLLoader : NSObject
{
    _Bool _complete;	// 8 = 0x8
    NSURLRequest *_request;	// 16 = 0x10
    NWURLSessionTaskConfiguration *_configuration;	// 24 = 0x18
    id <NWURLLoaderClient> _client;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    Class _protocolClass;	// 48 = 0x30
    NSURLCache *_cache;	// 56 = 0x38
    NSURLProtocol *_protocol;	// 64 = 0x40
    unsigned long long _cacheStoragePolicy;	// 72 = 0x48
    NSObject<OS_dispatch_data> *_dataToCache;	// 80 = 0x50
    unsigned long long _maxItemSizeToCache;	// 88 = 0x58
    CDUnknownBlockType _awaitingResponse;	// 96 = 0x60
    NSURLResponse *_response;	// 104 = 0x68
    NWURLSessionReadRequest *_readRequest;	// 112 = 0x70
    NSError *_error;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000515560
- (void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;	// IMP=0x0000000000515550
- (void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;	// IMP=0x00000000005154c0
- (void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000515430
- (void)URLProtocolDidFinishLoading:(id)arg1;	// IMP=0x00000000005153d0
- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2;	// IMP=0x0000000000515340
- (void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;	// IMP=0x00000000005150d0
- (void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;	// IMP=0x0000000000515040
- (void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x0000000000514f70
@property(readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;
- (void)writeData:(id)arg1 complete:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000514f20
@property(readonly, nonatomic) _Bool allowsWrite;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000514ec0
- (void)readResponse:(CDUnknownBlockType)arg1;	// IMP=0x0000000000514e60
- (void)updateClient:(id)arg1;	// IMP=0x0000000000514e10
- (void)stop;	// IMP=0x0000000000514d40
- (void)start;	// IMP=0x0000000000514bc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
