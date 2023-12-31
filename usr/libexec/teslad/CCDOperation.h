//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class CCDRequest, NSError, NSMutableData, NSString, NSTimer, NSURLSession;

@interface CCDOperation : NSOperation
{
    _Bool _operationExecuting;	// 8 = 0x8
    _Bool _operationFinished;	// 9 = 0x9
    _Bool _operationReady;	// 10 = 0xa
    _Bool _requestFailed;	// 11 = 0xb
    CCDRequest *_teslaRequest;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSMutableData *_responseData;	// 32 = 0x20
    NSURLSession *_urlSession;	// 40 = 0x28
    NSTimer *_timeoutTimer;	// 48 = 0x30
    double _retryAfterInterval;	// 56 = 0x38
    long long _requestCount;	// 64 = 0x40
    NSString *_httpResponseContentType;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000009251
@property(retain, nonatomic) NSString *httpResponseContentType; // @synthesize httpResponseContentType=_httpResponseContentType;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) _Bool requestFailed; // @synthesize requestFailed=_requestFailed;
@property(nonatomic) double retryAfterInterval; // @synthesize retryAfterInterval=_retryAfterInterval;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(nonatomic) _Bool operationReady; // @synthesize operationReady=_operationReady;
@property(nonatomic) _Bool operationFinished; // @synthesize operationFinished=_operationFinished;
@property(nonatomic) _Bool operationExecuting; // @synthesize operationExecuting=_operationExecuting;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CCDRequest *teslaRequest; // @synthesize teslaRequest=_teslaRequest;
- (void)timeoutTimerDidFire:(id)arg1;	// IMP=0x00100000000090a6
- (void)_startRetryTimerWithInterval:(double)arg1;	// IMP=0x0010000000008f96
- (void);	// IMP=0x0010000000008f19
- (void)_retryRequestIfAllowed:(_Bool)arg1 afterDelay:(double)arg2 orFailWithError:(id)arg3;	// IMP=0x0010000000008e59
- (void)_retryRequestOrFailWithError:(id)arg1;	// IMP=0x0010000000008e02
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008d8d
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0010000000008c79
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0010000000008b9b
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000089d8
- (void)_printStatusCode:(long long)arg1;	// IMP=0x00100000000088a6
- (void)_sendResponseInfoToRemoteWithStatusCode:(long long)arg1;	// IMP=0x0010000000008711
- (long long)_statusCodeFromResponse:(id)arg1;	// IMP=0x00100000000085cc
- (void)_callCompletionBlockWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x00100000000084ee
- (void)_endOperation;	// IMP=0x00100000000084ac
- (void)_sendFailureNoticeToRemote;	// IMP=0x00100000000083f4
- (void)_startURLRequest;	// IMP=0x001000000000825f
- (void)_invalidateAndCancelURLSession;	// IMP=0x0010000000008205
- (void)completeOperationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x00100000000081ff
- (id)responseWithResponseData:(id)arg1 contentType:(id)arg2 statusCode:(long long)arg3 retryNeeded:(_Bool *)arg4 outError:(id *)arg5;	// IMP=0x00100000000081f7
- (_Bool)isExecuting;	// IMP=0x00100000000081e7
- (_Bool)isFinished;	// IMP=0x00100000000081d7
- (void)start;	// IMP=0x0010000000008086
- (void)dealloc;	// IMP=0x0010000000008048
- (_Bool)isReady;	// IMP=0x0010000000007eeb
- (id)init;	// IMP=0x0010000000007eac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

