//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CompactMonthViewController
{
    _Bool _applicationResuming;	// 16 = 0x10
    double _previousViewWidth;	// 24 = 0x18
}

+ (double)topOfMonthNameLabelToGrayLineDistanceForWindowSize:(struct CGSize)arg1;	// IMP=0x00400000001237fe
+ (id)monthNameFont;	// IMP=0x0010000000123769
+ (id)dividedModeBackgroundColor;	// IMP=0x0010000000122dc5
+ (double)scrubbingMinimumPressDuration;	// IMP=0x0010000000122db7
- (void)contentSizeCategoryChanged;	// IMP=0x0020000000123716
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;	// IMP=0x0010000000123702
- (void)setShouldRespondToApplicationDidBecomeActiveStateChange:(_Bool)arg1;	// IMP=0x00100000001236f2
- (void)_updateDayHeaderFrames;	// IMP=0x001000000012323f
- (double)palleteViewXOffset;	// IMP=0x0010000000123236
- (void)viewDidLayoutSubviews;	// IMP=0x00100000001230f4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000122f89
- (void)updatePalette:(id)arg1;	// IMP=0x0010000000122eb4
- (void)weekNumbersPrefChanged;	// IMP=0x0010000000122dde

@end

