//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOTileKeyList, NSString;

@interface RouteTileLoadingDebugOverlay : NSObject
{
    GEOTileKeyList *_loadedKeys;	// 8 = 0x8
    GEOTileKeyList *_cachedKeys;	// 16 = 0x10
    GEOTileKeyList *_failedKeys;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000a8ed28
- (void)addFailedKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0010000000a8ecd3
- (void)addCachedTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0010000000a8ec6a
- (void)addLoadedTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0010000000a8ec01
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)init;	// IMP=0x0010000000a8eaea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

