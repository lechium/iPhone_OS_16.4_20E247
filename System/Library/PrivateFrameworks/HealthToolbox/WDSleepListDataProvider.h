//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WDSampleListDataProvider.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WDSleepListDataProvider : WDSampleListDataProvider
{
    NSMutableDictionary *_sleepData;	// 8 = 0x8
    NSMutableArray *_orderedKeys;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006be7c
- (id)viewControllerForItemAtIndexPath:(id)arg1;	// IMP=0x000000000006bdbf
- (void)deleteAllData;	// IMP=0x000000000006bd22
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(_Bool *)arg3;	// IMP=0x000000000006bbe8
- (id)secondaryTextForObject:(id)arg1;	// IMP=0x000000000006ba9b
- (id)textForObject:(id)arg1;	// IMP=0x000000000006b7bb
- (id)_durationFormatter;	// IMP=0x000000000006b648
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;	// IMP=0x000000000006b636
- (id)_sleepSampleAtIndex:(unsigned long long)arg1 section:(unsigned long long)arg2;	// IMP=0x000000000006b592
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;	// IMP=0x000000000006b50b
- (id)titleForSection:(unsigned long long)arg1;	// IMP=0x000000000006b481
- (unsigned long long)numberOfSections;	// IMP=0x000000000006b464
- (long long)cellStyle;	// IMP=0x000000000006b459
- (id)_sleepDataDictionaryFromSamples:(id)arg1;	// IMP=0x000000000006b040
- (void)_callUpdateHandler;	// IMP=0x000000000006ae71
- (id)sampleTypes;	// IMP=0x000000000006adbc

@end
