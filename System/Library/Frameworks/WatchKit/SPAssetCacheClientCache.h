//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SPAssetCacheClientCache : NSObject
{
    NSString *_gizmoCacheIdentifier;	// 8 = 0x8
    NSMutableDictionary *_assets;	// 16 = 0x10
    NSMutableArray *_keys;	// 24 = 0x18
    long long _size;	// 32 = 0x20
    unsigned long long _cacheType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000376b1
@property(nonatomic) unsigned long long cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSMutableArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSMutableDictionary *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) NSString *gizmoCacheIdentifier; // @synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier;
- (id)dataForImageWithName:(id)arg1;	// IMP=0x0000000000037573
- (void)deleteDataForAsset:(id)arg1;	// IMP=0x000000000003741e
- (_Bool)saveAssetData:(id)arg1 forAsset:(id)arg2;	// IMP=0x0000000000037220
- (void)clearedCache;	// IMP=0x000000000003721a
- (id)cachedImages;	// IMP=0x0000000000036fb6
- (void)deleteAllAssets;	// IMP=0x0000000000036d04
- (void)deletedAssetWithName:(id)arg1;	// IMP=0x0000000000036c80
- (void)deleteAssetWithName:(id)arg1;	// IMP=0x0000000000036c35
- (void)deleteAsset:(id)arg1;	// IMP=0x0000000000036a74
- (_Bool)checkAvailableSpaceForAssetWithName:(id)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000369ff
- (void)clearSpaceForAsset:(unsigned long long)arg1;	// IMP=0x0000000000036819
- (void)addedAssetWithName:(id)arg1;	// IMP=0x00000000000367b2
- (_Bool)addAsset:(id)arg1 withName:(id)arg2 sendImage:(_Bool)arg3;	// IMP=0x0000000000036334
- (void)syncAssets:(id)arg1;	// IMP=0x0000000000035d45
- (id)pathForAssetDataWithName:(id)arg1;	// IMP=0x0000000000035c39
- (id)cacheDirectory;	// IMP=0x0000000000035a55
- (id)initWithIdentifier:(id)arg1 cacheType:(unsigned long long)arg2;	// IMP=0x0000000000035978

@end

