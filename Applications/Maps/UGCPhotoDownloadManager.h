//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface UGCPhotoDownloadManager : NSObject
{
    NSCache *_imageCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSOperationQueue *_downloadOperationQueue;	// 24 = 0x18
    NSOperationQueue *_completionOperationQueue;	// 32 = 0x20
}

+ (id)sharedDownloadManager;	// IMP=0x0040000000328764
+ (id)generateRandomizedDownloadTokenForClass:(Class)arg1;	// IMP=0x0010000000328662
- (void).cxx_destruct;	// IMP=0x002000000032a605
- (id)_cachedImageForDownloadIdentifier:(id)arg1;	// IMP=0x001000000032a598
- (void)_updateCacheWithImage:(id)arg1 forDownloadIdentifier:(id)arg2;	// IMP=0x001000000032a402
- (_Bool)_canCancelDownloadOperation:(id)arg1;	// IMP=0x001000000032a21c
- (id)_completionOperationForPhotoInfo:(id)arg1 downloadToken:(id)arg2;	// IMP=0x0010000000329f45
- (id)_currentDownloadOperationForPhotoInfo:(id)arg1;	// IMP=0x0010000000329cc6
- (void)cancelRequestForPhotoInfo:(id)arg1 downloadToken:(id)arg2;	// IMP=0x0010000000329801
- (void)fetchImageForPhotoInfo:(id)arg1 callerIdentifier:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000032892c
- (void)fetchImageForPhotoInfo:(id)arg1 downloadToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003288d9
- (id)init;	// IMP=0x00100000003287b9

@end

