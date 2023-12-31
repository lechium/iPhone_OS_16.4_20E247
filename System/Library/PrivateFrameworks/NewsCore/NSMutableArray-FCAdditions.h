//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (FCAdditions)
- (void)fc_rotateRightWithCount:(unsigned long long)arg1;	// IMP=0x002000000013b5e8
- (void)fc_reverseObjects;	// IMP=0x002000000013b56a
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObjects:(id)arg2;	// IMP=0x002000000013b3ab
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObject:(id)arg2;	// IMP=0x002000000013b344
- (void)fc_safelyAddObjectsFromArray:(id)arg1;	// IMP=0x002000000013b326
- (void)fc_safelyAddObject:(id)arg1;	// IMP=0x002000000013b30d
- (void)fc_trimFromFrontToMaxCount:(unsigned long long)arg1;	// IMP=0x002000000013b2d0
- (void)fc_trimToMaxCount:(unsigned long long)arg1;	// IMP=0x002000000013b292
- (void)fc_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x002000000013b203
- (void)fc_insertObjects:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;	// IMP=0x002000000013b05a
- (void)fc_insertObject:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;	// IMP=0x002000000013aefd
- (void)fc_removeObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x002000000013ae54
- (id)fc_popLastObject;	// IMP=0x002000000013ae0c
- (id)fc_popLeadingObjectsOfCount:(unsigned long long)arg1;	// IMP=0x002000000013ad7e
- (id)fc_safelyPopFirstObject;	// IMP=0x002000000013ad18
- (id)fc_popFirstObject;	// IMP=0x002000000013accc
- (void)fc_removeFirstObject;	// IMP=0x002000000013acb8
- (void)fc_removeObject:(id)arg1 sortedUsingSelector:(SEL)arg2;	// IMP=0x002000000013ab8c
- (void)fc_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;	// IMP=0x002000000013aa60
- (id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x002000000013aa4d
- (void)fc_safelyAddStringIfNonNilAndNotZeroLength:(id)arg1;	// IMP=0x002000000013b659
- (void)fc_rotateRightWithCount:(unsigned long long)arg1;	// IMP=0x00200000002efe57
- (void)fc_reverseObjects;	// IMP=0x00200000002efdd9
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObjects:(id)arg2;	// IMP=0x00200000002efc1a
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObject:(id)arg2;	// IMP=0x00200000002efbb3
- (void)fc_safelyAddObjectsFromArray:(id)arg1;	// IMP=0x00200000002efb95
- (void)fc_safelyAddObject:(id)arg1;	// IMP=0x00200000002efb7c
- (void)fc_trimFromFrontToMaxCount:(unsigned long long)arg1;	// IMP=0x00200000002efb3f
- (void)fc_trimToMaxCount:(unsigned long long)arg1;	// IMP=0x00200000002efb01
- (void)fc_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00200000002efa72
- (void)fc_insertObjects:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;	// IMP=0x00200000002ef8c9
- (void)fc_insertObject:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;	// IMP=0x00200000002ef76c
- (void)fc_removeObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00200000002ef6c3
- (id)fc_popLastObject;	// IMP=0x00200000002ef67b
- (id)fc_popLeadingObjectsOfCount:(unsigned long long)arg1;	// IMP=0x00200000002ef5ed
- (id)fc_safelyPopFirstObject;	// IMP=0x00200000002ef587
- (id)fc_popFirstObject;	// IMP=0x00200000002ef53b
- (void)fc_removeFirstObject;	// IMP=0x00200000002ef527
- (void)fc_removeObject:(id)arg1 sortedUsingSelector:(SEL)arg2;	// IMP=0x00200000002ef3fb
- (void)fc_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;	// IMP=0x00200000002ef2cf
- (id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x00200000002ef2bc
- (void)fc_safelyAddStringIfNonNilAndNotZeroLength:(id)arg1;	// IMP=0x00200000002efec8
@end

