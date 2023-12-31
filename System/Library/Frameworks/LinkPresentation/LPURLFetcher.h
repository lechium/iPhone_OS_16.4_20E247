//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableData, NSString, NSURL, WKWebView;

__attribute__((visibility("hidden")))
@interface LPURLFetcher
{
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    WKWebView *_webView;	// 40 = 0x28
    NSMutableData *_data;	// 48 = 0x30
    NSString *_MIMEType;	// 56 = 0x38
    NSURL *_URL;	// 64 = 0x40
    Class _responseClass;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000002fa2a
@property(retain, nonatomic) Class responseClass; // @synthesize responseClass=_responseClass;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)_completedWithData:(id)arg1 MIMEType:(id)arg2 error:(id)arg3;	// IMP=0x000000000002f736
- (void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x000000000002f60c
- (void)cancel;	// IMP=0x000000000002f5af
- (void)dataTask:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x000000000002f56c
- (void)dataTask:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x000000000002f49b
- (void)dataTask:(id)arg1 didReceiveResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002f090
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ed2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

