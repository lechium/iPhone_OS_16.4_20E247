//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer;

@interface MapsAppTestGuidance
{
    NSTimer *_guidanceTimer;	// 8 = 0x8
    long long _swipeCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000006e88c0
@property(readonly, nonatomic) long long swipeCount; // @synthesize swipeCount=_swipeCount;
- (_Bool)_testIsStepping;	// IMP=0x00000000006e8818
- (void)_runPlayWithTraySubtest;	// IMP=0x00100000006e866b
- (unsigned long long)collapsedTrayLayout;	// IMP=0x00100000006e8663
- (unsigned long long)expandedTrayLayout;	// IMP=0x00100000006e8658
- (void)_endGuidanceNavOrSteppingMode;	// IMP=0x00100000006e8586
- (void)_doAfterSubTestForShowingSign;	// IMP=0x00100000006e84fb
- (void)_steppingSignDidChange;	// IMP=0x00100000006e8222
- (void)_gotoNextStepAfterDelay:(double)arg1;	// IMP=0x00100000006e7fbe
- (void)willUpdateNavigationSign;	// IMP=0x00100000006e7eb4
- (void)_guidanceOrSteppingDidShowFirstSign;	// IMP=0x00100000006e7c3f
- (id)_subTestNameForGoingToGuidanceStep:(long long)arg1 forSwipeCount:(long long)arg2;	// IMP=0x00100000006e7bf2
- (void)_enterGuidanceNavOrSteppingMode;	// IMP=0x00100000006e7b0d
- (void)doAfterSubTestForDisplayingRoutes;	// IMP=0x00100000006e7aea
- (_Bool)runTest;	// IMP=0x00100000006e78d5
- (void)cleanup:(_Bool)arg1;	// IMP=0x00100000006e7883
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;	// IMP=0x00100000006e77fc

@end
