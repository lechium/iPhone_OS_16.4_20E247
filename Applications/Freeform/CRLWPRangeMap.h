//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLWPRangeMap : NSObject
{
    struct _NSRange _subRange;	// 8 = 0x8
    vector_43d7697b _unmappedIndexes;	// 24 = 0x18
    vector_43d7697b _mappedIndexes;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x002000000034bf3d
- (void).cxx_destruct;	// IMP=0x001000000034bf03
@property(nonatomic) vector_43d7697b mappedIndexes; // @synthesize mappedIndexes=_mappedIndexes;
@property(nonatomic) vector_43d7697b unmappedIndexes; // @synthesize unmappedIndexes=_unmappedIndexes;
@property(nonatomic) struct _NSRange subRange; // @synthesize subRange=_subRange;
- (void)adjustByDelta:(long long)arg1 startingAt:(unsigned long long)arg2;	// IMP=0x001000000034be24
- (struct _NSRange)unmappedCharRange:(struct _NSRange)arg1;	// IMP=0x001000000034bdba
- (struct _NSRange)mappedCharRange:(struct _NSRange)arg1;	// IMP=0x001000000034b889
- (unsigned long long)p_extendRightMappedIndex:(unsigned long long)arg1;	// IMP=0x001000000034b82e
- (unsigned long long)p_extendLeftMappedIndex:(unsigned long long)arg1;	// IMP=0x001000000034b7ca
- (unsigned long long)unmappedCharIndex:(unsigned long long)arg1;	// IMP=0x001000000034b279
- (unsigned long long)mappedCharIndex:(unsigned long long)arg1;	// IMP=0x001000000034af46
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedIndexes:(const void *)arg2 affinity:(int)arg3;	// IMP=0x001000000034a7a9
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedIndexes:(const void *)arg2 isBackwardAffinities:(const void *)arg3;	// IMP=0x001000000034a44b
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedPairIndexes:(const void *)arg2;	// IMP=0x0010000000349ee4

@end
