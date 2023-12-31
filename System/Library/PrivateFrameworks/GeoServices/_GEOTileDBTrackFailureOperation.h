//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOTileDBTrackFailureOperation : NSObject
{
    struct _GEOTileKey _key;	// 8 = 0x8
    CDUnion_20bcf645 _tileSet;	// 24 = 0x18
    _Bool _shouldProactivelyLoad;	// 28 = 0x1c
}

- (id)dataForKey:(const struct _GEOTileKey *)arg1 ETag:(id *)arg2 originalLoadReason:(unsigned char *)arg3 isKnownNotToExist:(_Bool *)arg4;	// IMP=0x00000000002f7e39
- (_Bool)isSupercededByOperation:(id)arg1;	// IMP=0x00000000002f7d58
- (void)performWithDB:(id)arg1;	// IMP=0x00000000002f7d34
- (_Bool)canIncreaseDataSizeInDB;	// IMP=0x00000000002f7d2c
@property(readonly, nonatomic) unsigned long long sizeInBytes;
@property(readonly, nonatomic) struct _GEOTileKey *key;
- (id)initWithTileKey:(const struct _GEOTileKey *)arg1 tileSet:(CDUnion_20bcf645)arg2 shouldProactivelyLoad:(_Bool)arg3;	// IMP=0x00000000002f7ca3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

