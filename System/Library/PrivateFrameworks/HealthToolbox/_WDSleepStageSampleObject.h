//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKCategorySample, NSDateInterval, NSString;

__attribute__((visibility("hidden")))
@interface _WDSleepStageSampleObject : NSObject
{
    HKCategorySample *_sample;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000043240
@property(readonly, nonatomic) HKCategorySample *sample; // @synthesize sample=_sample;
- (id)device;	// IMP=0x000000000004322e
- (id)source;	// IMP=0x0000000000043226
@property(readonly, nonatomic) NSDateInterval *dateInterval;
- (id)initWithSample:(id)arg1;	// IMP=0x000000000004312c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
