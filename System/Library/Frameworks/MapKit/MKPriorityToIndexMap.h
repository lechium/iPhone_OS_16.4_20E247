//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MKPriorityToIndexMap : NSObject
{
    NSMutableArray *_priorities;	// 8 = 0x8
    NSMutableDictionary *_prioritiesToIndexes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004b2b2
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000004b29c
- (_Bool)contains:(id)arg1;	// IMP=0x000000000004b265
- (_Bool)containsPriority:(double)arg1;	// IMP=0x000000000004b1f4
- (double)priorityOfIndex:(unsigned long long)arg1;	// IMP=0x000000000004b176
- (long long)indexOfPriority:(double)arg1;	// IMP=0x000000000004b0e6
- (id)nextPriorityFromPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;	// IMP=0x000000000004affc
- (void)appendRemainingPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;	// IMP=0x000000000004ae76
- (void)insertPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;	// IMP=0x000000000004ac29
- (_Bool)addPriorities:(id)arg1;	// IMP=0x000000000004a976
- (id)initWithPriorities:(id)arg1;	// IMP=0x000000000004a8d5
- (id)init;	// IMP=0x000000000004a8c1

@end
