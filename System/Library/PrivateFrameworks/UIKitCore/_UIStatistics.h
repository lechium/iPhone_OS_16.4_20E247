//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatistics : NSObject
{
    NSString *_key;	// 8 = 0x8
    double _sampleValue;	// 16 = 0x10
    NSMutableSet *_children;	// 24 = 0x18
    double _sampleRate;	// 32 = 0x20
}

+ (unsigned long long)currentTime;	// IMP=0x00600000012f4fee
+ (id)_sharedStatisticWithDomain:(id)arg1 statisticsClass:(Class)arg2 identifierReporting:(long long)arg3;	// IMP=0x00600000012f760b
+ (id)coverSheetButtonMaximumForceWithActivation:(_Bool)arg1 category:(id)arg2;	// IMP=0x00600000012f7584
+ (id)coverSheetButtonFirstActivationDurationWithCategory:(id)arg1;	// IMP=0x00600000012f750a
+ (id)coverSheetButtonInteractionDurationWithCategory:(id)arg1;	// IMP=0x00600000012f7490
+ (id)coverSheetButtonInteractionCountWithActivation:(_Bool)arg1 category:(id)arg2;	// IMP=0x00600000012f7409
+ (id)recentsInputViewNewEntryCount;	// IMP=0x00600000012f7396
+ (id)recentsInputViewItemSelectedCount;	// IMP=0x00600000012f7323
+ (id)recentsInputViewNumberOfItems;	// IMP=0x00600000012f72b0
+ (id)recentsInputViewPresentationCount;	// IMP=0x00600000012f723d
+ (id)feedbackGeneratorPlayCountWithSuffix:(id)arg1;	// IMP=0x00600000012f71cc
+ (id)feedbackGeneratorPreparationCountWithSuffix:(id)arg1;	// IMP=0x00600000012f715b
+ (id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)arg1;	// IMP=0x00600000012f70ea
+ (id)feedbackGeneratorActivationDurationWithSuffix:(id)arg1;	// IMP=0x00600000012f7079
+ (id)feedbackGeneratorActivationCountWithSuffix:(id)arg1;	// IMP=0x00600000012f7008
+ (id)feedbackEngineOutOfChannelsCountWithSuffix:(id)arg1;	// IMP=0x00600000012f6f97
+ (id)feedbackEnginePrewarmDurationWithSuffix:(id)arg1;	// IMP=0x00600000012f6f26
+ (id)feedbackEnginePrewarmCountWithSuffix:(id)arg1;	// IMP=0x00600000012f6eb5
+ (id)feedbackEngineActivationDurationWithSuffix:(id)arg1;	// IMP=0x00600000012f6e44
+ (id)feedbackEngineActivationCountWithSuffix:(id)arg1;	// IMP=0x00600000012f6dd3
+ (id)scrollBounceCount;	// IMP=0x00600000012f6d5d
+ (id)zoomGestureCount;	// IMP=0x00600000012f6ce7
+ (id)pinchGestureCount;	// IMP=0x00600000012f6c71
+ (id)alertButtonTapCount;	// IMP=0x00600000012f6c56
+ (id)controlInteractionDurationDistributionWithCategory:(id)arg1 suffix:(id)arg2;	// IMP=0x00600000012f6be3
+ (id)controlValueChangeEmittedCountWithCategory:(id)arg1 suffix:(id)arg2;	// IMP=0x00600000012f6b70
+ (id)controlTapCountWithCategory:(id)arg1 suffix:(id)arg2;	// IMP=0x00600000012f69da
+ (id)scrubberUsageTime;	// IMP=0x00600000012f696c
+ (id)scrubberUsageCount;	// IMP=0x00600000012f68fe
+ (id)maxForce;	// IMP=0x00600000012f680c
+ (id)previewInteractionPopForce;	// IMP=0x00600000012f6744
+ (id)previewInteractionPeekForce;	// IMP=0x00600000012f667c
+ (id)previewInteractionAlertPresentationCount;	// IMP=0x00600000012f65b1
+ (id)previewInteractionTapCount;	// IMP=0x00600000012f6520
+ (id)previewInteractionPopCount;	// IMP=0x00600000012f6455
+ (id)previewInteractionPeekDuration;	// IMP=0x00600000012f638a
+ (id)previewInteractionPeekCount;	// IMP=0x00600000012f62bf
- (void).cxx_destruct;	// IMP=0x00000000012f5fa1
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)description;	// IMP=0x00000000012f5ed4
- (void)_incrementValueBy:(long long)arg1;	// IMP=0x00000000012f5d49
- (void)_setValue:(long long)arg1;	// IMP=0x00000000012f5bbe
- (void)_resetValue;	// IMP=0x00000000012f5a60
- (void)_recordDistributionTime:(unsigned long long)arg1;	// IMP=0x00000000012f58d5
- (void)_recordDistributionValue:(double)arg1;	// IMP=0x00000000012f5742
- (void)_resetDistributionToValue:(double)arg1;	// IMP=0x00000000012f557e
- (void)_resetDistribution;	// IMP=0x00000000012f5420
- (void)randomizeSampleValue;	// IMP=0x00000000012f53f2
- (_Bool)_shouldSample;	// IMP=0x00000000012f539f
- (void)_removeChildStatistic:(id)arg1;	// IMP=0x00000000012f533d
- (void)_addChildStatistic:(id)arg1;	// IMP=0x00000000012f52e8
- (id)initWithDomain:(id)arg1;	// IMP=0x00000000012f52b9
- (id)_key;	// IMP=0x00000000012f52ab
- (id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2;	// IMP=0x00000000012f50a5
- (id)init;	// IMP=0x00000000012f4ff6

@end

