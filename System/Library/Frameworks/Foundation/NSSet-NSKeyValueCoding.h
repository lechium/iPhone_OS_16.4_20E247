//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@interface NSSet (NSKeyValueCoding)
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x00500000004ebfe5
+ (_Bool)supportsSecureCoding;	// IMP=0x00500000004ebbd1
- (id)valueForKeyPath:(id)arg1;	// IMP=0x001000000045ac53
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000045ab47
- (id)valueForKey:(id)arg1;	// IMP=0x001000000045a8ed
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;	// IMP=0x001000000045a772
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;	// IMP=0x001000000045a603
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;	// IMP=0x001000000045a488
- (id)_minForKeyPath:(id)arg1;	// IMP=0x001000000045a32a
- (id)_maxForKeyPath:(id)arg1;	// IMP=0x001000000045a1cc
- (id)_countForKeyPath:(id)arg1;	// IMP=0x001000000045a197
- (id)_avgForKeyPath:(id)arg1;	// IMP=0x001000000045a11e
- (id)_sumForKeyPath:(id)arg1;	// IMP=0x0010000000459f3c
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x001000000046c5b1
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x001000000046c545
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x001000000046c4d9
- (id)filteredSetUsingPredicate:(id)arg1;	// IMP=0x00100000004c33f0
- (Class)classForCoder;	// IMP=0x00100000004ebfd4
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000004ebbd9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000004eb806
- (id)sortedArrayUsingDescriptors:(id)arg1;	// IMP=0x00100000004f1e90
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x0010000000585a5e
@end

