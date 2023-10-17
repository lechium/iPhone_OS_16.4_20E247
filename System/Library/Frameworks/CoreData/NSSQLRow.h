//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _CDSnapshot;

__attribute__((visibility("hidden")))
@interface NSSQLRow
{
    _CDSnapshot *_snapshot;	// 40 = 0x28
}

+ (unsigned int)newBatchRowAllocation:(id *)arg1 count:(unsigned int)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(id *)arg4 andTimestamp:(double)arg5;	// IMP=0x00100000001feedb
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001feed3
+ (void)initialize;	// IMP=0x00100000001fed34
- (id)_snapshot_;	// IMP=0x0000000000200f60
- (const id *)knownKeyValuesPointer;	// IMP=0x0000000000200f4d
- (unsigned int)_versionNumber;	// IMP=0x0000000000200360
- (void)setOptLock:(long long)arg1;	// IMP=0x000000000020034c
- (unsigned long long)version;	// IMP=0x0000000000200330
- (id)valueForKey:(id)arg1;	// IMP=0x00000000001fff18
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ffce8
- (void)setForeignOrderKeySlot:(unsigned int)arg1 orderKey:(unsigned int)arg2;	// IMP=0x00000000001ffcc0
- (void)setForeignEntityKeySlot:(unsigned int)arg1 entityKey:(unsigned int)arg2;	// IMP=0x00000000001ffc8b
- (void)setForeignKeySlot:(unsigned int)arg1 int64:(long long)arg2;	// IMP=0x00000000001ffbd5
- (void)setObjectID:(id)arg1;	// IMP=0x00000000001ffb91
- (id)objectID;	// IMP=0x00000000001ffb7c
- (id)description;	// IMP=0x00000000001ff5cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ff5b9
- (id)copy;	// IMP=0x00000000001ff451
- (id)newObjectIDForToOne:(id)arg1;	// IMP=0x00000000001ff246
- (void)dealloc;	// IMP=0x00000000001ff23c
- (id)initWithSQLEntity:(id)arg1 ownedObjectID:(id)arg2 andTimestamp:(double)arg3;	// IMP=0x00000000001ff12d
- (id)initWithSQLEntity:(id)arg1 objectID:(id)arg2;	// IMP=0x00000000001ff0ec

@end
