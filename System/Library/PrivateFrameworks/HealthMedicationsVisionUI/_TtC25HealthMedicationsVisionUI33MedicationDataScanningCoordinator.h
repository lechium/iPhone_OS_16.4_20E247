//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC25HealthMedicationsVisionUI33MedicationDataScanningCoordinator : _TtCs12_SwiftObject
{
    MISSING_TYPE *scanner;	// 16 = 0x10
    MISSING_TYPE *healthStore;	// 24 = 0x18
    MISSING_TYPE *dataProvider;	// 32 = 0x20
    MISSING_TYPE *searchEngine;	// 40 = 0x28
    MISSING_TYPE *resolutionEngine;	// 48 = 0x30
    MISSING_TYPE *ndcParser;	// 56 = 0x38
    MISSING_TYPE *lock;	// 64 = 0x40
    MISSING_TYPE *pulseTimer;	// 72 = 0x48
    MISSING_TYPE *cameraStartTime;	// 80 = 0x50
    MISSING_TYPE *targetSessionEndTime;	// 88 = 0x58
    MISSING_TYPE *sessionStartTime;	// 96 = 0x60
    MISSING_TYPE *lastUpdateTime;	// 112 = 0x70
    MISSING_TYPE *processingTranscript;	// 121 = 0x79
    MISSING_TYPE *transcriptsQueue;	// 128 = 0x80
    MISSING_TYPE *allTranscripts;	// 136 = 0x88
    MISSING_TYPE *seenTranscripts;	// 144 = 0x90
    MISSING_TYPE *seenMRCs;	// 152 = 0x98
    MISSING_TYPE *unsupportedMRCs;	// 160 = 0xa0
    MISSING_TYPE *mrcSubject;	// 168 = 0xa8
    MISSING_TYPE *mrcPendingSince;	// 176 = 0xb0
    MISSING_TYPE *mrcResults;	// 184 = 0xb8
    MISSING_TYPE *usedNgrams;	// 192 = 0xc0
    MISSING_TYPE *aggregatedResolutionResults;	// 200 = 0xc8
    MISSING_TYPE *resolutionCounter;	// 208 = 0xd0
    MISSING_TYPE *dataSaturated;	// 216 = 0xd8
    MISSING_TYPE *screenshots;	// 224 = 0xe0
    MISSING_TYPE *_state;	// 0 = 0x0
    MISSING_TYPE *sessionId;	// 0 = 0x0
}

- (void)pulseTimerFiredWithTimer:(id)arg1;	// IMP=0x00000000000369a0

@end

