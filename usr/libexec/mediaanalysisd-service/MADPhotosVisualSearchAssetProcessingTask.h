//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, VCPDatabaseWriter, VCPObjectPool;

@interface MADPhotosVisualSearchAssetProcessingTask
{
    NSMutableArray *_assetEntries;	// 8 = 0x8
    VCPObjectPool *_servicePool;	// 16 = 0x10
    VCPDatabaseWriter *_analysisDatabase;	// 24 = 0x18
    int _status;	// 32 = 0x20
}

+ (int)concurrentAssetCount;	// IMP=0x00400000000a6be9
+ (id)taskWithServicePool:(id)arg1 analysisDatabase:(id)arg2;	// IMP=0x00100000000a6b5d
- (void).cxx_destruct;	// IMP=0x00200000000a99a0
- (void)publish;	// IMP=0x00100000000a9972
- (int)_publish;	// IMP=0x00100000000a8c96
- (void)process;	// IMP=0x00100000000a8c68
- (int)_process;	// IMP=0x00100000000a7426
- (void)prepare;	// IMP=0x00100000000a73ff
- (int)_prepare;	// IMP=0x00100000000a6f9d
- (void)addAsset:(id)arg1 withPreviousStatus:(unsigned long long)arg2;	// IMP=0x00100000000a6c21
- (int)status;	// IMP=0x00100000000a6c11
- (unsigned long long)count;	// IMP=0x00100000000a6bf4
- (id)initWithServicePool:(id)arg1 analysisDatabase:(id)arg2;	// IMP=0x00100000000a6a60

@end
