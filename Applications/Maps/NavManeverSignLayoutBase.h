//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NavManeverSignLayoutBase
{
}

- (double)shieldViewTopMarginForSign:(id)arg1;	// IMP=0x0020000000ac6d6c
- (long long)maneuverViewPositionForSign:(id)arg1;	// IMP=0x0010000000ac6d1e
- (double)maneuverViewTopMarginForSign:(id)arg1;	// IMP=0x0010000000ac6d10
- (struct CGSize)maneuverViewSizeForSign:(id)arg1;	// IMP=0x0010000000ac6cfa
- (CDStruct_847970ce)maneuverViewArrowMetricsForSign:(id)arg1;	// IMP=0x0010000000ac6cb5
- (_Bool)forceHideShieldViewForSign:(id)arg1;	// IMP=0x0010000000ac6cad
- (_Bool)forceHideManeuverViewForSign:(id)arg1;	// IMP=0x0010000000ac6ca5
- (id)navSignView:(id)arg1 alternateFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000ac6ba2
- (id)navSignView:(id)arg1 preferredFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000ac6ab2
- (double)baselineMarginBetweenLabelsForSign:(id)arg1;	// IMP=0x0010000000ac6a0a
- (double)textBottomMarginForSign:(id)arg1;	// IMP=0x0010000000ac6936
- (double)textTopMarginForSign:(id)arg1;	// IMP=0x0010000000ac6862
- (_Bool)navSignView:(id)arg1 shouldAlignToTrailingForMajorText:(_Bool)arg2;	// IMP=0x0010000000ac681c
- (_Bool)navSignView:(id)arg1 shouldAlignToLeadingForMajorText:(_Bool)arg2;	// IMP=0x0010000000ac6807
- (double)navSignView:(id)arg1 textTrailingMarginForMajorText:(_Bool)arg2;	// IMP=0x0010000000ac6782
- (_Bool)_shouldShowManeuverViewForSign:(id)arg1;	// IMP=0x0010000000ac6715
- (_Bool)_shouldShowExitShieldForSign:(id)arg1;	// IMP=0x0010000000ac6694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
