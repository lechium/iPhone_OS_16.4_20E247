//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface ICThumbnailCache : NSObject
{
    MISSING_TYPE *cache;	// 8 = 0x8
    MISSING_TYPE *persistedCache;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_cacheKeyQueueQos;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_cacheKeyQueue;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_objectIdentifiersToCacheKeys;	// 0 = 0x0
}

+ (id)shared;	// IMP=0x0010000000183620
- (void).cxx_destruct;	// IMP=0x0000000000186280
- (id)init;	// IMP=0x0000000000186220
- (void)invalidateForObjectIdentifiers:(id)arg1;	// IMP=0x0000000000185190
- (id)creationDateFor:(id)arg1;	// IMP=0x0000000000184120
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000001836d0
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000183650

@end

