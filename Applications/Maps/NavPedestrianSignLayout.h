//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NavPedestrianSignLayout
{
}

+ (id)sharedPedestrianSignLayout;	// IMP=0x0040000000ac6ddd
- (_Bool)forceHideShieldViewForSign:(id)arg1;	// IMP=0x0040000000ac717f
- (double)shieldViewTopMarginForSign:(id)arg1;	// IMP=0x0010000000ac7148
- (double)maneuverViewTopMarginForSign:(id)arg1;	// IMP=0x0010000000ac7111
- (struct CGSize)maneuverViewSizeForSign:(id)arg1;	// IMP=0x0010000000ac70d2
- (double)navSignView:(id)arg1 alternateFontLineSpacingForMajorText:(_Bool)arg2;	// IMP=0x0010000000ac709b
- (id)navSignView:(id)arg1 alternateFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000ac6fda
- (id)navSignView:(id)arg1 preferredFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000ac6f19
- (double)labelBaselineToInlineShieldTopForSign:(id)arg1;	// IMP=0x0010000000ac6ee2
- (double)baselineMarginBetweenLabelsForSign:(id)arg1;	// IMP=0x0010000000ac6eab
- (double)textBottomMarginForSign:(id)arg1;	// IMP=0x0010000000ac6e74
- (double)textTopMarginForSign:(id)arg1;	// IMP=0x0010000000ac6e3d
- (long long)navSignView:(id)arg1 maxNumberOfLinesWithLongestAlternativeForMajorText:(_Bool)arg2;	// IMP=0x0010000000ac6e32

@end

