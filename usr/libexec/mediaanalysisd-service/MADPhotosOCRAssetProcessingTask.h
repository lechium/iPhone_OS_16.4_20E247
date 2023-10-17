//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSMutableArray, NSMutableDictionary, NSObject, VCPDatabaseWriter;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MADPhotosOCRAssetProcessingTask
{
    NSMutableArray *_assetEntries;	// 8 = 0x8
    VCPDatabaseWriter *_analysisDatabase;	// 16 = 0x10
    _Bool _allowDownload;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_downloadGroup;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_downloadStateQueue;	// 40 = 0x28
    NSMutableDictionary *_downloadRequestIDs;	// 48 = 0x30
    NSDate *_downloadStateChange;	// 56 = 0x38
    int _downloadStatus;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_computeGroup;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_computeQueue;	// 80 = 0x50
    int _status;	// 88 = 0x58
}

+ (id)taskWithAnalysisDatabase:(id)arg1;	// IMP=0x0040000000056234
- (void).cxx_destruct;	// IMP=0x002000000005c3ce
- (void)publish;	// IMP=0x001000000005c3a0
- (int)_publish;	// IMP=0x001000000005b27d
- (void)process;	// IMP=0x001000000005b24f
- (int)_process;	// IMP=0x001000000005a59a
- (void)processAssetEntry:(id)arg1 resource:(id)arg2 resourceURL:(id)arg3;	// IMP=0x00100000000590a5
- (id)remoteResourceForAsset:(id)arg1 withAcceptableResources:(id)arg2;	// IMP=0x0010000000058e3b
- (id)localResourceForAsset:(id)arg1 withAcceptableResources:(id)arg2;	// IMP=0x0010000000058cb5
- (id)acceptableResourcesForAsset:(id)arg1 withResources:(id)arg2;	// IMP=0x0010000000058661
- (void)prepare;	// IMP=0x001000000005863a
- (int)_prepare;	// IMP=0x00100000000580f2
- (void)download;	// IMP=0x001000000005706c
- (void)cancelRemainingDownloadsWithStatus:(int)arg1;	// IMP=0x0010000000056d7c
- (double)downloadInactiveTimeInterval;	// IMP=0x0010000000056c5e
- (int)removeDownloadRequestIDForAsset:(id)arg1;	// IMP=0x0010000000056a1f
- (void)addDownloadRequestID:(int)arg1 forAsset:(id)arg2;	// IMP=0x0010000000056894
- (void)addAsset:(id)arg1 withPreviousStatus:(unsigned long long)arg2;	// IMP=0x0010000000056518
- (int)status;	// IMP=0x0010000000056508
- (unsigned long long)count;	// IMP=0x00100000000564eb
- (void)dealloc;	// IMP=0x0010000000056291
- (id)initWithAnalysisDatabase:(id)arg1;	// IMP=0x00100000000560c2

@end
