//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHDAxis, CHDChart, CHDChartType, CHDSeries, CMDrawableMapper, CMState, EDResources;

__attribute__((visibility("hidden")))
@interface EMChartMapper
{
    CHDChart *mChart;	// 40 = 0x28
    CMState *mState;	// 48 = 0x30
    EDResources *mResources;	// 56 = 0x38
    CHDChartType *mMainType;	// 64 = 0x40
    CHDSeries *mMainSeries;	// 72 = 0x48
    CHDAxis *mBaseAxis;	// 80 = 0x50
    CHDAxis *mPrimaryAxis;	// 88 = 0x58
    CHDAxis *mSecondaryAxis;	// 96 = 0x60
    _Bool mIsHorizontal;	// 104 = 0x68
    _Bool mIsStacked;	// 105 = 0x69
    _Bool mIsPercentStacked;	// 106 = 0x6a
    unsigned long long mPieIndex;	// 112 = 0x70
    struct {
        _Bool primaryCategoryHasDates;
        _Bool secondaryCategoryHasDates;
        _Bool primaryAxisHasDates;
        _Bool secondaryAxisHasDates;
    } mPlotInfos;	// 120 = 0x78
    _Bool mHasDateCategory;	// 124 = 0x7c
    _Bool mHasPrimaryDateAxis;	// 125 = 0x7d
    _Bool mHasSecondaryDateAxis;	// 126 = 0x7e
}

+ (struct CGColor *)newColorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;	// IMP=0x006000000018469b
- (void).cxx_destruct;	// IMP=0x00000000004697e3
- (void)addSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;	// IMP=0x0000000000185e6c
- (void)_addStandardSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;	// IMP=0x0000000000185e7e
- (void)_addGraphicProperties:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;	// IMP=0x0000000000187fb4
- (void)_addUnitAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4;	// IMP=0x00000000001883ce
- (void)_addCategoryAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4;	// IMP=0x0000000000185071
- (void)addLegendToDescription:(id)arg1 chartSize:(struct CGSize)arg2 withState:(id)arg3;	// IMP=0x0000000000184dd2
- (void)addBackgroundToDescription:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000184721
- (void)addTitleToDescription:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000184271
- (id)copyPdfWithState:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x0000000000183824
- (id)initWithChart:(id)arg1 parent:(id)arg2;	// IMP=0x00000000001837ae
- (id)dateFromXlDateTimeNumber:(double)arg1;	// IMP=0x000000000046966a

// Remaining properties
@property(readonly) __weak CMDrawableMapper *parent; // @dynamic parent;

@end

