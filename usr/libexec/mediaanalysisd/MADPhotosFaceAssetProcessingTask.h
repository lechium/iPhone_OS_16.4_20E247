//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSMutableArray, NSMutableDictionary, NSObject, VCPDatabaseWriter, VCPFaceAnalyzer, VCPFaceClusterer;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MADPhotosFaceAssetProcessingTask
{
    VCPDatabaseWriter *_analysisDatabase;	// 8 = 0x8
    NSMutableArray *_assetEntries;	// 16 = 0x10
    VCPFaceAnalyzer *_faceAnalyzer;	// 24 = 0x18
    VCPFaceClusterer *_faceClusterer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_managementQueue;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_processGroup;	// 48 = 0x30
    unsigned long long _processingJobCount;	// 56 = 0x38
    unsigned long long _processingQueuesCount;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_downloadGroup;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_downloadStateQueue;	// 80 = 0x50
    NSMutableDictionary *_downloadRequestIDs;	// 88 = 0x58
    NSDate *_downloadStateChange;	// 96 = 0x60
    int _downloadStatus;	// 104 = 0x68
    int _status;	// 108 = 0x6c
}

+ (id)taskWithAnalysisDatabase:(id)arg1 andFaceClusterer:(id)arg2;	// IMP=0x004000000006d24a
+ (unsigned long long)_concurrentQueueCount;	// IMP=0x001000000006cfd7
+ (_Bool)_concurrentFaceAnalysis;	// IMP=0x001000000006cf7a
- (void).cxx_destruct;	// IMP=0x0020000000072c5d
- (void)publish;	// IMP=0x0010000000072c2f
- (int)_publish;	// IMP=0x0010000000071f26
- (void)_publishEntry:(id)arg1 faceLocalIdentifiers:(id *)arg2;	// IMP=0x0010000000070c06
- (void)process;	// IMP=0x0010000000070bd8
- (int)_process;	// IMP=0x0010000000070863
- (void)_dispatchAssetEntries;	// IMP=0x001000000006fe4f
- (void)_asyncAnalysisWithAssetEntry:(id)arg1 resource:(id)arg2 resourceURL:(id)arg3 isBestResource:(_Bool)arg4;	// IMP=0x001000000006f4ef
- (void)download;	// IMP=0x001000000006e5e5
- (void)cancelRemainingDownloadsWithStatus:(int)arg1;	// IMP=0x001000000006e2f5
- (double)downloadInactiveTimeInterval;	// IMP=0x001000000006e1d7
- (int)removeDownloadRequestIDForAsset:(id)arg1;	// IMP=0x001000000006df58
- (void)addDownloadRequestID:(int)arg1 forAsset:(id)arg2;	// IMP=0x001000000006ddcd
- (void)prepare;	// IMP=0x001000000006dda6
- (int)_prepare;	// IMP=0x001000000006d8d4
- (void)addAsset:(id)arg1 withPreviousStatus:(unsigned long long)arg2;	// IMP=0x001000000006d558
- (int)status;	// IMP=0x001000000006d548
- (unsigned long long)count;	// IMP=0x001000000006d52b
- (void)dealloc;	// IMP=0x001000000006d2de
- (id)initWithAnalysisDatabase:(id)arg1 andFaceCluster:(id)arg2;	// IMP=0x001000000006d017

@end

