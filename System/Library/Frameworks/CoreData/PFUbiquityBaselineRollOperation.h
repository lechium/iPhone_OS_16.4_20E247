//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, PFUbiquityBaselineHeuristics;
@protocol PFUbiquityBaselineRollOperationDelegate;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineRollOperation
{
    PFUbiquityBaselineHeuristics *_heuristics;	// 80 = 0x50
}

- (void)main;	// IMP=0x00000000002e0699
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002df8cd
- (id)retainedDelegate;	// IMP=0x00000000002df89e
@property NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;
- (void)dealloc;	// IMP=0x00000000002df7f2
- (id)init;	// IMP=0x00000000002df7af

@end

