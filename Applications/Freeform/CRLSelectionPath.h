//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CRLSelectionPath : NSObject
{
    NSArray *_currentSelection;	// 8 = 0x8
}

+ (id)selectionPathWithSelectionArray:(id)arg1;	// IMP=0x0040000000595fc0
- (void).cxx_destruct;	// IMP=0x0020000000597b68
@property(readonly, nonatomic) NSString *UUIDDescription;
- (id)description;	// IMP=0x00100000005978f6
- (void)enumerateSelectionsLeastToMostSpecificInPathUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000005977a8
- (void)enumerateSelectionsMostToLeastSpecificInPathUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000059765a
- (id)leastSpecificSelectionOfClass:(Class)arg1;	// IMP=0x00100000005974f2
- (id)mostSpecificSelectionConformingToProtocol:(id)arg1;	// IMP=0x0010000000597374
- (id)mostSpecificSelectionOfClass:(Class)arg1;	// IMP=0x00100000005971fc
- (id)selectionPathByAppendingOrReplacingMostSpecificSelectionWithSelection:(id)arg1;	// IMP=0x00100000005970d7
- (id)selectionPathReplacingMostSpecificLocationOfSelection:(id)arg1 withSelection:(id)arg2;	// IMP=0x0010000000596a41
- (id)selectionPathPoppingToSelection:(id)arg1;	// IMP=0x001000000059679e
- (id)selectionPathPoppingOffSelection:(id)arg1;	// IMP=0x0010000000596516
- (id)selectionPathWithAppendedSelections:(id)arg1;	// IMP=0x00100000005960dc
- (id)selectionPathWithAppendedSelection:(id)arg1;	// IMP=0x001000000059600d
- (unsigned long long)indexForSelection:(id)arg1;	// IMP=0x0010000000595faa
- (id)selectionAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000595d98
@property(readonly, nonatomic) NSArray *orderedSelections;
- (unsigned long long)hash;	// IMP=0x0010000000595d74
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000595c0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000595c00
- (id)initWithSelectionArray:(id)arg1;	// IMP=0x0010000000595b59

@end
