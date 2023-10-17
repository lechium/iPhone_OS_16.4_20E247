//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSInputStream, NSOutputStream, NSString, NSURLSession, NSURLSessionDataTask;

__attribute__((visibility("hidden")))
@interface MMCSHTTPContext : NSObject
{
    _Bool _didOpen;	// 8 = 0x8
    _Bool _isValid;	// 9 = 0x9
    _Bool _isTaskDone;	// 10 = 0xa
    _Bool _requestIsStreamed;	// 11 = 0xb
    _Bool _isHandlingError;	// 12 = 0xc
    struct mmcs_http_context *_hc;	// 16 = 0x10
    NSURLSession *_urlSession;	// 24 = 0x18
    NSInputStream *_inputStream;	// 32 = 0x20
    NSOutputStream *_outputStream;	// 40 = 0x28
    NSURLSessionDataTask *_dataTask;	// 48 = 0x30
    NSDictionary *_timingData;	// 56 = 0x38
    struct os_activity_s *_activityMarker;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000002822c
@property(nonatomic) struct os_activity_s *activityMarker; // @synthesize activityMarker=_activityMarker;
@property(nonatomic) _Bool isHandlingError; // @synthesize isHandlingError=_isHandlingError;
@property(nonatomic) _Bool requestIsStreamed; // @synthesize requestIsStreamed=_requestIsStreamed;
@property(nonatomic) _Bool isTaskDone; // @synthesize isTaskDone=_isTaskDone;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) _Bool didOpen; // @synthesize didOpen=_didOpen;
@property(retain, nonatomic) NSDictionary *timingData; // @synthesize timingData=_timingData;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(nonatomic) struct mmcs_http_context *hc; // @synthesize hc=_hc;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000277c0
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;	// IMP=0x00000000000277ba
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;	// IMP=0x00000000000277b4
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000026cb6
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000026631
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000000025e67
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000000025589
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024e60
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x000000000002489d
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000247ce
- (void)invalidate;	// IMP=0x0000000000024680
- (void)cleanupResponse;	// IMP=0x0000000000024641
- (void)cleanupRequest;	// IMP=0x000000000002462f
- (void)dealloc;	// IMP=0x00000000000244bc
- (_Bool)send;	// IMP=0x00000000000239d9
- (id)initWithContext:(struct mmcs_http_context *)arg1 options:(const struct mmcs_http_context_options *)arg2 activityMarker:(struct os_activity_s *)arg3;	// IMP=0x000000000002388d
- (_Bool)createNewRequestBodyInputStream;	// IMP=0x0000000000023665
- (long long)countOfRequestBodyBytesSent;	// IMP=0x0000000000023621
- (_Bool)requestBodyCanAcceptData;	// IMP=0x0000000000023478
- (void)invalidateStreamPair;	// IMP=0x0000000000023076
@property(readonly, copy) NSString *description;
- (void)requestBodyDone;	// IMP=0x0000000000022e83
- (long long)writeRequestBody:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0000000000022b0b
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x00000000000222bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
