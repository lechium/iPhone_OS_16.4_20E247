//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CSVoiceTriggerStatAggregator : NSObject
{
    unsigned long long _numFalseWakeUp;	// 8 = 0x8
    unsigned long long _lastAggTimeFalseWakeUp;	// 16 = 0x10
    NSMutableDictionary *_falseWakePhraseDictionary;	// 24 = 0x18
}

+ (id)sharedAggregator;	// IMP=0x00200000000051ad
- (void).cxx_destruct;	// IMP=0x0020000000005ef5
@property(retain, nonatomic) NSMutableDictionary *falseWakePhraseDictionary; // @synthesize falseWakePhraseDictionary=_falseWakePhraseDictionary;
@property(nonatomic) unsigned long long lastAggTimeFalseWakeUp; // @synthesize lastAggTimeFalseWakeUp=_lastAggTimeFalseWakeUp;
@property(nonatomic) unsigned long long numFalseWakeUp; // @synthesize numFalseWakeUp=_numFalseWakeUp;
- (void)reportDigitalZerosWithAudioZeroRun:(float)arg1;	// IMP=0x0010000000005db6
- (void)logTriggerLengthSampleCountStatistics:(unsigned long long)arg1 withFirstPassDeterministicTriggerLengthSampleCount:(unsigned long long)arg2;	// IMP=0x0010000000005b7d
- (void)logFalseWakeUp:(_Bool)arg1 withPhrase:(id)arg2;	// IMP=0x00100000000057d0
- (void)logSecondPassResult:(int)arg1 eventInfo:(id)arg2 triggerAPWakeUp:(_Bool)arg3;	// IMP=0x001000000000539b
- (void)logAOPFirstPassTriggerWakeupLatency:(float)arg1;	// IMP=0x001000000000525f
- (id)init;	// IMP=0x0010000000005202

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
