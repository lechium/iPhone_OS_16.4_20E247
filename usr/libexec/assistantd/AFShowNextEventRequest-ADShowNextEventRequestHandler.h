//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFShowNextEventRequest.h>

@interface AFShowNextEventRequest (ADShowNextEventRequestHandler)
+ (id)nanoCalendarLaunchURLForEvent:(id)arg1;	// IMP=0x001000000024e148
+ (id)_calendarIDsForSyncHashes:(id)arg1 inCalendars:(id)arg2;	// IMP=0x001000000024dd60
- (id)_selectedCalendarsForEventStore:(id)arg1;	// IMP=0x002000000024da09
- (_Bool)_shouldExcludeEvent:(id)arg1 allowAllDayEvents:(_Bool)arg2;	// IMP=0x001000000024d8e3
- (id)_nextEventFromFilteredEvents:(id)arg1;	// IMP=0x001000000024d4c6
- (void)_ad_handleShowNextEventRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000024ce65
@end

