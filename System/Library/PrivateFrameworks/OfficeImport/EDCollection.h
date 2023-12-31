//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDCollection : NSObject
{
    NSMutableArray *mObjects;	// 8 = 0x8
}

+ (id)collectionWithObject:(id)arg1;	// IMP=0x001000000039f13a
+ (id)collection;	// IMP=0x0010000000139111
- (void).cxx_destruct;	// IMP=0x000000000039f263
- (id)description;	// IMP=0x000000000039f225
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000039f1b5
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000122f95
- (void)removeAllObjects;	// IMP=0x000000000039f19f
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000241e60
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000000116ff4
- (unsigned long long)addOrEquivalentObject:(id)arg1;	// IMP=0x0000000000116f7e
- (unsigned long long)addObject:(id)arg1;	// IMP=0x0000000000112f41
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000012160e
- (unsigned long long)count;	// IMP=0x0000000000113363
- (unsigned long long)hash;	// IMP=0x0000000000227656
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001eb88e
- (_Bool)isEqualToCollection:(id)arg1;	// IMP=0x00000000001ee92f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002277ba
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000234fb7
- (id)init;	// IMP=0x000000000011266f

@end

