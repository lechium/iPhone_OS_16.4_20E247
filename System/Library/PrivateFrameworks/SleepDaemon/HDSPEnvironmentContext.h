//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDSPSleepScheduleModelChangeEvaluation, NSString;
@protocol HDSPSource;

__attribute__((visibility("hidden")))
@interface HDSPEnvironmentContext : NSObject
{
    id <HDSPSource> _source;	// 8 = 0x8
    HDSPSleepScheduleModelChangeEvaluation *_changeEvaluation;	// 16 = 0x10
}

+ (id)contextWithSource:(id)arg1;	// IMP=0x001000000006d42e
- (void).cxx_destruct;	// IMP=0x000000000006d7c1
@property(readonly, nonatomic) HDSPSleepScheduleModelChangeEvaluation *changeEvaluation; // @synthesize changeEvaluation=_changeEvaluation;
@property(readonly, nonatomic) id <HDSPSource> source; // @synthesize source=_source;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000006d6d9
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000006d689
- (id)succinctDescriptionBuilder;	// IMP=0x000000000006d670
- (id)succinctDescription;	// IMP=0x000000000006d65e
@property(readonly, copy) NSString *description;
- (id)initWithSource:(id)arg1 changeEvaluation:(id)arg2;	// IMP=0x000000000006d59d
- (id)contextByApplyingChangeEvaluation:(id)arg1;	// IMP=0x000000000006d47d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
