//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EKEventProposedTimeDetailItem
{
    NSMutableDictionary *_cellForAttendee;	// 40 = 0x28
    NSArray *_attendeesWithProposedTimes;	// 48 = 0x30
    _Bool _visibilityChanged;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001bb4d9
- (_Bool)detailItemVisibilityChanged;	// IMP=0x00000000001bb4c9
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000001bb3a8
- (id)attendeeForIndex:(unsigned long long)arg1;	// IMP=0x00000000001bb356
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001bb34e
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001bb12e
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;	// IMP=0x00000000001bb0c1
- (unsigned long long)numberOfSubitems;	// IMP=0x00000000001bb0a4
- (void)_updateCellsIfNeededForWidth:(double)arg1;	// IMP=0x00000000001bb06b
- (void)setCellPosition:(int)arg1;	// IMP=0x00000000001bb03c
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;	// IMP=0x00000000001bacab
- (void)reset;	// IMP=0x00000000001bac33

@end
