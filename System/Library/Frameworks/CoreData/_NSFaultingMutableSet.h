//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableSet.h>

@class NSManagedObject, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableSet : NSMutableSet
{
    int _cd_rc;	// 8 = 0x8
    struct _NSFaultingMutableSetFlags _flags;	// 12 = 0xc
    id _realSet;	// 16 = 0x10
    NSManagedObject *_source;	// 24 = 0x18
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000005cbd1
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000005b4d4
+ (id)alloc;	// IMP=0x006000000005b4c8
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x006000000005b16a
- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x000000000005cbe2
- (Class)classForCoder;	// IMP=0x000000000005cbc0
- (id)valueForKeyPath:(id)arg1;	// IMP=0x000000000005cb7b
- (id)valueForKey:(id)arg1;	// IMP=0x000000000005cb36
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005caec
- (void)setSet:(id)arg1;	// IMP=0x000000000005caa1
- (void)unionSet:(id)arg1;	// IMP=0x000000000005ca56
- (void)removeAllObjects;	// IMP=0x000000000005ca2a
- (void)minusSet:(id)arg1;	// IMP=0x000000000005c9c3
- (void)intersectSet:(id)arg1;	// IMP=0x000000000005c978
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x000000000005c773
- (void)removeObject:(id)arg1;	// IMP=0x000000000005c696
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x000000000005c64c
- (void)makeObjectsPerformSelector:(SEL)arg1;	// IMP=0x000000000005c607
- (_Bool)isSubsetOfSet:(id)arg1;	// IMP=0x000000000005c5ba
- (_Bool)_isIdenticalFault:(id)arg1;	// IMP=0x000000000005c501
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005c4b9
- (_Bool)isEqualToSet:(id)arg1;	// IMP=0x000000000005c3cb
- (_Bool)intersectsSet:(id)arg1;	// IMP=0x000000000005c37e
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000005c2ff
- (id)anyObject;	// IMP=0x000000000005c25f
- (id)allObjects;	// IMP=0x000000000005c229
- (void)getObjects:(id *)arg1;	// IMP=0x000000000005c1f8
- (id)objectEnumerator;	// IMP=0x000000000005c1c2
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000005c178
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000005c12e
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000005c0d5
- (void)addObject:(id)arg1;	// IMP=0x000000000005bff8
- (id)member:(id)arg1;	// IMP=0x000000000005bf4b
- (unsigned long long)count;	// IMP=0x000000000005bf1f
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000005be3f
- (id)description;	// IMP=0x000000000005bd6a
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005bcf3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005ba99
@property(readonly, nonatomic) NSPropertyDescription *relationship;
@property(readonly, nonatomic) NSManagedObject *source;
- (void)turnIntoFault;	// IMP=0x000000000005b993
- (_Bool)_shouldProcessKVOChange;	// IMP=0x000000000005b98b
- (void)willReadWithContents:(id)arg1;	// IMP=0x000000000005b5cc
- (void)willRead;	// IMP=0x000000000005b566
@property(readonly, nonatomic, getter=isFault) _Bool fault;
- (void)dealloc;	// IMP=0x000000000005b4e0
- (_Bool)_isDeallocating;	// IMP=0x000000000005b4a8
- (_Bool)_tryRetain;	// IMP=0x000000000005b46b
- (unsigned long long)retainCount;	// IMP=0x000000000005b453
- (oneway void)release;	// IMP=0x000000000005b415
- (id)retain;	// IMP=0x000000000005b3f4
- (id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4;	// IMP=0x000000000005b2bf
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(_Bool)arg3;	// IMP=0x000000000005b172

@end

