//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHDDataValuesCollection : NSObject
{
    struct __CFData *mPackedValues;	// 8 = 0x8
    unsigned long long mDataValueCount;	// 16 = 0x10
    struct __CFDictionary *mIndexToDataValueMap;	// 24 = 0x18
    _Bool mContainsStringValue;	// 32 = 0x20
}

- (id)description;	// IMP=0x000000000038cd6c
- (_Bool)containsStringValue;	// IMP=0x000000000018a893
- (void)finishReading;	// IMP=0x000000000017b2fe
- (unsigned long long)maxDataPointIndex;	// IMP=0x000000000038cd33
- (id)dataValueWithIndex:(unsigned long long)arg1;	// IMP=0x00000000001ee52b
- (id)contentFormatAtIndex:(unsigned long long)arg1 resources:(id)arg2;	// IMP=0x000000000038cc70
- (id)dataValueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000185c68
- (struct CHDDataPoint *)dataPointWithIndex:(unsigned long long)arg1;	// IMP=0x00000000001ee5b5
- (struct CHDDataPoint *)dataPointAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017b38f
- (_Bool)addDataValue:(id)arg1;	// IMP=0x00000000001edbb4
- (_Bool)addDataPoint:(struct CHDDataPoint *)arg1;	// IMP=0x000000000017b155
- (unsigned long long)count;	// IMP=0x000000000017ae3b
- (void)dealloc;	// IMP=0x000000000017dd29
- (void)resetWithDataPointCount:(unsigned long long)arg1;	// IMP=0x0000000000241078
- (id)initWithDataPointCount:(unsigned long long)arg1;	// IMP=0x000000000017af98
- (id)init;	// IMP=0x000000000017ac90
- (void)cleanup;	// IMP=0x000000000017dda9
- (void)setupBufferForValues:(unsigned long long)arg1;	// IMP=0x000000000017ad0a

@end
