//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HDSPSleepScheduleModelChangeEvaluation : NSObject
{
    _Bool _isSignificantChange;	// 8 = 0x8
    _Bool _isSignificantEventRecordUpdate;	// 9 = 0x9
    NSSet *_topLevelChangeKeys;	// 16 = 0x10
}

+ (id)significantEventRecordUpdateWithTopLevelChangeKeys:(id)arg1;	// IMP=0x0010000000068ef3
+ (id)significantChangeWithTopLevelChangeKeys:(id)arg1;	// IMP=0x0010000000068e9f
+ (id)emptyEvaluation;	// IMP=0x0010000000068e31
+ (id)combinedEvaluation:(id)arg1;	// IMP=0x0010000000068bde
- (void).cxx_destruct;	// IMP=0x00000000000690b6
@property(readonly, nonatomic) NSSet *topLevelChangeKeys; // @synthesize topLevelChangeKeys=_topLevelChangeKeys;
@property(readonly, nonatomic) _Bool isSignificantEventRecordUpdate; // @synthesize isSignificantEventRecordUpdate=_isSignificantEventRecordUpdate;
@property(readonly, nonatomic) _Bool isSignificantChange; // @synthesize isSignificantChange=_isSignificantChange;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000068fde
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000068f8e
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000068f75
- (id)succinctDescription;	// IMP=0x0000000000068f63
@property(readonly, copy) NSString *description;
- (id)initWithIsSignificantChange:(_Bool)arg1 isSignificantEventRecordUpdate:(_Bool)arg2 topLevelChangeKeys:(id)arg3;	// IMP=0x0000000000068b4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

