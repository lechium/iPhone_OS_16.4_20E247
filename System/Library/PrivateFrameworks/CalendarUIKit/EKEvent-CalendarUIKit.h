//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/EKEvent.h>

@interface EKEvent (CalendarUIKit)
+ (_Bool)updateVirtualConference:(id)arg1 replacing:(id)arg2 with:(id)arg3;	// IMP=0x008000000001a38e
+ (id)actionStringsPluralDisplayName;	// IMP=0x008000000003206f
+ (id)actionStringsDisplayName;	// IMP=0x008000000003201b
- (_Bool)CUIK_deleteActionShouldDeclineEvent;	// IMP=0x0010000000010883
- (void)fixInvalidatedVirtualConferenceURLs:(long long)arg1;	// IMP=0x00100000000199a4
- (_Bool)CUIKEditingContext_removeWithSpan:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000001989b
- (_Bool)CUIKEditingContext_saveWithSpan:(long long)arg1 error:(id *)arg2;	// IMP=0x0010000000019785
- (id)actionStringsDisplayTitle;	// IMP=0x00100000000320c3
@end
