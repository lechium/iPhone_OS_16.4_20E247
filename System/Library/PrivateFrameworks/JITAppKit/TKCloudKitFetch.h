//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableURLRequest, NSURL, TMLJSONObject;
@protocol TKNetworkTask;

__attribute__((visibility("hidden")))
@interface TKCloudKitFetch : NSObject
{
    id <TKNetworkTask> _queryTask;	// 8 = 0x8
    id <TKNetworkTask> _downloadTask;	// 16 = 0x10
    _Bool _active;	// 24 = 0x18
    _Bool _cancelled;	// 25 = 0x19
    NSMutableURLRequest *_urlRequest;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    TMLJSONObject *_response;	// 48 = 0x30
    NSURL *_downloadURL;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001f6d0
@property(retain, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(readonly, nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) TMLJSONObject *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSMutableURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
- (void)handleDownloadResponse:(id)arg1 error:(id)arg2;	// IMP=0x000000000001f1a0
- (void)downloadAssetFromCloudKit;	// IMP=0x000000000001eeb0
- (void)handleResponse:(id)arg1 data:(id)arg2 responseError:(id)arg3;	// IMP=0x000000000001ebb0
- (void)cancel;	// IMP=0x000000000001eb30
- (void)send;	// IMP=0x000000000001e8e0
- (void)setResponse:(id)arg1;	// IMP=0x000000000001e890
- (void)tmlDispose;	// IMP=0x000000000001e840
- (void)dealloc;	// IMP=0x000000000001e7f0
- (id)init;	// IMP=0x000000000001e770

@end

