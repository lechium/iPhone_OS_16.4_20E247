//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSError, NSMutableURLRequest, NSString, NSURL, NSURLSession, NSUUID, PDURLOperationStats, PDURLResponse;

@interface PDURLRequestOperation
{
    NSError *_error;	// 8 = 0x8
    NSUUID *_requestUUID;	// 16 = 0x10
    unsigned long long _executionsCount;	// 24 = 0x18
    _Bool _wantsToExecute;	// 32 = 0x20
    NSMutableURLRequest *_request;	// 40 = 0x28
    NSString *_responseFailureCause;	// 48 = 0x30
    long long _clsErrorCode;	// 56 = 0x38
    NSURLSession *_session;	// 64 = 0x40
    _Bool _urlRequestAttempted;	// 72 = 0x48
    PDURLResponse *_response;	// 80 = 0x50
    PDURLOperationStats *_stats;	// 88 = 0x58
    NSURL *_URL;	// 96 = 0x60
    NSString *_requestContentType;	// 104 = 0x68
    NSString *_acceptContentType;	// 112 = 0x70
    NSData *_requestData;	// 120 = 0x78
    double _timeoutIntervalForRequest;	// 128 = 0x80
}

+ (id)setAppleInternalHeadersForRequest:(id)arg1;	// IMP=0x004000000010ef20
+ (id)appleIDSession;	// IMP=0x001000000010de3a
+ (void)reset;	// IMP=0x001000000010ddc7
- (void).cxx_destruct;	// IMP=0x0010000000110f53
@property(readonly, nonatomic) NSString *responseFailureCause; // @synthesize responseFailureCause=_responseFailureCause;
@property(nonatomic) long long clsErrorCode; // @synthesize clsErrorCode=_clsErrorCode;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(readonly, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(readonly, nonatomic) NSString *acceptContentType; // @synthesize acceptContentType=_acceptContentType;
@property(readonly, nonatomic) NSString *requestContentType; // @synthesize requestContentType=_requestContentType;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) PDURLOperationStats *stats; // @synthesize stats=_stats;
@property(readonly, nonatomic) PDURLResponse *response; // @synthesize response=_response;
@property(nonatomic) _Bool urlRequestAttempted; // @synthesize urlRequestAttempted=_urlRequestAttempted;
- (id)statusReport;	// IMP=0x0010000000110a77
- (void)handleRequestError;	// IMP=0x0010000000110971
- (void)handleHTTPStatusCode:(id)arg1;	// IMP=0x00100000001105b0
- (long long)errorCodeForRequest;	// IMP=0x0010000000110451
- (void)markAsFinished;	// IMP=0x001000000011040e
- (void)abort;	// IMP=0x00100000001103ce
- (void)abortWithError:(id)arg1;	// IMP=0x00100000001102b5
- (void)flushCachedData;	// IMP=0x001000000011022f
- (void)handleResponseBody:(_Bool)arg1;	// IMP=0x001000000010fe49
- (void)didCompleteProcessingResponse;	// IMP=0x001000000010fe01
- (_Bool)shouldProcessResponseBody;	// IMP=0x001000000010fdca
- (_Bool)processResponse:(id *)arg1;	// IMP=0x001000000010fdc2
- (void)releaseResponse;	// IMP=0x001000000010fd92
- (_Bool)verifyResponse;	// IMP=0x001000000010fd8a
- (_Bool)httpRequestHadTimeoutError;	// IMP=0x001000000010fc4d
- (_Bool)httpRequestHadServerError;	// IMP=0x001000000010fbe9
@property(readonly, nonatomic) _Bool httpRequestSucceeded;
@property(readonly, nonatomic) _Bool httpRequestCompleted;
@property(readonly, nonatomic) _Bool urlRequestFailed;
- (void)signRequest:(id)arg1 withData:(id)arg2;	// IMP=0x001000000010f7f8
- (void)logHTTPHeaders:(id)arg1 withMessage:(id)arg2;	// IMP=0x001000000010f4e9
- (id)customRequestHeaders;	// IMP=0x001000000010f4e1
- (void)setAuthHeadersForRequest:(id)arg1;	// IMP=0x001000000010f435
- (void)setHeadersForRequest:(id)arg1;	// IMP=0x001000000010ef38
- (id)createNSURLRequest;	// IMP=0x001000000010ec0c
- (_Bool)willAcceptResponseContentType:(id)arg1;	// IMP=0x001000000010eb5c
@property(readonly, nonatomic) long long clsErrorCodeForAuthenticationFailure;
- (_Bool)requiresAuth;	// IMP=0x001000000010eb31
@property(readonly, nonatomic) NSString *httpMethod;
- (void)rescheduleOperation;	// IMP=0x001000000010e9e1
- (void)execute;	// IMP=0x001000000010e697
@property(readonly, nonatomic) _Bool wantsToExecute;
- (id)_createRequestTask;	// IMP=0x001000000010e48d
- (id)sessionTaskForRequest:(id)arg1 withData:(id)arg2;	// IMP=0x001000000010e368
- (void)prepareForNextRequestWithResponse:(id)arg1;	// IMP=0x001000000010e136
- (void)prepareForNextRequest;	// IMP=0x001000000010e0a5
@property(readonly, nonatomic) _Bool hasBigResponses;
- (id)operationID;	// IMP=0x001000000010dfa0
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000010defe
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00100000001124ef
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000112218
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0010000000111e59
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x0010000000111e39
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000111bf3
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0010000000111a74
- (void)requestCompletedWith:(id)arg1 error:(id)arg2;	// IMP=0x0010000000111648
- (void)sessionFailedWithError:(id)arg1;	// IMP=0x00100000001114cc
- (void)closeSession:(_Bool)arg1;	// IMP=0x001000000011130b
- (id)createSessionIfNeeded;	// IMP=0x001000000011101d
- (void)_simulateResponseWithURL:(id)arg1 statusCode:(long long)arg2 headers:(id)arg3 data:(id)arg4 error:(id)arg5;	// IMP=0x00100000001126c5
- (void)_simulateResumeForSessionTask:(id)arg1 response:(id)arg2 executionCount:(long long)arg3;	// IMP=0x00100000001126bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
