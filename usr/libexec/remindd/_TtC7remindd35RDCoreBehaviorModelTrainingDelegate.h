//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7remindd35RDCoreBehaviorModelTrainingDelegate : NSObject
{
    MISSING_TYPE *trainingDataFrame;	// 8 = 0x8
    MISSING_TYPE *intentWords;	// 112 = 0x70
    MISSING_TYPE *timer;	// 120 = 0x78
    MISSING_TYPE *metrics;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00400000004a3af0
- (id)init;	// IMP=0x00100000004a3a90
- (id)eventsForTypes:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004a39d0
- (id)taskSpecificEventProvidersForMiningTask:(id)arg1;	// IMP=0x00100000004a3950
- (void)miningTask:(id)arg1 didExtractRules:(id)arg2;	// IMP=0x00100000004a3870
- (void)miningTaskDidFinish:(id)arg1;	// IMP=0x00100000004a3820
- (id)miningTask:(id)arg1 filteredRulesForExtractedRules:(id)arg2;	// IMP=0x00100000004a33b0

@end
