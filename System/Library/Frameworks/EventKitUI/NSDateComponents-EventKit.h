//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (EventKit)
- (void)clearTimeComponents;	// IMP=0x00700000000d350f
- (_Bool)hasTimeComponents;	// IMP=0x00700000000d34b5
- (CDStruct_79f9e052)gregorianDate;	// IMP=0x00700000000d339b
- (id)dateComponentsForEndOfDay;	// IMP=0x00700000000d333e
- (id)dateComponentsForDateOnly;	// IMP=0x00700000000d3295
- (id)dateComponents:(unsigned long long)arg1 byAddingDays:(int)arg2 calendar:(id)arg3;	// IMP=0x00700000000d31ff
- (id)dateComponents:(unsigned long long)arg1 byAddingComponents:(id)arg2 calendar:(id)arg3;	// IMP=0x00700000000d30be
@end
