//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APServerRequest;

@interface APServerRetryRequester
{
    long long _responseResult;	// 8 = 0x8
    APServerRequest *_serverRequest;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000085833
@property(retain, nonatomic) APServerRequest *serverRequest; // @synthesize serverRequest=_serverRequest;
@property(nonatomic) long long responseResult; // @synthesize responseResult=_responseResult;
- (void)responseReceived:(id)arg1 responseProtobuf:(id)arg2 error:(id)arg3;	// IMP=0x00100000000857b1
- (id)buildURLForRequestProtobuf:(id)arg1;	// IMP=0x001000000008576a
- (id)protoBuffer;	// IMP=0x0010000000085723
- (Class)responseClass;	// IMP=0x00100000000856dc
- (id)headers;	// IMP=0x0010000000085695
- (id)initFromServerRequest:(id)arg1;	// IMP=0x00100000000855b1

@end

