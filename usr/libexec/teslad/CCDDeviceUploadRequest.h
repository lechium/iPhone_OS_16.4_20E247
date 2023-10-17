//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DEPDeviceUploadCredentials, NSDictionary, NSString;

@interface CCDDeviceUploadRequest
{
    long long _requestType;	// 8 = 0x8
    DEPDeviceUploadCredentials *_userCredentials;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000002dfd
@property(retain, nonatomic) DEPDeviceUploadCredentials *userCredentials; // @synthesize userCredentials=_userCredentials;
@property(readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (id)requestWithError:(id *)arg1;	// IMP=0x0010000000002a8d
- (id)_requestBodyData;	// IMP=0x001000000000295a
- (id)_endpointURL;	// IMP=0x0010000000002890
- (id)_requestHeader;	// IMP=0x001000000000272d
- (id)_contentType;	// IMP=0x0010000000002720
@property(readonly, nonatomic) NSDictionary *requestBody;
@property(readonly, nonatomic) NSString *httpMethod;
@property(readonly, nonatomic) NSString *endpointPath;

@end
