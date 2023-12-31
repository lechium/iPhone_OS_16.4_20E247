//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EBReaderSheetState, OADColorScheme;
@protocol CHAutoStyling;

__attribute__((visibility("hidden")))
@interface CHBReaderState
{
    EBReaderSheetState *mEBReaderSheetState;	// 40 = 0x28
    void *mXlReader;	// 48 = 0x30
    id <CHAutoStyling> mAutoStyling;	// 56 = 0x38
    int mAxisGroup;	// 64 = 0x40
    void *mXlCurrentPlot;	// 72 = 0x48
    int mXlCurrentPlotIndex;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000003891ff
@property(readonly, nonatomic) OADColorScheme *colorScheme;
- (const struct XlChartSeriesFormat *)defaultFormatForXlSeries:(const void *)arg1;	// IMP=0x000000000017b81a
- (const struct XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;	// IMP=0x000000000017b7dc
- (void)setXlCurrentPlot:(void *)arg1;	// IMP=0x0000000000178ff6
- (void *)xlCurrentPlot;	// IMP=0x0000000000179590
- (void)setXlCurrentPlotIndex:(int)arg1;	// IMP=0x0000000000178fe6
- (int)xlCurrentPlotIndex;	// IMP=0x0000000000179ba5
- (int)xlPlotCount;	// IMP=0x0000000000177fec
- (void)readAndCacheXlChartDataSeries;	// IMP=0x000000000016deaf
- (void)setAxisGroup:(int)arg1;	// IMP=0x0000000000174282
- (int)axisGroup;	// IMP=0x0000000000174df1
- (id)autoStyling;	// IMP=0x00000000003891ea
- (void)setChart:(id)arg1;	// IMP=0x0000000000389154
- (void *)xlReader;	// IMP=0x000000000016be17
- (id)resources;	// IMP=0x0000000000170de6
- (id)workbook;	// IMP=0x00000000001778fe
- (id)ebReaderSheetState;	// IMP=0x000000000016be28
- (id)initWithEBReaderSheetState:(id)arg1;	// IMP=0x000000000016b704

@end

