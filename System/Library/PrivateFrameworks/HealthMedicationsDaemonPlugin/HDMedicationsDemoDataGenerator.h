//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDMedicationsDemoDataGeneratorState, HDProfile, NSCalendar, NSString;

__attribute__((visibility("hidden")))
@interface HDMedicationsDemoDataGenerator : NSObject
{
    NSString *_demoDataFileName;	// 8 = 0x8
    HDMedicationsDemoDataGeneratorState *_state;	// 16 = 0x10
    NSCalendar *_currentCalendar;	// 24 = 0x18
    _Bool isGeneratingDataOnWatch;	// 32 = 0x20
    HDProfile *_profile;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000054ab
- (void).cxx_destruct;	// IMP=0x0000000000008a2c
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (id)dayBeforeDate:(id)arg1 withHour:(long long)arg2;	// IMP=0x000000000000897a
- (long long)dayDifferenceFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000000088bc
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;	// IMP=0x0000000000008818
- (void)generateFirstRunObjectsForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;	// IMP=0x00000000000086a2
- (void)setDemoDataGenerationContextWithProfile:(id)arg1 generatorState:(id)arg2;	// IMP=0x00000000000085e2
- (void)generateDemoDataForCurrentDate:(id)arg1;	// IMP=0x000000000000831c
- (id)scheduledDoseEventsWithCurrentDate:(id)arg1;	// IMP=0x00000000000080a1
- (id)doseEventsForScheduleItems:(id)arg1 withStatus:(long long)arg2;	// IMP=0x0000000000007bfa
- (id)_scheduleItemsForDate:(id)arg1;	// IMP=0x0000000000007922
- (_Bool)setupOntologyContentIfRequired;	// IMP=0x000000000000764a
- (void)generateIntitialDemoDataIfRequired;	// IMP=0x0000000000007197
- (_Bool)loadDemoDataObjectsFrom:(id)arg1 medications:(id)arg2 schedules:(id)arg3 logHistory:(id)arg4;	// IMP=0x0000000000006ada
- (_Bool)saveMedications:(id)arg1 schedules:(id)arg2 logHistory:(id)arg3;	// IMP=0x0000000000006758
- (id)medicationWithDetail:(id)arg1;	// IMP=0x0000000000006090
- (id)dailyScheduleForMedicationIdentifier:(id)arg1 isAMSchedule:(_Bool)arg2;	// IMP=0x0000000000005e8d
- (id)doseEventsForMedication:(id)arg1 startDateTime:(id)arg2 historyDayCount:(unsigned long long)arg3 logOrigin:(long long)arg4;	// IMP=0x0000000000005e59
- (id)scheduledDoseEventsForMedication:(id)arg1 startDateTime:(id)arg2 historyDayCount:(unsigned long long)arg3;	// IMP=0x0000000000005cb1
- (id)asNeededDoseEventsForMedication:(id)arg1 startDateTime:(id)arg2 historyDayCount:(unsigned long long)arg3;	// IMP=0x0000000000005b68
- (_Bool)saveMedicationDoseEvents:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000059fe
- (id)doseEventWithLogOrigin:(long long)arg1 scheduleItemIdentifier:(id)arg2 medicationIdentifier:(id)arg3 scheduledDoseQuantity:(id)arg4 doseQuantity:(id)arg5 scheduledDate:(id)arg6 startDate:(id)arg7 status:(long long)arg8;	// IMP=0x0000000000005803
- (id)_makeStableIdentifierFromScheduledDateTime:(id)arg1;	// IMP=0x00000000000057c5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000057b1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000056fb
- (void)restoreState;	// IMP=0x000000000000558d
- (_Bool)_saveStateWithError:(id *)arg1;	// IMP=0x0000000000005512
- (id)_keyValueDomain;	// IMP=0x00000000000054b3
- (void)overrideMedicationShardCheck;	// IMP=0x000000000000544e
- (void)updateDemoDataFileName;	// IMP=0x0000000000005311
- (id)init;	// IMP=0x0000000000005251

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

