//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface TabSnapshotCacheContext : NSObject
{
    _Bool _updating;	// 8 = 0x8
    NSOrderedSet *_identifiersToCache;	// 16 = 0x10
    unsigned long long _capacity;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001e594e
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(retain, nonatomic) NSOrderedSet *identifiersToCache; // @synthesize identifiersToCache=_identifiersToCache;
- (id)description;	// IMP=0x00000000001e587e

@end

