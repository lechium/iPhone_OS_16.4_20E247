//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID;

__attribute__((visibility("hidden")))
@interface _CDSnapshot : NSObject
{
    int _cd_rc;	// 8 = 0x8
    int _cd_version;	// 12 = 0xc
    NSManagedObjectID *_cd_objectID;	// 16 = 0x10
    struct _snapshotFlags_st {
        unsigned int _readOnly:1;
        unsigned int _reservedFlags:7;
    } _cd_flags;	// 24 = 0x18
    unsigned char _cd_nullFlags_;	// 28 = 0x1c
}

+ (unsigned int)newBatchAllocation:(id *)arg1 count:(unsigned int)arg2 withOwnedObjectIDs:(id *)arg3;	// IMP=0x001000000024f3b7
+ (void)_entityDeallocated;	// IMP=0x001000000024f19f
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000024f193
+ (id)alloc;	// IMP=0x001000000024f187
+ (Class)classForEntity:(id)arg1;	// IMP=0x001000000024e350
+ (void)initialize;	// IMP=0x001000000024e2e0
+ (void)_invalidateStaticCaches;	// IMP=0x001000000024dd40
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002500af
- (id)valueForKey:(id)arg1;	// IMP=0x000000000024ff8c
- (id)description;	// IMP=0x000000000024f6fc
- (void)dealloc;	// IMP=0x000000000024f68d
- (_Bool)_isDeallocating;	// IMP=0x000000000024f674
- (_Bool)_tryRetain;	// IMP=0x000000000024f63e
- (unsigned long long)retainCount;	// IMP=0x000000000024f62d
- (oneway void)release;	// IMP=0x000000000024f5f6
- (id)retain;	// IMP=0x000000000024f5dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024f5d0
- (unsigned long long)hash;	// IMP=0x000000000024f568
- (id)mutableCopy;	// IMP=0x000000000024f4a7
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024f495
- (id)copy;	// IMP=0x000000000024f45c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024f44a

@end

