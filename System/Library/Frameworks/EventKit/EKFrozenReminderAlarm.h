//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKFrozenReminderStructuredLocation, NSArray, NSString, REMAlarm;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderAlarm
{
    REMAlarm *_timeAlarm;	// 32 = 0x20
    REMAlarm *_locationAlarm;	// 40 = 0x28
}

+ (id)semanticIdentifierFromDateComponents:(id)arg1;	// IMP=0x006000000012e5a4
+ (id)semanticIdentifierFromREMAlarm:(id)arg1;	// IMP=0x006000000012e1b7
+ (id)uniqueIdentifierForREMObject:(id)arg1;	// IMP=0x006000000012e0fb
+ (id)triggersFromAbsoluteDate:(id)arg1 relativeOffset:(double)arg2 timeValuesRelevant:(_Bool)arg3 structuredLocation:(id)arg4 proximity:(long long)arg5;	// IMP=0x006000000012d8f4
+ (long long)ekAlarmProximityToEKAlarmProximity:(long long)arg1;	// IMP=0x006000000012d620
+ (long long)remAlarmProximityToEKAlarmProximity:(long long)arg1;	// IMP=0x006000000012d617
+ (Class)meltedClass;	// IMP=0x006000000012cfd1
- (void).cxx_destruct;	// IMP=0x000000000012ee82
- (_Bool)isDefaultAlarm;	// IMP=0x000000000012ee7a
- (id)originalAlarm;	// IMP=0x000000000012ea5e
- (void)setCalendarItemOwner:(id)arg1;	// IMP=0x000000000012ea58
- (id)calendarItemOwner;	// IMP=0x000000000012ea50
- (void)setCalendarOwner:(id)arg1;	// IMP=0x000000000012ea4a
- (id)calendarOwner;	// IMP=0x000000000012ea42
- (id)snoozedAlarmsSet;	// IMP=0x000000000012ea3a
- (void)setUrlWrapper:(id)arg1;	// IMP=0x000000000012ea34
- (id)urlWrapper;	// IMP=0x000000000012ea2c
- (void)setEmailAddress:(id)arg1;	// IMP=0x000000000012ea26
- (id)emailAddress;	// IMP=0x000000000012ea1e
- (void)setType:(long long)arg1;	// IMP=0x000000000012ea18
- (long long)type;	// IMP=0x000000000012ea10
- (id)acknowledgedDate;	// IMP=0x000000000012e95a
- (id)_effectiveAlarm;	// IMP=0x000000000012e927
- (id)UUID;	// IMP=0x000000000012e915
- (long long)proximity;	// IMP=0x000000000012e7ff
- (id)updatedAlarmWithLocation:(id)arg1;	// IMP=0x000000000012e110
- (_Bool)_applyChangesToSaveRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012de7c
- (_Bool)_applyChanges:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012dac7
@property(readonly) NSArray *triggers;
- (id)_remStructuredLocation;	// IMP=0x000000000012d629
@property(readonly) NSString *externalID;
- (id)modifiedStructuredLocation;	// IMP=0x000000000012d445
@property(readonly) EKFrozenReminderStructuredLocation *structuredLocation;
- (id)absoluteDate;	// IMP=0x000000000012d121
- (double)relativeOffset;	// IMP=0x000000000012cfe2
- (id)uniqueIdentifier;	// IMP=0x000000000012cfbf
- (id)remObjectID;	// IMP=0x000000000012cf76
@property(readonly) NSArray *alarms;
- (id)_locationAlarm;	// IMP=0x000000000012ceaf
- (id)_timeAlarm;	// IMP=0x000000000012ce9a
- (id)_setTimeOrLocationAlarm:(id)arg1;	// IMP=0x000000000012cb41
- (void)_setTimeAndLocationAlarms:(id)arg1;	// IMP=0x000000000012c905
- (id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2;	// IMP=0x000000000012c83e
- (id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;	// IMP=0x000000000012c4b1
- (id)initWithAlarms:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;	// IMP=0x000000000012c3df
- (id)initWithAlarms:(id)arg1 inStore:(id)arg2;	// IMP=0x000000000012c3ca
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;	// IMP=0x000000000012c343

@end

