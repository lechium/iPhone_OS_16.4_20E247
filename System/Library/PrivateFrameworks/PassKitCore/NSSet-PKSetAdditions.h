//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@interface NSSet (PKSetAdditions)
- (id)pk_mutableArrayCopy;	// IMP=0x00600000000772b8
- (id)pk_arrayCopy;	// IMP=0x006000000007725b
- (id)pk_anyObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00600000000770f9
- (_Bool)pk_hasObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0060000000076fb3
- (id)pk_setByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0060000000076db9
- (id)pk_setByRemovingObject:(id)arg1;	// IMP=0x0060000000076d47
- (id)deepCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000004e68bd
- (id)jsonString;	// IMP=0x00600000004e686d
@end
