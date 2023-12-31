//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BFMCatalogServiceBridge;

@interface BDSMediaAPIService : NSObject
{
    BFMCatalogServiceBridge *_service;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000517c0
- (void).cxx_destruct;	// IMP=0x0020000000052232
@property(retain, nonatomic) BFMCatalogServiceBridge *service; // @synthesize service=_service;
- (void)fetchMixedAssetsWithBookIds:(id)arg1 audiobookIds:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052169
- (void)fetchAssetsWithAdamIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051d8d
- (void)fetchAssetWithAdamID:(id)arg1 type:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051b3c
- (void)fetchAssetWithAdamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051913
- (id)init;	// IMP=0x0010000000051815

@end

