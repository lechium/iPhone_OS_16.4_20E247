//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSData, NSError, NSObject, NSURLSessionDataTask;
@protocol OS_dispatch_queue, UGCDownloadablePhotoInfo;

@interface UGCPhotoDownloadOperation : NSOperation
{
    _Bool _finished;	// 8 = 0x8
    _Bool _executing;	// 9 = 0x9
    id <UGCDownloadablePhotoInfo> _photoInfo;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
    NSURLSessionDataTask *_downloadTask;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_completionQueue;	// 40 = 0x28
    NSError *_downloadError;	// 48 = 0x30
    NSData *_downloadedImageData;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001ed9de
@property(readonly, nonatomic) NSData *downloadedImageData; // @synthesize downloadedImageData=_downloadedImageData;
@property(readonly, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
- (void)cancel;	// IMP=0x00100000001ed970
- (_Bool)isFinished;	// IMP=0x00100000001ed960
- (_Bool)isExecuting;	// IMP=0x00100000001ed950
- (void)_completeOperation;	// IMP=0x00100000001ed823
- (void)main;	// IMP=0x00100000001ed55b
- (void)start;	// IMP=0x00100000001ed4ad
- (id)initWithPhotoInfo:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ed3bd

@end

