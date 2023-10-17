//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (EmailFoundationAdditions)
- (id)ef_popElement;	// IMP=0x006000000001983e
- (id)ef_removeFirst;	// IMP=0x00600000000197bd
- (void)ef_trimToCount:(unsigned long long)arg1 fromStart:(_Bool)arg2;	// IMP=0x0060000000019764
- (void)ef_addOptionalObject:(id)arg1;	// IMP=0x0060000000019715
- (unsigned long long)ef_removeObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;	// IMP=0x0060000000019646
- (unsigned long long)ef_removeObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x00600000000195a4
- (unsigned long long)ef_insertObjectIfAbsent:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x0060000000019477
- (unsigned long long)ef_insertObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 allowDuplicates:(_Bool)arg4;	// IMP=0x006000000001939e
- (unsigned long long)ef_insertObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2 allowDuplicates:(_Bool)arg3;	// IMP=0x0060000000019280
- (unsigned long long)ef_insertObject:(id)arg1 usingSortDescriptors:(id)arg2;	// IMP=0x0060000000018fd7
- (void)ef_reverseObjects;	// IMP=0x0060000000018ecd
- (void)ef_addAbsentObjectsFromArrayAccordingToEquals:(id)arg1;	// IMP=0x0060000000018d64
- (void)ef_moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x0060000000018cd2
- (void)ef_addObject:(id)arg1 orPlaceholder:(id)arg2;	// IMP=0x0060000000018cb8
- (_Bool)ef_addObjectIfAbsentAccordingToEquals:(id)arg1;	// IMP=0x0060000000018c38
- (_Bool)ef_addObjectIfAbsent:(id)arg1;	// IMP=0x0060000000018bb8
@end
