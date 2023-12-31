//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WDSampleListDataProvider.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WDSleepStageListDataProvider : WDSampleListDataProvider
{
    NSMutableDictionary *_sleepData;	// 8 = 0x8
    NSMutableArray *_orderedKeys;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000055e72
@property(readonly, nonatomic) NSMutableArray *orderedKeys; // @synthesize orderedKeys=_orderedKeys;
@property(readonly, nonatomic) NSMutableDictionary *sleepData; // @synthesize sleepData=_sleepData;
- (id)viewControllerForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000055ca2
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000055ba7
- (void)deleteAllData;	// IMP=0x0000000000055b0a
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(_Bool *)arg3;	// IMP=0x000000000005586c
- (id)secondaryTextForObject:(id)arg1;	// IMP=0x0000000000055722
- (id)textForObject:(id)arg1;	// IMP=0x00000000000554ad
- (id)_durationFormatter;	// IMP=0x000000000005533c
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;	// IMP=0x000000000005532a
- (id)_sleepSampleBucketAtIndex:(unsigned long long)arg1 section:(unsigned long long)arg2;	// IMP=0x0000000000055286
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;	// IMP=0x00000000000551ff
- (id)titleForSection:(unsigned long long)arg1;	// IMP=0x0000000000055175
- (unsigned long long)numberOfSections;	// IMP=0x0000000000055158
- (long long)cellStyle;	// IMP=0x000000000005514d
- (id)_sleepDataDictionaryFromSamples:(id)arg1;	// IMP=0x0000000000054c54
- (void)_callUpdateHandler;	// IMP=0x0000000000054a85
- (id)sampleTypes;	// IMP=0x00000000000549d0

@end

