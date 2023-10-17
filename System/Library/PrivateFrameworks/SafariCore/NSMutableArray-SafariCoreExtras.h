//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (SafariCoreExtras)
- (id)safari_takeFirstObject;	// IMP=0x0090000000043585
- (void)safari_insertObject:(id)arg1 inSortedOrderUsingComparator:(CDUnknownBlockType)arg2;	// IMP=0x00900000000434e6
- (void)safari_insertObjects:(id)arg1 afterObject:(id)arg2;	// IMP=0x0090000000043408
- (void)safari_insertObject:(id)arg1 afterObject:(id)arg2;	// IMP=0x0090000000043342
- (void)safari_removeObjectsAtIndexes:(id)arg1 withOffset:(long long)arg2 startingAtIndex:(unsigned long long)arg3;	// IMP=0x00900000000432a5
- (void)safari_removeObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0090000000043259
- (void)safari_setObject:(id)arg1 atIndex:(unsigned long long)arg2 withPaddingObject:(id)arg3;	// IMP=0x00900000000431af
- (void)safari_addObjectsFromArrayUnlessNil:(id)arg1;	// IMP=0x0090000000043196
- (void)safari_addObjectUnlessNil:(id)arg1;	// IMP=0x009000000004317d
@end
