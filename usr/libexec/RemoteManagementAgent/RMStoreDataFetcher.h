//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLSession;
@protocol OS_dispatch_queue;

@interface RMStoreDataFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_completionQueue;	// 8 = 0x8
    NSURLSession *_URLSession;	// 16 = 0x10
}

+ (void)fetchDataAtURL:(id)arg1 isRMDM:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0040000000087f60
- (void).cxx_destruct;	// IMP=0x0020000000089168
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
- (_Bool)_validateResponseForURL:(id)arg1 statusCode:(id)arg2 headers:(id)arg3 data:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000088ed9
- (id)_userAgent;	// IMP=0x0010000000088dbc
- (id)_dictionaryForResponse:(id)arg1 downloadedData:(id)arg2 downloadedURL:(id)arg3;	// IMP=0x0010000000088bbe
- (void)_processResponseWithURL:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008884a
- (id)_dataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000088587
- (void)_fetchDataAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008836f
- (void)_fetchMDMDataAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000881d7
- (id)initWithURLSession:(id)arg1;	// IMP=0x0010000000087eaf
- (id)initWithURLSessionConfiguration:(id)arg1;	// IMP=0x0010000000087e50
- (id)init;	// IMP=0x0010000000087df6

@end

