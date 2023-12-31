//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BUCoalescingCallBlock, CHSTimelineController;

@interface BDSWidgetCenterManager : NSObject
{
    _Bool _shouldDonateRelevance;	// 8 = 0x8
    BUCoalescingCallBlock *_coalescingBlock;	// 16 = 0x10
    CHSTimelineController *_timelineController;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0040000000040a2f
- (void).cxx_destruct;	// IMP=0x002000000004127a
@property(nonatomic) _Bool shouldDonateRelevance; // @synthesize shouldDonateRelevance=_shouldDonateRelevance;
@property(retain, nonatomic) CHSTimelineController *timelineController; // @synthesize timelineController=_timelineController;
@property(retain, nonatomic) BUCoalescingCallBlock *coalescingBlock; // @synthesize coalescingBlock=_coalescingBlock;
- (void)reloadWidgetTimelinesWithShouldDonateRelevance:(_Bool)arg1;	// IMP=0x0010000000040f76
- (id)init;	// IMP=0x0010000000040ab4

@end

