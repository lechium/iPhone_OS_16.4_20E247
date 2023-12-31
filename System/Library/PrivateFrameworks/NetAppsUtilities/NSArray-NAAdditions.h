//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (NAAdditions)
+ (id)na_arrayWithTerminator:(id)arg1 nullableObjects:(id)arg2;	// IMP=0x005000000000f2d3
+ (id)na_arrayWithSafeObject:(id)arg1;	// IMP=0x005000000000f295
+ (id)na_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(CDUnknownBlockType)arg2;	// IMP=0x005000000000f1fd
- (id)na_dictionaryByBucketingObjectsUsingKeyGenerator:(CDUnknownBlockType)arg1;	// IMP=0x001000000000efb4
- (id)na_dictionaryWithKeyGenerator:(CDUnknownBlockType)arg1;	// IMP=0x001000000000edf1
- (id)na_arrayByFlattening;	// IMP=0x001000000000ecb7
- (void)na_each:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ec18
- (_Bool)na_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000eb01
- (_Bool)na_all:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e9cb
- (_Bool)na_any:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e8b4
- (id)na_filter:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e7de
- (id)na_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e61c
- (id)na_map:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e45a
- (id)na_arrayWithResultsOfBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e327
- (id)na_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e1ba
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e01e
- (_Bool)na_safeContainsObject:(id)arg1;	// IMP=0x001000000000e003
@end

