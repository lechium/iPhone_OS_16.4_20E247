//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

__attribute__((visibility("hidden")))
@interface CADEventOperationGroup : CADOperationGroup
{
}

+ (void)monitorLocationAuthorizationStatusChanges:(unsigned long long)arg1;	// IMP=0x0010000000060e8b
+ (_Bool)requiresEventAccess;	// IMP=0x001000000005bdc0
- (void)CADDatabaseGetTTLLocationAuthorizationStatus:(CDUnknownBlockType)arg1;	// IMP=0x0000000000060e23
- (void)CADDatabaseGetAttachmentUUIDWithExternalID:(id)arg1 store:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060a33
- (void)CADDatabaseGetAttachmentWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000006076a
- (void)CADDatabaseShouldPermitOrganizerPhoneNumberFromJunkChecks:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000060616
- (void)CADDatabaseShouldPermitOrganizerEmailFromJunkChecks:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000604c2
- (void)CADOccurrencesExistInRangeForEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(_Bool)arg4 timezone:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x00000000000601ab
- (void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg1;	// IMP=0x0000000000060027
- (void)CADOccurrenceCacheSearchLocationsWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000005ff7d
- (void)CADOccurrenceCacheSearchWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000005fed3
- (void)CADOccurrenceCacheDoEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000005f820
- (void)CADOccurrenceCacheGetOccurrenceDateOfEventWithObjectID:(id)arg1 nearestDate:(id)arg2 prefersForwardSearch:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000005f5b5
- (void)CADOccurrenceCacheGetOccurrencesForCalendars:(id)arg1 onDay:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000005ef57
- (void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000005ec59
- (id)_mergeDaysAndOccurrenceCounts:(id)arg1 withCounts:(id)arg2;	// IMP=0x000000000005e669
- (_Bool)_CADDatabaseCanModifySuggestedEventCalendar;	// IMP=0x000000000005e60d
- (void)CADDatabaseCanModifySuggestedEventCalendar:(CDUnknownBlockType)arg1;	// IMP=0x000000000005e5bf
- (void)CADDatabaseGetAllEventsWithUniqueID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000005e322
- (void)CADDatabaseGetEventWithUniqueID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000005e087
- (void)CADDatabaseGetEventWithEventIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000005ddf1
- (void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000005dc5e
- (void)CADDatabaseInsertSuggestedEventCalendarWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000005dac8
- (void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d84a
- (void)CADDatabaseGetSuggestedEventCalendarWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d5cc
- (void)CADDatabaseSetBirthdayCalendarEnabled:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d57c
- (void)CADDatabaseGetBirthdayCalendarEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d52a
- (void)CADDatabaseGetOrCreateBirthdayCalendar:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d297
- (void)CADDatabaseGetOrCreateSubscribedCalendarsSource:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d067
- (void)CADDatabaseSetDefaultCalendarForNewEvents:(id)arg1 delegateSource:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000005cb0b
- (void)CADDatabaseGetDefaultCalendarForNewEventsInDelegateSource:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000005c386
- (id)_getDefaultCalendarIDForNewEventsInStoreWithID:(id)arg1 inDatabase:(struct CalDatabase *)arg2 defaultExists:(_Bool *)arg3;	// IMP=0x000000000005bf55
- (void)CADDatabaseGetDefaultLocalCalendarWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000005bdc8

@end

