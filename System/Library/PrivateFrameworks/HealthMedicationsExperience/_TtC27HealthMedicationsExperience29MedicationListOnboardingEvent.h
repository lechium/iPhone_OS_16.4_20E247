//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC27HealthMedicationsExperience29MedicationListOnboardingEvent : _TtCs12_SwiftObject
{
    MISSING_TYPE *provenance;	// 16 = 0x10
    MISSING_TYPE *step;	// 24 = 0x18
    MISSING_TYPE *action;	// 32 = 0x20
    MISSING_TYPE *firstTimeMedFlow;	// 41 = 0x29
    MISSING_TYPE *medsDetailsEntryPoint;	// 48 = 0x30
    MISSING_TYPE *hasSuggestionsFromHealthRecords;	// 57 = 0x39
    MISSING_TYPE *itemRank;	// 64 = 0x40
    MISSING_TYPE *itemRankInOCR;	// 80 = 0x50
    MISSING_TYPE *timeSinceUserLastScannedAMed;	// 96 = 0x60
    MISSING_TYPE *didLastScanFallBackToOCR;	// 105 = 0x69
    MISSING_TYPE *algorithmType;	// 112 = 0x70
}

- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003f2e0
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003e4e0
@property(nonatomic, readonly) NSString *eventName;
@property(nonatomic, readonly) _Bool isEventSubmissionIHAGated;

@end
