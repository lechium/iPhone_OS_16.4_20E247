//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (CDRound)
- (id)cd_dateWithCeilingForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;	// IMP=0x0020000000032a9f
- (id)cd_dateWithFloorForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;	// IMP=0x0020000000032a09
- (id)cd_dateWithCeilingForAlignment:(double)arg1;	// IMP=0x0020000000032973
- (id)cd_dateWithFloorForAlignment:(double)arg1;	// IMP=0x00200000000328e7
- (int)slotFromMidnightWithTotalSlotsInDay:(int)arg1;	// IMP=0x002000000009f0a1
- (id)floorDateWithTotalSlotsInDay:(int)arg1;	// IMP=0x002000000009f02e
- (double)timeSinceMidnight:(id *)arg1;	// IMP=0x002000000009eefd
- (id)dedup;	// IMP=0x0020000000105ea1
- (id)dk_dedup;	// IMP=0x0020000000105c18
@end

