//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUWallpaperExportProgress : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSArray *_assetUUIDs;	// 16 = 0x10
    double _totalWork;	// 24 = 0x18
    NSMutableDictionary *_downloadProgress;	// 32 = 0x20
    NSMutableDictionary *_processingProgress;	// 40 = 0x28
    CDUnknownBlockType _progressHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000177671
@property(readonly, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) NSMutableDictionary *processingProgress; // @synthesize processingProgress=_processingProgress;
@property(readonly, nonatomic) NSMutableDictionary *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(readonly, nonatomic) double totalWork; // @synthesize totalWork=_totalWork;
@property(readonly, nonatomic) NSArray *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
- (void)_updateProgressValue:(double)arg1 forAssetUUID:(id)arg2 inDictionary:(id)arg3;	// IMP=0x0000000000177347
- (void)finish;	// IMP=0x0000000000177329
- (void)begin;	// IMP=0x0000000000177310
- (void)reportProcessingProgress:(double)arg1 forAssetUUID:(id)arg2;	// IMP=0x00000000001772fa
- (void)reportDownloadProgress:(double)arg1 forAssetUUID:(id)arg2;	// IMP=0x00000000001772e4
- (id)initWithAssetUUIDs:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000177198
- (id)init;	// IMP=0x000000000017711e

@end
