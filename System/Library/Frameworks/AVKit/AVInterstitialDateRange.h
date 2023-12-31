//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVInterstitialTimeRange.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface AVInterstitialDateRange : AVInterstitialTimeRange
{
    CDStruct_e83c9415 _mappedTimeRange;	// 112 = 0x70
    NSDate *_startDate;	// 160 = 0xa0
    NSDate *_endDate;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000009e804
@property(readonly) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;	// IMP=0x000000000009e745
- (_Bool)isEqualToInterstitialTimeRange:(id)arg1;	// IMP=0x000000000009e5ce
- (CDStruct_e83c9415)timeRange;	// IMP=0x000000000009e541
- (void)_setPlayerInterstitialEvent:(id)arg1;	// IMP=0x000000000009e500
- (void)_updateMappedStartTime;	// IMP=0x000000000009e2f1
- (void)setEndDate:(id)arg1;	// IMP=0x000000000009e24f
- (id)initWithStart:(id)arg1 end:(id)arg2;	// IMP=0x000000000009e011
- (id)_initWithTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000009df49
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000009df37

@end

