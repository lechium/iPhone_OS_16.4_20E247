//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CHBAutoStyling
{
}

- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned long long)arg3 clientGraphicPropertyDefaults:(CDUnknownBlockType)arg4;	// IMP=0x00000000003884b3
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned long long)arg2;	// IMP=0x0000000000388409
- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned long long)arg2;	// IMP=0x00000000002199ac
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(_Bool)arg3;	// IMP=0x00000000003882f6
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2;	// IMP=0x00000000003882e0
- (id)autoTextFill;	// IMP=0x000000000038827c
- (void)resolveLegendGraphicProperties:(id)arg1;	// IMP=0x00000000001e00ff
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;	// IMP=0x000000000017672d
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;	// IMP=0x0000000000176815
- (void)resolveAxisGraphicProperties:(id)arg1;	// IMP=0x0000000000176465
- (void)resolvePlotAreaGraphicProperties:(id)arg1;	// IMP=0x0000000000173bd3
- (void)resolveFloorGraphicProperties:(id)arg1;	// IMP=0x00000000001774a2
- (void)resolveWallGraphicProperties:(id)arg1;	// IMP=0x0000000000176a3f
- (void)resolveChartAreaGraphicProperties:(id)arg1;	// IMP=0x000000000016d1ea
- (id)autoStrokeForSeriesIndex:(unsigned long long)arg1;	// IMP=0x00000000001898f4
- (id)autoSeriesFill:(unsigned long long)arg1;	// IMP=0x000000000017bf55
- (id)autoSeriesBorderStroke;	// IMP=0x000000000017bf9a
- (id)autoFill;	// IMP=0x000000000016d2c4
- (id)autoStroke;	// IMP=0x000000000016d3ad
- (id)strokeWithColorIndex:(int)arg1;	// IMP=0x000000000016d3c4
- (id)fillWithColorIndex:(unsigned long long)arg1;	// IMP=0x000000000016d2db
- (void)resolvedGraphicProperties:(id)arg1 autoFill:(id)arg2 autoStroke:(id)arg3 autoShadow:(_Bool)arg4 nullFill:(id)arg5 nullStroke:(id)arg6 nullShadow:(_Bool)arg7;	// IMP=0x000000000016d460

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

